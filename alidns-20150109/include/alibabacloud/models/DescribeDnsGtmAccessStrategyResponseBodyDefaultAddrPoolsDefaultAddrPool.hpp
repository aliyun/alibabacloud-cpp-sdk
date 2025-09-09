// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODYDEFAULTADDRPOOLSDEFAULTADDRPOOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODYDEFAULTADDRPOOLSDEFAULTADDRPOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& obj) { 
      DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool() = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool(const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool &) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool(DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool &&) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool() = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& operator=(const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool &) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& operator=(DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrCount_ != nullptr
        && this->id_ != nullptr && this->lbaWeight_ != nullptr && this->name_ != nullptr; };
    // addrCount Field Functions 
    bool hasAddrCount() const { return this->addrCount_ != nullptr;};
    void deleteAddrCount() { this->addrCount_ = nullptr;};
    inline int32_t addrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lbaWeight Field Functions 
    bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
    void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
    inline int32_t lbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The number of addresses in the address pool.
    std::shared_ptr<int32_t> addrCount_ = nullptr;
    // The ID of the address pool.
    std::shared_ptr<string> id_ = nullptr;
    // The weight of the address pool.
    std::shared_ptr<int32_t> lbaWeight_ = nullptr;
    // The name of the address pool.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
