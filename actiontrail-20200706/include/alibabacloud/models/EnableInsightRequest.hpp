// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEINSIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEINSIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class EnableInsightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableInsightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InsightType, insightType_);
    };
    friend void from_json(const Darabonba::Json& j, EnableInsightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InsightType, insightType_);
    };
    EnableInsightRequest() = default ;
    EnableInsightRequest(const EnableInsightRequest &) = default ;
    EnableInsightRequest(EnableInsightRequest &&) = default ;
    EnableInsightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableInsightRequest() = default ;
    EnableInsightRequest& operator=(const EnableInsightRequest &) = default ;
    EnableInsightRequest& operator=(EnableInsightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insightType_ == nullptr; };
    // insightType Field Functions 
    bool hasInsightType() const { return this->insightType_ != nullptr;};
    void deleteInsightType() { this->insightType_ = nullptr;};
    inline string insightType() const { DARABONBA_PTR_GET_DEFAULT(insightType_, "") };
    inline EnableInsightRequest& setInsightType(string insightType) { DARABONBA_PTR_SET_VALUE(insightType_, insightType) };


  protected:
    // The type of the Insights event. Valid values:
    // 
    // *   IpInsight: Insights event on IP address
    // *   ApiCallRateInsight: Insights event on API call rate
    // *   ApiErrorRateInsight: Insights event on API error rate
    std::shared_ptr<string> insightType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
