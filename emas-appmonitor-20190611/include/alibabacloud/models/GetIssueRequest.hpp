// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETISSUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIssueRequestFilter.hpp>
#include <alibabacloud/models/GetIssueRequestTimeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BizModule, bizModule_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BizModule, bizModule_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    GetIssueRequest() = default ;
    GetIssueRequest(const GetIssueRequest &) = default ;
    GetIssueRequest(GetIssueRequest &&) = default ;
    GetIssueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssueRequest() = default ;
    GetIssueRequest& operator=(const GetIssueRequest &) = default ;
    GetIssueRequest& operator=(GetIssueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->bizModule_ != nullptr && this->digestHash_ != nullptr && this->filter_ != nullptr && this->os_ != nullptr && this->timeRange_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetIssueRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bizModule Field Functions 
    bool hasBizModule() const { return this->bizModule_ != nullptr;};
    void deleteBizModule() { this->bizModule_ = nullptr;};
    inline string bizModule() const { DARABONBA_PTR_GET_DEFAULT(bizModule_, "") };
    inline GetIssueRequest& setBizModule(string bizModule) { DARABONBA_PTR_SET_VALUE(bizModule_, bizModule) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetIssueRequest& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetIssueRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, GetIssueRequestFilter) };
    inline GetIssueRequestFilter filter() { DARABONBA_PTR_GET(filter_, GetIssueRequestFilter) };
    inline GetIssueRequest& setFilter(const GetIssueRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetIssueRequest& setFilter(GetIssueRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetIssueRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const GetIssueRequestTimeRange & timeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, GetIssueRequestTimeRange) };
    inline GetIssueRequestTimeRange timeRange() { DARABONBA_PTR_GET(timeRange_, GetIssueRequestTimeRange) };
    inline GetIssueRequest& setTimeRange(const GetIssueRequestTimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetIssueRequest& setTimeRange(GetIssueRequestTimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    // AppKey
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizModule_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    std::shared_ptr<GetIssueRequestFilter> filter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> os_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetIssueRequestTimeRange> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
