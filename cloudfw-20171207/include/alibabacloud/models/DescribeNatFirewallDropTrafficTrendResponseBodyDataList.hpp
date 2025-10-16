// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLDROPTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLDROPTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallDropTrafficTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallDropTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(DropSession, dropSession_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TotalSession, totalSession_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallDropTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(DropSession, dropSession_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TotalSession, totalSession_);
    };
    DescribeNatFirewallDropTrafficTrendResponseBodyDataList() = default ;
    DescribeNatFirewallDropTrafficTrendResponseBodyDataList(const DescribeNatFirewallDropTrafficTrendResponseBodyDataList &) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBodyDataList(DescribeNatFirewallDropTrafficTrendResponseBodyDataList &&) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallDropTrafficTrendResponseBodyDataList() = default ;
    DescribeNatFirewallDropTrafficTrendResponseBodyDataList& operator=(const DescribeNatFirewallDropTrafficTrendResponseBodyDataList &) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBodyDataList& operator=(DescribeNatFirewallDropTrafficTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dropSession_ == nullptr
        && return this->time_ == nullptr && return this->totalSession_ == nullptr; };
    // dropSession Field Functions 
    bool hasDropSession() const { return this->dropSession_ != nullptr;};
    void deleteDropSession() { this->dropSession_ = nullptr;};
    inline int64_t dropSession() const { DARABONBA_PTR_GET_DEFAULT(dropSession_, 0L) };
    inline DescribeNatFirewallDropTrafficTrendResponseBodyDataList& setDropSession(int64_t dropSession) { DARABONBA_PTR_SET_VALUE(dropSession_, dropSession) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeNatFirewallDropTrafficTrendResponseBodyDataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // totalSession Field Functions 
    bool hasTotalSession() const { return this->totalSession_ != nullptr;};
    void deleteTotalSession() { this->totalSession_ = nullptr;};
    inline int64_t totalSession() const { DARABONBA_PTR_GET_DEFAULT(totalSession_, 0L) };
    inline DescribeNatFirewallDropTrafficTrendResponseBodyDataList& setTotalSession(int64_t totalSession) { DARABONBA_PTR_SET_VALUE(totalSession_, totalSession) };


  protected:
    std::shared_ptr<int64_t> dropSession_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<int64_t> totalSession_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
