// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEHOSTS_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEHOSTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleResponseBodyRuleHostsHostAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetRuleResponseBodyRuleHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyRuleHosts& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyRuleHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
    };
    GetRuleResponseBodyRuleHosts() = default ;
    GetRuleResponseBodyRuleHosts(const GetRuleResponseBodyRuleHosts &) = default ;
    GetRuleResponseBodyRuleHosts(GetRuleResponseBodyRuleHosts &&) = default ;
    GetRuleResponseBodyRuleHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyRuleHosts() = default ;
    GetRuleResponseBodyRuleHosts& operator=(const GetRuleResponseBodyRuleHosts &) = default ;
    GetRuleResponseBodyRuleHosts& operator=(GetRuleResponseBodyRuleHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccounts_ == nullptr
        && return this->hostId_ == nullptr; };
    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyRuleHostsHostAccounts> & hostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<Models::GetRuleResponseBodyRuleHostsHostAccounts>) };
    inline vector<Models::GetRuleResponseBodyRuleHostsHostAccounts> hostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<Models::GetRuleResponseBodyRuleHostsHostAccounts>) };
    inline GetRuleResponseBodyRuleHosts& setHostAccounts(const vector<Models::GetRuleResponseBodyRuleHostsHostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline GetRuleResponseBodyRuleHosts& setHostAccounts(vector<Models::GetRuleResponseBodyRuleHostsHostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline GetRuleResponseBodyRuleHosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


  protected:
    // The host accounts that the policy authorizes users to manage.
    std::shared_ptr<vector<Models::GetRuleResponseBodyRuleHostsHostAccounts>> hostAccounts_ = nullptr;
    // The ID of the host that the policy authorizes users to manage.
    std::shared_ptr<string> hostId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
