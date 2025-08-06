// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIFECYCLERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIFECYCLERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLifecycleRuleResponseBodyRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListMediaLifecycleRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLifecycleRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLifecycleRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListMediaLifecycleRuleResponseBody() = default ;
    ListMediaLifecycleRuleResponseBody(const ListMediaLifecycleRuleResponseBody &) = default ;
    ListMediaLifecycleRuleResponseBody(ListMediaLifecycleRuleResponseBody &&) = default ;
    ListMediaLifecycleRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLifecycleRuleResponseBody() = default ;
    ListMediaLifecycleRuleResponseBody& operator=(const ListMediaLifecycleRuleResponseBody &) = default ;
    ListMediaLifecycleRuleResponseBody& operator=(ListMediaLifecycleRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->ruleList_ != nullptr && this->total_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaLifecycleRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<ListMediaLifecycleRuleResponseBodyRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<ListMediaLifecycleRuleResponseBodyRuleList>) };
    inline vector<ListMediaLifecycleRuleResponseBodyRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<ListMediaLifecycleRuleResponseBodyRuleList>) };
    inline ListMediaLifecycleRuleResponseBody& setRuleList(const vector<ListMediaLifecycleRuleResponseBodyRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListMediaLifecycleRuleResponseBody& setRuleList(vector<ListMediaLifecycleRuleResponseBodyRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListMediaLifecycleRuleResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListMediaLifecycleRuleResponseBodyRuleList>> ruleList_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
