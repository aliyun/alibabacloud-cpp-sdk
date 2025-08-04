// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELDISTRIBUTIONSTATDATARESPONSEBODYSTATLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELDISTRIBUTIONSTATDATARESPONSEBODYSTATLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelDistributionStatDataResponseBodyStatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelDistributionStatDataResponseBodyStatList& obj) { 
      DARABONBA_PTR_TO_JSON(CallUserCount, callUserCount_);
      DARABONBA_PTR_TO_JSON(CallUserRatio, callUserRatio_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelDistributionStatDataResponseBodyStatList& obj) { 
      DARABONBA_PTR_FROM_JSON(CallUserCount, callUserCount_);
      DARABONBA_PTR_FROM_JSON(CallUserRatio, callUserRatio_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeChannelDistributionStatDataResponseBodyStatList() = default ;
    DescribeChannelDistributionStatDataResponseBodyStatList(const DescribeChannelDistributionStatDataResponseBodyStatList &) = default ;
    DescribeChannelDistributionStatDataResponseBodyStatList(DescribeChannelDistributionStatDataResponseBodyStatList &&) = default ;
    DescribeChannelDistributionStatDataResponseBodyStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelDistributionStatDataResponseBodyStatList() = default ;
    DescribeChannelDistributionStatDataResponseBodyStatList& operator=(const DescribeChannelDistributionStatDataResponseBodyStatList &) = default ;
    DescribeChannelDistributionStatDataResponseBodyStatList& operator=(DescribeChannelDistributionStatDataResponseBodyStatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callUserCount_ != nullptr
        && this->callUserRatio_ != nullptr && this->name_ != nullptr; };
    // callUserCount Field Functions 
    bool hasCallUserCount() const { return this->callUserCount_ != nullptr;};
    void deleteCallUserCount() { this->callUserCount_ = nullptr;};
    inline int32_t callUserCount() const { DARABONBA_PTR_GET_DEFAULT(callUserCount_, 0) };
    inline DescribeChannelDistributionStatDataResponseBodyStatList& setCallUserCount(int32_t callUserCount) { DARABONBA_PTR_SET_VALUE(callUserCount_, callUserCount) };


    // callUserRatio Field Functions 
    bool hasCallUserRatio() const { return this->callUserRatio_ != nullptr;};
    void deleteCallUserRatio() { this->callUserRatio_ = nullptr;};
    inline string callUserRatio() const { DARABONBA_PTR_GET_DEFAULT(callUserRatio_, "") };
    inline DescribeChannelDistributionStatDataResponseBodyStatList& setCallUserRatio(string callUserRatio) { DARABONBA_PTR_SET_VALUE(callUserRatio_, callUserRatio) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeChannelDistributionStatDataResponseBodyStatList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int32_t> callUserCount_ = nullptr;
    std::shared_ptr<string> callUserRatio_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
