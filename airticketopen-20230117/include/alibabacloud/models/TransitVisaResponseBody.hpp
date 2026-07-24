// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSITVISARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSITVISARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TransitVisaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransitVisaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TransitVisaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    TransitVisaResponseBody() = default ;
    TransitVisaResponseBody(const TransitVisaResponseBody &) = default ;
    TransitVisaResponseBody(TransitVisaResponseBody &&) = default ;
    TransitVisaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransitVisaResponseBody() = default ;
    TransitVisaResponseBody& operator=(const TransitVisaResponseBody &) = default ;
    TransitVisaResponseBody& operator=(TransitVisaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(city_code, cityCode_);
        DARABONBA_PTR_TO_JSON(visa_type, visaType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
        DARABONBA_PTR_FROM_JSON(visa_type, visaType_);
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
      virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->visaType_ == nullptr; };
      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
      inline Data& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // visaType Field Functions 
      bool hasVisaType() const { return this->visaType_ != nullptr;};
      void deleteVisaType() { this->visaType_ = nullptr;};
      inline int32_t getVisaType() const { DARABONBA_PTR_GET_DEFAULT(visaType_, 0) };
      inline Data& setVisaType(int32_t visaType) { DARABONBA_PTR_SET_VALUE(visaType_, visaType) };


    protected:
      // The three-letter IATA code of the stopover or transfer city.
      shared_ptr<string> cityCode_ {};
      // The transit visa type. Valid values:
      // - 0: no transit visa required.
      // - 1: transit visa required.
      shared_ptr<int32_t> visaType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransitVisaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<TransitVisaResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<TransitVisaResponseBody::Data>) };
    inline vector<TransitVisaResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<TransitVisaResponseBody::Data>) };
    inline TransitVisaResponseBody& setData(const vector<TransitVisaResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TransitVisaResponseBody& setData(vector<TransitVisaResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TransitVisaResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline TransitVisaResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline TransitVisaResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TransitVisaResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline TransitVisaResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TransitVisaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<vector<TransitVisaResponseBody::Data>> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with an error response.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful HTTP requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
