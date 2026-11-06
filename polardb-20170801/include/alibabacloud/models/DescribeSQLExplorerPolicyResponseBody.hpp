// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLEXPLORERPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLEXPLORERPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSQLExplorerPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLExplorerPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLCollectorStatus, SQLCollectorStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLExplorerPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLCollectorStatus, SQLCollectorStatus_);
    };
    DescribeSQLExplorerPolicyResponseBody() = default ;
    DescribeSQLExplorerPolicyResponseBody(const DescribeSQLExplorerPolicyResponseBody &) = default ;
    DescribeSQLExplorerPolicyResponseBody(DescribeSQLExplorerPolicyResponseBody &&) = default ;
    DescribeSQLExplorerPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLExplorerPolicyResponseBody() = default ;
    DescribeSQLExplorerPolicyResponseBody& operator=(const DescribeSQLExplorerPolicyResponseBody &) = default ;
    DescribeSQLExplorerPolicyResponseBody& operator=(DescribeSQLExplorerPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SQLCollectorStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLExplorerPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLCollectorStatus Field Functions 
    bool hasSQLCollectorStatus() const { return this->SQLCollectorStatus_ != nullptr;};
    void deleteSQLCollectorStatus() { this->SQLCollectorStatus_ = nullptr;};
    inline string getSQLCollectorStatus() const { DARABONBA_PTR_GET_DEFAULT(SQLCollectorStatus_, "") };
    inline DescribeSQLExplorerPolicyResponseBody& setSQLCollectorStatus(string SQLCollectorStatus) { DARABONBA_PTR_SET_VALUE(SQLCollectorStatus_, SQLCollectorStatus) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the SQL Explorer feature is enabled. Valid values:
    // * **Enable**: Enabled.
    // * **Disabled**: Disabled.
    shared_ptr<string> SQLCollectorStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
