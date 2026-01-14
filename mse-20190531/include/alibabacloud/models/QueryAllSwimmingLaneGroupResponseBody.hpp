// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANEGROUPRESPONSEBODY_HPP_
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
  class QueryAllSwimmingLaneGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAllSwimmingLaneGroupResponseBody() = default ;
    QueryAllSwimmingLaneGroupResponseBody(const QueryAllSwimmingLaneGroupResponseBody &) = default ;
    QueryAllSwimmingLaneGroupResponseBody(QueryAllSwimmingLaneGroupResponseBody &&) = default ;
    QueryAllSwimmingLaneGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneGroupResponseBody() = default ;
    QueryAllSwimmingLaneGroupResponseBody& operator=(const QueryAllSwimmingLaneGroupResponseBody &) = default ;
    QueryAllSwimmingLaneGroupResponseBody& operator=(QueryAllSwimmingLaneGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppIds, appIds_);
        DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
        DARABONBA_PTR_TO_JSON(EntryApp, entryApp_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
        DARABONBA_PTR_TO_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Paths, paths_);
        DARABONBA_PTR_TO_JSON(RecordCanaryDetail, recordCanaryDetail_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SwimVersion, swimVersion_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
        DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
        DARABONBA_PTR_FROM_JSON(EntryApp, entryApp_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
        DARABONBA_PTR_FROM_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Paths, paths_);
        DARABONBA_PTR_FROM_JSON(RecordCanaryDetail, recordCanaryDetail_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SwimVersion, swimVersion_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->appIds_ == nullptr
        && this->canaryModel_ == nullptr && this->entryApp_ == nullptr && this->id_ == nullptr && this->messageQueueFilterSide_ == nullptr && this->messageQueueGrayEnable_ == nullptr
        && this->name_ == nullptr && this->namespace_ == nullptr && this->paths_ == nullptr && this->recordCanaryDetail_ == nullptr && this->region_ == nullptr
        && this->swimVersion_ == nullptr && this->userId_ == nullptr; };
      // appIds Field Functions 
      bool hasAppIds() const { return this->appIds_ != nullptr;};
      void deleteAppIds() { this->appIds_ = nullptr;};
      inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
      inline Data& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


      // canaryModel Field Functions 
      bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
      void deleteCanaryModel() { this->canaryModel_ = nullptr;};
      inline int32_t getCanaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
      inline Data& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


      // entryApp Field Functions 
      bool hasEntryApp() const { return this->entryApp_ != nullptr;};
      void deleteEntryApp() { this->entryApp_ = nullptr;};
      inline string getEntryApp() const { DARABONBA_PTR_GET_DEFAULT(entryApp_, "") };
      inline Data& setEntryApp(string entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // messageQueueFilterSide Field Functions 
      bool hasMessageQueueFilterSide() const { return this->messageQueueFilterSide_ != nullptr;};
      void deleteMessageQueueFilterSide() { this->messageQueueFilterSide_ = nullptr;};
      inline string getMessageQueueFilterSide() const { DARABONBA_PTR_GET_DEFAULT(messageQueueFilterSide_, "") };
      inline Data& setMessageQueueFilterSide(string messageQueueFilterSide) { DARABONBA_PTR_SET_VALUE(messageQueueFilterSide_, messageQueueFilterSide) };


      // messageQueueGrayEnable Field Functions 
      bool hasMessageQueueGrayEnable() const { return this->messageQueueGrayEnable_ != nullptr;};
      void deleteMessageQueueGrayEnable() { this->messageQueueGrayEnable_ = nullptr;};
      inline bool getMessageQueueGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(messageQueueGrayEnable_, false) };
      inline Data& setMessageQueueGrayEnable(bool messageQueueGrayEnable) { DARABONBA_PTR_SET_VALUE(messageQueueGrayEnable_, messageQueueGrayEnable) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // paths Field Functions 
      bool hasPaths() const { return this->paths_ != nullptr;};
      void deletePaths() { this->paths_ = nullptr;};
      inline string getPaths() const { DARABONBA_PTR_GET_DEFAULT(paths_, "") };
      inline Data& setPaths(string paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };


      // recordCanaryDetail Field Functions 
      bool hasRecordCanaryDetail() const { return this->recordCanaryDetail_ != nullptr;};
      void deleteRecordCanaryDetail() { this->recordCanaryDetail_ = nullptr;};
      inline bool getRecordCanaryDetail() const { DARABONBA_PTR_GET_DEFAULT(recordCanaryDetail_, false) };
      inline Data& setRecordCanaryDetail(bool recordCanaryDetail) { DARABONBA_PTR_SET_VALUE(recordCanaryDetail_, recordCanaryDetail) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // swimVersion Field Functions 
      bool hasSwimVersion() const { return this->swimVersion_ != nullptr;};
      void deleteSwimVersion() { this->swimVersion_ = nullptr;};
      inline int32_t getSwimVersion() const { DARABONBA_PTR_GET_DEFAULT(swimVersion_, 0) };
      inline Data& setSwimVersion(int32_t swimVersion) { DARABONBA_PTR_SET_VALUE(swimVersion_, swimVersion) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> appIds_ {};
      shared_ptr<int32_t> canaryModel_ {};
      shared_ptr<string> entryApp_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> messageQueueFilterSide_ {};
      shared_ptr<bool> messageQueueGrayEnable_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> paths_ {};
      shared_ptr<bool> recordCanaryDetail_ {};
      shared_ptr<string> region_ {};
      shared_ptr<int32_t> swimVersion_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryAllSwimmingLaneGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAllSwimmingLaneGroupResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAllSwimmingLaneGroupResponseBody::Data>) };
    inline vector<QueryAllSwimmingLaneGroupResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAllSwimmingLaneGroupResponseBody::Data>) };
    inline QueryAllSwimmingLaneGroupResponseBody& setData(const vector<QueryAllSwimmingLaneGroupResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAllSwimmingLaneGroupResponseBody& setData(vector<QueryAllSwimmingLaneGroupResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline QueryAllSwimmingLaneGroupResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryAllSwimmingLaneGroupResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryAllSwimmingLaneGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAllSwimmingLaneGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAllSwimmingLaneGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAllSwimmingLaneGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 is returned if the request is successful.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<vector<QueryAllSwimmingLaneGroupResponseBody::Data>> data_ {};
    // The dynamic part in the error message.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
