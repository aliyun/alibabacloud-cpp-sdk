// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREINCRDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREINCRDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeRestoreIncrDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreIncrDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RestoreRecordId, restoreRecordId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreIncrDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RestoreRecordId, restoreRecordId_);
    };
    DescribeRestoreIncrDetailRequest() = default ;
    DescribeRestoreIncrDetailRequest(const DescribeRestoreIncrDetailRequest &) = default ;
    DescribeRestoreIncrDetailRequest(DescribeRestoreIncrDetailRequest &&) = default ;
    DescribeRestoreIncrDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreIncrDetailRequest() = default ;
    DescribeRestoreIncrDetailRequest& operator=(const DescribeRestoreIncrDetailRequest &) = default ;
    DescribeRestoreIncrDetailRequest& operator=(DescribeRestoreIncrDetailRequest &&) = default ;
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
    inline DescribeRestoreIncrDetailRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // restoreRecordId Field Functions 
    bool hasRestoreRecordId() const { return this->restoreRecordId_ != nullptr;};
    void deleteRestoreRecordId() { this->restoreRecordId_ = nullptr;};
    inline string getRestoreRecordId() const { DARABONBA_PTR_GET_DEFAULT(restoreRecordId_, "") };
    inline DescribeRestoreIncrDetailRequest& setRestoreRecordId(string restoreRecordId) { DARABONBA_PTR_SET_VALUE(restoreRecordId_, restoreRecordId) };


  protected:
    // The ID of the cluster for backup and recovery.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The ID of the restoration record. You can call the DescribeRestoreSummary operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> restoreRecordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
