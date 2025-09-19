// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckRiskStatisticsResponseBodyData.hpp>
#include <alibabacloud/models/GetCheckRiskStatisticsResponseBodySummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckRiskStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckRiskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckRiskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    GetCheckRiskStatisticsResponseBody() = default ;
    GetCheckRiskStatisticsResponseBody(const GetCheckRiskStatisticsResponseBody &) = default ;
    GetCheckRiskStatisticsResponseBody(GetCheckRiskStatisticsResponseBody &&) = default ;
    GetCheckRiskStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckRiskStatisticsResponseBody() = default ;
    GetCheckRiskStatisticsResponseBody& operator=(const GetCheckRiskStatisticsResponseBody &) = default ;
    GetCheckRiskStatisticsResponseBody& operator=(GetCheckRiskStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr && this->summary_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetCheckRiskStatisticsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCheckRiskStatisticsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCheckRiskStatisticsResponseBodyData>) };
    inline vector<GetCheckRiskStatisticsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetCheckRiskStatisticsResponseBodyData>) };
    inline GetCheckRiskStatisticsResponseBody& setData(const vector<GetCheckRiskStatisticsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCheckRiskStatisticsResponseBody& setData(vector<GetCheckRiskStatisticsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckRiskStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const GetCheckRiskStatisticsResponseBodySummary & summary() const { DARABONBA_PTR_GET_CONST(summary_, GetCheckRiskStatisticsResponseBodySummary) };
    inline GetCheckRiskStatisticsResponseBodySummary summary() { DARABONBA_PTR_GET(summary_, GetCheckRiskStatisticsResponseBodySummary) };
    inline GetCheckRiskStatisticsResponseBody& setSummary(const GetCheckRiskStatisticsResponseBodySummary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetCheckRiskStatisticsResponseBody& setSummary(GetCheckRiskStatisticsResponseBodySummary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The number of risk scenarios.
    std::shared_ptr<int32_t> count_ = nullptr;
    // An array consisting of the statistics on check items that are used in risk scenarios.
    std::shared_ptr<vector<GetCheckRiskStatisticsResponseBodyData>> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Historical check item statistics.
    std::shared_ptr<GetCheckRiskStatisticsResponseBodySummary> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
