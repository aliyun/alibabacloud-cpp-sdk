// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWRITINGSTYLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWRITINGSTYLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WritingStyleTemplateDefine.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListWritingStylesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWritingStylesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWritingStylesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWritingStylesResponseBody() = default ;
    ListWritingStylesResponseBody(const ListWritingStylesResponseBody &) = default ;
    ListWritingStylesResponseBody(ListWritingStylesResponseBody &&) = default ;
    ListWritingStylesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWritingStylesResponseBody() = default ;
    ListWritingStylesResponseBody& operator=(const ListWritingStylesResponseBody &) = default ;
    ListWritingStylesResponseBody& operator=(ListWritingStylesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DistributeStepTemplateDefine, distributeStepTemplateDefine_);
        DARABONBA_PTR_TO_JSON(DistributeWriting, distributeWriting_);
        DARABONBA_PTR_TO_JSON(Emoji, emoji_);
        DARABONBA_PTR_TO_JSON(StyleDescription, styleDescription_);
        DARABONBA_PTR_TO_JSON(StyleImage, styleImage_);
        DARABONBA_PTR_TO_JSON(StyleKey, styleKey_);
        DARABONBA_PTR_TO_JSON(StyleName, styleName_);
        DARABONBA_PTR_TO_JSON(TemplateDefine, templateDefine_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DistributeStepTemplateDefine, distributeStepTemplateDefine_);
        DARABONBA_PTR_FROM_JSON(DistributeWriting, distributeWriting_);
        DARABONBA_PTR_FROM_JSON(Emoji, emoji_);
        DARABONBA_PTR_FROM_JSON(StyleDescription, styleDescription_);
        DARABONBA_PTR_FROM_JSON(StyleImage, styleImage_);
        DARABONBA_PTR_FROM_JSON(StyleKey, styleKey_);
        DARABONBA_PTR_FROM_JSON(StyleName, styleName_);
        DARABONBA_PTR_FROM_JSON(TemplateDefine, templateDefine_);
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
      virtual bool empty() const override { return this->distributeStepTemplateDefine_ == nullptr
        && this->distributeWriting_ == nullptr && this->emoji_ == nullptr && this->styleDescription_ == nullptr && this->styleImage_ == nullptr && this->styleKey_ == nullptr
        && this->styleName_ == nullptr && this->templateDefine_ == nullptr; };
      // distributeStepTemplateDefine Field Functions 
      bool hasDistributeStepTemplateDefine() const { return this->distributeStepTemplateDefine_ != nullptr;};
      void deleteDistributeStepTemplateDefine() { this->distributeStepTemplateDefine_ = nullptr;};
      inline const WritingStyleTemplateDefine & getDistributeStepTemplateDefine() const { DARABONBA_PTR_GET_CONST(distributeStepTemplateDefine_, WritingStyleTemplateDefine) };
      inline WritingStyleTemplateDefine getDistributeStepTemplateDefine() { DARABONBA_PTR_GET(distributeStepTemplateDefine_, WritingStyleTemplateDefine) };
      inline Data& setDistributeStepTemplateDefine(const WritingStyleTemplateDefine & distributeStepTemplateDefine) { DARABONBA_PTR_SET_VALUE(distributeStepTemplateDefine_, distributeStepTemplateDefine) };
      inline Data& setDistributeStepTemplateDefine(WritingStyleTemplateDefine && distributeStepTemplateDefine) { DARABONBA_PTR_SET_RVALUE(distributeStepTemplateDefine_, distributeStepTemplateDefine) };


      // distributeWriting Field Functions 
      bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
      void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
      inline bool getDistributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
      inline Data& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


      // emoji Field Functions 
      bool hasEmoji() const { return this->emoji_ != nullptr;};
      void deleteEmoji() { this->emoji_ = nullptr;};
      inline string getEmoji() const { DARABONBA_PTR_GET_DEFAULT(emoji_, "") };
      inline Data& setEmoji(string emoji) { DARABONBA_PTR_SET_VALUE(emoji_, emoji) };


      // styleDescription Field Functions 
      bool hasStyleDescription() const { return this->styleDescription_ != nullptr;};
      void deleteStyleDescription() { this->styleDescription_ = nullptr;};
      inline string getStyleDescription() const { DARABONBA_PTR_GET_DEFAULT(styleDescription_, "") };
      inline Data& setStyleDescription(string styleDescription) { DARABONBA_PTR_SET_VALUE(styleDescription_, styleDescription) };


      // styleImage Field Functions 
      bool hasStyleImage() const { return this->styleImage_ != nullptr;};
      void deleteStyleImage() { this->styleImage_ = nullptr;};
      inline string getStyleImage() const { DARABONBA_PTR_GET_DEFAULT(styleImage_, "") };
      inline Data& setStyleImage(string styleImage) { DARABONBA_PTR_SET_VALUE(styleImage_, styleImage) };


      // styleKey Field Functions 
      bool hasStyleKey() const { return this->styleKey_ != nullptr;};
      void deleteStyleKey() { this->styleKey_ = nullptr;};
      inline string getStyleKey() const { DARABONBA_PTR_GET_DEFAULT(styleKey_, "") };
      inline Data& setStyleKey(string styleKey) { DARABONBA_PTR_SET_VALUE(styleKey_, styleKey) };


      // styleName Field Functions 
      bool hasStyleName() const { return this->styleName_ != nullptr;};
      void deleteStyleName() { this->styleName_ = nullptr;};
      inline string getStyleName() const { DARABONBA_PTR_GET_DEFAULT(styleName_, "") };
      inline Data& setStyleName(string styleName) { DARABONBA_PTR_SET_VALUE(styleName_, styleName) };


      // templateDefine Field Functions 
      bool hasTemplateDefine() const { return this->templateDefine_ != nullptr;};
      void deleteTemplateDefine() { this->templateDefine_ = nullptr;};
      inline const WritingStyleTemplateDefine & getTemplateDefine() const { DARABONBA_PTR_GET_CONST(templateDefine_, WritingStyleTemplateDefine) };
      inline WritingStyleTemplateDefine getTemplateDefine() { DARABONBA_PTR_GET(templateDefine_, WritingStyleTemplateDefine) };
      inline Data& setTemplateDefine(const WritingStyleTemplateDefine & templateDefine) { DARABONBA_PTR_SET_VALUE(templateDefine_, templateDefine) };
      inline Data& setTemplateDefine(WritingStyleTemplateDefine && templateDefine) { DARABONBA_PTR_SET_RVALUE(templateDefine_, templateDefine) };


    protected:
      shared_ptr<WritingStyleTemplateDefine> distributeStepTemplateDefine_ {};
      shared_ptr<bool> distributeWriting_ {};
      shared_ptr<string> emoji_ {};
      shared_ptr<string> styleDescription_ {};
      shared_ptr<string> styleImage_ {};
      shared_ptr<string> styleKey_ {};
      shared_ptr<string> styleName_ {};
      shared_ptr<WritingStyleTemplateDefine> templateDefine_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWritingStylesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListWritingStylesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListWritingStylesResponseBody::Data>) };
    inline vector<ListWritingStylesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListWritingStylesResponseBody::Data>) };
    inline ListWritingStylesResponseBody& setData(const vector<ListWritingStylesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWritingStylesResponseBody& setData(vector<ListWritingStylesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWritingStylesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWritingStylesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWritingStylesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWritingStylesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListWritingStylesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWritingStylesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListWritingStylesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
