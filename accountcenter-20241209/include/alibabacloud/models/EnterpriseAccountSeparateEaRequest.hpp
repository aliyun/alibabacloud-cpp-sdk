// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTSEPARATEEAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTSEPARATEEAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountSeparateEaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountSeparateEaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountSeparateEaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    EnterpriseAccountSeparateEaRequest() = default ;
    EnterpriseAccountSeparateEaRequest(const EnterpriseAccountSeparateEaRequest &) = default ;
    EnterpriseAccountSeparateEaRequest(EnterpriseAccountSeparateEaRequest &&) = default ;
    EnterpriseAccountSeparateEaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountSeparateEaRequest() = default ;
    EnterpriseAccountSeparateEaRequest& operator=(const EnterpriseAccountSeparateEaRequest &) = default ;
    EnterpriseAccountSeparateEaRequest& operator=(EnterpriseAccountSeparateEaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptTicket_ == nullptr
        && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->pk_ == nullptr; };
    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseAccountSeparateEaRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountSeparateEaRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountSeparateEaRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountSeparateEaRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountSeparateEaRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
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
