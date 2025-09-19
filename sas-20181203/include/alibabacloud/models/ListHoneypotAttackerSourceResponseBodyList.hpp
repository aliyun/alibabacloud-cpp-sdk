// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERSOURCERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERSOURCERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAttackerSourceResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAttackerSourceResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(LastTargetHoneypot, lastTargetHoneypot_);
      DARABONBA_PTR_TO_JSON(LastTargetIp, lastTargetIp_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAttackerSourceResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(LastTargetHoneypot, lastTargetHoneypot_);
      DARABONBA_PTR_FROM_JSON(LastTargetIp, lastTargetIp_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
    };
    ListHoneypotAttackerSourceResponseBodyList() = default ;
    ListHoneypotAttackerSourceResponseBodyList(const ListHoneypotAttackerSourceResponseBodyList &) = default ;
    ListHoneypotAttackerSourceResponseBodyList(ListHoneypotAttackerSourceResponseBodyList &&) = default ;
    ListHoneypotAttackerSourceResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAttackerSourceResponseBodyList() = default ;
    ListHoneypotAttackerSourceResponseBodyList& operator=(const ListHoneypotAttackerSourceResponseBodyList &) = default ;
    ListHoneypotAttackerSourceResponseBodyList& operator=(ListHoneypotAttackerSourceResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventCount_ != nullptr
        && this->lastTargetHoneypot_ != nullptr && this->lastTargetIp_ != nullptr && this->lastTime_ != nullptr && this->riskLevel_ != nullptr && this->srcIp_ != nullptr; };
    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int32_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
    inline ListHoneypotAttackerSourceResponseBodyList& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // lastTargetHoneypot Field Functions 
    bool hasLastTargetHoneypot() const { return this->lastTargetHoneypot_ != nullptr;};
    void deleteLastTargetHoneypot() { this->lastTargetHoneypot_ = nullptr;};
    inline string lastTargetHoneypot() const { DARABONBA_PTR_GET_DEFAULT(lastTargetHoneypot_, "") };
    inline ListHoneypotAttackerSourceResponseBodyList& setLastTargetHoneypot(string lastTargetHoneypot) { DARABONBA_PTR_SET_VALUE(lastTargetHoneypot_, lastTargetHoneypot) };


    // lastTargetIp Field Functions 
    bool hasLastTargetIp() const { return this->lastTargetIp_ != nullptr;};
    void deleteLastTargetIp() { this->lastTargetIp_ = nullptr;};
    inline string lastTargetIp() const { DARABONBA_PTR_GET_DEFAULT(lastTargetIp_, "") };
    inline ListHoneypotAttackerSourceResponseBodyList& setLastTargetIp(string lastTargetIp) { DARABONBA_PTR_SET_VALUE(lastTargetIp_, lastTargetIp) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListHoneypotAttackerSourceResponseBodyList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListHoneypotAttackerSourceResponseBodyList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListHoneypotAttackerSourceResponseBodyList& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


  protected:
    // The total number of attack events.
    std::shared_ptr<int32_t> eventCount_ = nullptr;
    // The most recent honeypot that was attacked.
    std::shared_ptr<string> lastTargetHoneypot_ = nullptr;
    // The most recent IP address that was attacked.
    std::shared_ptr<string> lastTargetIp_ = nullptr;
    // The last time when the attack event occurred.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **2**: low
    // *   **3**: medium
    // *   **4**: high
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The source IP address of the attack.
    std::shared_ptr<string> srcIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
