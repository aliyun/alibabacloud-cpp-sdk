// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISEXPORTTASKDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISEXPORTTASKDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisExportTaskDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisExportTaskDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisExportTaskDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeAnalysisExportTaskDownloadUrlResponseBody() = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody(const DescribeAnalysisExportTaskDownloadUrlResponseBody &) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody(DescribeAnalysisExportTaskDownloadUrlResponseBody &&) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisExportTaskDownloadUrlResponseBody() = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody& operator=(const DescribeAnalysisExportTaskDownloadUrlResponseBody &) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody& operator=(DescribeAnalysisExportTaskDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject) };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject) };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBody& setResultObject(const DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBody& setResultObject(DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned object
    std::shared_ptr<DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
