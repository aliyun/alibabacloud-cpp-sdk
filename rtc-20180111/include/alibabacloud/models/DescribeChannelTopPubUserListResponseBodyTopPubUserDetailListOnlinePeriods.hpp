// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODYTOPPUBUSERDETAILLISTONLINEPERIODS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODYTOPPUBUSERDETAILLISTONLINEPERIODS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods& obj) { 
      DARABONBA_PTR_TO_JSON(JoinTs, joinTs_);
      DARABONBA_PTR_TO_JSON(LeaveTs, leaveTs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods& obj) { 
      DARABONBA_PTR_FROM_JSON(JoinTs, joinTs_);
      DARABONBA_PTR_FROM_JSON(LeaveTs, leaveTs_);
    };
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods() = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods(const DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods &) = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods(DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods &&) = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods() = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods& operator=(const DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods &) = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods& operator=(DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->joinTs_ == nullptr
        && return this->leaveTs_ == nullptr; };
    // joinTs Field Functions 
    bool hasJoinTs() const { return this->joinTs_ != nullptr;};
    void deleteJoinTs() { this->joinTs_ = nullptr;};
    inline int64_t joinTs() const { DARABONBA_PTR_GET_DEFAULT(joinTs_, 0L) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods& setJoinTs(int64_t joinTs) { DARABONBA_PTR_SET_VALUE(joinTs_, joinTs) };


    // leaveTs Field Functions 
    bool hasLeaveTs() const { return this->leaveTs_ != nullptr;};
    void deleteLeaveTs() { this->leaveTs_ = nullptr;};
    inline int64_t leaveTs() const { DARABONBA_PTR_GET_DEFAULT(leaveTs_, 0L) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods& setLeaveTs(int64_t leaveTs) { DARABONBA_PTR_SET_VALUE(leaveTs_, leaveTs) };


  protected:
    std::shared_ptr<int64_t> joinTs_ = nullptr;
    std::shared_ptr<int64_t> leaveTs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
