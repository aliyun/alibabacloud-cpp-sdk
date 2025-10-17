// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERMETRICSRESPONSEBODYOVERALLDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERMETRICSRESPONSEBODYOVERALLDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelUserMetricsResponseBodyOverallData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelUserMetricsResponseBodyOverallData& obj) { 
      DARABONBA_PTR_TO_JSON(TotalBadExpNum, totalBadExpNum_);
      DARABONBA_PTR_TO_JSON(TotalJoinFailNum, totalJoinFailNum_);
      DARABONBA_PTR_TO_JSON(TotalPubUserNum, totalPubUserNum_);
      DARABONBA_PTR_TO_JSON(TotalSubUserNum, totalSubUserNum_);
      DARABONBA_PTR_TO_JSON(TotalUserNum, totalUserNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelUserMetricsResponseBodyOverallData& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalBadExpNum, totalBadExpNum_);
      DARABONBA_PTR_FROM_JSON(TotalJoinFailNum, totalJoinFailNum_);
      DARABONBA_PTR_FROM_JSON(TotalPubUserNum, totalPubUserNum_);
      DARABONBA_PTR_FROM_JSON(TotalSubUserNum, totalSubUserNum_);
      DARABONBA_PTR_FROM_JSON(TotalUserNum, totalUserNum_);
    };
    DescribeChannelUserMetricsResponseBodyOverallData() = default ;
    DescribeChannelUserMetricsResponseBodyOverallData(const DescribeChannelUserMetricsResponseBodyOverallData &) = default ;
    DescribeChannelUserMetricsResponseBodyOverallData(DescribeChannelUserMetricsResponseBodyOverallData &&) = default ;
    DescribeChannelUserMetricsResponseBodyOverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelUserMetricsResponseBodyOverallData() = default ;
    DescribeChannelUserMetricsResponseBodyOverallData& operator=(const DescribeChannelUserMetricsResponseBodyOverallData &) = default ;
    DescribeChannelUserMetricsResponseBodyOverallData& operator=(DescribeChannelUserMetricsResponseBodyOverallData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalBadExpNum_ == nullptr
        && return this->totalJoinFailNum_ == nullptr && return this->totalPubUserNum_ == nullptr && return this->totalSubUserNum_ == nullptr && return this->totalUserNum_ == nullptr; };
    // totalBadExpNum Field Functions 
    bool hasTotalBadExpNum() const { return this->totalBadExpNum_ != nullptr;};
    void deleteTotalBadExpNum() { this->totalBadExpNum_ = nullptr;};
    inline int64_t totalBadExpNum() const { DARABONBA_PTR_GET_DEFAULT(totalBadExpNum_, 0L) };
    inline DescribeChannelUserMetricsResponseBodyOverallData& setTotalBadExpNum(int64_t totalBadExpNum) { DARABONBA_PTR_SET_VALUE(totalBadExpNum_, totalBadExpNum) };


    // totalJoinFailNum Field Functions 
    bool hasTotalJoinFailNum() const { return this->totalJoinFailNum_ != nullptr;};
    void deleteTotalJoinFailNum() { this->totalJoinFailNum_ = nullptr;};
    inline int64_t totalJoinFailNum() const { DARABONBA_PTR_GET_DEFAULT(totalJoinFailNum_, 0L) };
    inline DescribeChannelUserMetricsResponseBodyOverallData& setTotalJoinFailNum(int64_t totalJoinFailNum) { DARABONBA_PTR_SET_VALUE(totalJoinFailNum_, totalJoinFailNum) };


    // totalPubUserNum Field Functions 
    bool hasTotalPubUserNum() const { return this->totalPubUserNum_ != nullptr;};
    void deleteTotalPubUserNum() { this->totalPubUserNum_ = nullptr;};
    inline int64_t totalPubUserNum() const { DARABONBA_PTR_GET_DEFAULT(totalPubUserNum_, 0L) };
    inline DescribeChannelUserMetricsResponseBodyOverallData& setTotalPubUserNum(int64_t totalPubUserNum) { DARABONBA_PTR_SET_VALUE(totalPubUserNum_, totalPubUserNum) };


    // totalSubUserNum Field Functions 
    bool hasTotalSubUserNum() const { return this->totalSubUserNum_ != nullptr;};
    void deleteTotalSubUserNum() { this->totalSubUserNum_ = nullptr;};
    inline int64_t totalSubUserNum() const { DARABONBA_PTR_GET_DEFAULT(totalSubUserNum_, 0L) };
    inline DescribeChannelUserMetricsResponseBodyOverallData& setTotalSubUserNum(int64_t totalSubUserNum) { DARABONBA_PTR_SET_VALUE(totalSubUserNum_, totalSubUserNum) };


    // totalUserNum Field Functions 
    bool hasTotalUserNum() const { return this->totalUserNum_ != nullptr;};
    void deleteTotalUserNum() { this->totalUserNum_ = nullptr;};
    inline int64_t totalUserNum() const { DARABONBA_PTR_GET_DEFAULT(totalUserNum_, 0L) };
    inline DescribeChannelUserMetricsResponseBodyOverallData& setTotalUserNum(int64_t totalUserNum) { DARABONBA_PTR_SET_VALUE(totalUserNum_, totalUserNum) };


  protected:
    std::shared_ptr<int64_t> totalBadExpNum_ = nullptr;
    std::shared_ptr<int64_t> totalJoinFailNum_ = nullptr;
    std::shared_ptr<int64_t> totalPubUserNum_ = nullptr;
    std::shared_ptr<int64_t> totalSubUserNum_ = nullptr;
    std::shared_ptr<int64_t> totalUserNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
