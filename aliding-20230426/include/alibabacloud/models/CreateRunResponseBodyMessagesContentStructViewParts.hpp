// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewPartsDataPart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewPartsReasonPart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewPartsReferencePart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewPartsTextPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructViewParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructViewParts& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructViewParts& obj) { 
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
    CreateRunResponseBodyMessagesContentStructViewParts() = default ;
    CreateRunResponseBodyMessagesContentStructViewParts(const CreateRunResponseBodyMessagesContentStructViewParts &) = default ;
    CreateRunResponseBodyMessagesContentStructViewParts(CreateRunResponseBodyMessagesContentStructViewParts &&) = default ;
    CreateRunResponseBodyMessagesContentStructViewParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructViewParts() = default ;
    CreateRunResponseBodyMessagesContentStructViewParts& operator=(const CreateRunResponseBodyMessagesContentStructViewParts &) = default ;
    CreateRunResponseBodyMessagesContentStructViewParts& operator=(CreateRunResponseBodyMessagesContentStructViewParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->append_ == nullptr
        && return this->dataPart_ == nullptr && return this->finish_ == nullptr && return this->partDesc_ == nullptr && return this->partId_ == nullptr && return this->reasonPart_ == nullptr
        && return this->recommendPart_ == nullptr && return this->referencePart_ == nullptr && return this->textPart_ == nullptr && return this->type_ == nullptr; };
    // append Field Functions 
    bool hasAppend() const { return this->append_ != nullptr;};
    void deleteAppend() { this->append_ = nullptr;};
    inline bool append() const { DARABONBA_PTR_GET_DEFAULT(append_, false) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setAppend(bool append) { DARABONBA_PTR_SET_VALUE(append_, append) };


    // dataPart Field Functions 
    bool hasDataPart() const { return this->dataPart_ != nullptr;};
    void deleteDataPart() { this->dataPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructViewPartsDataPart & dataPart() const { DARABONBA_PTR_GET_CONST(dataPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsDataPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructViewPartsDataPart dataPart() { DARABONBA_PTR_GET(dataPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsDataPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setDataPart(const Models::CreateRunResponseBodyMessagesContentStructViewPartsDataPart & dataPart) { DARABONBA_PTR_SET_VALUE(dataPart_, dataPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setDataPart(Models::CreateRunResponseBodyMessagesContentStructViewPartsDataPart && dataPart) { DARABONBA_PTR_SET_RVALUE(dataPart_, dataPart) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // partDesc Field Functions 
    bool hasPartDesc() const { return this->partDesc_ != nullptr;};
    void deletePartDesc() { this->partDesc_ = nullptr;};
    inline string partDesc() const { DARABONBA_PTR_GET_DEFAULT(partDesc_, "") };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setPartDesc(string partDesc) { DARABONBA_PTR_SET_VALUE(partDesc_, partDesc) };


    // partId Field Functions 
    bool hasPartId() const { return this->partId_ != nullptr;};
    void deletePartId() { this->partId_ = nullptr;};
    inline string partId() const { DARABONBA_PTR_GET_DEFAULT(partId_, "") };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setPartId(string partId) { DARABONBA_PTR_SET_VALUE(partId_, partId) };


    // reasonPart Field Functions 
    bool hasReasonPart() const { return this->reasonPart_ != nullptr;};
    void deleteReasonPart() { this->reasonPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart() const { DARABONBA_PTR_GET_CONST(reasonPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructViewPartsReasonPart reasonPart() { DARABONBA_PTR_GET(reasonPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setReasonPart(const Models::CreateRunResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart) { DARABONBA_PTR_SET_VALUE(reasonPart_, reasonPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setReasonPart(Models::CreateRunResponseBodyMessagesContentStructViewPartsReasonPart && reasonPart) { DARABONBA_PTR_SET_RVALUE(reasonPart_, reasonPart) };


    // recommendPart Field Functions 
    bool hasRecommendPart() const { return this->recommendPart_ != nullptr;};
    void deleteRecommendPart() { this->recommendPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart() const { DARABONBA_PTR_GET_CONST(recommendPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart recommendPart() { DARABONBA_PTR_GET(recommendPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setRecommendPart(const Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart) { DARABONBA_PTR_SET_VALUE(recommendPart_, recommendPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setRecommendPart(Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart && recommendPart) { DARABONBA_PTR_SET_RVALUE(recommendPart_, recommendPart) };


    // referencePart Field Functions 
    bool hasReferencePart() const { return this->referencePart_ != nullptr;};
    void deleteReferencePart() { this->referencePart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePart & referencePart() const { DARABONBA_PTR_GET_CONST(referencePart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePart referencePart() { DARABONBA_PTR_GET(referencePart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setReferencePart(const Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePart & referencePart) { DARABONBA_PTR_SET_VALUE(referencePart_, referencePart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setReferencePart(Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePart && referencePart) { DARABONBA_PTR_SET_RVALUE(referencePart_, referencePart) };


    // textPart Field Functions 
    bool hasTextPart() const { return this->textPart_ != nullptr;};
    void deleteTextPart() { this->textPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructViewPartsTextPart & textPart() const { DARABONBA_PTR_GET_CONST(textPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsTextPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructViewPartsTextPart textPart() { DARABONBA_PTR_GET(textPart_, Models::CreateRunResponseBodyMessagesContentStructViewPartsTextPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setTextPart(const Models::CreateRunResponseBodyMessagesContentStructViewPartsTextPart & textPart) { DARABONBA_PTR_SET_VALUE(textPart_, textPart) };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setTextPart(Models::CreateRunResponseBodyMessagesContentStructViewPartsTextPart && textPart) { DARABONBA_PTR_SET_RVALUE(textPart_, textPart) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRunResponseBodyMessagesContentStructViewParts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> append_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructViewPartsDataPart> dataPart_ = nullptr;
    std::shared_ptr<bool> finish_ = nullptr;
    std::shared_ptr<string> partDesc_ = nullptr;
    std::shared_ptr<string> partId_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructViewPartsReasonPart> reasonPart_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart> recommendPart_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePart> referencePart_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructViewPartsTextPart> textPart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
