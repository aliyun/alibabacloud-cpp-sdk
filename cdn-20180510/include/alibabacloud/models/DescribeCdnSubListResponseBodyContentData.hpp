// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODYCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODYCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSubListResponseBodyContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSubListResponseBodyContentData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(domains, domains_);
      DARABONBA_PTR_TO_JSON(effectiveEnd, effectiveEnd_);
      DARABONBA_PTR_TO_JSON(effectiveFrom, effectiveFrom_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subId, subId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSubListResponseBodyContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(domains, domains_);
      DARABONBA_PTR_FROM_JSON(effectiveEnd, effectiveEnd_);
      DARABONBA_PTR_FROM_JSON(effectiveFrom, effectiveFrom_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subId, subId_);
    };
    DescribeCdnSubListResponseBodyContentData() = default ;
    DescribeCdnSubListResponseBodyContentData(const DescribeCdnSubListResponseBodyContentData &) = default ;
    DescribeCdnSubListResponseBodyContentData(DescribeCdnSubListResponseBodyContentData &&) = default ;
    DescribeCdnSubListResponseBodyContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSubListResponseBodyContentData() = default ;
    DescribeCdnSubListResponseBodyContentData& operator=(const DescribeCdnSubListResponseBodyContentData &) = default ;
    DescribeCdnSubListResponseBodyContentData& operator=(DescribeCdnSubListResponseBodyContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->domains_ == nullptr && return this->effectiveEnd_ == nullptr && return this->effectiveFrom_ == nullptr && return this->reportId_ == nullptr && return this->status_ == nullptr
        && return this->subId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCdnSubListResponseBodyContentData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeCdnSubListResponseBodyContentData& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeCdnSubListResponseBodyContentData& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // effectiveEnd Field Functions 
    bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
    void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
    inline string effectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
    inline DescribeCdnSubListResponseBodyContentData& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


    // effectiveFrom Field Functions 
    bool hasEffectiveFrom() const { return this->effectiveFrom_ != nullptr;};
    void deleteEffectiveFrom() { this->effectiveFrom_ = nullptr;};
    inline string effectiveFrom() const { DARABONBA_PTR_GET_DEFAULT(effectiveFrom_, "") };
    inline DescribeCdnSubListResponseBodyContentData& setEffectiveFrom(string effectiveFrom) { DARABONBA_PTR_SET_VALUE(effectiveFrom_, effectiveFrom) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline const vector<int64_t> & reportId() const { DARABONBA_PTR_GET_CONST(reportId_, vector<int64_t>) };
    inline vector<int64_t> reportId() { DARABONBA_PTR_GET(reportId_, vector<int64_t>) };
    inline DescribeCdnSubListResponseBodyContentData& setReportId(const vector<int64_t> & reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };
    inline DescribeCdnSubListResponseBodyContentData& setReportId(vector<int64_t> && reportId) { DARABONBA_PTR_SET_RVALUE(reportId_, reportId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCdnSubListResponseBodyContentData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline int64_t subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, 0L) };
    inline DescribeCdnSubListResponseBodyContentData& setSubId(int64_t subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<string>> domains_ = nullptr;
    std::shared_ptr<string> effectiveEnd_ = nullptr;
    std::shared_ptr<string> effectiveFrom_ = nullptr;
    std::shared_ptr<vector<int64_t>> reportId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> subId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
