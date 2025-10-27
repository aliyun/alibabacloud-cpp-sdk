// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYRESPONSEBODYDATAFAILEDREASONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYRESPONSEBODYDATAFAILEDREASONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePluginSummaryResponseBodyDataFailedReasons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSummaryResponseBodyDataFailedReasons& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSummaryResponseBodyDataFailedReasons& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    DescribePluginSummaryResponseBodyDataFailedReasons() = default ;
    DescribePluginSummaryResponseBodyDataFailedReasons(const DescribePluginSummaryResponseBodyDataFailedReasons &) = default ;
    DescribePluginSummaryResponseBodyDataFailedReasons(DescribePluginSummaryResponseBodyDataFailedReasons &&) = default ;
    DescribePluginSummaryResponseBodyDataFailedReasons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSummaryResponseBodyDataFailedReasons() = default ;
    DescribePluginSummaryResponseBodyDataFailedReasons& operator=(const DescribePluginSummaryResponseBodyDataFailedReasons &) = default ;
    DescribePluginSummaryResponseBodyDataFailedReasons& operator=(DescribePluginSummaryResponseBodyDataFailedReasons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->count_ == nullptr && return this->reason_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePluginSummaryResponseBodyDataFailedReasons& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePluginSummaryResponseBodyDataFailedReasons& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribePluginSummaryResponseBodyDataFailedReasons& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The error code for the installation failure.
    std::shared_ptr<string> code_ = nullptr;
    // The number of hosts on which the installation failed for this reason.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The cause of the installation failure.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
