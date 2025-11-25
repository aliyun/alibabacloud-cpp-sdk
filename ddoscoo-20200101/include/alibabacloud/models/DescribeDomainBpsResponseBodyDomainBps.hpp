// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSRESPONSEBODYDOMAINBPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSRESPONSEBODYDOMAINBPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainBpsResponseBodyDomainBps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsResponseBodyDomainBps& obj) { 
      DARABONBA_PTR_TO_JSON(InBps, inBps_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(OutBps, outBps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsResponseBodyDomainBps& obj) { 
      DARABONBA_PTR_FROM_JSON(InBps, inBps_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
    };
    DescribeDomainBpsResponseBodyDomainBps() = default ;
    DescribeDomainBpsResponseBodyDomainBps(const DescribeDomainBpsResponseBodyDomainBps &) = default ;
    DescribeDomainBpsResponseBodyDomainBps(DescribeDomainBpsResponseBodyDomainBps &&) = default ;
    DescribeDomainBpsResponseBodyDomainBps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsResponseBodyDomainBps() = default ;
    DescribeDomainBpsResponseBodyDomainBps& operator=(const DescribeDomainBpsResponseBodyDomainBps &) = default ;
    DescribeDomainBpsResponseBodyDomainBps& operator=(DescribeDomainBpsResponseBodyDomainBps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inBps_ == nullptr
        && return this->index_ == nullptr && return this->outBps_ == nullptr; };
    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline int64_t inBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
    inline DescribeDomainBpsResponseBodyDomainBps& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribeDomainBpsResponseBodyDomainBps& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline int64_t outBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
    inline DescribeDomainBpsResponseBodyDomainBps& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


  protected:
    // The inbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> inBps_ = nullptr;
    // The index number of the returned data.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The outbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> outBps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
