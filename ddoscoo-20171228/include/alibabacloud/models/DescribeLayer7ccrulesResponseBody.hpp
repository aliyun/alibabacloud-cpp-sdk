// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER7CCRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER7CCRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLayer7CCRulesResponseBodyLayer7CCRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer7CCRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer7CCRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layer7CCRules, layer7CCRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer7CCRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layer7CCRules, layer7CCRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLayer7CCRulesResponseBody() = default ;
    DescribeLayer7CCRulesResponseBody(const DescribeLayer7CCRulesResponseBody &) = default ;
    DescribeLayer7CCRulesResponseBody(DescribeLayer7CCRulesResponseBody &&) = default ;
    DescribeLayer7CCRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer7CCRulesResponseBody() = default ;
    DescribeLayer7CCRulesResponseBody& operator=(const DescribeLayer7CCRulesResponseBody &) = default ;
    DescribeLayer7CCRulesResponseBody& operator=(DescribeLayer7CCRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layer7CCRules_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // layer7CCRules Field Functions 
    bool hasLayer7CCRules() const { return this->layer7CCRules_ != nullptr;};
    void deleteLayer7CCRules() { this->layer7CCRules_ = nullptr;};
    inline const vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules> & layer7CCRules() const { DARABONBA_PTR_GET_CONST(layer7CCRules_, vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules>) };
    inline vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules> layer7CCRules() { DARABONBA_PTR_GET(layer7CCRules_, vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules>) };
    inline DescribeLayer7CCRulesResponseBody& setLayer7CCRules(const vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules> & layer7CCRules) { DARABONBA_PTR_SET_VALUE(layer7CCRules_, layer7CCRules) };
    inline DescribeLayer7CCRulesResponseBody& setLayer7CCRules(vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules> && layer7CCRules) { DARABONBA_PTR_SET_RVALUE(layer7CCRules_, layer7CCRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLayer7CCRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeLayer7CCRulesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules>> layer7CCRules_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
