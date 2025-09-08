// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGCOUNTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGCOUNTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigCounterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigCounterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(Online, online_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigCounterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
    };
    DescribeAutomateResponseConfigCounterResponseBodyData() = default ;
    DescribeAutomateResponseConfigCounterResponseBodyData(const DescribeAutomateResponseConfigCounterResponseBodyData &) = default ;
    DescribeAutomateResponseConfigCounterResponseBodyData(DescribeAutomateResponseConfigCounterResponseBodyData &&) = default ;
    DescribeAutomateResponseConfigCounterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigCounterResponseBodyData() = default ;
    DescribeAutomateResponseConfigCounterResponseBodyData& operator=(const DescribeAutomateResponseConfigCounterResponseBodyData &) = default ;
    DescribeAutomateResponseConfigCounterResponseBodyData& operator=(DescribeAutomateResponseConfigCounterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->all_ != nullptr
        && this->online_ != nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline int64_t all() const { DARABONBA_PTR_GET_DEFAULT(all_, 0L) };
    inline DescribeAutomateResponseConfigCounterResponseBodyData& setAll(int64_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline int64_t online() const { DARABONBA_PTR_GET_DEFAULT(online_, 0L) };
    inline DescribeAutomateResponseConfigCounterResponseBodyData& setOnline(int64_t online) { DARABONBA_PTR_SET_VALUE(online_, online) };


  protected:
    // The total number of rules.
    std::shared_ptr<int64_t> all_ = nullptr;
    // The number of enabled rules.
    std::shared_ptr<int64_t> online_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
