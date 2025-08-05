// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDRESPONSEBODYTRENDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDRESPONSEBODYTRENDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeACLProtectTrendResponseBodyTrendList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeACLProtectTrendResponseBodyTrendList& obj) { 
      DARABONBA_PTR_TO_JSON(ProtectCnt, protectCnt_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeACLProtectTrendResponseBodyTrendList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtectCnt, protectCnt_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeACLProtectTrendResponseBodyTrendList() = default ;
    DescribeACLProtectTrendResponseBodyTrendList(const DescribeACLProtectTrendResponseBodyTrendList &) = default ;
    DescribeACLProtectTrendResponseBodyTrendList(DescribeACLProtectTrendResponseBodyTrendList &&) = default ;
    DescribeACLProtectTrendResponseBodyTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeACLProtectTrendResponseBodyTrendList() = default ;
    DescribeACLProtectTrendResponseBodyTrendList& operator=(const DescribeACLProtectTrendResponseBodyTrendList &) = default ;
    DescribeACLProtectTrendResponseBodyTrendList& operator=(DescribeACLProtectTrendResponseBodyTrendList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->protectCnt_ != nullptr
        && this->time_ != nullptr; };
    // protectCnt Field Functions 
    bool hasProtectCnt() const { return this->protectCnt_ != nullptr;};
    void deleteProtectCnt() { this->protectCnt_ = nullptr;};
    inline int32_t protectCnt() const { DARABONBA_PTR_GET_DEFAULT(protectCnt_, 0) };
    inline DescribeACLProtectTrendResponseBodyTrendList& setProtectCnt(int32_t protectCnt) { DARABONBA_PTR_SET_VALUE(protectCnt_, protectCnt) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeACLProtectTrendResponseBodyTrendList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The number of requests that are blocked by ACL on the current day.
    std::shared_ptr<int32_t> protectCnt_ = nullptr;
    // The UNIX timestamp at midnight (00:00:00) of each day, which indicates the date of the current day. Unit: seconds.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
