// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPATCHRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPATCHRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDispatchRuleResponseBodyDispatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListDispatchRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDispatchRuleResponseBody() = default ;
    ListDispatchRuleResponseBody(const ListDispatchRuleResponseBody &) = default ;
    ListDispatchRuleResponseBody(ListDispatchRuleResponseBody &&) = default ;
    ListDispatchRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDispatchRuleResponseBody() = default ;
    ListDispatchRuleResponseBody& operator=(const ListDispatchRuleResponseBody &) = default ;
    ListDispatchRuleResponseBody& operator=(ListDispatchRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dispatchRules_ != nullptr
        && this->requestId_ != nullptr; };
    // dispatchRules Field Functions 
    bool hasDispatchRules() const { return this->dispatchRules_ != nullptr;};
    void deleteDispatchRules() { this->dispatchRules_ = nullptr;};
    inline const vector<ListDispatchRuleResponseBodyDispatchRules> & dispatchRules() const { DARABONBA_PTR_GET_CONST(dispatchRules_, vector<ListDispatchRuleResponseBodyDispatchRules>) };
    inline vector<ListDispatchRuleResponseBodyDispatchRules> dispatchRules() { DARABONBA_PTR_GET(dispatchRules_, vector<ListDispatchRuleResponseBodyDispatchRules>) };
    inline ListDispatchRuleResponseBody& setDispatchRules(const vector<ListDispatchRuleResponseBodyDispatchRules> & dispatchRules) { DARABONBA_PTR_SET_VALUE(dispatchRules_, dispatchRules) };
    inline ListDispatchRuleResponseBody& setDispatchRules(vector<ListDispatchRuleResponseBodyDispatchRules> && dispatchRules) { DARABONBA_PTR_SET_RVALUE(dispatchRules_, dispatchRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDispatchRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned struct.
    std::shared_ptr<vector<ListDispatchRuleResponseBodyDispatchRules>> dispatchRules_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
