// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODYDESKTOPGROUPSCOUNTPERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODYDESKTOPGROUPSCOUNTPERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus() = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus(const DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus &) = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus(DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus &&) = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus() = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus& operator=(const DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus &) = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus& operator=(DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->status_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The total number of cloud computers.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The status of the cloud computer.
    // 
    // Valid values:
    // 
    // *   Stopped
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Starting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Rebuilding
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Stopping
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Expired
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Deleted
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Pending
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
