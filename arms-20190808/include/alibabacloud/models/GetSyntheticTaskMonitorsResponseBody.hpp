// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKMONITORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSyntheticTaskMonitorsResponseBody() = default ;
    GetSyntheticTaskMonitorsResponseBody(const GetSyntheticTaskMonitorsResponseBody &) = default ;
    GetSyntheticTaskMonitorsResponseBody(GetSyntheticTaskMonitorsResponseBody &&) = default ;
    GetSyntheticTaskMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskMonitorsResponseBody() = default ;
    GetSyntheticTaskMonitorsResponseBody& operator=(const GetSyntheticTaskMonitorsResponseBody &) = default ;
    GetSyntheticTaskMonitorsResponseBody& operator=(GetSyntheticTaskMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Busy, busy_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(District, district_);
        DARABONBA_PTR_TO_JSON(NetServiceId, netServiceId_);
        DARABONBA_PTR_TO_JSON(NetServiceName, netServiceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Busy, busy_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(District, district_);
        DARABONBA_PTR_FROM_JSON(NetServiceId, netServiceId_);
        DARABONBA_PTR_FROM_JSON(NetServiceName, netServiceName_);
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
      virtual bool empty() const override { return this->busy_ == nullptr
        && this->city_ == nullptr && this->cityCode_ == nullptr && this->clientType_ == nullptr && this->district_ == nullptr && this->netServiceId_ == nullptr
        && this->netServiceName_ == nullptr; };
      // busy Field Functions 
      bool hasBusy() const { return this->busy_ != nullptr;};
      void deleteBusy() { this->busy_ = nullptr;};
      inline int64_t getBusy() const { DARABONBA_PTR_GET_DEFAULT(busy_, 0L) };
      inline Data& setBusy(int64_t busy) { DARABONBA_PTR_SET_VALUE(busy_, busy) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Data& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline int64_t getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0L) };
      inline Data& setCityCode(int64_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline int64_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0L) };
      inline Data& setClientType(int64_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // district Field Functions 
      bool hasDistrict() const { return this->district_ != nullptr;};
      void deleteDistrict() { this->district_ = nullptr;};
      inline string getDistrict() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
      inline Data& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


      // netServiceId Field Functions 
      bool hasNetServiceId() const { return this->netServiceId_ != nullptr;};
      void deleteNetServiceId() { this->netServiceId_ = nullptr;};
      inline int64_t getNetServiceId() const { DARABONBA_PTR_GET_DEFAULT(netServiceId_, 0L) };
      inline Data& setNetServiceId(int64_t netServiceId) { DARABONBA_PTR_SET_VALUE(netServiceId_, netServiceId) };


      // netServiceName Field Functions 
      bool hasNetServiceName() const { return this->netServiceName_ != nullptr;};
      void deleteNetServiceName() { this->netServiceName_ = nullptr;};
      inline string getNetServiceName() const { DARABONBA_PTR_GET_DEFAULT(netServiceName_, "") };
      inline Data& setNetServiceName(string netServiceName) { DARABONBA_PTR_SET_VALUE(netServiceName_, netServiceName) };


    protected:
      // The task status.
      // 
      // *   0: active
      // *   1: busy
      shared_ptr<int64_t> busy_ {};
      // The name of the city to which the monitoring point belongs.
      shared_ptr<string> city_ {};
      // The ID of the city to which the monitoring point belongs.
      shared_ptr<int64_t> cityCode_ {};
      // The client type:
      // 
      // *   1: IDC
      // *   2: Last mile
      shared_ptr<int64_t> clientType_ {};
      // The region to which the monitoring point belongs.
      shared_ptr<string> district_ {};
      // The ID of the carrier.
      shared_ptr<int64_t> netServiceId_ {};
      // The name of the carrier.
      shared_ptr<string> netServiceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSyntheticTaskMonitorsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSyntheticTaskMonitorsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSyntheticTaskMonitorsResponseBody::Data>) };
    inline vector<GetSyntheticTaskMonitorsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSyntheticTaskMonitorsResponseBody::Data>) };
    inline GetSyntheticTaskMonitorsResponseBody& setData(const vector<GetSyntheticTaskMonitorsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSyntheticTaskMonitorsResponseBody& setData(vector<GetSyntheticTaskMonitorsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetSyntheticTaskMonitorsResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSyntheticTaskMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code returned.
    // 
    // *   1001: The request was successful.
    // *   1002: The request failed.
    // *   1003: Parameter errors occurred.
    // *   1004: Authentication failed.
    // *   1006: The task does not exist.
    // *   1099: Internal errors occurred.
    shared_ptr<string> code_ {};
    // The details of the monitoring point.
    shared_ptr<vector<GetSyntheticTaskMonitorsResponseBody::Data>> data_ {};
    // The message that is returned when the request failed.
    shared_ptr<string> msg_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
