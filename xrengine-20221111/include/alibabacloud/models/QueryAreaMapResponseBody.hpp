// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAREAMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAREAMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class QueryAreaMapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAreaMapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAreaMapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAreaMapResponseBody() = default ;
    QueryAreaMapResponseBody(const QueryAreaMapResponseBody &) = default ;
    QueryAreaMapResponseBody(QueryAreaMapResponseBody &&) = default ;
    QueryAreaMapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAreaMapResponseBody() = default ;
    QueryAreaMapResponseBody& operator=(const QueryAreaMapResponseBody &) = default ;
    QueryAreaMapResponseBody& operator=(QueryAreaMapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(D3Oss, d3Oss_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LocationOss, locationOss_);
        DARABONBA_PTR_TO_JSON(MapType, mapType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Note, note_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(D3Oss, d3Oss_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LocationOss, locationOss_);
        DARABONBA_PTR_FROM_JSON(MapType, mapType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Note, note_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->d3Oss_ == nullptr
        && this->extInfo_ == nullptr && this->id_ == nullptr && this->locationOss_ == nullptr && this->mapType_ == nullptr && this->name_ == nullptr
        && this->note_ == nullptr && this->status_ == nullptr; };
      // d3Oss Field Functions 
      bool hasD3Oss() const { return this->d3Oss_ != nullptr;};
      void deleteD3Oss() { this->d3Oss_ = nullptr;};
      inline string getD3Oss() const { DARABONBA_PTR_GET_DEFAULT(d3Oss_, "") };
      inline Data& setD3Oss(string d3Oss) { DARABONBA_PTR_SET_VALUE(d3Oss_, d3Oss) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline Data& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // locationOss Field Functions 
      bool hasLocationOss() const { return this->locationOss_ != nullptr;};
      void deleteLocationOss() { this->locationOss_ = nullptr;};
      inline string getLocationOss() const { DARABONBA_PTR_GET_DEFAULT(locationOss_, "") };
      inline Data& setLocationOss(string locationOss) { DARABONBA_PTR_SET_VALUE(locationOss_, locationOss) };


      // mapType Field Functions 
      bool hasMapType() const { return this->mapType_ != nullptr;};
      void deleteMapType() { this->mapType_ = nullptr;};
      inline string getMapType() const { DARABONBA_PTR_GET_DEFAULT(mapType_, "") };
      inline Data& setMapType(string mapType) { DARABONBA_PTR_SET_VALUE(mapType_, mapType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Data& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> d3Oss_ {};
      shared_ptr<string> extInfo_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> locationOss_ {};
      shared_ptr<string> mapType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> note_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorName_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAreaMapResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAreaMapResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAreaMapResponseBody::Data) };
    inline QueryAreaMapResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAreaMapResponseBody::Data) };
    inline QueryAreaMapResponseBody& setData(const QueryAreaMapResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAreaMapResponseBody& setData(QueryAreaMapResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline QueryAreaMapResponseBody& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline QueryAreaMapResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAreaMapResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAreaMapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAreaMapResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryAreaMapResponseBody::Data> data_ {};
    shared_ptr<string> errorName_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
