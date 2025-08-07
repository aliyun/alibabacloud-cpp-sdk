// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERRORSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetErrorsShrinkRequestTimeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetErrorsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BizModule, bizModule_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_TO_JSON(Utdid, utdid_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BizModule, bizModule_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_FROM_JSON(Utdid, utdid_);
    };
    GetErrorsShrinkRequest() = default ;
    GetErrorsShrinkRequest(const GetErrorsShrinkRequest &) = default ;
    GetErrorsShrinkRequest(GetErrorsShrinkRequest &&) = default ;
    GetErrorsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorsShrinkRequest() = default ;
    GetErrorsShrinkRequest& operator=(const GetErrorsShrinkRequest &) = default ;
    GetErrorsShrinkRequest& operator=(GetErrorsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->bizModule_ != nullptr && this->digestHash_ != nullptr && this->filterShrink_ != nullptr && this->os_ != nullptr && this->pageIndex_ != nullptr
        && this->pageSize_ != nullptr && this->timeRange_ != nullptr && this->utdid_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetErrorsShrinkRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bizModule Field Functions 
    bool hasBizModule() const { return this->bizModule_ != nullptr;};
    void deleteBizModule() { this->bizModule_ = nullptr;};
    inline string bizModule() const { DARABONBA_PTR_GET_DEFAULT(bizModule_, "") };
    inline GetErrorsShrinkRequest& setBizModule(string bizModule) { DARABONBA_PTR_SET_VALUE(bizModule_, bizModule) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetErrorsShrinkRequest& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetErrorsShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetErrorsShrinkRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetErrorsShrinkRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetErrorsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const GetErrorsShrinkRequestTimeRange & timeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, GetErrorsShrinkRequestTimeRange) };
    inline GetErrorsShrinkRequestTimeRange timeRange() { DARABONBA_PTR_GET(timeRange_, GetErrorsShrinkRequestTimeRange) };
    inline GetErrorsShrinkRequest& setTimeRange(const GetErrorsShrinkRequestTimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetErrorsShrinkRequest& setTimeRange(GetErrorsShrinkRequestTimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


    // utdid Field Functions 
    bool hasUtdid() const { return this->utdid_ != nullptr;};
    void deleteUtdid() { this->utdid_ = nullptr;};
    inline string utdid() const { DARABONBA_PTR_GET_DEFAULT(utdid_, "") };
    inline GetErrorsShrinkRequest& setUtdid(string utdid) { DARABONBA_PTR_SET_VALUE(utdid_, utdid) };


  protected:
    // appKey
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizModule_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    std::shared_ptr<string> filterShrink_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetErrorsShrinkRequestTimeRange> timeRange_ = nullptr;
    // utdid
    std::shared_ptr<string> utdid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
