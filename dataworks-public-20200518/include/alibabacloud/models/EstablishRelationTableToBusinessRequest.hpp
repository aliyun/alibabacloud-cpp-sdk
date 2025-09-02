// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTABLISHRELATIONTABLETOBUSINESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ESTABLISHRELATIONTABLETOBUSINESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class EstablishRelationTableToBusinessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstablishRelationTableToBusinessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, EstablishRelationTableToBusinessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    EstablishRelationTableToBusinessRequest() = default ;
    EstablishRelationTableToBusinessRequest(const EstablishRelationTableToBusinessRequest &) = default ;
    EstablishRelationTableToBusinessRequest(EstablishRelationTableToBusinessRequest &&) = default ;
    EstablishRelationTableToBusinessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstablishRelationTableToBusinessRequest() = default ;
    EstablishRelationTableToBusinessRequest& operator=(const EstablishRelationTableToBusinessRequest &) = default ;
    EstablishRelationTableToBusinessRequest& operator=(EstablishRelationTableToBusinessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessId_ != nullptr
        && this->folderId_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->tableGuid_ != nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline EstablishRelationTableToBusinessRequest& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline EstablishRelationTableToBusinessRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline EstablishRelationTableToBusinessRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline EstablishRelationTableToBusinessRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline EstablishRelationTableToBusinessRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The ID of the workflow. You can call the [ListBusiness](https://help.aliyun.com/document_detail/173945.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> businessId_ = nullptr;
    // The ID of the folder. You can call the [GetFolder](https://help.aliyun.com/document_detail/173952.html) or [ListFolders](https://help.aliyun.com/document_detail/173955.html) operation to query the ID.
    std::shared_ptr<string> folderId_ = nullptr;
    // The ID of the DataWorks workspace. You can click the Workspace Manage icon in the upper-right corner of the DataStudio page to go to the Workspace Management page and view the workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The unique identifier of the DataWorks workspace. You can click the identifier in the upper-left corner of the DataStudio page to switch to another workspace.
    // 
    // You must specify either this parameter or ProjectId to determine the DataWorks workspace to which the operation is applied.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    // The universally unique identifier (UUID) of the table. You can call the [SearchMetaTables](https://help.aliyun.com/document_detail/173919.html) operation to query the UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableGuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
