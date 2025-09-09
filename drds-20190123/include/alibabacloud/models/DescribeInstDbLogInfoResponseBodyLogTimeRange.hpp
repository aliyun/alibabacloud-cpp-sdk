// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTDBLOGINFORESPONSEBODYLOGTIMERANGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTDBLOGINFORESPONSEBODYLOGTIMERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstDbLogInfoResponseBodyLogTimeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstDbLogInfoResponseBodyLogTimeRange& obj) { 
      DARABONBA_PTR_TO_JSON(SupportLatestTime, supportLatestTime_);
      DARABONBA_PTR_TO_JSON(SupportOldestTime, supportOldestTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstDbLogInfoResponseBodyLogTimeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportLatestTime, supportLatestTime_);
      DARABONBA_PTR_FROM_JSON(SupportOldestTime, supportOldestTime_);
    };
    DescribeInstDbLogInfoResponseBodyLogTimeRange() = default ;
    DescribeInstDbLogInfoResponseBodyLogTimeRange(const DescribeInstDbLogInfoResponseBodyLogTimeRange &) = default ;
    DescribeInstDbLogInfoResponseBodyLogTimeRange(DescribeInstDbLogInfoResponseBodyLogTimeRange &&) = default ;
    DescribeInstDbLogInfoResponseBodyLogTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstDbLogInfoResponseBodyLogTimeRange() = default ;
    DescribeInstDbLogInfoResponseBodyLogTimeRange& operator=(const DescribeInstDbLogInfoResponseBodyLogTimeRange &) = default ;
    DescribeInstDbLogInfoResponseBodyLogTimeRange& operator=(DescribeInstDbLogInfoResponseBodyLogTimeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportLatestTime_ != nullptr
        && this->supportOldestTime_ != nullptr; };
    // supportLatestTime Field Functions 
    bool hasSupportLatestTime() const { return this->supportLatestTime_ != nullptr;};
    void deleteSupportLatestTime() { this->supportLatestTime_ = nullptr;};
    inline int64_t supportLatestTime() const { DARABONBA_PTR_GET_DEFAULT(supportLatestTime_, 0L) };
    inline DescribeInstDbLogInfoResponseBodyLogTimeRange& setSupportLatestTime(int64_t supportLatestTime) { DARABONBA_PTR_SET_VALUE(supportLatestTime_, supportLatestTime) };


    // supportOldestTime Field Functions 
    bool hasSupportOldestTime() const { return this->supportOldestTime_ != nullptr;};
    void deleteSupportOldestTime() { this->supportOldestTime_ = nullptr;};
    inline int64_t supportOldestTime() const { DARABONBA_PTR_GET_DEFAULT(supportOldestTime_, 0L) };
    inline DescribeInstDbLogInfoResponseBodyLogTimeRange& setSupportOldestTime(int64_t supportOldestTime) { DARABONBA_PTR_SET_VALUE(supportOldestTime_, supportOldestTime) };


  protected:
    // The start time of the query time range.
    std::shared_ptr<int64_t> supportLatestTime_ = nullptr;
    // The end time of the task.
    std::shared_ptr<int64_t> supportOldestTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
