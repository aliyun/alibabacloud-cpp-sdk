// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTRESPONSEBODY_HPP_
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
  class GatewayBlackWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayBlackWhiteListResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GatewayBlackWhiteListResponseBody& obj) { 
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
    GatewayBlackWhiteListResponseBody() = default ;
    GatewayBlackWhiteListResponseBody(const GatewayBlackWhiteListResponseBody &) = default ;
    GatewayBlackWhiteListResponseBody(GatewayBlackWhiteListResponseBody &&) = default ;
    GatewayBlackWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayBlackWhiteListResponseBody() = default ;
    GatewayBlackWhiteListResponseBody& operator=(const GatewayBlackWhiteListResponseBody &) = default ;
    GatewayBlackWhiteListResponseBody& operator=(GatewayBlackWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Note, note_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceIdJsonList, resourceIdJsonList_);
          DARABONBA_PTR_TO_JSON(ResourceIdNameJson, resourceIdNameJson_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Note, note_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceIdJsonList, resourceIdJsonList_);
          DARABONBA_PTR_FROM_JSON(ResourceIdNameJson, resourceIdNameJson_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->isWhite_ == nullptr && this->name_ == nullptr && this->note_ == nullptr && this->resourceId_ == nullptr && this->resourceIdJsonList_ == nullptr
        && this->resourceIdNameJson_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline Result& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline Result& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isWhite Field Functions 
        bool hasIsWhite() const { return this->isWhite_ != nullptr;};
        void deleteIsWhite() { this->isWhite_ = nullptr;};
        inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
        inline Result& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline Result& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline int64_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
        inline Result& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceIdJsonList Field Functions 
        bool hasResourceIdJsonList() const { return this->resourceIdJsonList_ != nullptr;};
        void deleteResourceIdJsonList() { this->resourceIdJsonList_ = nullptr;};
        inline string getResourceIdJsonList() const { DARABONBA_PTR_GET_DEFAULT(resourceIdJsonList_, "") };
        inline Result& setResourceIdJsonList(string resourceIdJsonList) { DARABONBA_PTR_SET_VALUE(resourceIdJsonList_, resourceIdJsonList) };


        // resourceIdNameJson Field Functions 
        bool hasResourceIdNameJson() const { return this->resourceIdNameJson_ != nullptr;};
        void deleteResourceIdNameJson() { this->resourceIdNameJson_ = nullptr;};
        inline string getResourceIdNameJson() const { DARABONBA_PTR_GET_DEFAULT(resourceIdNameJson_, "") };
        inline Result& setResourceIdNameJson(string resourceIdNameJson) { DARABONBA_PTR_SET_VALUE(resourceIdNameJson_, resourceIdNameJson) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Result& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The content of the blacklist.
        shared_ptr<string> content_ {};
        // The gateway ID.
        shared_ptr<int64_t> gatewayId_ {};
        // The unique ID of the gateway.
        shared_ptr<string> gatewayUniqueId_ {};
        // The time when the blacklist or whitelist was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the rule was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the blacklist and whitelist.
        shared_ptr<int64_t> id_ {};
        // Specifies whether to enable the whitelist feature.
        shared_ptr<bool> isWhite_ {};
        // The name of the blacklist.
        shared_ptr<string> name_ {};
        // The comment.
        shared_ptr<string> note_ {};
        // The resource ID.
        shared_ptr<int64_t> resourceId_ {};
        // The list of resource IDs in the JSON format.
        // 
        // *   If the value of the ResourceType parameter is ROUTE, the value of this parameter is the list of route IDs.
        // *   If the value of the ResourceType parameter is DOMAIN, the value of this parameter is the list of domain names.
        shared_ptr<string> resourceIdJsonList_ {};
        // The description of the resource name.
        shared_ptr<string> resourceIdNameJson_ {};
        // The effective scope of the blacklist or whitelist. Valid values:
        // 
        // *   GATEWAY
        // *   DOMAIN
        // *   ROUTE
        shared_ptr<string> resourceType_ {};
        // The status of the blacklist or whitelist.
        // 
        // *   on
        // *   off
        shared_ptr<string> status_ {};
        // The type of the blacklist and whitelist. The value is fixed to IP address blacklist and whitelist.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The returned information.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of instances returned.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GatewayBlackWhiteListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GatewayBlackWhiteListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GatewayBlackWhiteListResponseBody::Data) };
    inline GatewayBlackWhiteListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GatewayBlackWhiteListResponseBody::Data) };
    inline GatewayBlackWhiteListResponseBody& setData(const GatewayBlackWhiteListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GatewayBlackWhiteListResponseBody& setData(GatewayBlackWhiteListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GatewayBlackWhiteListResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GatewayBlackWhiteListResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GatewayBlackWhiteListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GatewayBlackWhiteListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GatewayBlackWhiteListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GatewayBlackWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GatewayBlackWhiteListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 is returned if the request is successful.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<GatewayBlackWhiteListResponseBody::Data> data_ {};
    // The placeholder in the dynamic error message. This parameter is not returned.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic message. This parameter is not returned.
    shared_ptr<string> dynamicMessage_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
