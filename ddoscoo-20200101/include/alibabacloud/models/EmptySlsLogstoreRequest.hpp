// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EMPTYSLSLOGSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EMPTYSLSLOGSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class EmptySlsLogstoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EmptySlsLogstoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, EmptySlsLogstoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    EmptySlsLogstoreRequest() = default ;
    EmptySlsLogstoreRequest(const EmptySlsLogstoreRequest &) = default ;
    EmptySlsLogstoreRequest(EmptySlsLogstoreRequest &&) = default ;
    EmptySlsLogstoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EmptySlsLogstoreRequest() = default ;
    EmptySlsLogstoreRequest& operator=(const EmptySlsLogstoreRequest &) = default ;
    EmptySlsLogstoreRequest& operator=(EmptySlsLogstoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupId_ == nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline EmptySlsLogstoreRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
