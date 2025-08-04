// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTAUDITRESULTRESPONSEBODYDATAERRORITEMDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTAUDITRESULTRESPONSEBODYDATAERRORITEMDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetSmartAuditResultResponseBodyDataErrorItemDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartAuditResultResponseBodyDataErrorItemDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(ContextOffset, contextOffset_);
      DARABONBA_PTR_TO_JSON(ErrorLevel, errorLevel_);
      DARABONBA_PTR_TO_JSON(ErrorWord, errorWord_);
      DARABONBA_PTR_TO_JSON(MajorCode, majorCode_);
      DARABONBA_PTR_TO_JSON(MajorCodeDesc, majorCodeDesc_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RightWord, rightWord_);
      DARABONBA_PTR_TO_JSON(SubClassCode, subClassCode_);
      DARABONBA_PTR_TO_JSON(SubClassDesc, subClassDesc_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartAuditResultResponseBodyDataErrorItemDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(ContextOffset, contextOffset_);
      DARABONBA_PTR_FROM_JSON(ErrorLevel, errorLevel_);
      DARABONBA_PTR_FROM_JSON(ErrorWord, errorWord_);
      DARABONBA_PTR_FROM_JSON(MajorCode, majorCode_);
      DARABONBA_PTR_FROM_JSON(MajorCodeDesc, majorCodeDesc_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RightWord, rightWord_);
      DARABONBA_PTR_FROM_JSON(SubClassCode, subClassCode_);
      DARABONBA_PTR_FROM_JSON(SubClassDesc, subClassDesc_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetSmartAuditResultResponseBodyDataErrorItemDetails() = default ;
    GetSmartAuditResultResponseBodyDataErrorItemDetails(const GetSmartAuditResultResponseBodyDataErrorItemDetails &) = default ;
    GetSmartAuditResultResponseBodyDataErrorItemDetails(GetSmartAuditResultResponseBodyDataErrorItemDetails &&) = default ;
    GetSmartAuditResultResponseBodyDataErrorItemDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartAuditResultResponseBodyDataErrorItemDetails() = default ;
    GetSmartAuditResultResponseBodyDataErrorItemDetails& operator=(const GetSmartAuditResultResponseBodyDataErrorItemDetails &) = default ;
    GetSmartAuditResultResponseBodyDataErrorItemDetails& operator=(GetSmartAuditResultResponseBodyDataErrorItemDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->context_ != nullptr && this->contextOffset_ != nullptr && this->errorLevel_ != nullptr && this->errorWord_ != nullptr && this->majorCode_ != nullptr
        && this->majorCodeDesc_ != nullptr && this->offset_ != nullptr && this->reason_ != nullptr && this->rightWord_ != nullptr && this->subClassCode_ != nullptr
        && this->subClassDesc_ != nullptr && this->url_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // contextOffset Field Functions 
    bool hasContextOffset() const { return this->contextOffset_ != nullptr;};
    void deleteContextOffset() { this->contextOffset_ = nullptr;};
    inline int32_t contextOffset() const { DARABONBA_PTR_GET_DEFAULT(contextOffset_, 0) };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setContextOffset(int32_t contextOffset) { DARABONBA_PTR_SET_VALUE(contextOffset_, contextOffset) };


    // errorLevel Field Functions 
    bool hasErrorLevel() const { return this->errorLevel_ != nullptr;};
    void deleteErrorLevel() { this->errorLevel_ = nullptr;};
    inline int32_t errorLevel() const { DARABONBA_PTR_GET_DEFAULT(errorLevel_, 0) };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setErrorLevel(int32_t errorLevel) { DARABONBA_PTR_SET_VALUE(errorLevel_, errorLevel) };


    // errorWord Field Functions 
    bool hasErrorWord() const { return this->errorWord_ != nullptr;};
    void deleteErrorWord() { this->errorWord_ = nullptr;};
    inline string errorWord() const { DARABONBA_PTR_GET_DEFAULT(errorWord_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setErrorWord(string errorWord) { DARABONBA_PTR_SET_VALUE(errorWord_, errorWord) };


    // majorCode Field Functions 
    bool hasMajorCode() const { return this->majorCode_ != nullptr;};
    void deleteMajorCode() { this->majorCode_ = nullptr;};
    inline string majorCode() const { DARABONBA_PTR_GET_DEFAULT(majorCode_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setMajorCode(string majorCode) { DARABONBA_PTR_SET_VALUE(majorCode_, majorCode) };


    // majorCodeDesc Field Functions 
    bool hasMajorCodeDesc() const { return this->majorCodeDesc_ != nullptr;};
    void deleteMajorCodeDesc() { this->majorCodeDesc_ = nullptr;};
    inline string majorCodeDesc() const { DARABONBA_PTR_GET_DEFAULT(majorCodeDesc_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setMajorCodeDesc(string majorCodeDesc) { DARABONBA_PTR_SET_VALUE(majorCodeDesc_, majorCodeDesc) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // rightWord Field Functions 
    bool hasRightWord() const { return this->rightWord_ != nullptr;};
    void deleteRightWord() { this->rightWord_ = nullptr;};
    inline string rightWord() const { DARABONBA_PTR_GET_DEFAULT(rightWord_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setRightWord(string rightWord) { DARABONBA_PTR_SET_VALUE(rightWord_, rightWord) };


    // subClassCode Field Functions 
    bool hasSubClassCode() const { return this->subClassCode_ != nullptr;};
    void deleteSubClassCode() { this->subClassCode_ = nullptr;};
    inline string subClassCode() const { DARABONBA_PTR_GET_DEFAULT(subClassCode_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setSubClassCode(string subClassCode) { DARABONBA_PTR_SET_VALUE(subClassCode_, subClassCode) };


    // subClassDesc Field Functions 
    bool hasSubClassDesc() const { return this->subClassDesc_ != nullptr;};
    void deleteSubClassDesc() { this->subClassDesc_ = nullptr;};
    inline string subClassDesc() const { DARABONBA_PTR_GET_DEFAULT(subClassDesc_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setSubClassDesc(string subClassDesc) { DARABONBA_PTR_SET_VALUE(subClassDesc_, subClassDesc) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetSmartAuditResultResponseBodyDataErrorItemDetails& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> checkId_ = nullptr;
    std::shared_ptr<string> context_ = nullptr;
    std::shared_ptr<int32_t> contextOffset_ = nullptr;
    std::shared_ptr<int32_t> errorLevel_ = nullptr;
    std::shared_ptr<string> errorWord_ = nullptr;
    std::shared_ptr<string> majorCode_ = nullptr;
    std::shared_ptr<string> majorCodeDesc_ = nullptr;
    std::shared_ptr<int32_t> offset_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> rightWord_ = nullptr;
    std::shared_ptr<string> subClassCode_ = nullptr;
    std::shared_ptr<string> subClassDesc_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
