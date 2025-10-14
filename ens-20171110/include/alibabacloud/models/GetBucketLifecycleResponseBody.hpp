// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBucketLifecycleResponseBodyRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketLifecycleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketLifecycleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketLifecycleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    GetBucketLifecycleResponseBody() = default ;
    GetBucketLifecycleResponseBody(const GetBucketLifecycleResponseBody &) = default ;
    GetBucketLifecycleResponseBody(GetBucketLifecycleResponseBody &&) = default ;
    GetBucketLifecycleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketLifecycleResponseBody() = default ;
    GetBucketLifecycleResponseBody& operator=(const GetBucketLifecycleResponseBody &) = default ;
    GetBucketLifecycleResponseBody& operator=(GetBucketLifecycleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->rule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBucketLifecycleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<GetBucketLifecycleResponseBodyRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<GetBucketLifecycleResponseBodyRule>) };
    inline vector<GetBucketLifecycleResponseBodyRule> rule() { DARABONBA_PTR_GET(rule_, vector<GetBucketLifecycleResponseBodyRule>) };
    inline GetBucketLifecycleResponseBody& setRule(const vector<GetBucketLifecycleResponseBodyRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline GetBucketLifecycleResponseBody& setRule(vector<GetBucketLifecycleResponseBodyRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detailed information about the rule.
    std::shared_ptr<vector<GetBucketLifecycleResponseBodyRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
