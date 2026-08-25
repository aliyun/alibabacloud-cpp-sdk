// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVERSIONDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVERSIONDISTRIBUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class ListVersionDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVersionDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListVersionDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListVersionDistributionResponseBody() = default ;
    ListVersionDistributionResponseBody(const ListVersionDistributionResponseBody &) = default ;
    ListVersionDistributionResponseBody(ListVersionDistributionResponseBody &&) = default ;
    ListVersionDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVersionDistributionResponseBody() = default ;
    ListVersionDistributionResponseBody& operator=(const ListVersionDistributionResponseBody &) = default ;
    ListVersionDistributionResponseBody& operator=(ListVersionDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
        DARABONBA_PTR_TO_JSON(Percentage, percentage_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
        DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
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
      virtual bool empty() const override { return this->deviceCount_ == nullptr
        && this->percentage_ == nullptr && this->version_ == nullptr; };
      // deviceCount Field Functions 
      bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
      void deleteDeviceCount() { this->deviceCount_ = nullptr;};
      inline int64_t getDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0L) };
      inline Data& setDeviceCount(int64_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


      // percentage Field Functions 
      bool hasPercentage() const { return this->percentage_ != nullptr;};
      void deletePercentage() { this->percentage_ = nullptr;};
      inline double getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
      inline Data& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The number of terminals corresponding to this version.
      shared_ptr<int64_t> deviceCount_ {};
      // The version percentage. Valid values: 0 to 1.
      shared_ptr<double> percentage_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVersionDistributionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListVersionDistributionResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListVersionDistributionResponseBody::Data>) };
    inline vector<ListVersionDistributionResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListVersionDistributionResponseBody::Data>) };
    inline ListVersionDistributionResponseBody& setData(const vector<ListVersionDistributionResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVersionDistributionResponseBody& setData(vector<ListVersionDistributionResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVersionDistributionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVersionDistributionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVersionDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListVersionDistributionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 is returned if the call is successful. An error code is returned if the call fails.
    shared_ptr<string> code_ {};
    // The list of version distribution information.
    shared_ptr<vector<ListVersionDistributionResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message. This parameter is empty if the call is successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
