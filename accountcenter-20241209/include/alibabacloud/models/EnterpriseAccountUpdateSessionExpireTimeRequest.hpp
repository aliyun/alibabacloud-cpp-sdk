// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATESESSIONEXPIRETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATESESSIONEXPIRETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountUpdateSessionExpireTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountUpdateSessionExpireTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionExpireTime, sessionExpireTime_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountUpdateSessionExpireTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionExpireTime, sessionExpireTime_);
    };
    EnterpriseAccountUpdateSessionExpireTimeRequest() = default ;
    EnterpriseAccountUpdateSessionExpireTimeRequest(const EnterpriseAccountUpdateSessionExpireTimeRequest &) = default ;
    EnterpriseAccountUpdateSessionExpireTimeRequest(EnterpriseAccountUpdateSessionExpireTimeRequest &&) = default ;
    EnterpriseAccountUpdateSessionExpireTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountUpdateSessionExpireTimeRequest() = default ;
    EnterpriseAccountUpdateSessionExpireTimeRequest& operator=(const EnterpriseAccountUpdateSessionExpireTimeRequest &) = default ;
    EnterpriseAccountUpdateSessionExpireTimeRequest& operator=(EnterpriseAccountUpdateSessionExpireTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->pk_ == nullptr && this->requestId_ == nullptr
        && this->sessionExpireTime_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseAccountUpdateSessionExpireTimeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountUpdateSessionExpireTimeRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountUpdateSessionExpireTimeRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountUpdateSessionExpireTimeRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountUpdateSessionExpireTimeRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountUpdateSessionExpireTimeRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionExpireTime Field Functions 
    bool hasSessionExpireTime() const { return this->sessionExpireTime_ != nullptr;};
    void deleteSessionExpireTime() { this->sessionExpireTime_ = nullptr;};
    inline int32_t getSessionExpireTime() const { DARABONBA_PTR_GET_DEFAULT(sessionExpireTime_, 0) };
    inline EnterpriseAccountUpdateSessionExpireTimeRequest& setSessionExpireTime(int32_t sessionExpireTime) { DARABONBA_PTR_SET_VALUE(sessionExpireTime_, sessionExpireTime) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<int32_t> sessionExpireTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
