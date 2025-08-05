// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGSUMMARYTREND_HPP_
#define ALIBABACLOUD_MODELS_CATALOGSUMMARYTREND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DlfNext20250310.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CatalogSummaryTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogSummaryTrend& obj) { 
      DARABONBA_PTR_TO_JSON(apiVisitCount, apiVisitCount_);
      DARABONBA_PTR_TO_JSON(fileAccessCount, fileAccessCount_);
      DARABONBA_PTR_TO_JSON(throughput, throughput_);
      DARABONBA_PTR_TO_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
      DARABONBA_PTR_TO_JSON(totalMetaCount, totalMetaCount_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogSummaryTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(apiVisitCount, apiVisitCount_);
      DARABONBA_PTR_FROM_JSON(fileAccessCount, fileAccessCount_);
      DARABONBA_PTR_FROM_JSON(throughput, throughput_);
      DARABONBA_PTR_FROM_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
      DARABONBA_PTR_FROM_JSON(totalMetaCount, totalMetaCount_);
    };
    CatalogSummaryTrend() = default ;
    CatalogSummaryTrend(const CatalogSummaryTrend &) = default ;
    CatalogSummaryTrend(CatalogSummaryTrend &&) = default ;
    CatalogSummaryTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogSummaryTrend() = default ;
    CatalogSummaryTrend& operator=(const CatalogSummaryTrend &) = default ;
    CatalogSummaryTrend& operator=(CatalogSummaryTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiVisitCount_ != nullptr
        && this->fileAccessCount_ != nullptr && this->throughput_ != nullptr && this->totalFileCount_ != nullptr && this->totalFileSizeInBytes_ != nullptr && this->totalMetaCount_ != nullptr; };
    // apiVisitCount Field Functions 
    bool hasApiVisitCount() const { return this->apiVisitCount_ != nullptr;};
    void deleteApiVisitCount() { this->apiVisitCount_ = nullptr;};
    inline const vector<DateSummary> & apiVisitCount() const { DARABONBA_PTR_GET_CONST(apiVisitCount_, vector<DateSummary>) };
    inline vector<DateSummary> apiVisitCount() { DARABONBA_PTR_GET(apiVisitCount_, vector<DateSummary>) };
    inline CatalogSummaryTrend& setApiVisitCount(const vector<DateSummary> & apiVisitCount) { DARABONBA_PTR_SET_VALUE(apiVisitCount_, apiVisitCount) };
    inline CatalogSummaryTrend& setApiVisitCount(vector<DateSummary> && apiVisitCount) { DARABONBA_PTR_SET_RVALUE(apiVisitCount_, apiVisitCount) };


    // fileAccessCount Field Functions 
    bool hasFileAccessCount() const { return this->fileAccessCount_ != nullptr;};
    void deleteFileAccessCount() { this->fileAccessCount_ = nullptr;};
    inline const vector<DateSummary> & fileAccessCount() const { DARABONBA_PTR_GET_CONST(fileAccessCount_, vector<DateSummary>) };
    inline vector<DateSummary> fileAccessCount() { DARABONBA_PTR_GET(fileAccessCount_, vector<DateSummary>) };
    inline CatalogSummaryTrend& setFileAccessCount(const vector<DateSummary> & fileAccessCount) { DARABONBA_PTR_SET_VALUE(fileAccessCount_, fileAccessCount) };
    inline CatalogSummaryTrend& setFileAccessCount(vector<DateSummary> && fileAccessCount) { DARABONBA_PTR_SET_RVALUE(fileAccessCount_, fileAccessCount) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline const vector<DateSummary> & throughput() const { DARABONBA_PTR_GET_CONST(throughput_, vector<DateSummary>) };
    inline vector<DateSummary> throughput() { DARABONBA_PTR_GET(throughput_, vector<DateSummary>) };
    inline CatalogSummaryTrend& setThroughput(const vector<DateSummary> & throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };
    inline CatalogSummaryTrend& setThroughput(vector<DateSummary> && throughput) { DARABONBA_PTR_SET_RVALUE(throughput_, throughput) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const vector<DateSummary> & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, vector<DateSummary>) };
    inline vector<DateSummary> totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, vector<DateSummary>) };
    inline CatalogSummaryTrend& setTotalFileCount(const vector<DateSummary> & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline CatalogSummaryTrend& setTotalFileCount(vector<DateSummary> && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileSizeInBytes Field Functions 
    bool hasTotalFileSizeInBytes() const { return this->totalFileSizeInBytes_ != nullptr;};
    void deleteTotalFileSizeInBytes() { this->totalFileSizeInBytes_ = nullptr;};
    inline const vector<DateSummary> & totalFileSizeInBytes() const { DARABONBA_PTR_GET_CONST(totalFileSizeInBytes_, vector<DateSummary>) };
    inline vector<DateSummary> totalFileSizeInBytes() { DARABONBA_PTR_GET(totalFileSizeInBytes_, vector<DateSummary>) };
    inline CatalogSummaryTrend& setTotalFileSizeInBytes(const vector<DateSummary> & totalFileSizeInBytes) { DARABONBA_PTR_SET_VALUE(totalFileSizeInBytes_, totalFileSizeInBytes) };
    inline CatalogSummaryTrend& setTotalFileSizeInBytes(vector<DateSummary> && totalFileSizeInBytes) { DARABONBA_PTR_SET_RVALUE(totalFileSizeInBytes_, totalFileSizeInBytes) };


    // totalMetaCount Field Functions 
    bool hasTotalMetaCount() const { return this->totalMetaCount_ != nullptr;};
    void deleteTotalMetaCount() { this->totalMetaCount_ = nullptr;};
    inline const vector<DateSummary> & totalMetaCount() const { DARABONBA_PTR_GET_CONST(totalMetaCount_, vector<DateSummary>) };
    inline vector<DateSummary> totalMetaCount() { DARABONBA_PTR_GET(totalMetaCount_, vector<DateSummary>) };
    inline CatalogSummaryTrend& setTotalMetaCount(const vector<DateSummary> & totalMetaCount) { DARABONBA_PTR_SET_VALUE(totalMetaCount_, totalMetaCount) };
    inline CatalogSummaryTrend& setTotalMetaCount(vector<DateSummary> && totalMetaCount) { DARABONBA_PTR_SET_RVALUE(totalMetaCount_, totalMetaCount) };


  protected:
    // API visit count trends
    std::shared_ptr<vector<DateSummary>> apiVisitCount_ = nullptr;
    // file access count trends
    std::shared_ptr<vector<DateSummary>> fileAccessCount_ = nullptr;
    // Table count trends
    std::shared_ptr<vector<DateSummary>> throughput_ = nullptr;
    // Historical total file count
    std::shared_ptr<vector<DateSummary>> totalFileCount_ = nullptr;
    // Database count trends
    std::shared_ptr<vector<DateSummary>> totalFileSizeInBytes_ = nullptr;
    // Latest snapshot file count
    std::shared_ptr<vector<DateSummary>> totalMetaCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
