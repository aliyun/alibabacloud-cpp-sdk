// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DsId, dsId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TargetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_TO_JSON(UserDefineCubeName, userDefineCubeName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DsId, dsId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TargetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_FROM_JSON(UserDefineCubeName, userDefineCubeName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDatasetRequest() = default ;
    CreateDatasetRequest(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest(CreateDatasetRequest &&) = default ;
    CreateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequest() = default ;
    CreateDatasetRequest& operator=(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest& operator=(CreateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dsId_ != nullptr
        && this->tableName_ != nullptr && this->targetDirectoryId_ != nullptr && this->userDefineCubeName_ != nullptr && this->userId_ != nullptr && this->workspaceId_ != nullptr; };
    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string dsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline CreateDatasetRequest& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateDatasetRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetDirectoryId Field Functions 
    bool hasTargetDirectoryId() const { return this->targetDirectoryId_ != nullptr;};
    void deleteTargetDirectoryId() { this->targetDirectoryId_ = nullptr;};
    inline string targetDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(targetDirectoryId_, "") };
    inline CreateDatasetRequest& setTargetDirectoryId(string targetDirectoryId) { DARABONBA_PTR_SET_VALUE(targetDirectoryId_, targetDirectoryId) };


    // userDefineCubeName Field Functions 
    bool hasUserDefineCubeName() const { return this->userDefineCubeName_ != nullptr;};
    void deleteUserDefineCubeName() { this->userDefineCubeName_ = nullptr;};
    inline string userDefineCubeName() const { DARABONBA_PTR_GET_DEFAULT(userDefineCubeName_, "") };
    inline CreateDatasetRequest& setUserDefineCubeName(string userDefineCubeName) { DARABONBA_PTR_SET_VALUE(userDefineCubeName_, userDefineCubeName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateDatasetRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dsId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> targetDirectoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userDefineCubeName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
