// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAISERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAISERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateAIServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAIServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(ServiceAccount, serviceAccount_);
      DARABONBA_PTR_TO_JSON(ServiceAccountPassword, serviceAccountPassword_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAIServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(ServiceAccount, serviceAccount_);
      DARABONBA_PTR_FROM_JSON(ServiceAccountPassword, serviceAccountPassword_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAIServiceRequest() = default ;
    CreateAIServiceRequest(const CreateAIServiceRequest &) = default ;
    CreateAIServiceRequest(CreateAIServiceRequest &&) = default ;
    CreateAIServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAIServiceRequest() = default ;
    CreateAIServiceRequest& operator=(const CreateAIServiceRequest &) = default ;
    CreateAIServiceRequest& operator=(CreateAIServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->description_ == nullptr && this->securityIPList_ == nullptr && this->serviceAccount_ == nullptr && this->serviceAccountPassword_ == nullptr && this->type_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateAIServiceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAIServiceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateAIServiceRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // serviceAccount Field Functions 
    bool hasServiceAccount() const { return this->serviceAccount_ != nullptr;};
    void deleteServiceAccount() { this->serviceAccount_ = nullptr;};
    inline string getServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(serviceAccount_, "") };
    inline CreateAIServiceRequest& setServiceAccount(string serviceAccount) { DARABONBA_PTR_SET_VALUE(serviceAccount_, serviceAccount) };


    // serviceAccountPassword Field Functions 
    bool hasServiceAccountPassword() const { return this->serviceAccountPassword_ != nullptr;};
    void deleteServiceAccountPassword() { this->serviceAccountPassword_ = nullptr;};
    inline string getServiceAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountPassword_, "") };
    inline CreateAIServiceRequest& setServiceAccountPassword(string serviceAccountPassword) { DARABONBA_PTR_SET_VALUE(serviceAccountPassword_, serviceAccountPassword) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAIServiceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> securityIPList_ {};
    // This parameter is required.
    shared_ptr<string> serviceAccount_ {};
    // This parameter is required.
    shared_ptr<string> serviceAccountPassword_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
