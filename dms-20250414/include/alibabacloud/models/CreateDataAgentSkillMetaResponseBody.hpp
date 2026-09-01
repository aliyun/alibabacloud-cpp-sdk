// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSKILLMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSKILLMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentSkillMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentSkillMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentSkillMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDataAgentSkillMetaResponseBody() = default ;
    CreateDataAgentSkillMetaResponseBody(const CreateDataAgentSkillMetaResponseBody &) = default ;
    CreateDataAgentSkillMetaResponseBody(CreateDataAgentSkillMetaResponseBody &&) = default ;
    CreateDataAgentSkillMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentSkillMetaResponseBody() = default ;
    CreateDataAgentSkillMetaResponseBody& operator=(const CreateDataAgentSkillMetaResponseBody &) = default ;
    CreateDataAgentSkillMetaResponseBody& operator=(CreateDataAgentSkillMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunParentUid, aliyunParentUid_);
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(CreatorUserName, creatorUserName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ParseError, parseError_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SkillFrom, skillFrom_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(SkillStatus, skillStatus_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunParentUid, aliyunParentUid_);
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(CreatorUserName, creatorUserName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ParseError, parseError_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SkillFrom, skillFrom_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(SkillStatus, skillStatus_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunParentUid_ == nullptr
        && this->aliyunUid_ == nullptr && this->creatorUserName_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->parseError_ == nullptr && this->region_ == nullptr && this->skillFrom_ == nullptr && this->skillId_ == nullptr
        && this->skillName_ == nullptr && this->skillStatus_ == nullptr && this->workspaceId_ == nullptr; };
      // aliyunParentUid Field Functions 
      bool hasAliyunParentUid() const { return this->aliyunParentUid_ != nullptr;};
      void deleteAliyunParentUid() { this->aliyunParentUid_ = nullptr;};
      inline string getAliyunParentUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunParentUid_, "") };
      inline Data& setAliyunParentUid(string aliyunParentUid) { DARABONBA_PTR_SET_VALUE(aliyunParentUid_, aliyunParentUid) };


      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline Data& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // creatorUserName Field Functions 
      bool hasCreatorUserName() const { return this->creatorUserName_ != nullptr;};
      void deleteCreatorUserName() { this->creatorUserName_ = nullptr;};
      inline string getCreatorUserName() const { DARABONBA_PTR_GET_DEFAULT(creatorUserName_, "") };
      inline Data& setCreatorUserName(string creatorUserName) { DARABONBA_PTR_SET_VALUE(creatorUserName_, creatorUserName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline int32_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
      inline Data& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // parseError Field Functions 
      bool hasParseError() const { return this->parseError_ != nullptr;};
      void deleteParseError() { this->parseError_ = nullptr;};
      inline string getParseError() const { DARABONBA_PTR_GET_DEFAULT(parseError_, "") };
      inline Data& setParseError(string parseError) { DARABONBA_PTR_SET_VALUE(parseError_, parseError) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // skillFrom Field Functions 
      bool hasSkillFrom() const { return this->skillFrom_ != nullptr;};
      void deleteSkillFrom() { this->skillFrom_ = nullptr;};
      inline string getSkillFrom() const { DARABONBA_PTR_GET_DEFAULT(skillFrom_, "") };
      inline Data& setSkillFrom(string skillFrom) { DARABONBA_PTR_SET_VALUE(skillFrom_, skillFrom) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline Data& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline Data& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // skillStatus Field Functions 
      bool hasSkillStatus() const { return this->skillStatus_ != nullptr;};
      void deleteSkillStatus() { this->skillStatus_ = nullptr;};
      inline string getSkillStatus() const { DARABONBA_PTR_GET_DEFAULT(skillStatus_, "") };
      inline Data& setSkillStatus(string skillStatus) { DARABONBA_PTR_SET_VALUE(skillStatus_, skillStatus) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The Alibaba Cloud account ID of the parent account.
      shared_ptr<string> aliyunParentUid_ {};
      // The Alibaba Cloud account ID.
      shared_ptr<string> aliyunUid_ {};
      // The creator name.
      shared_ptr<string> creatorUserName_ {};
      // The skill description.
      shared_ptr<string> description_ {};
      // Indicates whether the skill is available. Valid values: true and false.
      shared_ptr<int32_t> enabled_ {};
      // The creation time.
      shared_ptr<string> gmtCreated_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // The skill parsing error message.
      // - When the skill status is INVALID, the parsing error message is returned.
      shared_ptr<string> parseError_ {};
      // The region.
      shared_ptr<string> region_ {};
      // The skill source.
      shared_ptr<string> skillFrom_ {};
      // The skill ID.
      shared_ptr<string> skillId_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
      // The skill status. Valid values:
      // - INIT: Not ready.
      // - ACTIVE: Active.
      // - INVALID: Invalid.
      shared_ptr<string> skillStatus_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDataAgentSkillMetaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateDataAgentSkillMetaResponseBody::Data) };
    inline CreateDataAgentSkillMetaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateDataAgentSkillMetaResponseBody::Data) };
    inline CreateDataAgentSkillMetaResponseBody& setData(const CreateDataAgentSkillMetaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDataAgentSkillMetaResponseBody& setData(CreateDataAgentSkillMetaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateDataAgentSkillMetaResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateDataAgentSkillMetaResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataAgentSkillMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDataAgentSkillMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<CreateDataAgentSkillMetaResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned when a system-level request failure occurs.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.                                 
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
