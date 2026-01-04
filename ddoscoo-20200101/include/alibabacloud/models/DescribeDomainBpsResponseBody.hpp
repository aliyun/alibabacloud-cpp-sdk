// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainBpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainBps, domainBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainBps, domainBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainBpsResponseBody() = default ;
    DescribeDomainBpsResponseBody(const DescribeDomainBpsResponseBody &) = default ;
    DescribeDomainBpsResponseBody(DescribeDomainBpsResponseBody &&) = default ;
    DescribeDomainBpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsResponseBody() = default ;
    DescribeDomainBpsResponseBody& operator=(const DescribeDomainBpsResponseBody &) = default ;
    DescribeDomainBpsResponseBody& operator=(DescribeDomainBpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainBps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainBps& obj) { 
        DARABONBA_PTR_TO_JSON(InBps, inBps_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(OutBps, outBps_);
      };
      friend void from_json(const Darabonba::Json& j, DomainBps& obj) { 
        DARABONBA_PTR_FROM_JSON(InBps, inBps_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
      };
      DomainBps() = default ;
      DomainBps(const DomainBps &) = default ;
      DomainBps(DomainBps &&) = default ;
      DomainBps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainBps() = default ;
      DomainBps& operator=(const DomainBps &) = default ;
      DomainBps& operator=(DomainBps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inBps_ == nullptr
        && this->index_ == nullptr && this->outBps_ == nullptr; };
      // inBps Field Functions 
      bool hasInBps() const { return this->inBps_ != nullptr;};
      void deleteInBps() { this->inBps_ = nullptr;};
      inline int64_t getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
      inline DomainBps& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline DomainBps& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // outBps Field Functions 
      bool hasOutBps() const { return this->outBps_ != nullptr;};
      void deleteOutBps() { this->outBps_ = nullptr;};
      inline int64_t getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
      inline DomainBps& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    protected:
      // The inbound bandwidth. Unit: bit/s.
      shared_ptr<int64_t> inBps_ {};
      // The index number of the returned data.
      shared_ptr<int64_t> index_ {};
      // The outbound bandwidth. Unit: bit/s.
      shared_ptr<int64_t> outBps_ {};
    };

    virtual bool empty() const override { return this->domainBps_ == nullptr
        && this->requestId_ == nullptr; };
    // domainBps Field Functions 
    bool hasDomainBps() const { return this->domainBps_ != nullptr;};
    void deleteDomainBps() { this->domainBps_ = nullptr;};
    inline const vector<DescribeDomainBpsResponseBody::DomainBps> & getDomainBps() const { DARABONBA_PTR_GET_CONST(domainBps_, vector<DescribeDomainBpsResponseBody::DomainBps>) };
    inline vector<DescribeDomainBpsResponseBody::DomainBps> getDomainBps() { DARABONBA_PTR_GET(domainBps_, vector<DescribeDomainBpsResponseBody::DomainBps>) };
    inline DescribeDomainBpsResponseBody& setDomainBps(const vector<DescribeDomainBpsResponseBody::DomainBps> & domainBps) { DARABONBA_PTR_SET_VALUE(domainBps_, domainBps) };
    inline DescribeDomainBpsResponseBody& setDomainBps(vector<DescribeDomainBpsResponseBody::DomainBps> && domainBps) { DARABONBA_PTR_SET_RVALUE(domainBps_, domainBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainBpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bandwidths.
    shared_ptr<vector<DescribeDomainBpsResponseBody::DomainBps>> domainBps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
