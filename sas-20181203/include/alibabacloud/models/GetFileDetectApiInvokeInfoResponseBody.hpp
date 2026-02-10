// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTAPIINVOKEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTAPIINVOKEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectApiInvokeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectApiInvokeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectApiInvokeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileDetectApiInvokeInfoResponseBody() = default ;
    GetFileDetectApiInvokeInfoResponseBody(const GetFileDetectApiInvokeInfoResponseBody &) = default ;
    GetFileDetectApiInvokeInfoResponseBody(GetFileDetectApiInvokeInfoResponseBody &&) = default ;
    GetFileDetectApiInvokeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectApiInvokeInfoResponseBody() = default ;
    GetFileDetectApiInvokeInfoResponseBody& operator=(const GetFileDetectApiInvokeInfoResponseBody &) = default ;
    GetFileDetectApiInvokeInfoResponseBody& operator=(GetFileDetectApiInvokeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthCount, authCount_);
        DARABONBA_PTR_TO_JSON(AuthCountInSaleVersion, authCountInSaleVersion_);
        DARABONBA_PTR_TO_JSON(Expire, expire_);
        DARABONBA_PTR_TO_JSON(FlowRate, flowRate_);
        DARABONBA_PTR_TO_JSON(InvokeCount, invokeCount_);
        DARABONBA_PTR_TO_JSON(InvokeCountInSaleVersion, invokeCountInSaleVersion_);
        DARABONBA_PTR_TO_JSON(RemainAuthCount, remainAuthCount_);
        DARABONBA_PTR_TO_JSON(SaleVersion, saleVersion_);
        DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthCount, authCount_);
        DARABONBA_PTR_FROM_JSON(AuthCountInSaleVersion, authCountInSaleVersion_);
        DARABONBA_PTR_FROM_JSON(Expire, expire_);
        DARABONBA_PTR_FROM_JSON(FlowRate, flowRate_);
        DARABONBA_PTR_FROM_JSON(InvokeCount, invokeCount_);
        DARABONBA_PTR_FROM_JSON(InvokeCountInSaleVersion, invokeCountInSaleVersion_);
        DARABONBA_PTR_FROM_JSON(RemainAuthCount, remainAuthCount_);
        DARABONBA_PTR_FROM_JSON(SaleVersion, saleVersion_);
        DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
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
      virtual bool empty() const override { return this->authCount_ == nullptr
        && this->authCountInSaleVersion_ == nullptr && this->expire_ == nullptr && this->flowRate_ == nullptr && this->invokeCount_ == nullptr && this->invokeCountInSaleVersion_ == nullptr
        && this->remainAuthCount_ == nullptr && this->saleVersion_ == nullptr && this->timeUnit_ == nullptr; };
      // authCount Field Functions 
      bool hasAuthCount() const { return this->authCount_ != nullptr;};
      void deleteAuthCount() { this->authCount_ = nullptr;};
      inline int64_t getAuthCount() const { DARABONBA_PTR_GET_DEFAULT(authCount_, 0L) };
      inline Data& setAuthCount(int64_t authCount) { DARABONBA_PTR_SET_VALUE(authCount_, authCount) };


      // authCountInSaleVersion Field Functions 
      bool hasAuthCountInSaleVersion() const { return this->authCountInSaleVersion_ != nullptr;};
      void deleteAuthCountInSaleVersion() { this->authCountInSaleVersion_ = nullptr;};
      inline int64_t getAuthCountInSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(authCountInSaleVersion_, 0L) };
      inline Data& setAuthCountInSaleVersion(int64_t authCountInSaleVersion) { DARABONBA_PTR_SET_VALUE(authCountInSaleVersion_, authCountInSaleVersion) };


      // expire Field Functions 
      bool hasExpire() const { return this->expire_ != nullptr;};
      void deleteExpire() { this->expire_ = nullptr;};
      inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
      inline Data& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


      // flowRate Field Functions 
      bool hasFlowRate() const { return this->flowRate_ != nullptr;};
      void deleteFlowRate() { this->flowRate_ = nullptr;};
      inline int32_t getFlowRate() const { DARABONBA_PTR_GET_DEFAULT(flowRate_, 0) };
      inline Data& setFlowRate(int32_t flowRate) { DARABONBA_PTR_SET_VALUE(flowRate_, flowRate) };


      // invokeCount Field Functions 
      bool hasInvokeCount() const { return this->invokeCount_ != nullptr;};
      void deleteInvokeCount() { this->invokeCount_ = nullptr;};
      inline int64_t getInvokeCount() const { DARABONBA_PTR_GET_DEFAULT(invokeCount_, 0L) };
      inline Data& setInvokeCount(int64_t invokeCount) { DARABONBA_PTR_SET_VALUE(invokeCount_, invokeCount) };


      // invokeCountInSaleVersion Field Functions 
      bool hasInvokeCountInSaleVersion() const { return this->invokeCountInSaleVersion_ != nullptr;};
      void deleteInvokeCountInSaleVersion() { this->invokeCountInSaleVersion_ = nullptr;};
      inline int64_t getInvokeCountInSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(invokeCountInSaleVersion_, 0L) };
      inline Data& setInvokeCountInSaleVersion(int64_t invokeCountInSaleVersion) { DARABONBA_PTR_SET_VALUE(invokeCountInSaleVersion_, invokeCountInSaleVersion) };


      // remainAuthCount Field Functions 
      bool hasRemainAuthCount() const { return this->remainAuthCount_ != nullptr;};
      void deleteRemainAuthCount() { this->remainAuthCount_ = nullptr;};
      inline int64_t getRemainAuthCount() const { DARABONBA_PTR_GET_DEFAULT(remainAuthCount_, 0L) };
      inline Data& setRemainAuthCount(int64_t remainAuthCount) { DARABONBA_PTR_SET_VALUE(remainAuthCount_, remainAuthCount) };


      // saleVersion Field Functions 
      bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
      void deleteSaleVersion() { this->saleVersion_ = nullptr;};
      inline int32_t getSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, 0) };
      inline Data& setSaleVersion(int32_t saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline Data& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    protected:
      // The total number of authorizations.
      shared_ptr<int64_t> authCount_ {};
      // The total number of authorizations(excluding trials).
      shared_ptr<int64_t> authCountInSaleVersion_ {};
      // The timestamp of the expiration date of the authorization number.
      shared_ptr<int64_t> expire_ {};
      // The frequency of calls.
      shared_ptr<int32_t> flowRate_ {};
      // The number of authorizations used.
      shared_ptr<int64_t> invokeCount_ {};
      // The number of authorizations used(excluding trials).
      shared_ptr<int64_t> invokeCountInSaleVersion_ {};
      // The number of remaining authorizations.
      shared_ptr<int64_t> remainAuthCount_ {};
      // The Authorized Version. Valid values include:
      // 
      // * **1:** trial version
      // * **2:** Enterprise Edition
      shared_ptr<int32_t> saleVersion_ {};
      // The time unit of the frequency limit. Value:
      // 
      // * **SECONDS**
      // * **MINUTES**
      shared_ptr<string> timeUnit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileDetectApiInvokeInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileDetectApiInvokeInfoResponseBody::Data) };
    inline GetFileDetectApiInvokeInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileDetectApiInvokeInfoResponseBody::Data) };
    inline GetFileDetectApiInvokeInfoResponseBody& setData(const GetFileDetectApiInvokeInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileDetectApiInvokeInfoResponseBody& setData(GetFileDetectApiInvokeInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDetectApiInvokeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returns the response body.
    shared_ptr<GetFileDetectApiInvokeInfoResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
