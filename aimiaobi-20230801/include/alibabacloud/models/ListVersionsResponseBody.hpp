// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListVersionsResponseBody() = default ;
    ListVersionsResponseBody(const ListVersionsResponseBody &) = default ;
    ListVersionsResponseBody(ListVersionsResponseBody &&) = default ;
    ListVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVersionsResponseBody() = default ;
    ListVersionsResponseBody& operator=(const ListVersionsResponseBody &) = default ;
    ListVersionsResponseBody& operator=(ListVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConcurrentCount, concurrentCount_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UseQuota, useQuota_);
        DARABONBA_PTR_TO_JSON(VersionDetail, versionDetail_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        DARABONBA_PTR_TO_JSON(VersionStatus, versionStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConcurrentCount, concurrentCount_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UseQuota, useQuota_);
        DARABONBA_PTR_FROM_JSON(VersionDetail, versionDetail_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        DARABONBA_PTR_FROM_JSON(VersionStatus, versionStatus_);
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
      virtual bool empty() const override { return this->concurrentCount_ == nullptr
        && this->endTime_ == nullptr && this->instanceCount_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr && this->productType_ == nullptr
        && this->quota_ == nullptr && this->startTime_ == nullptr && this->useQuota_ == nullptr && this->versionDetail_ == nullptr && this->versionName_ == nullptr
        && this->versionStatus_ == nullptr; };
      // concurrentCount Field Functions 
      bool hasConcurrentCount() const { return this->concurrentCount_ != nullptr;};
      void deleteConcurrentCount() { this->concurrentCount_ = nullptr;};
      inline int32_t getConcurrentCount() const { DARABONBA_PTR_GET_DEFAULT(concurrentCount_, 0) };
      inline Data& setConcurrentCount(int32_t concurrentCount) { DARABONBA_PTR_SET_VALUE(concurrentCount_, concurrentCount) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Data& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
      inline Data& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // useQuota Field Functions 
      bool hasUseQuota() const { return this->useQuota_ != nullptr;};
      void deleteUseQuota() { this->useQuota_ = nullptr;};
      inline int32_t getUseQuota() const { DARABONBA_PTR_GET_DEFAULT(useQuota_, 0) };
      inline Data& setUseQuota(int32_t useQuota) { DARABONBA_PTR_SET_VALUE(useQuota_, useQuota) };


      // versionDetail Field Functions 
      bool hasVersionDetail() const { return this->versionDetail_ != nullptr;};
      void deleteVersionDetail() { this->versionDetail_ = nullptr;};
      inline string getVersionDetail() const { DARABONBA_PTR_GET_DEFAULT(versionDetail_, "") };
      inline Data& setVersionDetail(string versionDetail) { DARABONBA_PTR_SET_VALUE(versionDetail_, versionDetail) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Data& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      // versionStatus Field Functions 
      bool hasVersionStatus() const { return this->versionStatus_ != nullptr;};
      void deleteVersionStatus() { this->versionStatus_ = nullptr;};
      inline int32_t getVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(versionStatus_, 0) };
      inline Data& setVersionStatus(int32_t versionStatus) { DARABONBA_PTR_SET_VALUE(versionStatus_, versionStatus) };


    protected:
      shared_ptr<int32_t> concurrentCount_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<int32_t> instanceCount_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> productType_ {};
      shared_ptr<int32_t> quota_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<int32_t> useQuota_ {};
      shared_ptr<string> versionDetail_ {};
      shared_ptr<string> versionName_ {};
      shared_ptr<int32_t> versionStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVersionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListVersionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListVersionsResponseBody::Data>) };
    inline vector<ListVersionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListVersionsResponseBody::Data>) };
    inline ListVersionsResponseBody& setData(const vector<ListVersionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVersionsResponseBody& setData(vector<ListVersionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVersionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVersionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListVersionsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
