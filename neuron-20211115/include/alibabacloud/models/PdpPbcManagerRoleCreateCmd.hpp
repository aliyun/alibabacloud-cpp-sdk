// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPPBCMANAGERROLECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PDPPBCMANAGERROLECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpPbcManagerRoleCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpPbcManagerRoleCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
    };
    friend void from_json(const Darabonba::Json& j, PdpPbcManagerRoleCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
    };
    PdpPbcManagerRoleCreateCmd() = default ;
    PdpPbcManagerRoleCreateCmd(const PdpPbcManagerRoleCreateCmd &) = default ;
    PdpPbcManagerRoleCreateCmd(PdpPbcManagerRoleCreateCmd &&) = default ;
    PdpPbcManagerRoleCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpPbcManagerRoleCreateCmd() = default ;
    PdpPbcManagerRoleCreateCmd& operator=(const PdpPbcManagerRoleCreateCmd &) = default ;
    PdpPbcManagerRoleCreateCmd& operator=(PdpPbcManagerRoleCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->name_ == nullptr && this->pbcId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PdpPbcManagerRoleCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpPbcManagerRoleCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PdpPbcManagerRoleCreateCmd& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> pbcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
