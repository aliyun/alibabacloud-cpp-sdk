// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOSENSITIVETYPE_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOSENSITIVETYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& obj) { 
      DARABONBA_PTR_TO_JSON(MaskedContent, maskedContent_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(SensitiveTypeInfoList, sensitiveTypeInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& obj) { 
      DARABONBA_PTR_FROM_JSON(MaskedContent, maskedContent_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(SensitiveTypeInfoList, sensitiveTypeInfoList_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType(const ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType(ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maskedContent_ == nullptr
        && return this->riskResult_ == nullptr && return this->sensitiveTypeInfoList_ == nullptr; };
    // maskedContent Field Functions 
    bool hasMaskedContent() const { return this->maskedContent_ != nullptr;};
    void deleteMaskedContent() { this->maskedContent_ = nullptr;};
    inline string maskedContent() const { DARABONBA_PTR_GET_DEFAULT(maskedContent_, "") };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& setMaskedContent(string maskedContent) { DARABONBA_PTR_SET_VALUE(maskedContent_, maskedContent) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // sensitiveTypeInfoList Field Functions 
    bool hasSensitiveTypeInfoList() const { return this->sensitiveTypeInfoList_ != nullptr;};
    void deleteSensitiveTypeInfoList() { this->sensitiveTypeInfoList_ = nullptr;};
    inline const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList> & sensitiveTypeInfoList() const { DARABONBA_PTR_GET_CONST(sensitiveTypeInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList>) };
    inline vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList> sensitiveTypeInfoList() { DARABONBA_PTR_GET(sensitiveTypeInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList>) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& setSensitiveTypeInfoList(const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList> & sensitiveTypeInfoList) { DARABONBA_PTR_SET_VALUE(sensitiveTypeInfoList_, sensitiveTypeInfoList) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveType& setSensitiveTypeInfoList(vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList> && sensitiveTypeInfoList) { DARABONBA_PTR_SET_RVALUE(sensitiveTypeInfoList_, sensitiveTypeInfoList) };


  protected:
    std::shared_ptr<string> maskedContent_ = nullptr;
    std::shared_ptr<int32_t> riskResult_ = nullptr;
    std::shared_ptr<vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList>> sensitiveTypeInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
