// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARSQLCOLLECTORPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARSQLCOLLECTORPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarSQLCollectorPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarSQLCollectorPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLCollectorStatus, SQLCollectorStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarSQLCollectorPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLCollectorStatus, SQLCollectorStatus_);
    };
    DescribePolarSQLCollectorPolicyResponseBody() = default ;
    DescribePolarSQLCollectorPolicyResponseBody(const DescribePolarSQLCollectorPolicyResponseBody &) = default ;
    DescribePolarSQLCollectorPolicyResponseBody(DescribePolarSQLCollectorPolicyResponseBody &&) = default ;
    DescribePolarSQLCollectorPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarSQLCollectorPolicyResponseBody() = default ;
    DescribePolarSQLCollectorPolicyResponseBody& operator=(const DescribePolarSQLCollectorPolicyResponseBody &) = default ;
    DescribePolarSQLCollectorPolicyResponseBody& operator=(DescribePolarSQLCollectorPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->requestId_ == nullptr && return this->SQLCollectorStatus_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePolarSQLCollectorPolicyResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarSQLCollectorPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLCollectorStatus Field Functions 
    bool hasSQLCollectorStatus() const { return this->SQLCollectorStatus_ != nullptr;};
    void deleteSQLCollectorStatus() { this->SQLCollectorStatus_ = nullptr;};
    inline string SQLCollectorStatus() const { DARABONBA_PTR_GET_DEFAULT(SQLCollectorStatus_, "") };
    inline DescribePolarSQLCollectorPolicyResponseBody& setSQLCollectorStatus(string SQLCollectorStatus) { DARABONBA_PTR_SET_VALUE(SQLCollectorStatus_, SQLCollectorStatus) };


  protected:
    // The IDs of the clusters.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the SQL Explorer feature is enabled. Valid values:
    // 
    // *   **Enable**
    // *   **Disabled**
    std::shared_ptr<string> SQLCollectorStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
