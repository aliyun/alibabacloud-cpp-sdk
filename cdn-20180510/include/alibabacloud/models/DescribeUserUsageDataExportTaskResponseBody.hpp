// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserUsageDataExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserUsageDataExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageDataPerPage, usageDataPerPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserUsageDataExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageDataPerPage, usageDataPerPage_);
    };
    DescribeUserUsageDataExportTaskResponseBody() = default ;
    DescribeUserUsageDataExportTaskResponseBody(const DescribeUserUsageDataExportTaskResponseBody &) = default ;
    DescribeUserUsageDataExportTaskResponseBody(DescribeUserUsageDataExportTaskResponseBody &&) = default ;
    DescribeUserUsageDataExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserUsageDataExportTaskResponseBody() = default ;
    DescribeUserUsageDataExportTaskResponseBody& operator=(const DescribeUserUsageDataExportTaskResponseBody &) = default ;
    DescribeUserUsageDataExportTaskResponseBody& operator=(DescribeUserUsageDataExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->usageDataPerPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserUsageDataExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageDataPerPage Field Functions 
    bool hasUsageDataPerPage() const { return this->usageDataPerPage_ != nullptr;};
    void deleteUsageDataPerPage() { this->usageDataPerPage_ = nullptr;};
    inline const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage & usageDataPerPage() const { DARABONBA_PTR_GET_CONST(usageDataPerPage_, DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage) };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage usageDataPerPage() { DARABONBA_PTR_GET(usageDataPerPage_, DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage) };
    inline DescribeUserUsageDataExportTaskResponseBody& setUsageDataPerPage(const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage & usageDataPerPage) { DARABONBA_PTR_SET_VALUE(usageDataPerPage_, usageDataPerPage) };
    inline DescribeUserUsageDataExportTaskResponseBody& setUsageDataPerPage(DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage && usageDataPerPage) { DARABONBA_PTR_SET_RVALUE(usageDataPerPage_, usageDataPerPage) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The usage details returned per page.
    std::shared_ptr<DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage> usageDataPerPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
