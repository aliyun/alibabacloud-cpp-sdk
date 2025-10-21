// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOSENSITIVETYPESENSITIVETYPEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOSENSITIVETYPESENSITIVETYPEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(MaskedContent, maskedContent_);
      DARABONBA_PTR_TO_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_TO_JSON(SensitiveContent, sensitiveContent_);
      DARABONBA_PTR_TO_JSON(SensitiveTypeName, sensitiveTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(MaskedContent, maskedContent_);
      DARABONBA_PTR_FROM_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_FROM_JSON(SensitiveContent, sensitiveContent_);
      DARABONBA_PTR_FROM_JSON(SensitiveTypeName, sensitiveTypeName_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList(const ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList(ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->maskedContent_ == nullptr && return this->sensitiveCategory_ == nullptr && return this->sensitiveContent_ == nullptr && return this->sensitiveTypeName_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // maskedContent Field Functions 
    bool hasMaskedContent() const { return this->maskedContent_ != nullptr;};
    void deleteMaskedContent() { this->maskedContent_ = nullptr;};
    inline string maskedContent() const { DARABONBA_PTR_GET_DEFAULT(maskedContent_, "") };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& setMaskedContent(string maskedContent) { DARABONBA_PTR_SET_VALUE(maskedContent_, maskedContent) };


    // sensitiveCategory Field Functions 
    bool hasSensitiveCategory() const { return this->sensitiveCategory_ != nullptr;};
    void deleteSensitiveCategory() { this->sensitiveCategory_ = nullptr;};
    inline int32_t sensitiveCategory() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCategory_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& setSensitiveCategory(int32_t sensitiveCategory) { DARABONBA_PTR_SET_VALUE(sensitiveCategory_, sensitiveCategory) };


    // sensitiveContent Field Functions 
    bool hasSensitiveContent() const { return this->sensitiveContent_ != nullptr;};
    void deleteSensitiveContent() { this->sensitiveContent_ = nullptr;};
    inline string sensitiveContent() const { DARABONBA_PTR_GET_DEFAULT(sensitiveContent_, "") };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& setSensitiveContent(string sensitiveContent) { DARABONBA_PTR_SET_VALUE(sensitiveContent_, sensitiveContent) };


    // sensitiveTypeName Field Functions 
    bool hasSensitiveTypeName() const { return this->sensitiveTypeName_ != nullptr;};
    void deleteSensitiveTypeName() { this->sensitiveTypeName_ = nullptr;};
    inline string sensitiveTypeName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveTypeName_, "") };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoSensitiveTypeSensitiveTypeInfoList& setSensitiveTypeName(string sensitiveTypeName) { DARABONBA_PTR_SET_VALUE(sensitiveTypeName_, sensitiveTypeName) };


  protected:
    std::shared_ptr<int32_t> actionType_ = nullptr;
    std::shared_ptr<string> maskedContent_ = nullptr;
    std::shared_ptr<int32_t> sensitiveCategory_ = nullptr;
    std::shared_ptr<string> sensitiveContent_ = nullptr;
    std::shared_ptr<string> sensitiveTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
