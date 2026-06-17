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
    // The instance ID.
    // 
    // > Call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to list all AnalyticDB for PostgreSQL instances in the destination region, including their instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // A description of the service.
    shared_ptr<string> description_ {};
    // A comma-separated list of IP addresses or CIDR blocks in the IP address whitelist. You can specify up to 1000 entries. To block all external IP access, use 127.0.0.1. Valid formats include the following:
    // 
    // - 10.23.12.24 (an IPv4 address)
    // 
    // - 10.23.12.24/24 (a CIDR block, where /24 indicates the prefix length, from 1 to 32)
    // 
    // > After you create the service, call the ModifyAIServiceSecurityIps operation to update the IP address whitelist.
    shared_ptr<string> securityIPList_ {};
    // The service account. It must meet these requirements:
    // 
    // - Contain only lowercase letters, digits, and underscores.
    // 
    // - Start with a lowercase letter and end with a lowercase letter or digit.
    // 
    // - Not start with gp.
    // 
    // - Be 2 to 16 characters long.
    // 
    // This parameter is required.
    shared_ptr<string> serviceAccount_ {};
    // The password for the service account. It must meet these requirements:
    // 
    // - Contain at least three of the following: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // - Support these special characters: !@#$%^&\\*()_+-=.
    // 
    // - Be 8 to 32 characters long.
    // 
    // This parameter is required.
    shared_ptr<string> serviceAccountPassword_ {};
    // The service type. Only drama is supported.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
