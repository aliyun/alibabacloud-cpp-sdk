// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsResourceUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsResourceUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredEndTime, expiredEndTime_);
      DARABONBA_PTR_TO_JSON(ExpiredStartTime, expiredStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsResourceUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredEndTime, expiredEndTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredStartTime, expiredStartTime_);
    };
    DescribeEnsResourceUsageRequest() = default ;
    DescribeEnsResourceUsageRequest(const DescribeEnsResourceUsageRequest &) = default ;
    DescribeEnsResourceUsageRequest(DescribeEnsResourceUsageRequest &&) = default ;
    DescribeEnsResourceUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsResourceUsageRequest() = default ;
    DescribeEnsResourceUsageRequest& operator=(const DescribeEnsResourceUsageRequest &) = default ;
    DescribeEnsResourceUsageRequest& operator=(DescribeEnsResourceUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredEndTime_ == nullptr
        && this->expiredStartTime_ == nullptr; };
    // expiredEndTime Field Functions 
    bool hasExpiredEndTime() const { return this->expiredEndTime_ != nullptr;};
    void deleteExpiredEndTime() { this->expiredEndTime_ = nullptr;};
    inline string getExpiredEndTime() const { DARABONBA_PTR_GET_DEFAULT(expiredEndTime_, "") };
    inline DescribeEnsResourceUsageRequest& setExpiredEndTime(string expiredEndTime) { DARABONBA_PTR_SET_VALUE(expiredEndTime_, expiredEndTime) };


    // expiredStartTime Field Functions 
    bool hasExpiredStartTime() const { return this->expiredStartTime_ != nullptr;};
    void deleteExpiredStartTime() { this->expiredStartTime_ = nullptr;};
    inline string getExpiredStartTime() const { DARABONBA_PTR_GET_DEFAULT(expiredStartTime_, "") };
    inline DescribeEnsResourceUsageRequest& setExpiredStartTime(string expiredStartTime) { DARABONBA_PTR_SET_VALUE(expiredStartTime_, expiredStartTime) };


  protected:
    // The end of the time range to query. Format: yyyy-MM-dd or yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> expiredEndTime_ {};
    // The beginning of the time range to query. Format: yyyy-MM-dd or yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> expiredStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
