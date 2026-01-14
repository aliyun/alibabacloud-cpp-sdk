// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPluginsResponseBody() = default ;
    GetPluginsResponseBody(const GetPluginsResponseBody &) = default ;
    GetPluginsResponseBody(GetPluginsResponseBody &&) = default ;
    GetPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginsResponseBody() = default ;
    GetPluginsResponseBody& operator=(const GetPluginsResponseBody &) = default ;
    GetPluginsResponseBody& operator=(GetPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ConfigCheck, configCheck_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NewVersionPublishingFlag, newVersionPublishingFlag_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(PublishState, publishState_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(SummaryEn, summaryEn_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(WasmFile, wasmFile_);
        DARABONBA_PTR_TO_JSON(WasmLang, wasmLang_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ConfigCheck, configCheck_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NewVersionPublishingFlag, newVersionPublishingFlag_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(PublishState, publishState_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(SummaryEn, summaryEn_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(WasmFile, wasmFile_);
        DARABONBA_PTR_FROM_JSON(WasmLang, wasmLang_);
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
      virtual bool empty() const override { return this->category_ == nullptr
        && this->configCheck_ == nullptr && this->id_ == nullptr && this->maxVersion_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr
        && this->newVersionPublishingFlag_ == nullptr && this->phase_ == nullptr && this->primaryUser_ == nullptr && this->priority_ == nullptr && this->publishState_ == nullptr
        && this->status_ == nullptr && this->summary_ == nullptr && this->summaryEn_ == nullptr && this->version_ == nullptr && this->wasmFile_ == nullptr
        && this->wasmLang_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline Data& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // configCheck Field Functions 
      bool hasConfigCheck() const { return this->configCheck_ != nullptr;};
      void deleteConfigCheck() { this->configCheck_ = nullptr;};
      inline string getConfigCheck() const { DARABONBA_PTR_GET_DEFAULT(configCheck_, "") };
      inline Data& setConfigCheck(string configCheck) { DARABONBA_PTR_SET_VALUE(configCheck_, configCheck) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maxVersion Field Functions 
      bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
      void deleteMaxVersion() { this->maxVersion_ = nullptr;};
      inline string getMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
      inline Data& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline Data& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // newVersionPublishingFlag Field Functions 
      bool hasNewVersionPublishingFlag() const { return this->newVersionPublishingFlag_ != nullptr;};
      void deleteNewVersionPublishingFlag() { this->newVersionPublishingFlag_ = nullptr;};
      inline bool getNewVersionPublishingFlag() const { DARABONBA_PTR_GET_DEFAULT(newVersionPublishingFlag_, false) };
      inline Data& setNewVersionPublishingFlag(bool newVersionPublishingFlag) { DARABONBA_PTR_SET_VALUE(newVersionPublishingFlag_, newVersionPublishingFlag) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline int32_t getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, 0) };
      inline Data& setPhase(int32_t phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // primaryUser Field Functions 
      bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
      void deletePrimaryUser() { this->primaryUser_ = nullptr;};
      inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
      inline Data& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Data& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // publishState Field Functions 
      bool hasPublishState() const { return this->publishState_ != nullptr;};
      void deletePublishState() { this->publishState_ = nullptr;};
      inline int32_t getPublishState() const { DARABONBA_PTR_GET_DEFAULT(publishState_, 0) };
      inline Data& setPublishState(int32_t publishState) { DARABONBA_PTR_SET_VALUE(publishState_, publishState) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // summaryEn Field Functions 
      bool hasSummaryEn() const { return this->summaryEn_ != nullptr;};
      void deleteSummaryEn() { this->summaryEn_ = nullptr;};
      inline string getSummaryEn() const { DARABONBA_PTR_GET_DEFAULT(summaryEn_, "") };
      inline Data& setSummaryEn(string summaryEn) { DARABONBA_PTR_SET_VALUE(summaryEn_, summaryEn) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // wasmFile Field Functions 
      bool hasWasmFile() const { return this->wasmFile_ != nullptr;};
      void deleteWasmFile() { this->wasmFile_ = nullptr;};
      inline string getWasmFile() const { DARABONBA_PTR_GET_DEFAULT(wasmFile_, "") };
      inline Data& setWasmFile(string wasmFile) { DARABONBA_PTR_SET_VALUE(wasmFile_, wasmFile) };


      // wasmLang Field Functions 
      bool hasWasmLang() const { return this->wasmLang_ != nullptr;};
      void deleteWasmLang() { this->wasmLang_ = nullptr;};
      inline int32_t getWasmLang() const { DARABONBA_PTR_GET_DEFAULT(wasmLang_, 0) };
      inline Data& setWasmLang(int32_t wasmLang) { DARABONBA_PTR_SET_VALUE(wasmLang_, wasmLang) };


    protected:
      // The type of the plug-in. Valid values:
      // 
      // 0: custom
      // 
      // 1: permission authorization
      // 
      // 2: security protection
      // 
      // 3: transmission protocol
      // 
      // 4: traffic control
      // 
      // 5: traffic observation
      shared_ptr<int32_t> category_ {};
      // The information about the plug-in configuration used for checking.
      shared_ptr<string> configCheck_ {};
      // The ID of the plug-in.
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> maxVersion_ {};
      shared_ptr<int32_t> mode_ {};
      // The name of the plug-in.
      shared_ptr<string> name_ {};
      shared_ptr<bool> newVersionPublishingFlag_ {};
      // The execution stage of the plug-in.
      // 
      // *   0: default stage
      // *   1: authorization stage
      // *   2: authentication stage
      // *   3: statistics stage
      shared_ptr<int32_t> phase_ {};
      // The ID of the creator.
      shared_ptr<string> primaryUser_ {};
      // The execution priority of the plug-in. A larger value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The publish status.
      shared_ptr<int32_t> publishState_ {};
      // Indicates whether the plug-in is enabled.
      // 
      // *   0: disabled
      // *   1: enabled
      shared_ptr<string> status_ {};
      // The summary of the plug-in.
      shared_ptr<string> summary_ {};
      shared_ptr<string> summaryEn_ {};
      // The version of the plug-in.
      shared_ptr<string> version_ {};
      // The URL of the Object Storage Service (OSS) bucket that stores the WebAssembly plug-in.
      shared_ptr<string> wasmFile_ {};
      // The WebAssembly language. Valid values:
      // 
      // *   0: C++
      // *   1: TinyGo
      // *   2: Rust
      // *   3: AssemblyScript
      // *   4: Zig
      shared_ptr<int32_t> wasmLang_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPluginsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetPluginsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetPluginsResponseBody::Data>) };
    inline vector<GetPluginsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetPluginsResponseBody::Data>) };
    inline GetPluginsResponseBody& setData(const vector<GetPluginsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPluginsResponseBody& setData(vector<GetPluginsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetPluginsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetPluginsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPluginsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPluginsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPluginsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPluginsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned code.
    shared_ptr<int32_t> code_ {};
    // The data entries returned.
    shared_ptr<vector<GetPluginsResponseBody::Data>> data_ {};
    // The dynamic part in the error message.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
