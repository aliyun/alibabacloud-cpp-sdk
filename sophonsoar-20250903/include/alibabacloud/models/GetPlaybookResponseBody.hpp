// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldInputConfig.hpp>
#include <alibabacloud/models/FieldOutputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class GetPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Playbook, playbook_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Playbook, playbook_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPlaybookResponseBody() = default ;
    GetPlaybookResponseBody(const GetPlaybookResponseBody &) = default ;
    GetPlaybookResponseBody(GetPlaybookResponseBody &&) = default ;
    GetPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlaybookResponseBody() = default ;
    GetPlaybookResponseBody& operator=(const GetPlaybookResponseBody &) = default ;
    GetPlaybookResponseBody& operator=(GetPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Playbook : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Playbook& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(PlaybookDescription, playbookDescription_);
        DARABONBA_PTR_TO_JSON(PlaybookExtension, playbookExtension_);
        DARABONBA_PTR_TO_JSON(PlaybookInputConfigs, playbookInputConfigs_);
        DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
        DARABONBA_PTR_TO_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
        DARABONBA_PTR_TO_JSON(PlaybookParamType, playbookParamType_);
        DARABONBA_PTR_TO_JSON(PlaybookParamsExample, playbookParamsExample_);
        DARABONBA_PTR_TO_JSON(PlaybookStatus, playbookStatus_);
        DARABONBA_PTR_TO_JSON(PlaybookTaskFlow, playbookTaskFlow_);
        DARABONBA_PTR_TO_JSON(PlaybookTaskFlowUuid, playbookTaskFlowUuid_);
        DARABONBA_PTR_TO_JSON(PlaybookType, playbookType_);
        DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_TO_JSON(PlaybookVersion, playbookVersion_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Playbook& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(PlaybookDescription, playbookDescription_);
        DARABONBA_PTR_FROM_JSON(PlaybookExtension, playbookExtension_);
        DARABONBA_PTR_FROM_JSON(PlaybookInputConfigs, playbookInputConfigs_);
        DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
        DARABONBA_PTR_FROM_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
        DARABONBA_PTR_FROM_JSON(PlaybookParamType, playbookParamType_);
        DARABONBA_PTR_FROM_JSON(PlaybookParamsExample, playbookParamsExample_);
        DARABONBA_PTR_FROM_JSON(PlaybookStatus, playbookStatus_);
        DARABONBA_PTR_FROM_JSON(PlaybookTaskFlow, playbookTaskFlow_);
        DARABONBA_PTR_FROM_JSON(PlaybookTaskFlowUuid, playbookTaskFlowUuid_);
        DARABONBA_PTR_FROM_JSON(PlaybookType, playbookType_);
        DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_FROM_JSON(PlaybookVersion, playbookVersion_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Playbook() = default ;
      Playbook(const Playbook &) = default ;
      Playbook(Playbook &&) = default ;
      Playbook(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Playbook() = default ;
      Playbook& operator=(const Playbook &) = default ;
      Playbook& operator=(Playbook &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->playbookDescription_ == nullptr && this->playbookExtension_ == nullptr && this->playbookInputConfigs_ == nullptr && this->playbookName_ == nullptr && this->playbookOutputConfigs_ == nullptr
        && this->playbookParamType_ == nullptr && this->playbookParamsExample_ == nullptr && this->playbookStatus_ == nullptr && this->playbookTaskFlow_ == nullptr && this->playbookTaskFlowUuid_ == nullptr
        && this->playbookType_ == nullptr && this->playbookUuid_ == nullptr && this->playbookVersion_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Playbook& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // playbookDescription Field Functions 
      bool hasPlaybookDescription() const { return this->playbookDescription_ != nullptr;};
      void deletePlaybookDescription() { this->playbookDescription_ = nullptr;};
      inline string getPlaybookDescription() const { DARABONBA_PTR_GET_DEFAULT(playbookDescription_, "") };
      inline Playbook& setPlaybookDescription(string playbookDescription) { DARABONBA_PTR_SET_VALUE(playbookDescription_, playbookDescription) };


      // playbookExtension Field Functions 
      bool hasPlaybookExtension() const { return this->playbookExtension_ != nullptr;};
      void deletePlaybookExtension() { this->playbookExtension_ = nullptr;};
      inline string getPlaybookExtension() const { DARABONBA_PTR_GET_DEFAULT(playbookExtension_, "") };
      inline Playbook& setPlaybookExtension(string playbookExtension) { DARABONBA_PTR_SET_VALUE(playbookExtension_, playbookExtension) };


      // playbookInputConfigs Field Functions 
      bool hasPlaybookInputConfigs() const { return this->playbookInputConfigs_ != nullptr;};
      void deletePlaybookInputConfigs() { this->playbookInputConfigs_ = nullptr;};
      inline const vector<FieldInputConfig> & getPlaybookInputConfigs() const { DARABONBA_PTR_GET_CONST(playbookInputConfigs_, vector<FieldInputConfig>) };
      inline vector<FieldInputConfig> getPlaybookInputConfigs() { DARABONBA_PTR_GET(playbookInputConfigs_, vector<FieldInputConfig>) };
      inline Playbook& setPlaybookInputConfigs(const vector<FieldInputConfig> & playbookInputConfigs) { DARABONBA_PTR_SET_VALUE(playbookInputConfigs_, playbookInputConfigs) };
      inline Playbook& setPlaybookInputConfigs(vector<FieldInputConfig> && playbookInputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookInputConfigs_, playbookInputConfigs) };


      // playbookName Field Functions 
      bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
      void deletePlaybookName() { this->playbookName_ = nullptr;};
      inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
      inline Playbook& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


      // playbookOutputConfigs Field Functions 
      bool hasPlaybookOutputConfigs() const { return this->playbookOutputConfigs_ != nullptr;};
      void deletePlaybookOutputConfigs() { this->playbookOutputConfigs_ = nullptr;};
      inline const vector<FieldOutputConfig> & getPlaybookOutputConfigs() const { DARABONBA_PTR_GET_CONST(playbookOutputConfigs_, vector<FieldOutputConfig>) };
      inline vector<FieldOutputConfig> getPlaybookOutputConfigs() { DARABONBA_PTR_GET(playbookOutputConfigs_, vector<FieldOutputConfig>) };
      inline Playbook& setPlaybookOutputConfigs(const vector<FieldOutputConfig> & playbookOutputConfigs) { DARABONBA_PTR_SET_VALUE(playbookOutputConfigs_, playbookOutputConfigs) };
      inline Playbook& setPlaybookOutputConfigs(vector<FieldOutputConfig> && playbookOutputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookOutputConfigs_, playbookOutputConfigs) };


      // playbookParamType Field Functions 
      bool hasPlaybookParamType() const { return this->playbookParamType_ != nullptr;};
      void deletePlaybookParamType() { this->playbookParamType_ = nullptr;};
      inline string getPlaybookParamType() const { DARABONBA_PTR_GET_DEFAULT(playbookParamType_, "") };
      inline Playbook& setPlaybookParamType(string playbookParamType) { DARABONBA_PTR_SET_VALUE(playbookParamType_, playbookParamType) };


      // playbookParamsExample Field Functions 
      bool hasPlaybookParamsExample() const { return this->playbookParamsExample_ != nullptr;};
      void deletePlaybookParamsExample() { this->playbookParamsExample_ = nullptr;};
      inline string getPlaybookParamsExample() const { DARABONBA_PTR_GET_DEFAULT(playbookParamsExample_, "") };
      inline Playbook& setPlaybookParamsExample(string playbookParamsExample) { DARABONBA_PTR_SET_VALUE(playbookParamsExample_, playbookParamsExample) };


      // playbookStatus Field Functions 
      bool hasPlaybookStatus() const { return this->playbookStatus_ != nullptr;};
      void deletePlaybookStatus() { this->playbookStatus_ = nullptr;};
      inline int32_t getPlaybookStatus() const { DARABONBA_PTR_GET_DEFAULT(playbookStatus_, 0) };
      inline Playbook& setPlaybookStatus(int32_t playbookStatus) { DARABONBA_PTR_SET_VALUE(playbookStatus_, playbookStatus) };


      // playbookTaskFlow Field Functions 
      bool hasPlaybookTaskFlow() const { return this->playbookTaskFlow_ != nullptr;};
      void deletePlaybookTaskFlow() { this->playbookTaskFlow_ = nullptr;};
      inline string getPlaybookTaskFlow() const { DARABONBA_PTR_GET_DEFAULT(playbookTaskFlow_, "") };
      inline Playbook& setPlaybookTaskFlow(string playbookTaskFlow) { DARABONBA_PTR_SET_VALUE(playbookTaskFlow_, playbookTaskFlow) };


      // playbookTaskFlowUuid Field Functions 
      bool hasPlaybookTaskFlowUuid() const { return this->playbookTaskFlowUuid_ != nullptr;};
      void deletePlaybookTaskFlowUuid() { this->playbookTaskFlowUuid_ = nullptr;};
      inline string getPlaybookTaskFlowUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookTaskFlowUuid_, "") };
      inline Playbook& setPlaybookTaskFlowUuid(string playbookTaskFlowUuid) { DARABONBA_PTR_SET_VALUE(playbookTaskFlowUuid_, playbookTaskFlowUuid) };


      // playbookType Field Functions 
      bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
      void deletePlaybookType() { this->playbookType_ = nullptr;};
      inline string getPlaybookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
      inline Playbook& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Playbook& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // playbookVersion Field Functions 
      bool hasPlaybookVersion() const { return this->playbookVersion_ != nullptr;};
      void deletePlaybookVersion() { this->playbookVersion_ = nullptr;};
      inline string getPlaybookVersion() const { DARABONBA_PTR_GET_DEFAULT(playbookVersion_, "") };
      inline Playbook& setPlaybookVersion(string playbookVersion) { DARABONBA_PTR_SET_VALUE(playbookVersion_, playbookVersion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Playbook& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Creation time (in milliseconds).
      shared_ptr<int64_t> createTime_ {};
      // Description of the playbook.
      shared_ptr<string> playbookDescription_ {};
      // Extended information of the playbook.
      shared_ptr<string> playbookExtension_ {};
      // List of playbook input parameter configurations.
      shared_ptr<vector<FieldInputConfig>> playbookInputConfigs_ {};
      // Name of the playbook, without special characters.
      shared_ptr<string> playbookName_ {};
      // List of playbook output parameter configurations.
      shared_ptr<vector<FieldOutputConfig>> playbookOutputConfigs_ {};
      // Parameter type of the playbook, with the following values:
      // 
      // - **template-ip**: IP entity.
      // - **template-file**: File entity.
      // - **template-process**: Process entity.
      // - **template-host**: Host entity.
      // - **template-domain**: Domain entity.
      // - **template-container**: Container entity.
      // - **template-incident**: Security incident.
      // - **template-alert**: Security alert.
      // - **custom**: Custom.
      shared_ptr<string> playbookParamType_ {};
      // Input example of the playbook.
      shared_ptr<string> playbookParamsExample_ {};
      // Publication status of the playbook, with the following values:
      // 
      // - **0**: Unpublished.
      // - **1**: Published.
      shared_ptr<int32_t> playbookStatus_ {};
      // Workflow of the playbook.
      shared_ptr<string> playbookTaskFlow_ {};
      // UUID of the playbook workflow.
      shared_ptr<string> playbookTaskFlowUuid_ {};
      // Type of the playbook, with values as follows:
      // 
      // - **preset**: Predefined playbook.
      // - **user**: Custom playbook.
      // - **component**: Security response component.
      shared_ptr<string> playbookType_ {};
      // UUID of the playbook.
      shared_ptr<string> playbookUuid_ {};
      // Version number of the playbook.
      shared_ptr<string> playbookVersion_ {};
      // Update time (in milliseconds).
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->playbook_ == nullptr
        && this->requestId_ == nullptr; };
    // playbook Field Functions 
    bool hasPlaybook() const { return this->playbook_ != nullptr;};
    void deletePlaybook() { this->playbook_ = nullptr;};
    inline const GetPlaybookResponseBody::Playbook & getPlaybook() const { DARABONBA_PTR_GET_CONST(playbook_, GetPlaybookResponseBody::Playbook) };
    inline GetPlaybookResponseBody::Playbook getPlaybook() { DARABONBA_PTR_GET(playbook_, GetPlaybookResponseBody::Playbook) };
    inline GetPlaybookResponseBody& setPlaybook(const GetPlaybookResponseBody::Playbook & playbook) { DARABONBA_PTR_SET_VALUE(playbook_, playbook) };
    inline GetPlaybookResponseBody& setPlaybook(GetPlaybookResponseBody::Playbook && playbook) { DARABONBA_PTR_SET_RVALUE(playbook_, playbook) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Configuration information of the playbook.
    shared_ptr<GetPlaybookResponseBody::Playbook> playbook_ {};
    // The ID of this request, a unique identifier generated by Alibaba Cloud for the request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
