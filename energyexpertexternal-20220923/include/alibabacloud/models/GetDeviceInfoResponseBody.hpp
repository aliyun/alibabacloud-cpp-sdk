// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDeviceInfoResponseBody() = default ;
    GetDeviceInfoResponseBody(const GetDeviceInfoResponseBody &) = default ;
    GetDeviceInfoResponseBody(GetDeviceInfoResponseBody &&) = default ;
    GetDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceInfoResponseBody() = default ;
    GetDeviceInfoResponseBody& operator=(const GetDeviceInfoResponseBody &) = default ;
    GetDeviceInfoResponseBody& operator=(GetDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(firstTypeName, firstTypeName_);
        DARABONBA_PTR_TO_JSON(recordList, recordList_);
        DARABONBA_PTR_TO_JSON(secondTypeName, secondTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(firstTypeName, firstTypeName_);
        DARABONBA_PTR_FROM_JSON(recordList, recordList_);
        DARABONBA_PTR_FROM_JSON(secondTypeName, secondTypeName_);
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
      class RecordList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordList& obj) { 
          DARABONBA_PTR_TO_JSON(identifier, identifier_);
          DARABONBA_PTR_TO_JSON(paramName, paramName_);
          DARABONBA_PTR_TO_JSON(statisticsDate, statisticsDate_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RecordList& obj) { 
          DARABONBA_PTR_FROM_JSON(identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(paramName, paramName_);
          DARABONBA_PTR_FROM_JSON(statisticsDate, statisticsDate_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        RecordList() = default ;
        RecordList(const RecordList &) = default ;
        RecordList(RecordList &&) = default ;
        RecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordList() = default ;
        RecordList& operator=(const RecordList &) = default ;
        RecordList& operator=(RecordList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->identifier_ == nullptr
        && this->paramName_ == nullptr && this->statisticsDate_ == nullptr && this->type_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline RecordList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // paramName Field Functions 
        bool hasParamName() const { return this->paramName_ != nullptr;};
        void deleteParamName() { this->paramName_ = nullptr;};
        inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
        inline RecordList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


        // statisticsDate Field Functions 
        bool hasStatisticsDate() const { return this->statisticsDate_ != nullptr;};
        void deleteStatisticsDate() { this->statisticsDate_ = nullptr;};
        inline string getStatisticsDate() const { DARABONBA_PTR_GET_DEFAULT(statisticsDate_, "") };
        inline RecordList& setStatisticsDate(string statisticsDate) { DARABONBA_PTR_SET_VALUE(statisticsDate_, statisticsDate) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RecordList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline RecordList& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline RecordList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The device identifier.
        shared_ptr<string> identifier_ {};
        // The parameter name.
        shared_ptr<string> paramName_ {};
        // The date on which the statistics were collected.
        shared_ptr<string> statisticsDate_ {};
        // The type of the measuring point.
        shared_ptr<string> type_ {};
        // The unit of the parameter value.
        shared_ptr<string> unit_ {};
        // The value of the measuring point.
        shared_ptr<double> value_ {};
      };

      virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->deviceName_ == nullptr && this->firstTypeName_ == nullptr && this->recordList_ == nullptr && this->secondTypeName_ == nullptr; };
      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline Data& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // firstTypeName Field Functions 
      bool hasFirstTypeName() const { return this->firstTypeName_ != nullptr;};
      void deleteFirstTypeName() { this->firstTypeName_ = nullptr;};
      inline string getFirstTypeName() const { DARABONBA_PTR_GET_DEFAULT(firstTypeName_, "") };
      inline Data& setFirstTypeName(string firstTypeName) { DARABONBA_PTR_SET_VALUE(firstTypeName_, firstTypeName) };


      // recordList Field Functions 
      bool hasRecordList() const { return this->recordList_ != nullptr;};
      void deleteRecordList() { this->recordList_ = nullptr;};
      inline const vector<Data::RecordList> & getRecordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<Data::RecordList>) };
      inline vector<Data::RecordList> getRecordList() { DARABONBA_PTR_GET(recordList_, vector<Data::RecordList>) };
      inline Data& setRecordList(const vector<Data::RecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
      inline Data& setRecordList(vector<Data::RecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


      // secondTypeName Field Functions 
      bool hasSecondTypeName() const { return this->secondTypeName_ != nullptr;};
      void deleteSecondTypeName() { this->secondTypeName_ = nullptr;};
      inline string getSecondTypeName() const { DARABONBA_PTR_GET_DEFAULT(secondTypeName_, "") };
      inline Data& setSecondTypeName(string secondTypeName) { DARABONBA_PTR_SET_VALUE(secondTypeName_, secondTypeName) };


    protected:
      // The ID of the device.
      shared_ptr<string> deviceId_ {};
      // The name of the device.
      shared_ptr<string> deviceName_ {};
      // The level 1 meter type.
      shared_ptr<string> firstTypeName_ {};
      // The device parameters.
      shared_ptr<vector<Data::RecordList>> recordList_ {};
      // The level 2 meter type.
      shared_ptr<string> secondTypeName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDeviceInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDeviceInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDeviceInfoResponseBody::Data) };
    inline GetDeviceInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDeviceInfoResponseBody::Data) };
    inline GetDeviceInfoResponseBody& setData(const GetDeviceInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDeviceInfoResponseBody& setData(GetDeviceInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetDeviceInfoResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDeviceInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code returned for the request. A value of Success indicates that the request was successful. Other values indicate that the request failed. You can troubleshoot the error by viewing the error message returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetDeviceInfoResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
