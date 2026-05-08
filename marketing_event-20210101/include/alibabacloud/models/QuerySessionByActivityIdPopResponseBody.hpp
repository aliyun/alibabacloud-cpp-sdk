// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONBYACTIVITYIDPOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONBYACTIVITYIDPOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QuerySessionByActivityIdPopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionByActivityIdPopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionByActivityIdPopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySessionByActivityIdPopResponseBody() = default ;
    QuerySessionByActivityIdPopResponseBody(const QuerySessionByActivityIdPopResponseBody &) = default ;
    QuerySessionByActivityIdPopResponseBody(QuerySessionByActivityIdPopResponseBody &&) = default ;
    QuerySessionByActivityIdPopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionByActivityIdPopResponseBody() = default ;
    QuerySessionByActivityIdPopResponseBody& operator=(const QuerySessionByActivityIdPopResponseBody &) = default ;
    QuerySessionByActivityIdPopResponseBody& operator=(QuerySessionByActivityIdPopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_TO_JSON(EndDateTime, endDateTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NameEn, nameEn_);
        DARABONBA_PTR_TO_JSON(StartDateTime, startDateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_FROM_JSON(EndDateTime, endDateTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NameEn, nameEn_);
        DARABONBA_PTR_FROM_JSON(StartDateTime, startDateTime_);
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
        && this->descriptionEn_ == nullptr && this->endDateTime_ == nullptr && this->id_ == nullptr && this->location_ == nullptr && this->name_ == nullptr
        && this->nameEn_ == nullptr && this->startDateTime_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // descriptionEn Field Functions 
      bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
      void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
      inline string getDescriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
      inline Data& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


      // endDateTime Field Functions 
      bool hasEndDateTime() const { return this->endDateTime_ != nullptr;};
      void deleteEndDateTime() { this->endDateTime_ = nullptr;};
      inline string getEndDateTime() const { DARABONBA_PTR_GET_DEFAULT(endDateTime_, "") };
      inline Data& setEndDateTime(string endDateTime) { DARABONBA_PTR_SET_VALUE(endDateTime_, endDateTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Data& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameEn Field Functions 
      bool hasNameEn() const { return this->nameEn_ != nullptr;};
      void deleteNameEn() { this->nameEn_ = nullptr;};
      inline string getNameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
      inline Data& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


      // startDateTime Field Functions 
      bool hasStartDateTime() const { return this->startDateTime_ != nullptr;};
      void deleteStartDateTime() { this->startDateTime_ = nullptr;};
      inline string getStartDateTime() const { DARABONBA_PTR_GET_DEFAULT(startDateTime_, "") };
      inline Data& setStartDateTime(string startDateTime) { DARABONBA_PTR_SET_VALUE(startDateTime_, startDateTime) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> descriptionEn_ {};
      shared_ptr<string> endDateTime_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nameEn_ {};
      shared_ptr<string> startDateTime_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySessionByActivityIdPopResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySessionByActivityIdPopResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySessionByActivityIdPopResponseBody::Data>) };
    inline vector<QuerySessionByActivityIdPopResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QuerySessionByActivityIdPopResponseBody::Data>) };
    inline QuerySessionByActivityIdPopResponseBody& setData(const vector<QuerySessionByActivityIdPopResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySessionByActivityIdPopResponseBody& setData(vector<QuerySessionByActivityIdPopResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline QuerySessionByActivityIdPopResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline QuerySessionByActivityIdPopResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QuerySessionByActivityIdPopResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySessionByActivityIdPopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySessionByActivityIdPopResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<QuerySessionByActivityIdPopResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
