// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODYDATAANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODYDATAANALYSIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseTableResponseBodyDataAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseTableResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(ReadRequestHotspotRegionList, readRequestHotspotRegionList_);
      DARABONBA_PTR_TO_JSON(ReadRequestUnbalanceSuggestion, readRequestUnbalanceSuggestion_);
      DARABONBA_PTR_TO_JSON(RequestHotspotRegionList, requestHotspotRegionList_);
      DARABONBA_PTR_TO_JSON(RequestUnbalanceSuggestion, requestUnbalanceSuggestion_);
      DARABONBA_PTR_TO_JSON(TableScore, tableScore_);
      DARABONBA_PTR_TO_JSON(WriteRequestHotspotRegionList, writeRequestHotspotRegionList_);
      DARABONBA_PTR_TO_JSON(WriteRequestUnbalanceSuggestion, writeRequestUnbalanceSuggestion_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseTableResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadRequestHotspotRegionList, readRequestHotspotRegionList_);
      DARABONBA_PTR_FROM_JSON(ReadRequestUnbalanceSuggestion, readRequestUnbalanceSuggestion_);
      DARABONBA_PTR_FROM_JSON(RequestHotspotRegionList, requestHotspotRegionList_);
      DARABONBA_PTR_FROM_JSON(RequestUnbalanceSuggestion, requestUnbalanceSuggestion_);
      DARABONBA_PTR_FROM_JSON(TableScore, tableScore_);
      DARABONBA_PTR_FROM_JSON(WriteRequestHotspotRegionList, writeRequestHotspotRegionList_);
      DARABONBA_PTR_FROM_JSON(WriteRequestUnbalanceSuggestion, writeRequestUnbalanceSuggestion_);
    };
    GetDoctorHBaseTableResponseBodyDataAnalysis() = default ;
    GetDoctorHBaseTableResponseBodyDataAnalysis(const GetDoctorHBaseTableResponseBodyDataAnalysis &) = default ;
    GetDoctorHBaseTableResponseBodyDataAnalysis(GetDoctorHBaseTableResponseBodyDataAnalysis &&) = default ;
    GetDoctorHBaseTableResponseBodyDataAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseTableResponseBodyDataAnalysis() = default ;
    GetDoctorHBaseTableResponseBodyDataAnalysis& operator=(const GetDoctorHBaseTableResponseBodyDataAnalysis &) = default ;
    GetDoctorHBaseTableResponseBodyDataAnalysis& operator=(GetDoctorHBaseTableResponseBodyDataAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->readRequestHotspotRegionList_ != nullptr
        && this->readRequestUnbalanceSuggestion_ != nullptr && this->requestHotspotRegionList_ != nullptr && this->requestUnbalanceSuggestion_ != nullptr && this->tableScore_ != nullptr && this->writeRequestHotspotRegionList_ != nullptr
        && this->writeRequestUnbalanceSuggestion_ != nullptr; };
    // readRequestHotspotRegionList Field Functions 
    bool hasReadRequestHotspotRegionList() const { return this->readRequestHotspotRegionList_ != nullptr;};
    void deleteReadRequestHotspotRegionList() { this->readRequestHotspotRegionList_ = nullptr;};
    inline const vector<string> & readRequestHotspotRegionList() const { DARABONBA_PTR_GET_CONST(readRequestHotspotRegionList_, vector<string>) };
    inline vector<string> readRequestHotspotRegionList() { DARABONBA_PTR_GET(readRequestHotspotRegionList_, vector<string>) };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setReadRequestHotspotRegionList(const vector<string> & readRequestHotspotRegionList) { DARABONBA_PTR_SET_VALUE(readRequestHotspotRegionList_, readRequestHotspotRegionList) };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setReadRequestHotspotRegionList(vector<string> && readRequestHotspotRegionList) { DARABONBA_PTR_SET_RVALUE(readRequestHotspotRegionList_, readRequestHotspotRegionList) };


    // readRequestUnbalanceSuggestion Field Functions 
    bool hasReadRequestUnbalanceSuggestion() const { return this->readRequestUnbalanceSuggestion_ != nullptr;};
    void deleteReadRequestUnbalanceSuggestion() { this->readRequestUnbalanceSuggestion_ = nullptr;};
    inline string readRequestUnbalanceSuggestion() const { DARABONBA_PTR_GET_DEFAULT(readRequestUnbalanceSuggestion_, "") };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setReadRequestUnbalanceSuggestion(string readRequestUnbalanceSuggestion) { DARABONBA_PTR_SET_VALUE(readRequestUnbalanceSuggestion_, readRequestUnbalanceSuggestion) };


    // requestHotspotRegionList Field Functions 
    bool hasRequestHotspotRegionList() const { return this->requestHotspotRegionList_ != nullptr;};
    void deleteRequestHotspotRegionList() { this->requestHotspotRegionList_ = nullptr;};
    inline const vector<string> & requestHotspotRegionList() const { DARABONBA_PTR_GET_CONST(requestHotspotRegionList_, vector<string>) };
    inline vector<string> requestHotspotRegionList() { DARABONBA_PTR_GET(requestHotspotRegionList_, vector<string>) };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setRequestHotspotRegionList(const vector<string> & requestHotspotRegionList) { DARABONBA_PTR_SET_VALUE(requestHotspotRegionList_, requestHotspotRegionList) };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setRequestHotspotRegionList(vector<string> && requestHotspotRegionList) { DARABONBA_PTR_SET_RVALUE(requestHotspotRegionList_, requestHotspotRegionList) };


    // requestUnbalanceSuggestion Field Functions 
    bool hasRequestUnbalanceSuggestion() const { return this->requestUnbalanceSuggestion_ != nullptr;};
    void deleteRequestUnbalanceSuggestion() { this->requestUnbalanceSuggestion_ = nullptr;};
    inline string requestUnbalanceSuggestion() const { DARABONBA_PTR_GET_DEFAULT(requestUnbalanceSuggestion_, "") };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setRequestUnbalanceSuggestion(string requestUnbalanceSuggestion) { DARABONBA_PTR_SET_VALUE(requestUnbalanceSuggestion_, requestUnbalanceSuggestion) };


    // tableScore Field Functions 
    bool hasTableScore() const { return this->tableScore_ != nullptr;};
    void deleteTableScore() { this->tableScore_ = nullptr;};
    inline int32_t tableScore() const { DARABONBA_PTR_GET_DEFAULT(tableScore_, 0) };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setTableScore(int32_t tableScore) { DARABONBA_PTR_SET_VALUE(tableScore_, tableScore) };


    // writeRequestHotspotRegionList Field Functions 
    bool hasWriteRequestHotspotRegionList() const { return this->writeRequestHotspotRegionList_ != nullptr;};
    void deleteWriteRequestHotspotRegionList() { this->writeRequestHotspotRegionList_ = nullptr;};
    inline const vector<string> & writeRequestHotspotRegionList() const { DARABONBA_PTR_GET_CONST(writeRequestHotspotRegionList_, vector<string>) };
    inline vector<string> writeRequestHotspotRegionList() { DARABONBA_PTR_GET(writeRequestHotspotRegionList_, vector<string>) };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setWriteRequestHotspotRegionList(const vector<string> & writeRequestHotspotRegionList) { DARABONBA_PTR_SET_VALUE(writeRequestHotspotRegionList_, writeRequestHotspotRegionList) };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setWriteRequestHotspotRegionList(vector<string> && writeRequestHotspotRegionList) { DARABONBA_PTR_SET_RVALUE(writeRequestHotspotRegionList_, writeRequestHotspotRegionList) };


    // writeRequestUnbalanceSuggestion Field Functions 
    bool hasWriteRequestUnbalanceSuggestion() const { return this->writeRequestUnbalanceSuggestion_ != nullptr;};
    void deleteWriteRequestUnbalanceSuggestion() { this->writeRequestUnbalanceSuggestion_ = nullptr;};
    inline string writeRequestUnbalanceSuggestion() const { DARABONBA_PTR_GET_DEFAULT(writeRequestUnbalanceSuggestion_, "") };
    inline GetDoctorHBaseTableResponseBodyDataAnalysis& setWriteRequestUnbalanceSuggestion(string writeRequestUnbalanceSuggestion) { DARABONBA_PTR_SET_VALUE(writeRequestUnbalanceSuggestion_, writeRequestUnbalanceSuggestion) };


  protected:
    // List of read hotspot regions.
    std::shared_ptr<vector<string>> readRequestHotspotRegionList_ = nullptr;
    // Description of read imbalance.
    std::shared_ptr<string> readRequestUnbalanceSuggestion_ = nullptr;
    // List of read/write hotspot regions.
    std::shared_ptr<vector<string>> requestHotspotRegionList_ = nullptr;
    // Description of read/write imbalance.
    std::shared_ptr<string> requestUnbalanceSuggestion_ = nullptr;
    // Table score.
    std::shared_ptr<int32_t> tableScore_ = nullptr;
    // List of write hotspot regions.
    std::shared_ptr<vector<string>> writeRequestHotspotRegionList_ = nullptr;
    // Description of write imbalance.
    std::shared_ptr<string> writeRequestUnbalanceSuggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
