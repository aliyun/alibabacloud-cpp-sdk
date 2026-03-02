// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(company, company_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PbcCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(company, company_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PbcCreateCmd() = default ;
    PbcCreateCmd(const PbcCreateCmd &) = default ;
    PbcCreateCmd(PbcCreateCmd &&) = default ;
    PbcCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcCreateCmd() = default ;
    PbcCreateCmd& operator=(const PbcCreateCmd &) = default ;
    PbcCreateCmd& operator=(PbcCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->company_ == nullptr && this->companyId_ == nullptr && this->description_ == nullptr && this->developerId_ == nullptr && this->industry_ == nullptr
        && this->marketId_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PbcCreateCmd& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline PbcCreateCmd& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PbcCreateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline string getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, "") };
    inline PbcCreateCmd& setDeveloperId(string developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline PbcCreateCmd& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PbcCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PbcCreateCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> company_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> developerId_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
