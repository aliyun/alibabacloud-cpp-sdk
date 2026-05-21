// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPGRADESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPGRADESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetUpgradeStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUpgradeStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUpgradeStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUpgradeStatusResponseBody() = default ;
    GetUpgradeStatusResponseBody(const GetUpgradeStatusResponseBody &) = default ;
    GetUpgradeStatusResponseBody(GetUpgradeStatusResponseBody &&) = default ;
    GetUpgradeStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUpgradeStatusResponseBody() = default ;
    GetUpgradeStatusResponseBody& operator=(const GetUpgradeStatusResponseBody &) = default ;
    GetUpgradeStatusResponseBody& operator=(GetUpgradeStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(FromVersion, fromVersion_);
        DARABONBA_PTR_TO_JSON(PrepareFinishTime, prepareFinishTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ToVersion, toVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(FromVersion, fromVersion_);
        DARABONBA_PTR_FROM_JSON(PrepareFinishTime, prepareFinishTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ToVersion, toVersion_);
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
      virtual bool empty() const override { return this->details_ == nullptr
        && this->fromVersion_ == nullptr && this->prepareFinishTime_ == nullptr && this->status_ == nullptr && this->toVersion_ == nullptr; };
      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
      inline Data& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


      // fromVersion Field Functions 
      bool hasFromVersion() const { return this->fromVersion_ != nullptr;};
      void deleteFromVersion() { this->fromVersion_ = nullptr;};
      inline string getFromVersion() const { DARABONBA_PTR_GET_DEFAULT(fromVersion_, "") };
      inline Data& setFromVersion(string fromVersion) { DARABONBA_PTR_SET_VALUE(fromVersion_, fromVersion) };


      // prepareFinishTime Field Functions 
      bool hasPrepareFinishTime() const { return this->prepareFinishTime_ != nullptr;};
      void deletePrepareFinishTime() { this->prepareFinishTime_ = nullptr;};
      inline string getPrepareFinishTime() const { DARABONBA_PTR_GET_DEFAULT(prepareFinishTime_, "") };
      inline Data& setPrepareFinishTime(string prepareFinishTime) { DARABONBA_PTR_SET_VALUE(prepareFinishTime_, prepareFinishTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // toVersion Field Functions 
      bool hasToVersion() const { return this->toVersion_ != nullptr;};
      void deleteToVersion() { this->toVersion_ = nullptr;};
      inline string getToVersion() const { DARABONBA_PTR_GET_DEFAULT(toVersion_, "") };
      inline Data& setToVersion(string toVersion) { DARABONBA_PTR_SET_VALUE(toVersion_, toVersion) };


    protected:
      shared_ptr<string> details_ {};
      shared_ptr<string> fromVersion_ {};
      shared_ptr<string> prepareFinishTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> toVersion_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetUpgradeStatusResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetUpgradeStatusResponseBody::Data>) };
    inline vector<GetUpgradeStatusResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetUpgradeStatusResponseBody::Data>) };
    inline GetUpgradeStatusResponseBody& setData(const vector<GetUpgradeStatusResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUpgradeStatusResponseBody& setData(vector<GetUpgradeStatusResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUpgradeStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetUpgradeStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetUpgradeStatusResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUpgradeStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUpgradeStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<GetUpgradeStatusResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
