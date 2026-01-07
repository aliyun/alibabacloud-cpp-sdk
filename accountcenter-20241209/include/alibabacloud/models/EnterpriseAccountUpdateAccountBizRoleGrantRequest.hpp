// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATEACCOUNTBIZROLEGRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATEACCOUNTBIZROLEGRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountUpdateAccountBizRoleGrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountUpdateAccountBizRoleGrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRoleCodeListJson, bizRoleCodeListJson_);
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountUpdateAccountBizRoleGrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRoleCodeListJson, bizRoleCodeListJson_);
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    EnterpriseAccountUpdateAccountBizRoleGrantRequest() = default ;
    EnterpriseAccountUpdateAccountBizRoleGrantRequest(const EnterpriseAccountUpdateAccountBizRoleGrantRequest &) = default ;
    EnterpriseAccountUpdateAccountBizRoleGrantRequest(EnterpriseAccountUpdateAccountBizRoleGrantRequest &&) = default ;
    EnterpriseAccountUpdateAccountBizRoleGrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountUpdateAccountBizRoleGrantRequest() = default ;
    EnterpriseAccountUpdateAccountBizRoleGrantRequest& operator=(const EnterpriseAccountUpdateAccountBizRoleGrantRequest &) = default ;
    EnterpriseAccountUpdateAccountBizRoleGrantRequest& operator=(EnterpriseAccountUpdateAccountBizRoleGrantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRoleCodeListJson_ == nullptr
        && this->encryptTicket_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->pk_ == nullptr; };
    // bizRoleCodeListJson Field Functions 
    bool hasBizRoleCodeListJson() const { return this->bizRoleCodeListJson_ != nullptr;};
    void deleteBizRoleCodeListJson() { this->bizRoleCodeListJson_ = nullptr;};
    inline string getBizRoleCodeListJson() const { DARABONBA_PTR_GET_DEFAULT(bizRoleCodeListJson_, "") };
    inline EnterpriseAccountUpdateAccountBizRoleGrantRequest& setBizRoleCodeListJson(string bizRoleCodeListJson) { DARABONBA_PTR_SET_VALUE(bizRoleCodeListJson_, bizRoleCodeListJson) };


    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseAccountUpdateAccountBizRoleGrantRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountUpdateAccountBizRoleGrantRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountUpdateAccountBizRoleGrantRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountUpdateAccountBizRoleGrantRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountUpdateAccountBizRoleGrantRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    shared_ptr<string> bizRoleCodeListJson_ {};
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
