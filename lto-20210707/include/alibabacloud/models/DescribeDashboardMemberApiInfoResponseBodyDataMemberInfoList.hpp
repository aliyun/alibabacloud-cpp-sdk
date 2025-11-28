// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDMEMBERAPIINFORESPONSEBODYDATAMEMBERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDMEMBERAPIINFORESPONSEBODYDATAMEMBERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInvokeCount, apiInvokeCount_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInvokeCount, apiInvokeCount_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList() = default ;
    DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList(const DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList &) = default ;
    DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList(DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList &&) = default ;
    DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList() = default ;
    DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList& operator=(const DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList &) = default ;
    DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList& operator=(DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInvokeCount_ == nullptr
        && return this->time_ == nullptr; };
    // apiInvokeCount Field Functions 
    bool hasApiInvokeCount() const { return this->apiInvokeCount_ != nullptr;};
    void deleteApiInvokeCount() { this->apiInvokeCount_ = nullptr;};
    inline int64_t apiInvokeCount() const { DARABONBA_PTR_GET_DEFAULT(apiInvokeCount_, 0L) };
    inline DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList& setApiInvokeCount(int64_t apiInvokeCount) { DARABONBA_PTR_SET_VALUE(apiInvokeCount_, apiInvokeCount) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int64_t> apiInvokeCount_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
