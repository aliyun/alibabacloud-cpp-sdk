// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPSERVICEROLECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PDPSERVICEROLECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpServiceRoleCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpServiceRoleCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, PdpServiceRoleCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    PdpServiceRoleCreateCmd() = default ;
    PdpServiceRoleCreateCmd(const PdpServiceRoleCreateCmd &) = default ;
    PdpServiceRoleCreateCmd(PdpServiceRoleCreateCmd &&) = default ;
    PdpServiceRoleCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpServiceRoleCreateCmd() = default ;
    PdpServiceRoleCreateCmd& operator=(const PdpServiceRoleCreateCmd &) = default ;
    PdpServiceRoleCreateCmd& operator=(PdpServiceRoleCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->name_ == nullptr && this->pbcId_ == nullptr && this->serviceId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PdpServiceRoleCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpServiceRoleCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PdpServiceRoleCreateCmd& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline PdpServiceRoleCreateCmd& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> pbcId_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
