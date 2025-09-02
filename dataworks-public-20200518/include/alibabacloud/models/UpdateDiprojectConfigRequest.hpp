// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIPROJECTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIPROJECTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDIProjectConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIProjectConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(ProjectConfig, projectConfig_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIProjectConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(ProjectConfig, projectConfig_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    UpdateDIProjectConfigRequest() = default ;
    UpdateDIProjectConfigRequest(const UpdateDIProjectConfigRequest &) = default ;
    UpdateDIProjectConfigRequest(UpdateDIProjectConfigRequest &&) = default ;
    UpdateDIProjectConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIProjectConfigRequest() = default ;
    UpdateDIProjectConfigRequest& operator=(const UpdateDIProjectConfigRequest &) = default ;
    UpdateDIProjectConfigRequest& operator=(UpdateDIProjectConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationType_ != nullptr
        && this->projectConfig_ != nullptr && this->projectId_ != nullptr && this->sourceType_ != nullptr; };
    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline UpdateDIProjectConfigRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // projectConfig Field Functions 
    bool hasProjectConfig() const { return this->projectConfig_ != nullptr;};
    void deleteProjectConfig() { this->projectConfig_ = nullptr;};
    inline string projectConfig() const { DARABONBA_PTR_GET_DEFAULT(projectConfig_, "") };
    inline UpdateDIProjectConfigRequest& setProjectConfig(string projectConfig) { DARABONBA_PTR_SET_VALUE(projectConfig_, projectConfig) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDIProjectConfigRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateDIProjectConfigRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The type of the destinations of the synchronization solutions. This parameter cannot be left empty. Valid values: analyticdb_for_mysql, odps, elasticsearch, holo, mysql, and polardb.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationType_ = nullptr;
    // The new default global configuration of the synchronization solutions. The value indicates the processing rules of different types of DDL messages. The value must be in the JSON format. Example: {"RENAMECOLUMN":"WARNING","DROPTABLE":"WARNING","CREATETABLE":"WARNING","MODIFYCOLUMN":"WARNING","TRUNCATETABLE":"WARNING","DROPCOLUMN":"WARNING","ADDCOLUMN":"WARNING","RENAMETABLE":"WARNING"}.
    // 
    // Field description:
    // 
    // *   RENAMECOLUMN: renames a column.
    // *   DROPTABLE: deletes a table.
    // *   CREATETABLE: creates a table.
    // *   MODIFYCOLUMN: changes the data type of a column.
    // *   TRUNCATETABLE: clears a table.
    // *   DROPCOLUMN: deletes a column.
    // *   ADDCOLUMN: creates a column.
    // *   RENAMETABLE: renames a table.
    // 
    // DataWorks processes a DDL message of a specific type based on the following rules:
    // 
    // *   WARNING: ignores the message and records an alert in real-time synchronization logs. The alert contains information about the situation that the message is ignored because of an execution error.
    // *   IGNORE: discards the message and does not send it to the destination.
    // *   CRITICAL: terminates the real-time synchronization task and sets the node status to Failed.
    // *   NORMAL: sends the message to the destination to process the message. Each destination processes DDL messages based on its own business logic. If DataWorks adopts the NORMAL policy, DataWorks only forwards DDL messages.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectConfig_ = nullptr;
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the sources of the synchronization solutions. Valid values: oracle, mysql, polardb, datahub, drds, and analyticdb_for_mysql. If you do not configure this parameter, DataWorks applies the default global configuration to all sources.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
