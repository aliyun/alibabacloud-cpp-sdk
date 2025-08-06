// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTS_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructPartsDataPart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructPartsReasonPart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructPartsRecommendPart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructPartsReferencePart.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructPartsTextPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructParts& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructParts& obj) { 
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
    CreateRunResponseBodyMessagesContentStructParts() = default ;
    CreateRunResponseBodyMessagesContentStructParts(const CreateRunResponseBodyMessagesContentStructParts &) = default ;
    CreateRunResponseBodyMessagesContentStructParts(CreateRunResponseBodyMessagesContentStructParts &&) = default ;
    CreateRunResponseBodyMessagesContentStructParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructParts() = default ;
    CreateRunResponseBodyMessagesContentStructParts& operator=(const CreateRunResponseBodyMessagesContentStructParts &) = default ;
    CreateRunResponseBodyMessagesContentStructParts& operator=(CreateRunResponseBodyMessagesContentStructParts &&) = default ;
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
    inline CreateRunResponseBodyMessagesContentStructParts& setAppend(bool append) { DARABONBA_PTR_SET_VALUE(append_, append) };


    // dataPart Field Functions 
    bool hasDataPart() const { return this->dataPart_ != nullptr;};
    void deleteDataPart() { this->dataPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructPartsDataPart & dataPart() const { DARABONBA_PTR_GET_CONST(dataPart_, Models::CreateRunResponseBodyMessagesContentStructPartsDataPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructPartsDataPart dataPart() { DARABONBA_PTR_GET(dataPart_, Models::CreateRunResponseBodyMessagesContentStructPartsDataPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setDataPart(const Models::CreateRunResponseBodyMessagesContentStructPartsDataPart & dataPart) { DARABONBA_PTR_SET_VALUE(dataPart_, dataPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setDataPart(Models::CreateRunResponseBodyMessagesContentStructPartsDataPart && dataPart) { DARABONBA_PTR_SET_RVALUE(dataPart_, dataPart) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline CreateRunResponseBodyMessagesContentStructParts& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // partDesc Field Functions 
    bool hasPartDesc() const { return this->partDesc_ != nullptr;};
    void deletePartDesc() { this->partDesc_ = nullptr;};
    inline string partDesc() const { DARABONBA_PTR_GET_DEFAULT(partDesc_, "") };
    inline CreateRunResponseBodyMessagesContentStructParts& setPartDesc(string partDesc) { DARABONBA_PTR_SET_VALUE(partDesc_, partDesc) };


    // partId Field Functions 
    bool hasPartId() const { return this->partId_ != nullptr;};
    void deletePartId() { this->partId_ = nullptr;};
    inline string partId() const { DARABONBA_PTR_GET_DEFAULT(partId_, "") };
    inline CreateRunResponseBodyMessagesContentStructParts& setPartId(string partId) { DARABONBA_PTR_SET_VALUE(partId_, partId) };


    // reasonPart Field Functions 
    bool hasReasonPart() const { return this->reasonPart_ != nullptr;};
    void deleteReasonPart() { this->reasonPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructPartsReasonPart & reasonPart() const { DARABONBA_PTR_GET_CONST(reasonPart_, Models::CreateRunResponseBodyMessagesContentStructPartsReasonPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructPartsReasonPart reasonPart() { DARABONBA_PTR_GET(reasonPart_, Models::CreateRunResponseBodyMessagesContentStructPartsReasonPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setReasonPart(const Models::CreateRunResponseBodyMessagesContentStructPartsReasonPart & reasonPart) { DARABONBA_PTR_SET_VALUE(reasonPart_, reasonPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setReasonPart(Models::CreateRunResponseBodyMessagesContentStructPartsReasonPart && reasonPart) { DARABONBA_PTR_SET_RVALUE(reasonPart_, reasonPart) };


    // recommendPart Field Functions 
    bool hasRecommendPart() const { return this->recommendPart_ != nullptr;};
    void deleteRecommendPart() { this->recommendPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPart & recommendPart() const { DARABONBA_PTR_GET_CONST(recommendPart_, Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPart recommendPart() { DARABONBA_PTR_GET(recommendPart_, Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setRecommendPart(const Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPart & recommendPart) { DARABONBA_PTR_SET_VALUE(recommendPart_, recommendPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setRecommendPart(Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPart && recommendPart) { DARABONBA_PTR_SET_RVALUE(recommendPart_, recommendPart) };


    // referencePart Field Functions 
    bool hasReferencePart() const { return this->referencePart_ != nullptr;};
    void deleteReferencePart() { this->referencePart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructPartsReferencePart & referencePart() const { DARABONBA_PTR_GET_CONST(referencePart_, Models::CreateRunResponseBodyMessagesContentStructPartsReferencePart) };
    inline Models::CreateRunResponseBodyMessagesContentStructPartsReferencePart referencePart() { DARABONBA_PTR_GET(referencePart_, Models::CreateRunResponseBodyMessagesContentStructPartsReferencePart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setReferencePart(const Models::CreateRunResponseBodyMessagesContentStructPartsReferencePart & referencePart) { DARABONBA_PTR_SET_VALUE(referencePart_, referencePart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setReferencePart(Models::CreateRunResponseBodyMessagesContentStructPartsReferencePart && referencePart) { DARABONBA_PTR_SET_RVALUE(referencePart_, referencePart) };


    // textPart Field Functions 
    bool hasTextPart() const { return this->textPart_ != nullptr;};
    void deleteTextPart() { this->textPart_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructPartsTextPart & textPart() const { DARABONBA_PTR_GET_CONST(textPart_, Models::CreateRunResponseBodyMessagesContentStructPartsTextPart) };
    inline Models::CreateRunResponseBodyMessagesContentStructPartsTextPart textPart() { DARABONBA_PTR_GET(textPart_, Models::CreateRunResponseBodyMessagesContentStructPartsTextPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setTextPart(const Models::CreateRunResponseBodyMessagesContentStructPartsTextPart & textPart) { DARABONBA_PTR_SET_VALUE(textPart_, textPart) };
    inline CreateRunResponseBodyMessagesContentStructParts& setTextPart(Models::CreateRunResponseBodyMessagesContentStructPartsTextPart && textPart) { DARABONBA_PTR_SET_RVALUE(textPart_, textPart) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRunResponseBodyMessagesContentStructParts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> append_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructPartsDataPart> dataPart_ = nullptr;
    std::shared_ptr<bool> finish_ = nullptr;
    std::shared_ptr<string> partDesc_ = nullptr;
    std::shared_ptr<string> partId_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructPartsReasonPart> reasonPart_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPart> recommendPart_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePart> referencePart_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructPartsTextPart> textPart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
