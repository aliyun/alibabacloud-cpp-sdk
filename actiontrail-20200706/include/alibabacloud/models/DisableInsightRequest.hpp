// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEINSIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEINSIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DisableInsightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableInsightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InsightType, insightType_);
    };
    friend void from_json(const Darabonba::Json& j, DisableInsightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InsightType, insightType_);
    };
    DisableInsightRequest() = default ;
    DisableInsightRequest(const DisableInsightRequest &) = default ;
    DisableInsightRequest(DisableInsightRequest &&) = default ;
    DisableInsightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableInsightRequest() = default ;
    DisableInsightRequest& operator=(const DisableInsightRequest &) = default ;
    DisableInsightRequest& operator=(DisableInsightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insightType_ == nullptr; };
    // insightType Field Functions 
    bool hasInsightType() const { return this->insightType_ != nullptr;};
    void deleteInsightType() { this->insightType_ = nullptr;};
    inline string getInsightType() const { DARABONBA_PTR_GET_DEFAULT(insightType_, "") };
    inline DisableInsightRequest& setInsightType(string insightType) { DARABONBA_PTR_SET_VALUE(insightType_, insightType) };


  protected:
    shared_ptr<string> insightType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
