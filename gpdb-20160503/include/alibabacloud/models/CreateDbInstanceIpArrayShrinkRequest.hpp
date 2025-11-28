// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEIPARRAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEIPARRAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDBInstanceIPArrayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceIPArrayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IPArrayAttribute, IPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(IPArrayName, IPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceIPArrayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IPArrayAttribute, IPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(IPArrayName, IPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPListShrink_);
    };
    CreateDBInstanceIPArrayShrinkRequest() = default ;
    CreateDBInstanceIPArrayShrinkRequest(const CreateDBInstanceIPArrayShrinkRequest &) = default ;
    CreateDBInstanceIPArrayShrinkRequest(CreateDBInstanceIPArrayShrinkRequest &&) = default ;
    CreateDBInstanceIPArrayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceIPArrayShrinkRequest() = default ;
    CreateDBInstanceIPArrayShrinkRequest& operator=(const CreateDBInstanceIPArrayShrinkRequest &) = default ;
    CreateDBInstanceIPArrayShrinkRequest& operator=(CreateDBInstanceIPArrayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->IPArrayAttribute_ == nullptr && return this->IPArrayName_ == nullptr && return this->securityIPListShrink_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstanceIPArrayShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // IPArrayAttribute Field Functions 
    bool hasIPArrayAttribute() const { return this->IPArrayAttribute_ != nullptr;};
    void deleteIPArrayAttribute() { this->IPArrayAttribute_ = nullptr;};
    inline string IPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(IPArrayAttribute_, "") };
    inline CreateDBInstanceIPArrayShrinkRequest& setIPArrayAttribute(string IPArrayAttribute) { DARABONBA_PTR_SET_VALUE(IPArrayAttribute_, IPArrayAttribute) };


    // IPArrayName Field Functions 
    bool hasIPArrayName() const { return this->IPArrayName_ != nullptr;};
    void deleteIPArrayName() { this->IPArrayName_ = nullptr;};
    inline string IPArrayName() const { DARABONBA_PTR_GET_DEFAULT(IPArrayName_, "") };
    inline CreateDBInstanceIPArrayShrinkRequest& setIPArrayName(string IPArrayName) { DARABONBA_PTR_SET_VALUE(IPArrayName_, IPArrayName) };


    // securityIPListShrink Field Functions 
    bool hasSecurityIPListShrink() const { return this->securityIPListShrink_ != nullptr;};
    void deleteSecurityIPListShrink() { this->securityIPListShrink_ = nullptr;};
    inline string securityIPListShrink() const { DARABONBA_PTR_GET_DEFAULT(securityIPListShrink_, "") };
    inline CreateDBInstanceIPArrayShrinkRequest& setSecurityIPListShrink(string securityIPListShrink) { DARABONBA_PTR_SET_VALUE(securityIPListShrink_, securityIPListShrink) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The attribute of the IP whitelist group.
    std::shared_ptr<string> IPArrayAttribute_ = nullptr;
    // The name of the IP whitelist group.
    // 
    // This parameter is required.
    std::shared_ptr<string> IPArrayName_ = nullptr;
    // The IP addresses in the IP whitelist group. A maximum of 1,000 IP addresses or CIDR blocks are allowed.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityIPListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
