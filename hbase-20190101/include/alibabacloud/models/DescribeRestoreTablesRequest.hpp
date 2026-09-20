// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeRestoreTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RestoreRecordId, restoreRecordId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RestoreRecordId, restoreRecordId_);
    };
    DescribeRestoreTablesRequest() = default ;
    DescribeRestoreTablesRequest(const DescribeRestoreTablesRequest &) = default ;
    DescribeRestoreTablesRequest(DescribeRestoreTablesRequest &&) = default ;
    DescribeRestoreTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreTablesRequest() = default ;
    DescribeRestoreTablesRequest& operator=(const DescribeRestoreTablesRequest &) = default ;
    DescribeRestoreTablesRequest& operator=(DescribeRestoreTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->restoreRecordId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeRestoreTablesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // restoreRecordId Field Functions 
    bool hasRestoreRecordId() const { return this->restoreRecordId_ != nullptr;};
    void deleteRestoreRecordId() { this->restoreRecordId_ = nullptr;};
    inline string getRestoreRecordId() const { DARABONBA_PTR_GET_DEFAULT(restoreRecordId_, "") };
    inline DescribeRestoreTablesRequest& setRestoreRecordId(string restoreRecordId) { DARABONBA_PTR_SET_VALUE(restoreRecordId_, restoreRecordId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The restore record ID. You can call the DescribeRestoreSummary operation to obtain this value.
    // 
    // This parameter is required.
    shared_ptr<string> restoreRecordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
