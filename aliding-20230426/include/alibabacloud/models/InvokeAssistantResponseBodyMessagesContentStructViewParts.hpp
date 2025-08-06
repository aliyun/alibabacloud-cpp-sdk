// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBodyMessagesContentStructViewParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBodyMessagesContentStructViewParts& obj) { 
      DARABONBA_PTR_TO_JSON(append, append_);
      DARABONBA_PTR_TO_JSON(dataPart, dataPart_);
      DARABONBA_PTR_TO_JSON(finish, finish_);
      DARABONBA_PTR_TO_JSON(partDesc, partDesc_);
      DARABONBA_PTR_TO_JSON(partId, partId_);
      DARABONBA_PTR_TO_JSON(reasonPart, reasonPart_);
      DARABONBA_PTR_TO_JSON(recommendPart, recommendPart_);
      DARABONBA_PTR_TO_JSON(referencePart, referencePart_);
      DARABONBA_PTR_TO_JSON(textPart, textPart_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBodyMessagesContentStructViewParts& obj) { 
      DARABONBA_PTR_FROM_JSON(append, append_);
      DARABONBA_PTR_FROM_JSON(dataPart, dataPart_);
      DARABONBA_PTR_FROM_JSON(finish, finish_);
      DARABONBA_PTR_FROM_JSON(partDesc, partDesc_);
      DARABONBA_PTR_FROM_JSON(partId, partId_);
      DARABONBA_PTR_FROM_JSON(reasonPart, reasonPart_);
      DARABONBA_PTR_FROM_JSON(recommendPart, recommendPart_);
      DARABONBA_PTR_FROM_JSON(referencePart, referencePart_);
      DARABONBA_PTR_FROM_JSON(textPart, textPart_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    InvokeAssistantResponseBodyMessagesContentStructViewParts() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewParts(const InvokeAssistantResponseBodyMessagesContentStructViewParts &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewParts(InvokeAssistantResponseBodyMessagesContentStructViewParts &&) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBodyMessagesContentStructViewParts() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewParts& operator=(const InvokeAssistantResponseBodyMessagesContentStructViewParts &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewParts& operator=(InvokeAssistantResponseBodyMessagesContentStructViewParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->append_ != nullptr
        && this->dataPart_ != nullptr && this->finish_ != nullptr && this->partDesc_ != nullptr && this->partId_ != nullptr && this->reasonPart_ != nullptr
        && this->recommendPart_ != nullptr && this->referencePart_ != nullptr && this->textPart_ != nullptr && this->type_ != nullptr; };
    // append Field Functions 
    bool hasAppend() const { return this->append_ != nullptr;};
    void deleteAppend() { this->append_ = nullptr;};
    inline bool append() const { DARABONBA_PTR_GET_DEFAULT(append_, false) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setAppend(bool append) { DARABONBA_PTR_SET_VALUE(append_, append) };


    // dataPart Field Functions 
    bool hasDataPart() const { return this->dataPart_ != nullptr;};
    void deleteDataPart() { this->dataPart_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart & dataPart() const { DARABONBA_PTR_GET_CONST(dataPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart) };
    inline Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart dataPart() { DARABONBA_PTR_GET(dataPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setDataPart(const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart & dataPart) { DARABONBA_PTR_SET_VALUE(dataPart_, dataPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setDataPart(Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart && dataPart) { DARABONBA_PTR_SET_RVALUE(dataPart_, dataPart) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // partDesc Field Functions 
    bool hasPartDesc() const { return this->partDesc_ != nullptr;};
    void deletePartDesc() { this->partDesc_ = nullptr;};
    inline string partDesc() const { DARABONBA_PTR_GET_DEFAULT(partDesc_, "") };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setPartDesc(string partDesc) { DARABONBA_PTR_SET_VALUE(partDesc_, partDesc) };


    // partId Field Functions 
    bool hasPartId() const { return this->partId_ != nullptr;};
    void deletePartId() { this->partId_ = nullptr;};
    inline string partId() const { DARABONBA_PTR_GET_DEFAULT(partId_, "") };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setPartId(string partId) { DARABONBA_PTR_SET_VALUE(partId_, partId) };


    // reasonPart Field Functions 
    bool hasReasonPart() const { return this->reasonPart_ != nullptr;};
    void deleteReasonPart() { this->reasonPart_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart() const { DARABONBA_PTR_GET_CONST(reasonPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart reasonPart() { DARABONBA_PTR_GET(reasonPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setReasonPart(const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart) { DARABONBA_PTR_SET_VALUE(reasonPart_, reasonPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setReasonPart(Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart && reasonPart) { DARABONBA_PTR_SET_RVALUE(reasonPart_, reasonPart) };


    // recommendPart Field Functions 
    bool hasRecommendPart() const { return this->recommendPart_ != nullptr;};
    void deleteRecommendPart() { this->recommendPart_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart() const { DARABONBA_PTR_GET_CONST(recommendPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart recommendPart() { DARABONBA_PTR_GET(recommendPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setRecommendPart(const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart) { DARABONBA_PTR_SET_VALUE(recommendPart_, recommendPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setRecommendPart(Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart && recommendPart) { DARABONBA_PTR_SET_RVALUE(recommendPart_, recommendPart) };


    // referencePart Field Functions 
    bool hasReferencePart() const { return this->referencePart_ != nullptr;};
    void deleteReferencePart() { this->referencePart_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart & referencePart() const { DARABONBA_PTR_GET_CONST(referencePart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart referencePart() { DARABONBA_PTR_GET(referencePart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setReferencePart(const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart & referencePart) { DARABONBA_PTR_SET_VALUE(referencePart_, referencePart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setReferencePart(Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart && referencePart) { DARABONBA_PTR_SET_RVALUE(referencePart_, referencePart) };


    // textPart Field Functions 
    bool hasTextPart() const { return this->textPart_ != nullptr;};
    void deleteTextPart() { this->textPart_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart & textPart() const { DARABONBA_PTR_GET_CONST(textPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart) };
    inline Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart textPart() { DARABONBA_PTR_GET(textPart_, Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setTextPart(const Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart & textPart) { DARABONBA_PTR_SET_VALUE(textPart_, textPart) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setTextPart(Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart && textPart) { DARABONBA_PTR_SET_RVALUE(textPart_, textPart) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InvokeAssistantResponseBodyMessagesContentStructViewParts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> append_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart> dataPart_ = nullptr;
    std::shared_ptr<bool> finish_ = nullptr;
    std::shared_ptr<string> partDesc_ = nullptr;
    std::shared_ptr<string> partId_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReasonPart> reasonPart_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart> recommendPart_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart> referencePart_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsTextPart> textPart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
