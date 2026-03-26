// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSIGHTSELECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSIGHTSELECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetInsightSelectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInsightSelectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InsightSelectors, insightSelectors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrailArn, trailArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetInsightSelectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InsightSelectors, insightSelectors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrailArn, trailArn_);
    };
    GetInsightSelectorsResponseBody() = default ;
    GetInsightSelectorsResponseBody(const GetInsightSelectorsResponseBody &) = default ;
    GetInsightSelectorsResponseBody(GetInsightSelectorsResponseBody &&) = default ;
    GetInsightSelectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInsightSelectorsResponseBody() = default ;
    GetInsightSelectorsResponseBody& operator=(const GetInsightSelectorsResponseBody &) = default ;
    GetInsightSelectorsResponseBody& operator=(GetInsightSelectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insightSelectors_ == nullptr
        && this->requestId_ == nullptr && this->trailArn_ == nullptr; };
    // insightSelectors Field Functions 
    bool hasInsightSelectors() const { return this->insightSelectors_ != nullptr;};
    void deleteInsightSelectors() { this->insightSelectors_ = nullptr;};
    inline const vector<string> & getInsightSelectors() const { DARABONBA_PTR_GET_CONST(insightSelectors_, vector<string>) };
    inline vector<string> getInsightSelectors() { DARABONBA_PTR_GET(insightSelectors_, vector<string>) };
    inline GetInsightSelectorsResponseBody& setInsightSelectors(const vector<string> & insightSelectors) { DARABONBA_PTR_SET_VALUE(insightSelectors_, insightSelectors) };
    inline GetInsightSelectorsResponseBody& setInsightSelectors(vector<string> && insightSelectors) { DARABONBA_PTR_SET_RVALUE(insightSelectors_, insightSelectors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInsightSelectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trailArn Field Functions 
    bool hasTrailArn() const { return this->trailArn_ != nullptr;};
    void deleteTrailArn() { this->trailArn_ = nullptr;};
    inline string getTrailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
    inline GetInsightSelectorsResponseBody& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


  protected:
    shared_ptr<vector<string>> insightSelectors_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> trailArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
