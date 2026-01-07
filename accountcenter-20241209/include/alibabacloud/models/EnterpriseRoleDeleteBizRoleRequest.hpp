// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEROLEDELETEBIZROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEROLEDELETEBIZROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRoleDeleteBizRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRoleDeleteBizRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRoleCode, bizRoleCode_);
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRoleDeleteBizRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRoleCode, bizRoleCode_);
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
    };
    EnterpriseRoleDeleteBizRoleRequest() = default ;
    EnterpriseRoleDeleteBizRoleRequest(const EnterpriseRoleDeleteBizRoleRequest &) = default ;
    EnterpriseRoleDeleteBizRoleRequest(EnterpriseRoleDeleteBizRoleRequest &&) = default ;
    EnterpriseRoleDeleteBizRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRoleDeleteBizRoleRequest() = default ;
    EnterpriseRoleDeleteBizRoleRequest& operator=(const EnterpriseRoleDeleteBizRoleRequest &) = default ;
    EnterpriseRoleDeleteBizRoleRequest& operator=(EnterpriseRoleDeleteBizRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRoleCode_ == nullptr
        && this->encryptTicket_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr; };
    // bizRoleCode Field Functions 
    bool hasBizRoleCode() const { return this->bizRoleCode_ != nullptr;};
    void deleteBizRoleCode() { this->bizRoleCode_ = nullptr;};
    inline string getBizRoleCode() const { DARABONBA_PTR_GET_DEFAULT(bizRoleCode_, "") };
    inline EnterpriseRoleDeleteBizRoleRequest& setBizRoleCode(string bizRoleCode) { DARABONBA_PTR_SET_VALUE(bizRoleCode_, bizRoleCode) };


    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseRoleDeleteBizRoleRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseRoleDeleteBizRoleRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseRoleDeleteBizRoleRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseRoleDeleteBizRoleRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


  protected:
    shared_ptr<string> bizRoleCode_ {};
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
