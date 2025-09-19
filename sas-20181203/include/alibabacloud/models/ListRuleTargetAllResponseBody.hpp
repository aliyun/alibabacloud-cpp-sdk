// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULETARGETALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRULETARGETALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRuleTargetAllResponseBodyRuleTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListRuleTargetAllResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRuleTargetAllResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTargetList, ruleTargetList_);
    };
    friend void from_json(const Darabonba::Json& j, ListRuleTargetAllResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTargetList, ruleTargetList_);
    };
    ListRuleTargetAllResponseBody() = default ;
    ListRuleTargetAllResponseBody(const ListRuleTargetAllResponseBody &) = default ;
    ListRuleTargetAllResponseBody(ListRuleTargetAllResponseBody &&) = default ;
    ListRuleTargetAllResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRuleTargetAllResponseBody() = default ;
    ListRuleTargetAllResponseBody& operator=(const ListRuleTargetAllResponseBody &) = default ;
    ListRuleTargetAllResponseBody& operator=(ListRuleTargetAllResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->ruleTargetList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRuleTargetAllResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTargetList Field Functions 
    bool hasRuleTargetList() const { return this->ruleTargetList_ != nullptr;};
    void deleteRuleTargetList() { this->ruleTargetList_ = nullptr;};
    inline const vector<ListRuleTargetAllResponseBodyRuleTargetList> & ruleTargetList() const { DARABONBA_PTR_GET_CONST(ruleTargetList_, vector<ListRuleTargetAllResponseBodyRuleTargetList>) };
    inline vector<ListRuleTargetAllResponseBodyRuleTargetList> ruleTargetList() { DARABONBA_PTR_GET(ruleTargetList_, vector<ListRuleTargetAllResponseBodyRuleTargetList>) };
    inline ListRuleTargetAllResponseBody& setRuleTargetList(const vector<ListRuleTargetAllResponseBodyRuleTargetList> & ruleTargetList) { DARABONBA_PTR_SET_VALUE(ruleTargetList_, ruleTargetList) };
    inline ListRuleTargetAllResponseBody& setRuleTargetList(vector<ListRuleTargetAllResponseBodyRuleTargetList> && ruleTargetList) { DARABONBA_PTR_SET_RVALUE(ruleTargetList_, ruleTargetList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the network objects.
    std::shared_ptr<vector<ListRuleTargetAllResponseBodyRuleTargetList>> ruleTargetList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
