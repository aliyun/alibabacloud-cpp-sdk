// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBUSINESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBUSINESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateBusinessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBusinessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBusinessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    UpdateBusinessRequest() = default ;
    UpdateBusinessRequest(const UpdateBusinessRequest &) = default ;
    UpdateBusinessRequest(UpdateBusinessRequest &&) = default ;
    UpdateBusinessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBusinessRequest() = default ;
    UpdateBusinessRequest& operator=(const UpdateBusinessRequest &) = default ;
    UpdateBusinessRequest& operator=(UpdateBusinessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessId_ != nullptr
        && this->businessName_ != nullptr && this->description_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline UpdateBusinessRequest& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // businessName Field Functions 
    bool hasBusinessName() const { return this->businessName_ != nullptr;};
    void deleteBusinessName() { this->businessName_ = nullptr;};
    inline string businessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
    inline UpdateBusinessRequest& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateBusinessRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateBusinessRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBusinessRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline UpdateBusinessRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // The workflow ID.
    // 
    // You can call the [ListBusiness](https://help.aliyun.com/document_detail/173945.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The name of the workflow.
    // 
    // You can call the [ListBusiness](https://help.aliyun.com/document_detail/173945.html) operation to query the name.
    std::shared_ptr<string> businessName_ = nullptr;
    // The description of the workflow.
    std::shared_ptr<string> description_ = nullptr;
    // The owner of the workflow.
    // 
    // You can call the [ListBusiness](https://help.aliyun.com/document_detail/173945.html) operation to query the owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/workspace/list) and go to the Workspace page to obtain the workspace ID. You must configure either this parameter or the `ProjectIdentifier` parameter to determine the DataWorks workspace to which the operation is applied.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the DataWorks workspace. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/workspace/list) and go to the Workspace page to obtain the name. You must configure either this parameter or the `ProjectId` parameter to determine the DataWorks workspace to which the operation is applied.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
