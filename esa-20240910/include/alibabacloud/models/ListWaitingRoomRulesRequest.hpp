// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomId, waitingRoomId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomId, waitingRoomId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    ListWaitingRoomRulesRequest() = default ;
    ListWaitingRoomRulesRequest(const ListWaitingRoomRulesRequest &) = default ;
    ListWaitingRoomRulesRequest(ListWaitingRoomRulesRequest &&) = default ;
    ListWaitingRoomRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomRulesRequest() = default ;
    ListWaitingRoomRulesRequest& operator=(const ListWaitingRoomRulesRequest &) = default ;
    ListWaitingRoomRulesRequest& operator=(ListWaitingRoomRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleName_ != nullptr
        && this->siteId_ != nullptr && this->waitingRoomId_ != nullptr && this->waitingRoomRuleId_ != nullptr; };
    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListWaitingRoomRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWaitingRoomRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // waitingRoomId Field Functions 
    bool hasWaitingRoomId() const { return this->waitingRoomId_ != nullptr;};
    void deleteWaitingRoomId() { this->waitingRoomId_ = nullptr;};
    inline string waitingRoomId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomId_, "") };
    inline ListWaitingRoomRulesRequest& setWaitingRoomId(string waitingRoomId) { DARABONBA_PTR_SET_VALUE(waitingRoomId_, waitingRoomId) };


    // waitingRoomRuleId Field Functions 
    bool hasWaitingRoomRuleId() const { return this->waitingRoomRuleId_ != nullptr;};
    void deleteWaitingRoomRuleId() { this->waitingRoomRuleId_ = nullptr;};
    inline int64_t waitingRoomRuleId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomRuleId_, 0L) };
    inline ListWaitingRoomRulesRequest& setWaitingRoomRuleId(int64_t waitingRoomRuleId) { DARABONBA_PTR_SET_VALUE(waitingRoomRuleId_, waitingRoomRuleId) };


  protected:
    // Rule name, optional, used for querying by the name of the waiting room bypass rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The ID of the waiting room to bypass, which can be obtained by calling the [ListWaitingRooms](https://help.aliyun.com/document_detail/2850279.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<string> waitingRoomId_ = nullptr;
    // The ID of the waiting room bypass rule to update, which can be obtained by calling the [ListWaitingRoomRules](https://help.aliyun.com/document_detail/2850279.html) interface.
    std::shared_ptr<int64_t> waitingRoomRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
