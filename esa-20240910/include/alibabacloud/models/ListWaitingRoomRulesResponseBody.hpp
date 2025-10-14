// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWaitingRoomRulesResponseBodyWaitingRoomRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomRules, waitingRoomRules_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomRules, waitingRoomRules_);
    };
    ListWaitingRoomRulesResponseBody() = default ;
    ListWaitingRoomRulesResponseBody(const ListWaitingRoomRulesResponseBody &) = default ;
    ListWaitingRoomRulesResponseBody(ListWaitingRoomRulesResponseBody &&) = default ;
    ListWaitingRoomRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomRulesResponseBody() = default ;
    ListWaitingRoomRulesResponseBody& operator=(const ListWaitingRoomRulesResponseBody &) = default ;
    ListWaitingRoomRulesResponseBody& operator=(ListWaitingRoomRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->waitingRoomRules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWaitingRoomRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waitingRoomRules Field Functions 
    bool hasWaitingRoomRules() const { return this->waitingRoomRules_ != nullptr;};
    void deleteWaitingRoomRules() { this->waitingRoomRules_ = nullptr;};
    inline const vector<ListWaitingRoomRulesResponseBodyWaitingRoomRules> & waitingRoomRules() const { DARABONBA_PTR_GET_CONST(waitingRoomRules_, vector<ListWaitingRoomRulesResponseBodyWaitingRoomRules>) };
    inline vector<ListWaitingRoomRulesResponseBodyWaitingRoomRules> waitingRoomRules() { DARABONBA_PTR_GET(waitingRoomRules_, vector<ListWaitingRoomRulesResponseBodyWaitingRoomRules>) };
    inline ListWaitingRoomRulesResponseBody& setWaitingRoomRules(const vector<ListWaitingRoomRulesResponseBodyWaitingRoomRules> & waitingRoomRules) { DARABONBA_PTR_SET_VALUE(waitingRoomRules_, waitingRoomRules) };
    inline ListWaitingRoomRulesResponseBody& setWaitingRoomRules(vector<ListWaitingRoomRulesResponseBodyWaitingRoomRules> && waitingRoomRules) { DARABONBA_PTR_SET_RVALUE(waitingRoomRules_, waitingRoomRules) };


  protected:
    // Request ID, used for tracking the call status.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of waiting room bypass rules.
    std::shared_ptr<vector<ListWaitingRoomRulesResponseBodyWaitingRoomRules>> waitingRoomRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
