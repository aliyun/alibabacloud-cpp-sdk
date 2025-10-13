// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPTOTALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPTOTALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupTotalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupTotalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupTotalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
    };
    GetResourceGroupTotalRequest() = default ;
    GetResourceGroupTotalRequest(const GetResourceGroupTotalRequest &) = default ;
    GetResourceGroupTotalRequest(GetResourceGroupTotalRequest &&) = default ;
    GetResourceGroupTotalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupTotalRequest() = default ;
    GetResourceGroupTotalRequest& operator=(const GetResourceGroupTotalRequest &) = default ;
    GetResourceGroupTotalRequest& operator=(GetResourceGroupTotalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupID_ == nullptr; };
    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string resourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline GetResourceGroupTotalRequest& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


  protected:
    std::shared_ptr<string> resourceGroupID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
