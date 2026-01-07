// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEORGQUERYLOADTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEORGQUERYLOADTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseOrgQueryLoadTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseOrgQueryLoadTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(LoadOrgOnly, loadOrgOnly_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseOrgQueryLoadTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(LoadOrgOnly, loadOrgOnly_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnterpriseOrgQueryLoadTreeRequest() = default ;
    EnterpriseOrgQueryLoadTreeRequest(const EnterpriseOrgQueryLoadTreeRequest &) = default ;
    EnterpriseOrgQueryLoadTreeRequest(EnterpriseOrgQueryLoadTreeRequest &&) = default ;
    EnterpriseOrgQueryLoadTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseOrgQueryLoadTreeRequest() = default ;
    EnterpriseOrgQueryLoadTreeRequest& operator=(const EnterpriseOrgQueryLoadTreeRequest &) = default ;
    EnterpriseOrgQueryLoadTreeRequest& operator=(EnterpriseOrgQueryLoadTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptTicket_ == nullptr
        && this->loadOrgOnly_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->requestId_ == nullptr; };
    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseOrgQueryLoadTreeRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // loadOrgOnly Field Functions 
    bool hasLoadOrgOnly() const { return this->loadOrgOnly_ != nullptr;};
    void deleteLoadOrgOnly() { this->loadOrgOnly_ = nullptr;};
    inline bool getLoadOrgOnly() const { DARABONBA_PTR_GET_DEFAULT(loadOrgOnly_, false) };
    inline EnterpriseOrgQueryLoadTreeRequest& setLoadOrgOnly(bool loadOrgOnly) { DARABONBA_PTR_SET_VALUE(loadOrgOnly_, loadOrgOnly) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseOrgQueryLoadTreeRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseOrgQueryLoadTreeRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseOrgQueryLoadTreeRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseOrgQueryLoadTreeRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<bool> loadOrgOnly_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
