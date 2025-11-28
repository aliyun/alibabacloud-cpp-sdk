// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKGEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKGEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribePackgeInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackgeInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackgeInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribePackgeInfoResponseBodyData() = default ;
    DescribePackgeInfoResponseBodyData(const DescribePackgeInfoResponseBodyData &) = default ;
    DescribePackgeInfoResponseBodyData(DescribePackgeInfoResponseBodyData &&) = default ;
    DescribePackgeInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackgeInfoResponseBodyData() = default ;
    DescribePackgeInfoResponseBodyData& operator=(const DescribePackgeInfoResponseBodyData &) = default ;
    DescribePackgeInfoResponseBodyData& operator=(DescribePackgeInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTrace_ == nullptr
        && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // enableTrace Field Functions 
    bool hasEnableTrace() const { return this->enableTrace_ != nullptr;};
    void deleteEnableTrace() { this->enableTrace_ = nullptr;};
    inline bool enableTrace() const { DARABONBA_PTR_GET_DEFAULT(enableTrace_, false) };
    inline DescribePackgeInfoResponseBodyData& setEnableTrace(bool enableTrace) { DARABONBA_PTR_SET_VALUE(enableTrace_, enableTrace) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribePackgeInfoResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribePackgeInfoResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<bool> enableTrace_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
