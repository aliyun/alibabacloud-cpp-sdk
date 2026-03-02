// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGPBCROLECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_CATALOGPBCROLECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CatalogPbcRoleCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogPbcRoleCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(marketResource, marketResource_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pbcResource, pbcResource_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogPbcRoleCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(marketResource, marketResource_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pbcResource, pbcResource_);
    };
    CatalogPbcRoleCreateCmd() = default ;
    CatalogPbcRoleCreateCmd(const CatalogPbcRoleCreateCmd &) = default ;
    CatalogPbcRoleCreateCmd(CatalogPbcRoleCreateCmd &&) = default ;
    CatalogPbcRoleCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogPbcRoleCreateCmd() = default ;
    CatalogPbcRoleCreateCmd& operator=(const CatalogPbcRoleCreateCmd &) = default ;
    CatalogPbcRoleCreateCmd& operator=(CatalogPbcRoleCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->marketId_ == nullptr && this->marketResource_ == nullptr && this->name_ == nullptr && this->pbcResource_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline CatalogPbcRoleCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline CatalogPbcRoleCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // marketResource Field Functions 
    bool hasMarketResource() const { return this->marketResource_ != nullptr;};
    void deleteMarketResource() { this->marketResource_ = nullptr;};
    inline string getMarketResource() const { DARABONBA_PTR_GET_DEFAULT(marketResource_, "") };
    inline CatalogPbcRoleCreateCmd& setMarketResource(string marketResource) { DARABONBA_PTR_SET_VALUE(marketResource_, marketResource) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CatalogPbcRoleCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pbcResource Field Functions 
    bool hasPbcResource() const { return this->pbcResource_ != nullptr;};
    void deletePbcResource() { this->pbcResource_ = nullptr;};
    inline string getPbcResource() const { DARABONBA_PTR_GET_DEFAULT(pbcResource_, "") };
    inline CatalogPbcRoleCreateCmd& setPbcResource(string pbcResource) { DARABONBA_PTR_SET_VALUE(pbcResource_, pbcResource) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<int64_t> marketId_ {};
    // This parameter is required.
    shared_ptr<string> marketResource_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> pbcResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
