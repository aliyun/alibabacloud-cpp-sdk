// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHoneypotAttackerPortraitResponseBodyListNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAttackerPortraitResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAttackerPortraitResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(AttackCount, attackCount_);
      DARABONBA_PTR_TO_JSON(Browser, browser_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(PortraitId, portraitId_);
      DARABONBA_PTR_TO_JSON(Social, social_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAttackerPortraitResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackCount, attackCount_);
      DARABONBA_PTR_FROM_JSON(Browser, browser_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(PortraitId, portraitId_);
      DARABONBA_PTR_FROM_JSON(Social, social_);
    };
    ListHoneypotAttackerPortraitResponseBodyList() = default ;
    ListHoneypotAttackerPortraitResponseBodyList(const ListHoneypotAttackerPortraitResponseBodyList &) = default ;
    ListHoneypotAttackerPortraitResponseBodyList(ListHoneypotAttackerPortraitResponseBodyList &&) = default ;
    ListHoneypotAttackerPortraitResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAttackerPortraitResponseBodyList() = default ;
    ListHoneypotAttackerPortraitResponseBodyList& operator=(const ListHoneypotAttackerPortraitResponseBodyList &) = default ;
    ListHoneypotAttackerPortraitResponseBodyList& operator=(ListHoneypotAttackerPortraitResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackCount_ != nullptr
        && this->browser_ != nullptr && this->host_ != nullptr && this->lastTime_ != nullptr && this->network_ != nullptr && this->portraitId_ != nullptr
        && this->social_ != nullptr; };
    // attackCount Field Functions 
    bool hasAttackCount() const { return this->attackCount_ != nullptr;};
    void deleteAttackCount() { this->attackCount_ = nullptr;};
    inline int32_t attackCount() const { DARABONBA_PTR_GET_DEFAULT(attackCount_, 0) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setAttackCount(int32_t attackCount) { DARABONBA_PTR_SET_VALUE(attackCount_, attackCount) };


    // browser Field Functions 
    bool hasBrowser() const { return this->browser_ != nullptr;};
    void deleteBrowser() { this->browser_ = nullptr;};
    inline const vector<string> & browser() const { DARABONBA_PTR_GET_CONST(browser_, vector<string>) };
    inline vector<string> browser() { DARABONBA_PTR_GET(browser_, vector<string>) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setBrowser(const vector<string> & browser) { DARABONBA_PTR_SET_VALUE(browser_, browser) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setBrowser(vector<string> && browser) { DARABONBA_PTR_SET_RVALUE(browser_, browser) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline const vector<string> & host() const { DARABONBA_PTR_GET_CONST(host_, vector<string>) };
    inline vector<string> host() { DARABONBA_PTR_GET(host_, vector<string>) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setHost(const vector<string> & host) { DARABONBA_PTR_SET_VALUE(host_, host) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setHost(vector<string> && host) { DARABONBA_PTR_SET_RVALUE(host_, host) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::ListHoneypotAttackerPortraitResponseBodyListNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::ListHoneypotAttackerPortraitResponseBodyListNetwork) };
    inline Models::ListHoneypotAttackerPortraitResponseBodyListNetwork network() { DARABONBA_PTR_GET(network_, Models::ListHoneypotAttackerPortraitResponseBodyListNetwork) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setNetwork(const Models::ListHoneypotAttackerPortraitResponseBodyListNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setNetwork(Models::ListHoneypotAttackerPortraitResponseBodyListNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // portraitId Field Functions 
    bool hasPortraitId() const { return this->portraitId_ != nullptr;};
    void deletePortraitId() { this->portraitId_ = nullptr;};
    inline string portraitId() const { DARABONBA_PTR_GET_DEFAULT(portraitId_, "") };
    inline ListHoneypotAttackerPortraitResponseBodyList& setPortraitId(string portraitId) { DARABONBA_PTR_SET_VALUE(portraitId_, portraitId) };


    // social Field Functions 
    bool hasSocial() const { return this->social_ != nullptr;};
    void deleteSocial() { this->social_ = nullptr;};
    inline const vector<string> & social() const { DARABONBA_PTR_GET_CONST(social_, vector<string>) };
    inline vector<string> social() { DARABONBA_PTR_GET(social_, vector<string>) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setSocial(const vector<string> & social) { DARABONBA_PTR_SET_VALUE(social_, social) };
    inline ListHoneypotAttackerPortraitResponseBodyList& setSocial(vector<string> && social) { DARABONBA_PTR_SET_RVALUE(social_, social) };


  protected:
    // The number of attacks.
    std::shared_ptr<int32_t> attackCount_ = nullptr;
    // The information about the browsers of the attack source.
    std::shared_ptr<vector<string>> browser_ = nullptr;
    // The information about the hosts of the attack source.
    std::shared_ptr<vector<string>> host_ = nullptr;
    // The timestamp at which the attack was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The network information about the attack source.
    std::shared_ptr<Models::ListHoneypotAttackerPortraitResponseBodyListNetwork> network_ = nullptr;
    // The attacker profile ID.
    std::shared_ptr<string> portraitId_ = nullptr;
    // The social information about the attack source.
    std::shared_ptr<vector<string>> social_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
