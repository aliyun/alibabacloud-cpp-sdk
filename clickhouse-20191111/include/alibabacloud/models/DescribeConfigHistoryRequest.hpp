// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeConfigHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeConfigHistoryRequest() = default ;
    DescribeConfigHistoryRequest(const DescribeConfigHistoryRequest &) = default ;
    DescribeConfigHistoryRequest(DescribeConfigHistoryRequest &&) = default ;
    DescribeConfigHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigHistoryRequest() = default ;
    DescribeConfigHistoryRequest& operator=(const DescribeConfigHistoryRequest &) = default ;
    DescribeConfigHistoryRequest& operator=(DescribeConfigHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeConfigHistoryRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeConfigHistoryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeConfigHistoryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID. Call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query the information about all clusters in a specific region, including cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The end of the time range to query. Use the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The start of the time range to query. Use the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
