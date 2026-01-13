// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLCOLLECTORPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLCOLLECTORPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLCollectorPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLCollectorPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLCollectorStatus, SQLCollectorStatus_);
      DARABONBA_PTR_TO_JSON(StoragePeriod, storagePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLCollectorPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLCollectorStatus, SQLCollectorStatus_);
      DARABONBA_PTR_FROM_JSON(StoragePeriod, storagePeriod_);
    };
    DescribeSQLCollectorPolicyResponseBody() = default ;
    DescribeSQLCollectorPolicyResponseBody(const DescribeSQLCollectorPolicyResponseBody &) = default ;
    DescribeSQLCollectorPolicyResponseBody(DescribeSQLCollectorPolicyResponseBody &&) = default ;
    DescribeSQLCollectorPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLCollectorPolicyResponseBody() = default ;
    DescribeSQLCollectorPolicyResponseBody& operator=(const DescribeSQLCollectorPolicyResponseBody &) = default ;
    DescribeSQLCollectorPolicyResponseBody& operator=(DescribeSQLCollectorPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SQLCollectorStatus_ == nullptr && this->storagePeriod_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLCollectorPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLCollectorStatus Field Functions 
    bool hasSQLCollectorStatus() const { return this->SQLCollectorStatus_ != nullptr;};
    void deleteSQLCollectorStatus() { this->SQLCollectorStatus_ = nullptr;};
    inline string getSQLCollectorStatus() const { DARABONBA_PTR_GET_DEFAULT(SQLCollectorStatus_, "") };
    inline DescribeSQLCollectorPolicyResponseBody& setSQLCollectorStatus(string SQLCollectorStatus) { DARABONBA_PTR_SET_VALUE(SQLCollectorStatus_, SQLCollectorStatus) };


    // storagePeriod Field Functions 
    bool hasStoragePeriod() const { return this->storagePeriod_ != nullptr;};
    void deleteStoragePeriod() { this->storagePeriod_ = nullptr;};
    inline int32_t getStoragePeriod() const { DARABONBA_PTR_GET_DEFAULT(storagePeriod_, 0) };
    inline DescribeSQLCollectorPolicyResponseBody& setStoragePeriod(int32_t storagePeriod) { DARABONBA_PTR_SET_VALUE(storagePeriod_, storagePeriod) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the SQL Explorer (SQL Audit) feature. Valid values:
    // 
    // *   **Enable**
    // *   **Disabled**
    shared_ptr<string> SQLCollectorStatus_ {};
    // A reserved parameter.
    shared_ptr<int32_t> storagePeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
