// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAvailableZonesResponseBody() = default ;
    DescribeAvailableZonesResponseBody(const DescribeAvailableZonesResponseBody &) = default ;
    DescribeAvailableZonesResponseBody(DescribeAvailableZonesResponseBody &&) = default ;
    DescribeAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesResponseBody() = default ;
    DescribeAvailableZonesResponseBody& operator=(const DescribeAvailableZonesResponseBody &) = default ;
    DescribeAvailableZonesResponseBody& operator=(DescribeAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OfficialAvailableZones, officialAvailableZones_);
        DARABONBA_PTR_TO_JSON(TrialAvailableZones, trialAvailableZones_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OfficialAvailableZones, officialAvailableZones_);
        DARABONBA_PTR_FROM_JSON(TrialAvailableZones, trialAvailableZones_);
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
      virtual bool empty() const override { return this->officialAvailableZones_ == nullptr
        && this->trialAvailableZones_ == nullptr; };
      // officialAvailableZones Field Functions 
      bool hasOfficialAvailableZones() const { return this->officialAvailableZones_ != nullptr;};
      void deleteOfficialAvailableZones() { this->officialAvailableZones_ = nullptr;};
      inline const vector<string> & getOfficialAvailableZones() const { DARABONBA_PTR_GET_CONST(officialAvailableZones_, vector<string>) };
      inline vector<string> getOfficialAvailableZones() { DARABONBA_PTR_GET(officialAvailableZones_, vector<string>) };
      inline Data& setOfficialAvailableZones(const vector<string> & officialAvailableZones) { DARABONBA_PTR_SET_VALUE(officialAvailableZones_, officialAvailableZones) };
      inline Data& setOfficialAvailableZones(vector<string> && officialAvailableZones) { DARABONBA_PTR_SET_RVALUE(officialAvailableZones_, officialAvailableZones) };


      // trialAvailableZones Field Functions 
      bool hasTrialAvailableZones() const { return this->trialAvailableZones_ != nullptr;};
      void deleteTrialAvailableZones() { this->trialAvailableZones_ = nullptr;};
      inline const vector<string> & getTrialAvailableZones() const { DARABONBA_PTR_GET_CONST(trialAvailableZones_, vector<string>) };
      inline vector<string> getTrialAvailableZones() { DARABONBA_PTR_GET(trialAvailableZones_, vector<string>) };
      inline Data& setTrialAvailableZones(const vector<string> & trialAvailableZones) { DARABONBA_PTR_SET_VALUE(trialAvailableZones_, trialAvailableZones) };
      inline Data& setTrialAvailableZones(vector<string> && trialAvailableZones) { DARABONBA_PTR_SET_RVALUE(trialAvailableZones_, trialAvailableZones) };


    protected:
      shared_ptr<vector<string>> officialAvailableZones_ {};
      shared_ptr<vector<string>> trialAvailableZones_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeAvailableZonesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAvailableZonesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAvailableZonesResponseBody::Data) };
    inline DescribeAvailableZonesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAvailableZonesResponseBody::Data) };
    inline DescribeAvailableZonesResponseBody& setData(const DescribeAvailableZonesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAvailableZonesResponseBody& setData(DescribeAvailableZonesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeAvailableZonesResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeAvailableZonesResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeAvailableZonesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAvailableZonesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // AccessDeniedDetail
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<DescribeAvailableZonesResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
