// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINTELLIGENTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINTELLIGENTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteIntelligentStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    DeleteIntelligentStrategyRequest() = default ;
    DeleteIntelligentStrategyRequest(const DeleteIntelligentStrategyRequest &) = default ;
    DeleteIntelligentStrategyRequest(DeleteIntelligentStrategyRequest &&) = default ;
    DeleteIntelligentStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIntelligentStrategyRequest() = default ;
    DeleteIntelligentStrategyRequest& operator=(const DeleteIntelligentStrategyRequest &) = default ;
    DeleteIntelligentStrategyRequest& operator=(DeleteIntelligentStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->strategyId_ != nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DeleteIntelligentStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
