// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSACCOUNTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSACCOUNTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAccountSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAccountSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAccountSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsAccountSummaryResponseBody() = default ;
    DescribePdnsAccountSummaryResponseBody(const DescribePdnsAccountSummaryResponseBody &) = default ;
    DescribePdnsAccountSummaryResponseBody(DescribePdnsAccountSummaryResponseBody &&) = default ;
    DescribePdnsAccountSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAccountSummaryResponseBody() = default ;
    DescribePdnsAccountSummaryResponseBody& operator=(const DescribePdnsAccountSummaryResponseBody &) = default ;
    DescribePdnsAccountSummaryResponseBody& operator=(DescribePdnsAccountSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
        DARABONBA_PTR_TO_JSON(HttpCount, httpCount_);
        DARABONBA_PTR_TO_JSON(HttpsCount, httpsCount_);
        DARABONBA_PTR_TO_JSON(SubDomainCount, subDomainCount_);
        DARABONBA_PTR_TO_JSON(ThreatCount, threatCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
        DARABONBA_PTR_FROM_JSON(HttpCount, httpCount_);
        DARABONBA_PTR_FROM_JSON(HttpsCount, httpsCount_);
        DARABONBA_PTR_FROM_JSON(SubDomainCount, subDomainCount_);
        DARABONBA_PTR_FROM_JSON(ThreatCount, threatCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->domainCount_ == nullptr
        && this->httpCount_ == nullptr && this->httpsCount_ == nullptr && this->subDomainCount_ == nullptr && this->threatCount_ == nullptr && this->totalCount_ == nullptr
        && this->userId_ == nullptr; };
      // domainCount Field Functions 
      bool hasDomainCount() const { return this->domainCount_ != nullptr;};
      void deleteDomainCount() { this->domainCount_ = nullptr;};
      inline int64_t getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
      inline Data& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


      // httpCount Field Functions 
      bool hasHttpCount() const { return this->httpCount_ != nullptr;};
      void deleteHttpCount() { this->httpCount_ = nullptr;};
      inline int64_t getHttpCount() const { DARABONBA_PTR_GET_DEFAULT(httpCount_, 0L) };
      inline Data& setHttpCount(int64_t httpCount) { DARABONBA_PTR_SET_VALUE(httpCount_, httpCount) };


      // httpsCount Field Functions 
      bool hasHttpsCount() const { return this->httpsCount_ != nullptr;};
      void deleteHttpsCount() { this->httpsCount_ = nullptr;};
      inline int64_t getHttpsCount() const { DARABONBA_PTR_GET_DEFAULT(httpsCount_, 0L) };
      inline Data& setHttpsCount(int64_t httpsCount) { DARABONBA_PTR_SET_VALUE(httpsCount_, httpsCount) };


      // subDomainCount Field Functions 
      bool hasSubDomainCount() const { return this->subDomainCount_ != nullptr;};
      void deleteSubDomainCount() { this->subDomainCount_ = nullptr;};
      inline int64_t getSubDomainCount() const { DARABONBA_PTR_GET_DEFAULT(subDomainCount_, 0L) };
      inline Data& setSubDomainCount(int64_t subDomainCount) { DARABONBA_PTR_SET_VALUE(subDomainCount_, subDomainCount) };


      // threatCount Field Functions 
      bool hasThreatCount() const { return this->threatCount_ != nullptr;};
      void deleteThreatCount() { this->threatCount_ = nullptr;};
      inline int64_t getThreatCount() const { DARABONBA_PTR_GET_DEFAULT(threatCount_, 0L) };
      inline Data& setThreatCount(int64_t threatCount) { DARABONBA_PTR_SET_VALUE(threatCount_, threatCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Data& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> domainCount_ {};
      shared_ptr<int64_t> httpCount_ {};
      shared_ptr<int64_t> httpsCount_ {};
      shared_ptr<int64_t> subDomainCount_ {};
      shared_ptr<int64_t> threatCount_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePdnsAccountSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePdnsAccountSummaryResponseBody::Data) };
    inline DescribePdnsAccountSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePdnsAccountSummaryResponseBody::Data) };
    inline DescribePdnsAccountSummaryResponseBody& setData(const DescribePdnsAccountSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePdnsAccountSummaryResponseBody& setData(DescribePdnsAccountSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsAccountSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribePdnsAccountSummaryResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
