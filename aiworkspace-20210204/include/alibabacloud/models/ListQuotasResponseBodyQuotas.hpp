// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYQUOTAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotasResponseBodyQuotasSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListQuotasResponseBodyQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(Specs, specs_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(Specs, specs_);
    };
    ListQuotasResponseBodyQuotas() = default ;
    ListQuotasResponseBodyQuotas(const ListQuotasResponseBodyQuotas &) = default ;
    ListQuotasResponseBodyQuotas(ListQuotasResponseBodyQuotas &&) = default ;
    ListQuotasResponseBodyQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBodyQuotas() = default ;
    ListQuotasResponseBodyQuotas& operator=(const ListQuotasResponseBodyQuotas &) = default ;
    ListQuotasResponseBodyQuotas& operator=(ListQuotasResponseBodyQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->id_ != nullptr && this->mode_ != nullptr && this->name_ != nullptr && this->productCode_ != nullptr && this->quotaType_ != nullptr
        && this->specs_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListQuotasResponseBodyQuotas& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListQuotasResponseBodyQuotas& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListQuotasResponseBodyQuotas& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListQuotasResponseBodyQuotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotasResponseBodyQuotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline ListQuotasResponseBodyQuotas& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<Models::ListQuotasResponseBodyQuotasSpecs> & specs() const { DARABONBA_PTR_GET_CONST(specs_, vector<Models::ListQuotasResponseBodyQuotasSpecs>) };
    inline vector<Models::ListQuotasResponseBodyQuotasSpecs> specs() { DARABONBA_PTR_GET(specs_, vector<Models::ListQuotasResponseBodyQuotasSpecs>) };
    inline ListQuotasResponseBodyQuotas& setSpecs(const vector<Models::ListQuotasResponseBodyQuotasSpecs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline ListQuotasResponseBodyQuotas& setSpecs(vector<Models::ListQuotasResponseBodyQuotasSpecs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


  protected:
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
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota type. Valid value:
    // 
    // PAI: indicates GPU resource groups of MaxCompute.
    std::shared_ptr<string> quotaType_ = nullptr;
    // The quota specifications.
    std::shared_ptr<vector<Models::ListQuotasResponseBodyQuotasSpecs>> specs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
