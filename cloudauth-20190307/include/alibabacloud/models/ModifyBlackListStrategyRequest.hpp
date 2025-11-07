// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyBlackListStrategyRequestBlackListStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyBlackListStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlackListStrategy, blackListStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackListStrategy, blackListStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyBlackListStrategyRequest() = default ;
    ModifyBlackListStrategyRequest(const ModifyBlackListStrategyRequest &) = default ;
    ModifyBlackListStrategyRequest(ModifyBlackListStrategyRequest &&) = default ;
    ModifyBlackListStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBlackListStrategyRequest() = default ;
    ModifyBlackListStrategyRequest& operator=(const ModifyBlackListStrategyRequest &) = default ;
    ModifyBlackListStrategyRequest& operator=(ModifyBlackListStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackListStrategy_ == nullptr
        && return this->regionId_ == nullptr; };
    // blackListStrategy Field Functions 
    bool hasBlackListStrategy() const { return this->blackListStrategy_ != nullptr;};
    void deleteBlackListStrategy() { this->blackListStrategy_ = nullptr;};
    inline const ModifyBlackListStrategyRequestBlackListStrategy & blackListStrategy() const { DARABONBA_PTR_GET_CONST(blackListStrategy_, ModifyBlackListStrategyRequestBlackListStrategy) };
    inline ModifyBlackListStrategyRequestBlackListStrategy blackListStrategy() { DARABONBA_PTR_GET(blackListStrategy_, ModifyBlackListStrategyRequestBlackListStrategy) };
    inline ModifyBlackListStrategyRequest& setBlackListStrategy(const ModifyBlackListStrategyRequestBlackListStrategy & blackListStrategy) { DARABONBA_PTR_SET_VALUE(blackListStrategy_, blackListStrategy) };
    inline ModifyBlackListStrategyRequest& setBlackListStrategy(ModifyBlackListStrategyRequestBlackListStrategy && blackListStrategy) { DARABONBA_PTR_SET_RVALUE(blackListStrategy_, blackListStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyBlackListStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Blacklist rule.
    std::shared_ptr<ModifyBlackListStrategyRequestBlackListStrategy> blackListStrategy_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
