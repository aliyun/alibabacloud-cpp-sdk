// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLCOLLECTORRETENTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLCOLLECTORRETENTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLCollectorRetentionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLCollectorRetentionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLCollectorRetentionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSQLCollectorRetentionResponseBody() = default ;
    DescribeSQLCollectorRetentionResponseBody(const DescribeSQLCollectorRetentionResponseBody &) = default ;
    DescribeSQLCollectorRetentionResponseBody(DescribeSQLCollectorRetentionResponseBody &&) = default ;
    DescribeSQLCollectorRetentionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLCollectorRetentionResponseBody() = default ;
    DescribeSQLCollectorRetentionResponseBody& operator=(const DescribeSQLCollectorRetentionResponseBody &) = default ;
    DescribeSQLCollectorRetentionResponseBody& operator=(DescribeSQLCollectorRetentionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configValue_ == nullptr
        && this->requestId_ == nullptr; };
    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline DescribeSQLCollectorRetentionResponseBody& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLCollectorRetentionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Log retention period of SQL Explorer logs. Valid values:
    // * **30**: 30 days.
    // * **180**: 180 days.
    // * **365**: 1 year.
    // * **1095**: 3 years.
    // * **1825**: 5 years.
    // 
    // > Log retention period of SQL Explorer logs for ApsaraDB RDS for PostgreSQL and ApsaraDB RDS for SQL Server is fixed at 30 days.
    shared_ptr<string> configValue_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
