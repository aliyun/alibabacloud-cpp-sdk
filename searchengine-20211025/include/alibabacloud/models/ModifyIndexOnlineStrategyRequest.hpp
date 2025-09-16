// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINDEXONLINESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINDEXONLINESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyIndexOnlineStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIndexOnlineStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(changeRate, changeRate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIndexOnlineStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(changeRate, changeRate_);
    };
    ModifyIndexOnlineStrategyRequest() = default ;
    ModifyIndexOnlineStrategyRequest(const ModifyIndexOnlineStrategyRequest &) = default ;
    ModifyIndexOnlineStrategyRequest(ModifyIndexOnlineStrategyRequest &&) = default ;
    ModifyIndexOnlineStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIndexOnlineStrategyRequest() = default ;
    ModifyIndexOnlineStrategyRequest& operator=(const ModifyIndexOnlineStrategyRequest &) = default ;
    ModifyIndexOnlineStrategyRequest& operator=(ModifyIndexOnlineStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeRate_ != nullptr; };
    // changeRate Field Functions 
    bool hasChangeRate() const { return this->changeRate_ != nullptr;};
    void deleteChangeRate() { this->changeRate_ = nullptr;};
    inline int32_t changeRate() const { DARABONBA_PTR_GET_DEFAULT(changeRate_, 0) };
    inline ModifyIndexOnlineStrategyRequest& setChangeRate(int32_t changeRate) { DARABONBA_PTR_SET_VALUE(changeRate_, changeRate) };


  protected:
    // The index change rate.
    std::shared_ptr<int32_t> changeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
