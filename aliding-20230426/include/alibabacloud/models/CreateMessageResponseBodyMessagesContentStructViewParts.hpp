// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentStructViewPartsDataPart.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentStructViewPartsTextPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBodyMessagesContentStructViewParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBodyMessagesContentStructViewParts& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBodyMessagesContentStructViewParts& obj) { 
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
    CreateMessageResponseBodyMessagesContentStructViewParts() = default ;
    CreateMessageResponseBodyMessagesContentStructViewParts(const CreateMessageResponseBodyMessagesContentStructViewParts &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewParts(CreateMessageResponseBodyMessagesContentStructViewParts &&) = default ;
    CreateMessageResponseBodyMessagesContentStructViewParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBodyMessagesContentStructViewParts() = default ;
    CreateMessageResponseBodyMessagesContentStructViewParts& operator=(const CreateMessageResponseBodyMessagesContentStructViewParts &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewParts& operator=(CreateMessageResponseBodyMessagesContentStructViewParts &&) = default ;
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
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setAppend(bool append) { DARABONBA_PTR_SET_VALUE(append_, append) };


    // dataPart Field Functions 
    bool hasDataPart() const { return this->dataPart_ != nullptr;};
    void deleteDataPart() { this->dataPart_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentStructViewPartsDataPart & dataPart() const { DARABONBA_PTR_GET_CONST(dataPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsDataPart) };
    inline Models::CreateMessageResponseBodyMessagesContentStructViewPartsDataPart dataPart() { DARABONBA_PTR_GET(dataPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsDataPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setDataPart(const Models::CreateMessageResponseBodyMessagesContentStructViewPartsDataPart & dataPart) { DARABONBA_PTR_SET_VALUE(dataPart_, dataPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setDataPart(Models::CreateMessageResponseBodyMessagesContentStructViewPartsDataPart && dataPart) { DARABONBA_PTR_SET_RVALUE(dataPart_, dataPart) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // partDesc Field Functions 
    bool hasPartDesc() const { return this->partDesc_ != nullptr;};
    void deletePartDesc() { this->partDesc_ = nullptr;};
    inline string partDesc() const { DARABONBA_PTR_GET_DEFAULT(partDesc_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setPartDesc(string partDesc) { DARABONBA_PTR_SET_VALUE(partDesc_, partDesc) };


    // partId Field Functions 
    bool hasPartId() const { return this->partId_ != nullptr;};
    void deletePartId() { this->partId_ = nullptr;};
    inline string partId() const { DARABONBA_PTR_GET_DEFAULT(partId_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setPartId(string partId) { DARABONBA_PTR_SET_VALUE(partId_, partId) };


    // reasonPart Field Functions 
    bool hasReasonPart() const { return this->reasonPart_ != nullptr;};
    void deleteReasonPart() { this->reasonPart_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart() const { DARABONBA_PTR_GET_CONST(reasonPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline Models::CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart reasonPart() { DARABONBA_PTR_GET(reasonPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setReasonPart(const Models::CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart) { DARABONBA_PTR_SET_VALUE(reasonPart_, reasonPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setReasonPart(Models::CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart && reasonPart) { DARABONBA_PTR_SET_RVALUE(reasonPart_, reasonPart) };


    // recommendPart Field Functions 
    bool hasRecommendPart() const { return this->recommendPart_ != nullptr;};
    void deleteRecommendPart() { this->recommendPart_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart() const { DARABONBA_PTR_GET_CONST(recommendPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline Models::CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart recommendPart() { DARABONBA_PTR_GET(recommendPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setRecommendPart(const Models::CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart) { DARABONBA_PTR_SET_VALUE(recommendPart_, recommendPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setRecommendPart(Models::CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart && recommendPart) { DARABONBA_PTR_SET_RVALUE(recommendPart_, recommendPart) };


    // referencePart Field Functions 
    bool hasReferencePart() const { return this->referencePart_ != nullptr;};
    void deleteReferencePart() { this->referencePart_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart & referencePart() const { DARABONBA_PTR_GET_CONST(referencePart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline Models::CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart referencePart() { DARABONBA_PTR_GET(referencePart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setReferencePart(const Models::CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart & referencePart) { DARABONBA_PTR_SET_VALUE(referencePart_, referencePart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setReferencePart(Models::CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart && referencePart) { DARABONBA_PTR_SET_RVALUE(referencePart_, referencePart) };


    // textPart Field Functions 
    bool hasTextPart() const { return this->textPart_ != nullptr;};
    void deleteTextPart() { this->textPart_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentStructViewPartsTextPart & textPart() const { DARABONBA_PTR_GET_CONST(textPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsTextPart) };
    inline Models::CreateMessageResponseBodyMessagesContentStructViewPartsTextPart textPart() { DARABONBA_PTR_GET(textPart_, Models::CreateMessageResponseBodyMessagesContentStructViewPartsTextPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setTextPart(const Models::CreateMessageResponseBodyMessagesContentStructViewPartsTextPart & textPart) { DARABONBA_PTR_SET_VALUE(textPart_, textPart) };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setTextPart(Models::CreateMessageResponseBodyMessagesContentStructViewPartsTextPart && textPart) { DARABONBA_PTR_SET_RVALUE(textPart_, textPart) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewParts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> append_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentStructViewPartsDataPart> dataPart_ = nullptr;
    std::shared_ptr<bool> finish_ = nullptr;
    std::shared_ptr<string> partDesc_ = nullptr;
    std::shared_ptr<string> partId_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart> reasonPart_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentStructViewPartsRecommendPart> recommendPart_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentStructViewPartsReferencePart> referencePart_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentStructViewPartsTextPart> textPart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
