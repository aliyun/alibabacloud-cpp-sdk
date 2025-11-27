// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceTDEResponseBodyDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceTDEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTDEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TDEMode, TDEMode_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTDEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TDEMode, TDEMode_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
    };
    DescribeDBInstanceTDEResponseBody() = default ;
    DescribeDBInstanceTDEResponseBody(const DescribeDBInstanceTDEResponseBody &) = default ;
    DescribeDBInstanceTDEResponseBody(DescribeDBInstanceTDEResponseBody &&) = default ;
    DescribeDBInstanceTDEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTDEResponseBody() = default ;
    DescribeDBInstanceTDEResponseBody& operator=(const DescribeDBInstanceTDEResponseBody &) = default ;
    DescribeDBInstanceTDEResponseBody& operator=(DescribeDBInstanceTDEResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && return this->encryptionKey_ == nullptr && return this->requestId_ == nullptr && return this->TDEMode_ == nullptr && return this->TDEStatus_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeDBInstanceTDEResponseBodyDatabases & databases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeDBInstanceTDEResponseBodyDatabases) };
    inline DescribeDBInstanceTDEResponseBodyDatabases databases() { DARABONBA_PTR_GET(databases_, DescribeDBInstanceTDEResponseBodyDatabases) };
    inline DescribeDBInstanceTDEResponseBody& setDatabases(const DescribeDBInstanceTDEResponseBodyDatabases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDBInstanceTDEResponseBody& setDatabases(DescribeDBInstanceTDEResponseBodyDatabases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBInstanceTDEResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceTDEResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // TDEMode Field Functions 
    bool hasTDEMode() const { return this->TDEMode_ != nullptr;};
    void deleteTDEMode() { this->TDEMode_ = nullptr;};
    inline string TDEMode() const { DARABONBA_PTR_GET_DEFAULT(TDEMode_, "") };
    inline DescribeDBInstanceTDEResponseBody& setTDEMode(string TDEMode) { DARABONBA_PTR_SET_VALUE(TDEMode_, TDEMode) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline string TDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
    inline DescribeDBInstanceTDEResponseBody& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


  protected:
    // The TDE status at the database level.
    // 
    // >  If your instance runs SQL Server 2019 SE or SQL Server EE, you can specify whether to enable TDE at the database level when you enable TDE at the instance level.
    std::shared_ptr<DescribeDBInstanceTDEResponseBodyDatabases> databases_ = nullptr;
    // The ID of the custom key.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The method that is used to generate the key for TDE at the instance level. Valid values:
    // 
    // *   **Aliyun_Generate_Key**
    // *   **Customer_Provided_Key**
    // *   **Unknown**
    std::shared_ptr<string> TDEMode_ = nullptr;
    // The TDE status of the instance. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> TDEStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
