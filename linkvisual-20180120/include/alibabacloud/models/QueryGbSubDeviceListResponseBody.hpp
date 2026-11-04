// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGBSUBDEVICELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGBSUBDEVICELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryGbSubDeviceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGbSubDeviceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGbSubDeviceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryGbSubDeviceListResponseBody() = default ;
    QueryGbSubDeviceListResponseBody(const QueryGbSubDeviceListResponseBody &) = default ;
    QueryGbSubDeviceListResponseBody(QueryGbSubDeviceListResponseBody &&) = default ;
    QueryGbSubDeviceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGbSubDeviceListResponseBody() = default ;
    QueryGbSubDeviceListResponseBody& operator=(const QueryGbSubDeviceListResponseBody &) = default ;
    QueryGbSubDeviceListResponseBody& operator=(QueryGbSubDeviceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GbSubDeviceList, gbSubDeviceList_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GbSubDeviceList, gbSubDeviceList_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class GbSubDeviceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GbSubDeviceList& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceEnable, deviceEnable_);
          DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
        };
        friend void from_json(const Darabonba::Json& j, GbSubDeviceList& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceEnable, deviceEnable_);
          DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
        };
        GbSubDeviceList() = default ;
        GbSubDeviceList(const GbSubDeviceList &) = default ;
        GbSubDeviceList(GbSubDeviceList &&) = default ;
        GbSubDeviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GbSubDeviceList() = default ;
        GbSubDeviceList& operator=(const GbSubDeviceList &) = default ;
        GbSubDeviceList& operator=(GbSubDeviceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceEnable_ == nullptr
        && this->deviceId_ == nullptr && this->deviceName_ == nullptr && this->iotId_ == nullptr && this->productKey_ == nullptr; };
        // deviceEnable Field Functions 
        bool hasDeviceEnable() const { return this->deviceEnable_ != nullptr;};
        void deleteDeviceEnable() { this->deviceEnable_ = nullptr;};
        inline int32_t getDeviceEnable() const { DARABONBA_PTR_GET_DEFAULT(deviceEnable_, 0) };
        inline GbSubDeviceList& setDeviceEnable(int32_t deviceEnable) { DARABONBA_PTR_SET_VALUE(deviceEnable_, deviceEnable) };


        // deviceId Field Functions 
        bool hasDeviceId() const { return this->deviceId_ != nullptr;};
        void deleteDeviceId() { this->deviceId_ = nullptr;};
        inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
        inline GbSubDeviceList& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline GbSubDeviceList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline GbSubDeviceList& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // productKey Field Functions 
        bool hasProductKey() const { return this->productKey_ != nullptr;};
        void deleteProductKey() { this->productKey_ = nullptr;};
        inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
        inline GbSubDeviceList& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


      protected:
        shared_ptr<int32_t> deviceEnable_ {};
        shared_ptr<string> deviceId_ {};
        shared_ptr<string> deviceName_ {};
        shared_ptr<string> iotId_ {};
        shared_ptr<string> productKey_ {};
      };

      virtual bool empty() const override { return this->gbSubDeviceList_ == nullptr
        && this->total_ == nullptr; };
      // gbSubDeviceList Field Functions 
      bool hasGbSubDeviceList() const { return this->gbSubDeviceList_ != nullptr;};
      void deleteGbSubDeviceList() { this->gbSubDeviceList_ = nullptr;};
      inline const vector<Data::GbSubDeviceList> & getGbSubDeviceList() const { DARABONBA_PTR_GET_CONST(gbSubDeviceList_, vector<Data::GbSubDeviceList>) };
      inline vector<Data::GbSubDeviceList> getGbSubDeviceList() { DARABONBA_PTR_GET(gbSubDeviceList_, vector<Data::GbSubDeviceList>) };
      inline Data& setGbSubDeviceList(const vector<Data::GbSubDeviceList> & gbSubDeviceList) { DARABONBA_PTR_SET_VALUE(gbSubDeviceList_, gbSubDeviceList) };
      inline Data& setGbSubDeviceList(vector<Data::GbSubDeviceList> && gbSubDeviceList) { DARABONBA_PTR_SET_RVALUE(gbSubDeviceList_, gbSubDeviceList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::GbSubDeviceList>> gbSubDeviceList_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryGbSubDeviceListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryGbSubDeviceListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryGbSubDeviceListResponseBody::Data) };
    inline QueryGbSubDeviceListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryGbSubDeviceListResponseBody::Data) };
    inline QueryGbSubDeviceListResponseBody& setData(const QueryGbSubDeviceListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryGbSubDeviceListResponseBody& setData(QueryGbSubDeviceListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryGbSubDeviceListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGbSubDeviceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryGbSubDeviceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryGbSubDeviceListResponseBody::Data> data_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
