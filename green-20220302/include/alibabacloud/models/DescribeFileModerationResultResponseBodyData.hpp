// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageResult.hpp>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(PageSummary, pageSummary_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(PageSummary, pageSummary_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeFileModerationResultResponseBodyData() = default ;
    DescribeFileModerationResultResponseBodyData(const DescribeFileModerationResultResponseBodyData &) = default ;
    DescribeFileModerationResultResponseBodyData(DescribeFileModerationResultResponseBodyData &&) = default ;
    DescribeFileModerationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBodyData() = default ;
    DescribeFileModerationResultResponseBodyData& operator=(const DescribeFileModerationResultResponseBodyData &) = default ;
    DescribeFileModerationResultResponseBodyData& operator=(DescribeFileModerationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && return this->docType_ == nullptr && return this->pageResult_ == nullptr && return this->pageSummary_ == nullptr && return this->riskLevel_ == nullptr && return this->url_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline DescribeFileModerationResultResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline DescribeFileModerationResultResponseBodyData& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const vector<Models::DescribeFileModerationResultResponseBodyDataPageResult> & pageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResult>) };
    inline vector<Models::DescribeFileModerationResultResponseBodyDataPageResult> pageResult() { DARABONBA_PTR_GET(pageResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResult>) };
    inline DescribeFileModerationResultResponseBodyData& setPageResult(const vector<Models::DescribeFileModerationResultResponseBodyDataPageResult> & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline DescribeFileModerationResultResponseBodyData& setPageResult(vector<Models::DescribeFileModerationResultResponseBodyDataPageResult> && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // pageSummary Field Functions 
    bool hasPageSummary() const { return this->pageSummary_ != nullptr;};
    void deletePageSummary() { this->pageSummary_ = nullptr;};
    inline const Models::DescribeFileModerationResultResponseBodyDataPageSummary & pageSummary() const { DARABONBA_PTR_GET_CONST(pageSummary_, Models::DescribeFileModerationResultResponseBodyDataPageSummary) };
    inline Models::DescribeFileModerationResultResponseBodyDataPageSummary pageSummary() { DARABONBA_PTR_GET(pageSummary_, Models::DescribeFileModerationResultResponseBodyDataPageSummary) };
    inline DescribeFileModerationResultResponseBodyData& setPageSummary(const Models::DescribeFileModerationResultResponseBodyDataPageSummary & pageSummary) { DARABONBA_PTR_SET_VALUE(pageSummary_, pageSummary) };
    inline DescribeFileModerationResultResponseBodyData& setPageSummary(Models::DescribeFileModerationResultResponseBodyDataPageSummary && pageSummary) { DARABONBA_PTR_SET_RVALUE(pageSummary_, pageSummary) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeFileModerationResultResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeFileModerationResultResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The ID of the moderated object.
    std::shared_ptr<string> dataId_ = nullptr;
    // Optional. The document type.
    std::shared_ptr<string> docType_ = nullptr;
    // An array that consists of the moderation results.
    std::shared_ptr<vector<Models::DescribeFileModerationResultResponseBodyDataPageResult>> pageResult_ = nullptr;
    // Summary of results
    std::shared_ptr<Models::DescribeFileModerationResultResponseBodyDataPageSummary> pageSummary_ = nullptr;
    // Risk Level
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The URL of the moderated object.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
