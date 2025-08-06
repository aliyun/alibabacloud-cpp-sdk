// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserUsageDetailDataExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserUsageDetailDataExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageDataPerPage, usageDataPerPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserUsageDetailDataExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageDataPerPage, usageDataPerPage_);
    };
    DescribeVodUserUsageDetailDataExportTaskResponseBody() = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBody(const DescribeVodUserUsageDetailDataExportTaskResponseBody &) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBody(DescribeVodUserUsageDetailDataExportTaskResponseBody &&) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserUsageDetailDataExportTaskResponseBody() = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBody& operator=(const DescribeVodUserUsageDetailDataExportTaskResponseBody &) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBody& operator=(DescribeVodUserUsageDetailDataExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->usageDataPerPage_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageDataPerPage Field Functions 
    bool hasUsageDataPerPage() const { return this->usageDataPerPage_ != nullptr;};
    void deleteUsageDataPerPage() { this->usageDataPerPage_ = nullptr;};
    inline const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage & usageDataPerPage() const { DARABONBA_PTR_GET_CONST(usageDataPerPage_, DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage) };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage usageDataPerPage() { DARABONBA_PTR_GET(usageDataPerPage_, DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage) };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBody& setUsageDataPerPage(const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage & usageDataPerPage) { DARABONBA_PTR_SET_VALUE(usageDataPerPage_, usageDataPerPage) };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBody& setUsageDataPerPage(DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage && usageDataPerPage) { DARABONBA_PTR_SET_RVALUE(usageDataPerPage_, usageDataPerPage) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage> usageDataPerPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
