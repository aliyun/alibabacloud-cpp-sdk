// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAISERVICESECURITYIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAISERVICESECURITYIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyAIServiceSecurityIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAIServiceSecurityIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAIServiceSecurityIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyAIServiceSecurityIpsRequest() = default ;
    ModifyAIServiceSecurityIpsRequest(const ModifyAIServiceSecurityIpsRequest &) = default ;
    ModifyAIServiceSecurityIpsRequest(ModifyAIServiceSecurityIpsRequest &&) = default ;
    ModifyAIServiceSecurityIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAIServiceSecurityIpsRequest() = default ;
    ModifyAIServiceSecurityIpsRequest& operator=(const ModifyAIServiceSecurityIpsRequest &) = default ;
    ModifyAIServiceSecurityIpsRequest& operator=(ModifyAIServiceSecurityIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->securityIPList_ == nullptr && this->serviceId_ == nullptr && this->type_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAIServiceSecurityIpsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ModifyAIServiceSecurityIpsRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ModifyAIServiceSecurityIpsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyAIServiceSecurityIpsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the instance.
    // 
    // > To view details of all instances in a destination region, including their IDs, call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // A comma-separated list of IP addresses or CIDR blocks in the IP address whitelist group. You can specify up to 1000 entries. To block all external IP addresses, set this parameter to 127.0.0.1. Valid formats include the following:
    // 
    // - 10.23.12.24 (an IPv4 address)
    // 
    // - 10.23.12.24/24 (a CIDR block. The number after the slash indicates the prefix length and must be between 1 and 32.)
    // 
    // This parameter is required.
    shared_ptr<string> securityIPList_ {};
    // The ID of the service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The service type. Only drama is supported.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
