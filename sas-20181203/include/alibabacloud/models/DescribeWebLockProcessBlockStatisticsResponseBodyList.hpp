// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKPROCESSBLOCKSTATISTICSRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKPROCESSBLOCKSTATISTICSRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockProcessBlockStatisticsResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockProcessBlockStatisticsResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Process, process_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockProcessBlockStatisticsResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
    };
    DescribeWebLockProcessBlockStatisticsResponseBodyList() = default ;
    DescribeWebLockProcessBlockStatisticsResponseBodyList(const DescribeWebLockProcessBlockStatisticsResponseBodyList &) = default ;
    DescribeWebLockProcessBlockStatisticsResponseBodyList(DescribeWebLockProcessBlockStatisticsResponseBodyList &&) = default ;
    DescribeWebLockProcessBlockStatisticsResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockProcessBlockStatisticsResponseBodyList() = default ;
    DescribeWebLockProcessBlockStatisticsResponseBodyList& operator=(const DescribeWebLockProcessBlockStatisticsResponseBodyList &) = default ;
    DescribeWebLockProcessBlockStatisticsResponseBodyList& operator=(DescribeWebLockProcessBlockStatisticsResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->process_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWebLockProcessBlockStatisticsResponseBodyList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribeWebLockProcessBlockStatisticsResponseBodyList& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


  protected:
    // The number of processes that are returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The process.
    std::shared_ptr<string> process_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
