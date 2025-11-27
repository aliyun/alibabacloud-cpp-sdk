// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifySecurityGroupConfigurationResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifySecurityGroupConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifySecurityGroupConfigurationResponseBody() = default ;
    ModifySecurityGroupConfigurationResponseBody(const ModifySecurityGroupConfigurationResponseBody &) = default ;
    ModifySecurityGroupConfigurationResponseBody(ModifySecurityGroupConfigurationResponseBody &&) = default ;
    ModifySecurityGroupConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupConfigurationResponseBody() = default ;
    ModifySecurityGroupConfigurationResponseBody& operator=(const ModifySecurityGroupConfigurationResponseBody &) = default ;
    ModifySecurityGroupConfigurationResponseBody& operator=(ModifySecurityGroupConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->items_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifySecurityGroupConfigurationResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const ModifySecurityGroupConfigurationResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, ModifySecurityGroupConfigurationResponseBodyItems) };
    inline ModifySecurityGroupConfigurationResponseBodyItems items() { DARABONBA_PTR_GET(items_, ModifySecurityGroupConfigurationResponseBodyItems) };
    inline ModifySecurityGroupConfigurationResponseBody& setItems(const ModifySecurityGroupConfigurationResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ModifySecurityGroupConfigurationResponseBody& setItems(ModifySecurityGroupConfigurationResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySecurityGroupConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // An array that consists of information about the ECS security group.
    std::shared_ptr<ModifySecurityGroupConfigurationResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
