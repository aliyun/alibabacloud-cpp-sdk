// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETISSUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIssueShrinkRequestTimeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BizModule, bizModule_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BizModule, bizModule_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    GetIssueShrinkRequest() = default ;
    GetIssueShrinkRequest(const GetIssueShrinkRequest &) = default ;
    GetIssueShrinkRequest(GetIssueShrinkRequest &&) = default ;
    GetIssueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssueShrinkRequest() = default ;
    GetIssueShrinkRequest& operator=(const GetIssueShrinkRequest &) = default ;
    GetIssueShrinkRequest& operator=(GetIssueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->bizModule_ != nullptr && this->digestHash_ != nullptr && this->filterShrink_ != nullptr && this->os_ != nullptr && this->timeRange_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetIssueShrinkRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bizModule Field Functions 
    bool hasBizModule() const { return this->bizModule_ != nullptr;};
    void deleteBizModule() { this->bizModule_ = nullptr;};
    inline string bizModule() const { DARABONBA_PTR_GET_DEFAULT(bizModule_, "") };
    inline GetIssueShrinkRequest& setBizModule(string bizModule) { DARABONBA_PTR_SET_VALUE(bizModule_, bizModule) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetIssueShrinkRequest& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetIssueShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetIssueShrinkRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const GetIssueShrinkRequestTimeRange & timeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, GetIssueShrinkRequestTimeRange) };
    inline GetIssueShrinkRequestTimeRange timeRange() { DARABONBA_PTR_GET(timeRange_, GetIssueShrinkRequestTimeRange) };
    inline GetIssueShrinkRequest& setTimeRange(const GetIssueShrinkRequestTimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetIssueShrinkRequest& setTimeRange(GetIssueShrinkRequestTimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    // AppKey
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizModule_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    std::shared_ptr<string> filterShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> os_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetIssueShrinkRequestTimeRange> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
