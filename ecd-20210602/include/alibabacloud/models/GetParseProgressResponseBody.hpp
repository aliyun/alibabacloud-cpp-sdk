// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSEPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARSEPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class GetParseProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetParseProgressResponseBody() = default ;
    GetParseProgressResponseBody(const GetParseProgressResponseBody &) = default ;
    GetParseProgressResponseBody(GetParseProgressResponseBody &&) = default ;
    GetParseProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseProgressResponseBody() = default ;
    GetParseProgressResponseBody& operator=(const GetParseProgressResponseBody &) = default ;
    GetParseProgressResponseBody& operator=(GetParseProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(RequiredEnvVars, requiredEnvVars_);
        DARABONBA_PTR_TO_JSON(RequiresApiKey, requiresApiKey_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(RequiredEnvVars, requiredEnvVars_);
        DARABONBA_PTR_FROM_JSON(RequiresApiKey, requiresApiKey_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requiredEnvVars_ == nullptr && this->requiresApiKey_ == nullptr && this->skillName_ == nullptr
        && this->slug_ == nullptr && this->status_ == nullptr && this->taskKey_ == nullptr && this->version_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // requiredEnvVars Field Functions 
      bool hasRequiredEnvVars() const { return this->requiredEnvVars_ != nullptr;};
      void deleteRequiredEnvVars() { this->requiredEnvVars_ = nullptr;};
      inline const vector<string> & getRequiredEnvVars() const { DARABONBA_PTR_GET_CONST(requiredEnvVars_, vector<string>) };
      inline vector<string> getRequiredEnvVars() { DARABONBA_PTR_GET(requiredEnvVars_, vector<string>) };
      inline Data& setRequiredEnvVars(const vector<string> & requiredEnvVars) { DARABONBA_PTR_SET_VALUE(requiredEnvVars_, requiredEnvVars) };
      inline Data& setRequiredEnvVars(vector<string> && requiredEnvVars) { DARABONBA_PTR_SET_RVALUE(requiredEnvVars_, requiredEnvVars) };


      // requiresApiKey Field Functions 
      bool hasRequiresApiKey() const { return this->requiresApiKey_ != nullptr;};
      void deleteRequiresApiKey() { this->requiresApiKey_ = nullptr;};
      inline bool getRequiresApiKey() const { DARABONBA_PTR_GET_DEFAULT(requiresApiKey_, false) };
      inline Data& setRequiresApiKey(bool requiresApiKey) { DARABONBA_PTR_SET_VALUE(requiresApiKey_, requiresApiKey) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline Data& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline Data& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskKey Field Functions 
      bool hasTaskKey() const { return this->taskKey_ != nullptr;};
      void deleteTaskKey() { this->taskKey_ = nullptr;};
      inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
      inline Data& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> description_ {};
      // The error code returned when an execution exception occurs.
      shared_ptr<string> errorCode_ {};
      // The error message returned when an execution exception occurs.
      shared_ptr<string> errorMessage_ {};
      shared_ptr<vector<string>> requiredEnvVars_ {};
      shared_ptr<bool> requiresApiKey_ {};
      // The name in the SKILL.md file.
      shared_ptr<string> skillName_ {};
      // The skill slug identifier. This is user-defined and unique within the tenant dimension.
      shared_ptr<string> slug_ {};
      // The task status. Valid values:
      // - PARSING_METADATA: parsing in progress.
      // - COMPLETED: completed.
      // - FAILED: failed.
      shared_ptr<string> status_ {};
      // The task key for parsing the skill package.
      shared_ptr<string> taskKey_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetParseProgressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetParseProgressResponseBody::Data) };
    inline GetParseProgressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetParseProgressResponseBody::Data) };
    inline GetParseProgressResponseBody& setData(const GetParseProgressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetParseProgressResponseBody& setData(GetParseProgressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParseProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data object for parsing the skill package.
    shared_ptr<GetParseProgressResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
