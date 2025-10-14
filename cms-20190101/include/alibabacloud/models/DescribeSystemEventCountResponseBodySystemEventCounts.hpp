// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTCOUNTRESPONSEBODYSYSTEMEVENTCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTCOUNTRESPONSEBODYSYSTEMEVENTCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventCountResponseBodySystemEventCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventCountResponseBodySystemEventCounts& obj) { 
      DARABONBA_PTR_TO_JSON(SystemEventCount, systemEventCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventCountResponseBodySystemEventCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemEventCount, systemEventCount_);
    };
    DescribeSystemEventCountResponseBodySystemEventCounts() = default ;
    DescribeSystemEventCountResponseBodySystemEventCounts(const DescribeSystemEventCountResponseBodySystemEventCounts &) = default ;
    DescribeSystemEventCountResponseBodySystemEventCounts(DescribeSystemEventCountResponseBodySystemEventCounts &&) = default ;
    DescribeSystemEventCountResponseBodySystemEventCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventCountResponseBodySystemEventCounts() = default ;
    DescribeSystemEventCountResponseBodySystemEventCounts& operator=(const DescribeSystemEventCountResponseBodySystemEventCounts &) = default ;
    DescribeSystemEventCountResponseBodySystemEventCounts& operator=(DescribeSystemEventCountResponseBodySystemEventCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->systemEventCount_ == nullptr; };
    // systemEventCount Field Functions 
    bool hasSystemEventCount() const { return this->systemEventCount_ != nullptr;};
    void deleteSystemEventCount() { this->systemEventCount_ = nullptr;};
    inline const vector<Models::DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount> & systemEventCount() const { DARABONBA_PTR_GET_CONST(systemEventCount_, vector<Models::DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount>) };
    inline vector<Models::DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount> systemEventCount() { DARABONBA_PTR_GET(systemEventCount_, vector<Models::DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount>) };
    inline DescribeSystemEventCountResponseBodySystemEventCounts& setSystemEventCount(const vector<Models::DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount> & systemEventCount) { DARABONBA_PTR_SET_VALUE(systemEventCount_, systemEventCount) };
    inline DescribeSystemEventCountResponseBodySystemEventCounts& setSystemEventCount(vector<Models::DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount> && systemEventCount) { DARABONBA_PTR_SET_RVALUE(systemEventCount_, systemEventCount) };


  protected:
    std::shared_ptr<vector<Models::DescribeSystemEventCountResponseBodySystemEventCountsSystemEventCount>> systemEventCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
