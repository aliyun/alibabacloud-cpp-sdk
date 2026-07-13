// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DeleteResourceCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
    };
    DeleteResourceCategoryRequest() = default ;
    DeleteResourceCategoryRequest(const DeleteResourceCategoryRequest &) = default ;
    DeleteResourceCategoryRequest(DeleteResourceCategoryRequest &&) = default ;
    DeleteResourceCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceCategoryRequest() = default ;
    DeleteResourceCategoryRequest& operator=(const DeleteResourceCategoryRequest &) = default ;
    DeleteResourceCategoryRequest& operator=(DeleteResourceCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCategoryId_ == nullptr; };
    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DeleteResourceCategoryRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


  protected:
    // Resource category ID
    // 
    // This parameter is required.
    shared_ptr<string> resourceCategoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
