// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewPartsDataPart.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewPartsReasonPart.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewPartsReferencePart.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewPartsTextPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessagesContentStructViewParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessagesContentStructViewParts& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessagesContentStructViewParts& obj) { 
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
    ListMessageResponseBodyMessagesContentStructViewParts() = default ;
    ListMessageResponseBodyMessagesContentStructViewParts(const ListMessageResponseBodyMessagesContentStructViewParts &) = default ;
    ListMessageResponseBodyMessagesContentStructViewParts(ListMessageResponseBodyMessagesContentStructViewParts &&) = default ;
    ListMessageResponseBodyMessagesContentStructViewParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessagesContentStructViewParts() = default ;
    ListMessageResponseBodyMessagesContentStructViewParts& operator=(const ListMessageResponseBodyMessagesContentStructViewParts &) = default ;
    ListMessageResponseBodyMessagesContentStructViewParts& operator=(ListMessageResponseBodyMessagesContentStructViewParts &&) = default ;
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
    inline ListMessageResponseBodyMessagesContentStructViewParts& setAppend(bool append) { DARABONBA_PTR_SET_VALUE(append_, append) };


    // dataPart Field Functions 
    bool hasDataPart() const { return this->dataPart_ != nullptr;};
    void deleteDataPart() { this->dataPart_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentStructViewPartsDataPart & dataPart() const { DARABONBA_PTR_GET_CONST(dataPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsDataPart) };
    inline Models::ListMessageResponseBodyMessagesContentStructViewPartsDataPart dataPart() { DARABONBA_PTR_GET(dataPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsDataPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setDataPart(const Models::ListMessageResponseBodyMessagesContentStructViewPartsDataPart & dataPart) { DARABONBA_PTR_SET_VALUE(dataPart_, dataPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setDataPart(Models::ListMessageResponseBodyMessagesContentStructViewPartsDataPart && dataPart) { DARABONBA_PTR_SET_RVALUE(dataPart_, dataPart) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // partDesc Field Functions 
    bool hasPartDesc() const { return this->partDesc_ != nullptr;};
    void deletePartDesc() { this->partDesc_ = nullptr;};
    inline string partDesc() const { DARABONBA_PTR_GET_DEFAULT(partDesc_, "") };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setPartDesc(string partDesc) { DARABONBA_PTR_SET_VALUE(partDesc_, partDesc) };


    // partId Field Functions 
    bool hasPartId() const { return this->partId_ != nullptr;};
    void deletePartId() { this->partId_ = nullptr;};
    inline string partId() const { DARABONBA_PTR_GET_DEFAULT(partId_, "") };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setPartId(string partId) { DARABONBA_PTR_SET_VALUE(partId_, partId) };


    // reasonPart Field Functions 
    bool hasReasonPart() const { return this->reasonPart_ != nullptr;};
    void deleteReasonPart() { this->reasonPart_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart() const { DARABONBA_PTR_GET_CONST(reasonPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline Models::ListMessageResponseBodyMessagesContentStructViewPartsReasonPart reasonPart() { DARABONBA_PTR_GET(reasonPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsReasonPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setReasonPart(const Models::ListMessageResponseBodyMessagesContentStructViewPartsReasonPart & reasonPart) { DARABONBA_PTR_SET_VALUE(reasonPart_, reasonPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setReasonPart(Models::ListMessageResponseBodyMessagesContentStructViewPartsReasonPart && reasonPart) { DARABONBA_PTR_SET_RVALUE(reasonPart_, reasonPart) };


    // recommendPart Field Functions 
    bool hasRecommendPart() const { return this->recommendPart_ != nullptr;};
    void deleteRecommendPart() { this->recommendPart_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart() const { DARABONBA_PTR_GET_CONST(recommendPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart recommendPart() { DARABONBA_PTR_GET(recommendPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setRecommendPart(const Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart & recommendPart) { DARABONBA_PTR_SET_VALUE(recommendPart_, recommendPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setRecommendPart(Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart && recommendPart) { DARABONBA_PTR_SET_RVALUE(recommendPart_, recommendPart) };


    // referencePart Field Functions 
    bool hasReferencePart() const { return this->referencePart_ != nullptr;};
    void deleteReferencePart() { this->referencePart_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePart & referencePart() const { DARABONBA_PTR_GET_CONST(referencePart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePart referencePart() { DARABONBA_PTR_GET(referencePart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setReferencePart(const Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePart & referencePart) { DARABONBA_PTR_SET_VALUE(referencePart_, referencePart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setReferencePart(Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePart && referencePart) { DARABONBA_PTR_SET_RVALUE(referencePart_, referencePart) };


    // textPart Field Functions 
    bool hasTextPart() const { return this->textPart_ != nullptr;};
    void deleteTextPart() { this->textPart_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentStructViewPartsTextPart & textPart() const { DARABONBA_PTR_GET_CONST(textPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsTextPart) };
    inline Models::ListMessageResponseBodyMessagesContentStructViewPartsTextPart textPart() { DARABONBA_PTR_GET(textPart_, Models::ListMessageResponseBodyMessagesContentStructViewPartsTextPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setTextPart(const Models::ListMessageResponseBodyMessagesContentStructViewPartsTextPart & textPart) { DARABONBA_PTR_SET_VALUE(textPart_, textPart) };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setTextPart(Models::ListMessageResponseBodyMessagesContentStructViewPartsTextPart && textPart) { DARABONBA_PTR_SET_RVALUE(textPart_, textPart) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMessageResponseBodyMessagesContentStructViewParts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> append_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentStructViewPartsDataPart> dataPart_ = nullptr;
    std::shared_ptr<bool> finish_ = nullptr;
    std::shared_ptr<string> partDesc_ = nullptr;
    std::shared_ptr<string> partId_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentStructViewPartsReasonPart> reasonPart_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart> recommendPart_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePart> referencePart_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentStructViewPartsTextPart> textPart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
