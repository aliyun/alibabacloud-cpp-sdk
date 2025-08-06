// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTELLIGENTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTELLIGENTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetIntelligentStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    GetIntelligentStrategyRequest() = default ;
    GetIntelligentStrategyRequest(const GetIntelligentStrategyRequest &) = default ;
    GetIntelligentStrategyRequest(GetIntelligentStrategyRequest &&) = default ;
    GetIntelligentStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntelligentStrategyRequest() = default ;
    GetIntelligentStrategyRequest& operator=(const GetIntelligentStrategyRequest &) = default ;
    GetIntelligentStrategyRequest& operator=(GetIntelligentStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->strategyId_ != nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline GetIntelligentStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
