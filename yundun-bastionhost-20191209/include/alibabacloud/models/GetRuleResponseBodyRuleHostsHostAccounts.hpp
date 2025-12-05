// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEHOSTSHOSTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEHOSTSHOSTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetRuleResponseBodyRuleHostsHostAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyRuleHostsHostAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyRuleHostsHostAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
    };
    GetRuleResponseBodyRuleHostsHostAccounts() = default ;
    GetRuleResponseBodyRuleHostsHostAccounts(const GetRuleResponseBodyRuleHostsHostAccounts &) = default ;
    GetRuleResponseBodyRuleHostsHostAccounts(GetRuleResponseBodyRuleHostsHostAccounts &&) = default ;
    GetRuleResponseBodyRuleHostsHostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyRuleHostsHostAccounts() = default ;
    GetRuleResponseBodyRuleHostsHostAccounts& operator=(const GetRuleResponseBodyRuleHostsHostAccounts &) = default ;
    GetRuleResponseBodyRuleHostsHostAccounts& operator=(GetRuleResponseBodyRuleHostsHostAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountId_ == nullptr; };
    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline GetRuleResponseBodyRuleHostsHostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


  protected:
    // The ID of the host account that the policy authorizes users to manage.
    std::shared_ptr<string> hostAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
