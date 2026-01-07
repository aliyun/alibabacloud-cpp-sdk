// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISECONTACTQUERYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISECONTACTQUERYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseContactQueryDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseContactQueryDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseContactQueryDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
    };
    EnterpriseContactQueryDetailRequest() = default ;
    EnterpriseContactQueryDetailRequest(const EnterpriseContactQueryDetailRequest &) = default ;
    EnterpriseContactQueryDetailRequest(EnterpriseContactQueryDetailRequest &&) = default ;
    EnterpriseContactQueryDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseContactQueryDetailRequest() = default ;
    EnterpriseContactQueryDetailRequest& operator=(const EnterpriseContactQueryDetailRequest &) = default ;
    EnterpriseContactQueryDetailRequest& operator=(EnterpriseContactQueryDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->contactId_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseContactQueryDetailRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline EnterpriseContactQueryDetailRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseContactQueryDetailRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseContactQueryDetailRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseContactQueryDetailRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<int64_t> contactId_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
