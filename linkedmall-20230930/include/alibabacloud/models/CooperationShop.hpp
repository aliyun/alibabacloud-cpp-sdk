// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOPERATIONSHOP_HPP_
#define ALIBABACLOUD_MODELS_COOPERATIONSHOP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class CooperationShop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CooperationShop& obj) { 
      DARABONBA_PTR_TO_JSON(cooperationCompanyId, cooperationCompanyId_);
      DARABONBA_PTR_TO_JSON(cooperationShopId, cooperationShopId_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
    };
    friend void from_json(const Darabonba::Json& j, CooperationShop& obj) { 
      DARABONBA_PTR_FROM_JSON(cooperationCompanyId, cooperationCompanyId_);
      DARABONBA_PTR_FROM_JSON(cooperationShopId, cooperationShopId_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
    };
    CooperationShop() = default ;
    CooperationShop(const CooperationShop &) = default ;
    CooperationShop(CooperationShop &&) = default ;
    CooperationShop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CooperationShop() = default ;
    CooperationShop& operator=(const CooperationShop &) = default ;
    CooperationShop& operator=(CooperationShop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cooperationCompanyId_ == nullptr
        && this->cooperationShopId_ == nullptr && this->shopId_ == nullptr; };
    // cooperationCompanyId Field Functions 
    bool hasCooperationCompanyId() const { return this->cooperationCompanyId_ != nullptr;};
    void deleteCooperationCompanyId() { this->cooperationCompanyId_ = nullptr;};
    inline string getCooperationCompanyId() const { DARABONBA_PTR_GET_DEFAULT(cooperationCompanyId_, "") };
    inline CooperationShop& setCooperationCompanyId(string cooperationCompanyId) { DARABONBA_PTR_SET_VALUE(cooperationCompanyId_, cooperationCompanyId) };


    // cooperationShopId Field Functions 
    bool hasCooperationShopId() const { return this->cooperationShopId_ != nullptr;};
    void deleteCooperationShopId() { this->cooperationShopId_ = nullptr;};
    inline string getCooperationShopId() const { DARABONBA_PTR_GET_DEFAULT(cooperationShopId_, "") };
    inline CooperationShop& setCooperationShopId(string cooperationShopId) { DARABONBA_PTR_SET_VALUE(cooperationShopId_, cooperationShopId) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline CooperationShop& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


  protected:
    shared_ptr<string> cooperationCompanyId_ {};
    shared_ptr<string> cooperationShopId_ {};
    shared_ptr<string> shopId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
