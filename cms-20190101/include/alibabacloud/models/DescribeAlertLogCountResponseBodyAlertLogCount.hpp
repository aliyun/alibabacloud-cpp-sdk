// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGCOUNTRESPONSEBODYALERTLOGCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGCOUNTRESPONSEBODYALERTLOGCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertLogCountResponseBodyAlertLogCountLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogCountResponseBodyAlertLogCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogCountResponseBodyAlertLogCount& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogCountResponseBodyAlertLogCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
    };
    DescribeAlertLogCountResponseBodyAlertLogCount() = default ;
    DescribeAlertLogCountResponseBodyAlertLogCount(const DescribeAlertLogCountResponseBodyAlertLogCount &) = default ;
    DescribeAlertLogCountResponseBodyAlertLogCount(DescribeAlertLogCountResponseBodyAlertLogCount &&) = default ;
    DescribeAlertLogCountResponseBodyAlertLogCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogCountResponseBodyAlertLogCount() = default ;
    DescribeAlertLogCountResponseBodyAlertLogCount& operator=(const DescribeAlertLogCountResponseBodyAlertLogCount &) = default ;
    DescribeAlertLogCountResponseBodyAlertLogCount& operator=(DescribeAlertLogCountResponseBodyAlertLogCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->logs_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeAlertLogCountResponseBodyAlertLogCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribeAlertLogCountResponseBodyAlertLogCountLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribeAlertLogCountResponseBodyAlertLogCountLogs>) };
    inline vector<Models::DescribeAlertLogCountResponseBodyAlertLogCountLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribeAlertLogCountResponseBodyAlertLogCountLogs>) };
    inline DescribeAlertLogCountResponseBodyAlertLogCount& setLogs(const vector<Models::DescribeAlertLogCountResponseBodyAlertLogCountLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeAlertLogCountResponseBodyAlertLogCount& setLogs(vector<Models::DescribeAlertLogCountResponseBodyAlertLogCountLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


  protected:
    // The number of alert logs.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The details about alert logs.
    std::shared_ptr<vector<Models::DescribeAlertLogCountResponseBodyAlertLogCountLogs>> logs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
