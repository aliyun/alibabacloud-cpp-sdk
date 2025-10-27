// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCheckSummaryResponseBodyOverallItemStatistic.hpp>
#include <alibabacloud/models/GetCheckSummaryResponseBodyOverallStatistic.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckSummaryResponseBodySummarys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallItemStatistic, overallItemStatistic_);
      DARABONBA_PTR_TO_JSON(OverallStatistic, overallStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Summarys, summarys_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallItemStatistic, overallItemStatistic_);
      DARABONBA_PTR_FROM_JSON(OverallStatistic, overallStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Summarys, summarys_);
    };
    GetCheckSummaryResponseBody() = default ;
    GetCheckSummaryResponseBody(const GetCheckSummaryResponseBody &) = default ;
    GetCheckSummaryResponseBody(GetCheckSummaryResponseBody &&) = default ;
    GetCheckSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSummaryResponseBody() = default ;
    GetCheckSummaryResponseBody& operator=(const GetCheckSummaryResponseBody &) = default ;
    GetCheckSummaryResponseBody& operator=(GetCheckSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->overallItemStatistic_ == nullptr
        && return this->overallStatistic_ == nullptr && return this->requestId_ == nullptr && return this->summarys_ == nullptr; };
    // overallItemStatistic Field Functions 
    bool hasOverallItemStatistic() const { return this->overallItemStatistic_ != nullptr;};
    void deleteOverallItemStatistic() { this->overallItemStatistic_ = nullptr;};
    inline const GetCheckSummaryResponseBodyOverallItemStatistic & overallItemStatistic() const { DARABONBA_PTR_GET_CONST(overallItemStatistic_, GetCheckSummaryResponseBodyOverallItemStatistic) };
    inline GetCheckSummaryResponseBodyOverallItemStatistic overallItemStatistic() { DARABONBA_PTR_GET(overallItemStatistic_, GetCheckSummaryResponseBodyOverallItemStatistic) };
    inline GetCheckSummaryResponseBody& setOverallItemStatistic(const GetCheckSummaryResponseBodyOverallItemStatistic & overallItemStatistic) { DARABONBA_PTR_SET_VALUE(overallItemStatistic_, overallItemStatistic) };
    inline GetCheckSummaryResponseBody& setOverallItemStatistic(GetCheckSummaryResponseBodyOverallItemStatistic && overallItemStatistic) { DARABONBA_PTR_SET_RVALUE(overallItemStatistic_, overallItemStatistic) };


    // overallStatistic Field Functions 
    bool hasOverallStatistic() const { return this->overallStatistic_ != nullptr;};
    void deleteOverallStatistic() { this->overallStatistic_ = nullptr;};
    inline const GetCheckSummaryResponseBodyOverallStatistic & overallStatistic() const { DARABONBA_PTR_GET_CONST(overallStatistic_, GetCheckSummaryResponseBodyOverallStatistic) };
    inline GetCheckSummaryResponseBodyOverallStatistic overallStatistic() { DARABONBA_PTR_GET(overallStatistic_, GetCheckSummaryResponseBodyOverallStatistic) };
    inline GetCheckSummaryResponseBody& setOverallStatistic(const GetCheckSummaryResponseBodyOverallStatistic & overallStatistic) { DARABONBA_PTR_SET_VALUE(overallStatistic_, overallStatistic) };
    inline GetCheckSummaryResponseBody& setOverallStatistic(GetCheckSummaryResponseBodyOverallStatistic && overallStatistic) { DARABONBA_PTR_SET_RVALUE(overallStatistic_, overallStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summarys Field Functions 
    bool hasSummarys() const { return this->summarys_ != nullptr;};
    void deleteSummarys() { this->summarys_ = nullptr;};
    inline const vector<GetCheckSummaryResponseBodySummarys> & summarys() const { DARABONBA_PTR_GET_CONST(summarys_, vector<GetCheckSummaryResponseBodySummarys>) };
    inline vector<GetCheckSummaryResponseBodySummarys> summarys() { DARABONBA_PTR_GET(summarys_, vector<GetCheckSummaryResponseBodySummarys>) };
    inline GetCheckSummaryResponseBody& setSummarys(const vector<GetCheckSummaryResponseBodySummarys> & summarys) { DARABONBA_PTR_SET_VALUE(summarys_, summarys) };
    inline GetCheckSummaryResponseBody& setSummarys(vector<GetCheckSummaryResponseBodySummarys> && summarys) { DARABONBA_PTR_SET_RVALUE(summarys_, summarys) };


  protected:
    // The statistics about the number of check items.
    std::shared_ptr<GetCheckSummaryResponseBodyOverallItemStatistic> overallItemStatistic_ = nullptr;
    // The overall risk statistics.
    std::shared_ptr<GetCheckSummaryResponseBodyOverallStatistic> overallStatistic_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The summary information about the configuration checks on cloud services.
    std::shared_ptr<vector<GetCheckSummaryResponseBodySummarys>> summarys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
