// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListListenersByConfigResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersByConfigResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MatchRuleName, matchRuleName_);
      DARABONBA_PTR_TO_JSON(MatchRuleType, matchRuleType_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersByConfigResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MatchRuleName, matchRuleName_);
      DARABONBA_PTR_FROM_JSON(MatchRuleType, matchRuleType_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListListenersByConfigResponseBodyListeners() = default ;
    ListListenersByConfigResponseBodyListeners(const ListListenersByConfigResponseBodyListeners &) = default ;
    ListListenersByConfigResponseBodyListeners(ListListenersByConfigResponseBodyListeners &&) = default ;
    ListListenersByConfigResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersByConfigResponseBodyListeners() = default ;
    ListListenersByConfigResponseBodyListeners& operator=(const ListListenersByConfigResponseBodyListeners &) = default ;
    ListListenersByConfigResponseBodyListeners& operator=(ListListenersByConfigResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ip_ != nullptr
        && this->labels_ != nullptr && this->matchRuleName_ != nullptr && this->matchRuleType_ != nullptr && this->md5_ != nullptr && this->status_ != nullptr
        && this->version_ != nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListListenersByConfigResponseBodyListeners& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline ListListenersByConfigResponseBodyListeners& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListListenersByConfigResponseBodyListeners& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // matchRuleName Field Functions 
    bool hasMatchRuleName() const { return this->matchRuleName_ != nullptr;};
    void deleteMatchRuleName() { this->matchRuleName_ = nullptr;};
    inline string matchRuleName() const { DARABONBA_PTR_GET_DEFAULT(matchRuleName_, "") };
    inline ListListenersByConfigResponseBodyListeners& setMatchRuleName(string matchRuleName) { DARABONBA_PTR_SET_VALUE(matchRuleName_, matchRuleName) };


    // matchRuleType Field Functions 
    bool hasMatchRuleType() const { return this->matchRuleType_ != nullptr;};
    void deleteMatchRuleType() { this->matchRuleType_ = nullptr;};
    inline string matchRuleType() const { DARABONBA_PTR_GET_DEFAULT(matchRuleType_, "") };
    inline ListListenersByConfigResponseBodyListeners& setMatchRuleType(string matchRuleType) { DARABONBA_PTR_SET_VALUE(matchRuleType_, matchRuleType) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListListenersByConfigResponseBodyListeners& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListListenersByConfigResponseBodyListeners& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListListenersByConfigResponseBodyListeners& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The label of the listener.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    std::shared_ptr<string> matchRuleName_ = nullptr;
    std::shared_ptr<string> matchRuleType_ = nullptr;
    // The verification string.
    std::shared_ptr<string> md5_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
    // The current version of the listener. Valid values: gray and normal.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
