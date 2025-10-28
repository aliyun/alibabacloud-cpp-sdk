// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESQUOTAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcesResponseBodyResourcesQuotasSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListResourcesResponseBodyResourcesQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyResourcesQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(CardType, cardType_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(Specs, specs_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyResourcesQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(CardType, cardType_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(Specs, specs_);
    };
    ListResourcesResponseBodyResourcesQuotas() = default ;
    ListResourcesResponseBodyResourcesQuotas(const ListResourcesResponseBodyResourcesQuotas &) = default ;
    ListResourcesResponseBodyResourcesQuotas(ListResourcesResponseBodyResourcesQuotas &&) = default ;
    ListResourcesResponseBodyResourcesQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyResourcesQuotas() = default ;
    ListResourcesResponseBodyResourcesQuotas& operator=(const ListResourcesResponseBodyResourcesQuotas &) = default ;
    ListResourcesResponseBodyResourcesQuotas& operator=(ListResourcesResponseBodyResourcesQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardType_ == nullptr
        && return this->displayName_ == nullptr && return this->id_ == nullptr && return this->mode_ == nullptr && return this->name_ == nullptr && return this->productCode_ == nullptr
        && return this->quotaType_ == nullptr && return this->specs_ == nullptr; };
    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline ListResourcesResponseBodyResourcesQuotas& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListResourcesResponseBodyResourcesQuotas& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListResourcesResponseBodyResourcesQuotas& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListResourcesResponseBodyResourcesQuotas& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcesResponseBodyResourcesQuotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListResourcesResponseBodyResourcesQuotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline ListResourcesResponseBodyResourcesQuotas& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<Models::ListResourcesResponseBodyResourcesQuotasSpecs> & specs() const { DARABONBA_PTR_GET_CONST(specs_, vector<Models::ListResourcesResponseBodyResourcesQuotasSpecs>) };
    inline vector<Models::ListResourcesResponseBodyResourcesQuotasSpecs> specs() { DARABONBA_PTR_GET(specs_, vector<Models::ListResourcesResponseBodyResourcesQuotasSpecs>) };
    inline ListResourcesResponseBodyResourcesQuotas& setSpecs(const vector<Models::ListResourcesResponseBodyResourcesQuotasSpecs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline ListResourcesResponseBodyResourcesQuotas& setSpecs(vector<Models::ListResourcesResponseBodyResourcesQuotasSpecs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


  protected:
    // The resource group type. Valid values:
    // 
    // *   CPU
    // *   GPU
    std::shared_ptr<string> cardType_ = nullptr;
    // The alias of the quota.
    std::shared_ptr<string> displayName_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> id_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   isolate: subscription
    // *   share: pay-as-you-go
    std::shared_ptr<string> mode_ = nullptr;
    // The quota name.
    std::shared_ptr<string> name_ = nullptr;
    // The product code. Valid values:
    // 
    // *   PAI_isolate: CPU subscription resource groups of PAI
    // *   PAI_share: GPU pay-as-you-go resource groups of PAI
    // *   MaxCompute_share: pay-as-you-go resource groups of MaxCompute
    // *   MaxCompute_isolate: subscription resource groups of MaxCompute
    // *   DataWorks_isolate: subscription resource groups of DataWorks
    // *   DataWorks_share: pay-as-you-go resource groups of DataWorks
    // *   DLC_share: pay-as-you-go resource groups of Deep Learning Containers (DLC)
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   PAI
    // *   MaxCompute
    // *   DLC
    std::shared_ptr<string> quotaType_ = nullptr;
    // The quota specifications.
    std::shared_ptr<vector<Models::ListResourcesResponseBodyResourcesQuotasSpecs>> specs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
