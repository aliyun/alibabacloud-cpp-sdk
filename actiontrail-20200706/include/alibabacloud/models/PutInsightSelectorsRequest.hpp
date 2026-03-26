// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTINSIGHTSELECTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTINSIGHTSELECTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class PutInsightSelectorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutInsightSelectorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InsightSelectors, insightSelectors_);
      DARABONBA_PTR_TO_JSON(TrailName, trailName_);
    };
    friend void from_json(const Darabonba::Json& j, PutInsightSelectorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InsightSelectors, insightSelectors_);
      DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
    };
    PutInsightSelectorsRequest() = default ;
    PutInsightSelectorsRequest(const PutInsightSelectorsRequest &) = default ;
    PutInsightSelectorsRequest(PutInsightSelectorsRequest &&) = default ;
    PutInsightSelectorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutInsightSelectorsRequest() = default ;
    PutInsightSelectorsRequest& operator=(const PutInsightSelectorsRequest &) = default ;
    PutInsightSelectorsRequest& operator=(PutInsightSelectorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insightSelectors_ == nullptr
        && this->trailName_ == nullptr; };
    // insightSelectors Field Functions 
    bool hasInsightSelectors() const { return this->insightSelectors_ != nullptr;};
    void deleteInsightSelectors() { this->insightSelectors_ = nullptr;};
    inline string getInsightSelectors() const { DARABONBA_PTR_GET_DEFAULT(insightSelectors_, "") };
    inline PutInsightSelectorsRequest& setInsightSelectors(string insightSelectors) { DARABONBA_PTR_SET_VALUE(insightSelectors_, insightSelectors) };


    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string getTrailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline PutInsightSelectorsRequest& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


  protected:
    shared_ptr<string> insightSelectors_ {};
    // This parameter is required.
    shared_ptr<string> trailName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
