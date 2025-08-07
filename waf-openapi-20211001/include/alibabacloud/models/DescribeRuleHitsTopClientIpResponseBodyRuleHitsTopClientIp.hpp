// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPCLIENTIPRESPONSEBODYRULEHITSTOPCLIENTIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPCLIENTIPRESPONSEBODYRULEHITSTOPCLIENTIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp() = default ;
    DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp(const DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp &) = default ;
    DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp(DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp &&) = default ;
    DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp() = default ;
    DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp& operator=(const DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp &) = default ;
    DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp& operator=(DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->count_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The IP address of the service client.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The number of attacks that are initiated from the IP address.
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
