// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetStrategyTemplateDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStrategyTemplateDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStrategyTemplateDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    GetStrategyTemplateDetailRequest() = default ;
    GetStrategyTemplateDetailRequest(const GetStrategyTemplateDetailRequest &) = default ;
    GetStrategyTemplateDetailRequest(GetStrategyTemplateDetailRequest &&) = default ;
    GetStrategyTemplateDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStrategyTemplateDetailRequest() = default ;
    GetStrategyTemplateDetailRequest& operator=(const GetStrategyTemplateDetailRequest &) = default ;
    GetStrategyTemplateDetailRequest& operator=(GetStrategyTemplateDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyId_ == nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline GetStrategyTemplateDetailRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The ID of the template.
    // 
    // >  You can call the [GetOpaStrategyTemplateSummary](~~GetOpaStrategyTemplateSummary~~) operation to query the IDs of templates.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
