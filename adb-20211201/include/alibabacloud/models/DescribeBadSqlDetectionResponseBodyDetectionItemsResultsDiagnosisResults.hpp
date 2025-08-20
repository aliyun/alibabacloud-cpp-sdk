// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSDIAGNOSISRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSDIAGNOSISRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
    };
    DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults() = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults(const DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults &) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults(DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults &&) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults() = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& operator=(const DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults &) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& operator=(DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->detail_ != nullptr && this->operatorId_ != nullptr && this->stageId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


  protected:
    // The diagnostic code.
    std::shared_ptr<string> code_ = nullptr;
    // The information about the diagnostic result.
    std::shared_ptr<string> detail_ = nullptr;
    // The operator ID.
    std::shared_ptr<string> operatorId_ = nullptr;
    // The stage ID.
    std::shared_ptr<string> stageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
