// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebRulesResponseBodyWebRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebRules, webRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebRules, webRules_);
    };
    DescribeWebRulesResponseBody() = default ;
    DescribeWebRulesResponseBody(const DescribeWebRulesResponseBody &) = default ;
    DescribeWebRulesResponseBody(DescribeWebRulesResponseBody &&) = default ;
    DescribeWebRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebRulesResponseBody() = default ;
    DescribeWebRulesResponseBody& operator=(const DescribeWebRulesResponseBody &) = default ;
    DescribeWebRulesResponseBody& operator=(DescribeWebRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->webRules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeWebRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webRules Field Functions 
    bool hasWebRules() const { return this->webRules_ != nullptr;};
    void deleteWebRules() { this->webRules_ = nullptr;};
    inline const vector<DescribeWebRulesResponseBodyWebRules> & webRules() const { DARABONBA_PTR_GET_CONST(webRules_, vector<DescribeWebRulesResponseBodyWebRules>) };
    inline vector<DescribeWebRulesResponseBodyWebRules> webRules() { DARABONBA_PTR_GET(webRules_, vector<DescribeWebRulesResponseBodyWebRules>) };
    inline DescribeWebRulesResponseBody& setWebRules(const vector<DescribeWebRulesResponseBodyWebRules> & webRules) { DARABONBA_PTR_SET_VALUE(webRules_, webRules) };
    inline DescribeWebRulesResponseBody& setWebRules(vector<DescribeWebRulesResponseBodyWebRules> && webRules) { DARABONBA_PTR_SET_RVALUE(webRules_, webRules) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of queried website business forwarding rules.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The configurations of the forwarding rule.
    std::shared_ptr<vector<DescribeWebRulesResponseBodyWebRules>> webRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
