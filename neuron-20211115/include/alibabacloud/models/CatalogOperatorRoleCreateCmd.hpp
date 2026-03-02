// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGOPERATORROLECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_CATALOGOPERATORROLECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CatalogOperatorRoleCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogOperatorRoleCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(marketType, marketType_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogOperatorRoleCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(marketType, marketType_);
    };
    CatalogOperatorRoleCreateCmd() = default ;
    CatalogOperatorRoleCreateCmd(const CatalogOperatorRoleCreateCmd &) = default ;
    CatalogOperatorRoleCreateCmd(CatalogOperatorRoleCreateCmd &&) = default ;
    CatalogOperatorRoleCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogOperatorRoleCreateCmd() = default ;
    CatalogOperatorRoleCreateCmd& operator=(const CatalogOperatorRoleCreateCmd &) = default ;
    CatalogOperatorRoleCreateCmd& operator=(CatalogOperatorRoleCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->marketId_ == nullptr && this->marketType_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline CatalogOperatorRoleCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline CatalogOperatorRoleCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // marketType Field Functions 
    bool hasMarketType() const { return this->marketType_ != nullptr;};
    void deleteMarketType() { this->marketType_ = nullptr;};
    inline string getMarketType() const { DARABONBA_PTR_GET_DEFAULT(marketType_, "") };
    inline CatalogOperatorRoleCreateCmd& setMarketType(string marketType) { DARABONBA_PTR_SET_VALUE(marketType_, marketType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<int64_t> marketId_ {};
    // This parameter is required.
    shared_ptr<string> marketType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
