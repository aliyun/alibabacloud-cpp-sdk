// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLEXPLORERRETENTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLEXPLORERRETENTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSQLExplorerRetentionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLExplorerRetentionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLExplorerRetentionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSQLExplorerRetentionResponseBody() = default ;
    DescribeSQLExplorerRetentionResponseBody(const DescribeSQLExplorerRetentionResponseBody &) = default ;
    DescribeSQLExplorerRetentionResponseBody(DescribeSQLExplorerRetentionResponseBody &&) = default ;
    DescribeSQLExplorerRetentionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLExplorerRetentionResponseBody() = default ;
    DescribeSQLExplorerRetentionResponseBody& operator=(const DescribeSQLExplorerRetentionResponseBody &) = default ;
    DescribeSQLExplorerRetentionResponseBody& operator=(DescribeSQLExplorerRetentionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configValue_ == nullptr
        && this->DBInstanceID_ == nullptr && this->DBInstanceName_ == nullptr && this->requestId_ == nullptr; };
    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline DescribeSQLExplorerRetentionResponseBody& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int32_t getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
    inline DescribeSQLExplorerRetentionResponseBody& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeSQLExplorerRetentionResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLExplorerRetentionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The retention period of SQL Explorer logs. Valid values:
    // * **30**: 30 days
    // * **180**: 180 days
    // * **365**: 1 year
    // * **1095**: 3 years
    // * **1825**: 5 years
    shared_ptr<string> configValue_ {};
    // The cluster ID.
    shared_ptr<int32_t> DBInstanceID_ {};
    // The cluster name.
    shared_ptr<string> DBInstanceName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
