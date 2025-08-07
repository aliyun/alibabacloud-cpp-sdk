// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPUARESPONSEBODYRULEHITSTOPUA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPUARESPONSEBODYRULEHITSTOPUA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Ua, ua_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Ua, ua_);
    };
    DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa() = default ;
    DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa(const DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa &) = default ;
    DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa(DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa &&) = default ;
    DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa() = default ;
    DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa& operator=(const DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa &) = default ;
    DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa& operator=(DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->ua_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ua Field Functions 
    bool hasUa() const { return this->ua_ != nullptr;};
    void deleteUa() { this->ua_ = nullptr;};
    inline string ua() const { DARABONBA_PTR_GET_DEFAULT(ua_, "") };
    inline DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa& setUa(string ua) { DARABONBA_PTR_SET_VALUE(ua_, ua) };


  protected:
    // The number of attacks that are initiated from the IP address.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The user agent.
    std::shared_ptr<string> ua_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
