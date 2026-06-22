// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORREPORTCOMPONENTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORREPORTCOMPONENTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorReportComponentSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorReportComponentSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorReportComponentSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorReportComponentSummaryResponseBody() = default ;
    GetDoctorReportComponentSummaryResponseBody(const GetDoctorReportComponentSummaryResponseBody &) = default ;
    GetDoctorReportComponentSummaryResponseBody(GetDoctorReportComponentSummaryResponseBody &&) = default ;
    GetDoctorReportComponentSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorReportComponentSummaryResponseBody() = default ;
    GetDoctorReportComponentSummaryResponseBody& operator=(const GetDoctorReportComponentSummaryResponseBody &) = default ;
    GetDoctorReportComponentSummaryResponseBody& operator=(GetDoctorReportComponentSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->score_ == nullptr
        && this->suggestion_ == nullptr && this->summary_ == nullptr; };
      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline Data& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline Data& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    protected:
      // Score.
      shared_ptr<int32_t> score_ {};
      // Optimization suggestions.
      shared_ptr<string> suggestion_ {};
      // The summary of the report.
      shared_ptr<string> summary_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorReportComponentSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorReportComponentSummaryResponseBody::Data) };
    inline GetDoctorReportComponentSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDoctorReportComponentSummaryResponseBody::Data) };
    inline GetDoctorReportComponentSummaryResponseBody& setData(const GetDoctorReportComponentSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorReportComponentSummaryResponseBody& setData(GetDoctorReportComponentSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorReportComponentSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the report.
    shared_ptr<GetDoctorReportComponentSummaryResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
