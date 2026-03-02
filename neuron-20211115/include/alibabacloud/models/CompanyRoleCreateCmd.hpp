// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPANYROLECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_COMPANYROLECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CompanyRoleCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompanyRoleCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CompanyRoleCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CompanyRoleCreateCmd() = default ;
    CompanyRoleCreateCmd(const CompanyRoleCreateCmd &) = default ;
    CompanyRoleCreateCmd(CompanyRoleCreateCmd &&) = default ;
    CompanyRoleCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompanyRoleCreateCmd() = default ;
    CompanyRoleCreateCmd& operator=(const CompanyRoleCreateCmd &) = default ;
    CompanyRoleCreateCmd& operator=(CompanyRoleCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->name_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline CompanyRoleCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CompanyRoleCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
