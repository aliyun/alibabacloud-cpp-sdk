// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDATASOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDATASOURCESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class SetDataSourceShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDataSourceShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectPermissions, projectPermissions_);
      DARABONBA_PTR_TO_JSON(UserPermissions, userPermissions_);
    };
    friend void from_json(const Darabonba::Json& j, SetDataSourceShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectPermissions, projectPermissions_);
      DARABONBA_PTR_FROM_JSON(UserPermissions, userPermissions_);
    };
    SetDataSourceShareRequest() = default ;
    SetDataSourceShareRequest(const SetDataSourceShareRequest &) = default ;
    SetDataSourceShareRequest(SetDataSourceShareRequest &&) = default ;
    SetDataSourceShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDataSourceShareRequest() = default ;
    SetDataSourceShareRequest& operator=(const SetDataSourceShareRequest &) = default ;
    SetDataSourceShareRequest& operator=(SetDataSourceShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceName_ != nullptr
        && this->envType_ != nullptr && this->projectId_ != nullptr && this->projectPermissions_ != nullptr && this->userPermissions_ != nullptr; };
    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline SetDataSourceShareRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline SetDataSourceShareRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SetDataSourceShareRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectPermissions Field Functions 
    bool hasProjectPermissions() const { return this->projectPermissions_ != nullptr;};
    void deleteProjectPermissions() { this->projectPermissions_ = nullptr;};
    inline string projectPermissions() const { DARABONBA_PTR_GET_DEFAULT(projectPermissions_, "") };
    inline SetDataSourceShareRequest& setProjectPermissions(string projectPermissions) { DARABONBA_PTR_SET_VALUE(projectPermissions_, projectPermissions) };


    // userPermissions Field Functions 
    bool hasUserPermissions() const { return this->userPermissions_ != nullptr;};
    void deleteUserPermissions() { this->userPermissions_ = nullptr;};
    inline string userPermissions() const { DARABONBA_PTR_GET_DEFAULT(userPermissions_, "") };
    inline SetDataSourceShareRequest& setUserPermissions(string userPermissions) { DARABONBA_PTR_SET_VALUE(userPermissions_, userPermissions) };


  protected:
    // The name of the data source that you want to share.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasourceName_ = nullptr;
    // The environment in which the data source is used. Valid values:
    // 
    // *   0: development environment
    // *   1: production environment
    std::shared_ptr<string> envType_ = nullptr;
    // The ID of the DataWorks workspace to which the data source belongs. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The DataWorks workspace to which you want to share the data source. If you configure this parameter, all members of the specified DataWorks workspace can view and use the data source. The value of this parameter is a JSON array. Example: [{"projectId":1000,"permission":"WRITE","sharedName":"PX_DATAHUB1.shared_name"}], Parameter description:
    // 
    // *   projectId: the ID of the DataWorks workspace to which you want to share the data source.
    // *   permission: the mode in which the data source is shared. Valid values: READ and WRITE. The value READ indicates that all members of the specified workspace can read data from the data source, but cannot modify the data. The value WRITE indicates that all members of the specified workspace can modify the data in the data source.
    // *   sharedName: the name of the data source that you want to share.
    std::shared_ptr<string> projectPermissions_ = nullptr;
    // The user to whom you want to share the data source. If you configure this parameter, the specified user can view or use the data source. The value of this parameter is a JSON array. Example: [{"projectId":10000,"users":[{"userId":"276184575345452131","permission":"WRITE"}],"sharedName":"PX_DATAHUB1.shared_name"}], Parameter description:
    // 
    // *   projectId: the ID of the DataWorks workspace. If you configure the UserPermissions parameter, the specified user can view or use the data source only in the specified DataWorks workspace.
    // *   userId: the ID of the user to whom you want to share the data source.
    // *   permission: the mode in which the data source is shared. Valid values: READ and WRITE. The value READ indicates that the specified user can read data from the data source, but cannot modify the data. The value WRITE indicates that the specified user can modify the data in the data source.
    // *   sharedName: the name of the data source that you want to share.
    // 
    // If the ProjectPermissions and UserPermissions parameters are both left empty, the specified data source is not shared to any DataWorks workspace or user. If neither of the parameters is left empty, both parameters take effect.
    std::shared_ptr<string> userPermissions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
