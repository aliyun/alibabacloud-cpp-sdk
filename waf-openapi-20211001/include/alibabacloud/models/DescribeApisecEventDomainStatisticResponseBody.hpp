// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTDOMAINSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTDOMAINSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecEventDomainStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecEventDomainStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecEventDomainStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecEventDomainStatisticResponseBody() = default ;
    DescribeApisecEventDomainStatisticResponseBody(const DescribeApisecEventDomainStatisticResponseBody &) = default ;
    DescribeApisecEventDomainStatisticResponseBody(DescribeApisecEventDomainStatisticResponseBody &&) = default ;
    DescribeApisecEventDomainStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecEventDomainStatisticResponseBody() = default ;
    DescribeApisecEventDomainStatisticResponseBody& operator=(const DescribeApisecEventDomainStatisticResponseBody &) = default ;
    DescribeApisecEventDomainStatisticResponseBody& operator=(DescribeApisecEventDomainStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiCount, apiCount_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(High, high_);
        DARABONBA_PTR_TO_JSON(Low, low_);
        DARABONBA_PTR_TO_JSON(Medium, medium_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiCount, apiCount_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(High, high_);
        DARABONBA_PTR_FROM_JSON(Low, low_);
        DARABONBA_PTR_FROM_JSON(Medium, medium_);
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
      virtual bool empty() const override { return this->apiCount_ == nullptr
        && this->domain_ == nullptr && this->high_ == nullptr && this->low_ == nullptr && this->medium_ == nullptr; };
      // apiCount Field Functions 
      bool hasApiCount() const { return this->apiCount_ != nullptr;};
      void deleteApiCount() { this->apiCount_ = nullptr;};
      inline int64_t getApiCount() const { DARABONBA_PTR_GET_DEFAULT(apiCount_, 0L) };
      inline Data& setApiCount(int64_t apiCount) { DARABONBA_PTR_SET_VALUE(apiCount_, apiCount) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Data& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // high Field Functions 
      bool hasHigh() const { return this->high_ != nullptr;};
      void deleteHigh() { this->high_ = nullptr;};
      inline int64_t getHigh() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
      inline Data& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


      // low Field Functions 
      bool hasLow() const { return this->low_ != nullptr;};
      void deleteLow() { this->low_ = nullptr;};
      inline int64_t getLow() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
      inline Data& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


      // medium Field Functions 
      bool hasMedium() const { return this->medium_ != nullptr;};
      void deleteMedium() { this->medium_ = nullptr;};
      inline int64_t getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
      inline Data& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


    protected:
      // The number of APIs.
      shared_ptr<int64_t> apiCount_ {};
      // The domain name.
      shared_ptr<string> domain_ {};
      // The number of high-risk security events.
      shared_ptr<int64_t> high_ {};
      // The number of low-risk security events.
      shared_ptr<int64_t> low_ {};
      // The number of medium-risk security events.
      shared_ptr<int64_t> medium_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecEventDomainStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecEventDomainStatisticResponseBody::Data>) };
    inline vector<DescribeApisecEventDomainStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecEventDomainStatisticResponseBody::Data>) };
    inline DescribeApisecEventDomainStatisticResponseBody& setData(const vector<DescribeApisecEventDomainStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecEventDomainStatisticResponseBody& setData(vector<DescribeApisecEventDomainStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecEventDomainStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeApisecEventDomainStatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response parameters.
    shared_ptr<vector<DescribeApisecEventDomainStatisticResponseBody::Data>> data_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
