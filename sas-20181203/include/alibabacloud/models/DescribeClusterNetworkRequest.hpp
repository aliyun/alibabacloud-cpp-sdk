// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeClusterNetworkRequest() = default ;
    DescribeClusterNetworkRequest(const DescribeClusterNetworkRequest &) = default ;
    DescribeClusterNetworkRequest(DescribeClusterNetworkRequest &&) = default ;
    DescribeClusterNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetworkRequest() = default ;
    DescribeClusterNetworkRequest& operator=(const DescribeClusterNetworkRequest &) = default ;
    DescribeClusterNetworkRequest& operator=(DescribeClusterNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeClusterNetworkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeClusterNetworkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end timestamp of the query. Unit: milliseconds.
    // 
    // > The days between the start timestamp and the end timestamp cannot exceed **seven** days.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The start timestamp of the query. Unit: milliseconds.
    // 
    // > The days between the start timestamp and the end timestamp cannot exceed **seven** days.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
