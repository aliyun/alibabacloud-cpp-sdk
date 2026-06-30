// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TextModerationResponseBody() = default ;
    TextModerationResponseBody(const TextModerationResponseBody &) = default ;
    TextModerationResponseBody(TextModerationResponseBody &&) = default ;
    TextModerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationResponseBody() = default ;
    TextModerationResponseBody& operator=(const TextModerationResponseBody &) = default ;
    TextModerationResponseBody& operator=(TextModerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accountId, accountId_);
        DARABONBA_PTR_TO_JSON(dataId, dataId_);
        DARABONBA_PTR_TO_JSON(descriptions, descriptions_);
        DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(ext, ext_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(manualTaskId, manualTaskId_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accountId, accountId_);
        DARABONBA_PTR_FROM_JSON(dataId, dataId_);
        DARABONBA_PTR_FROM_JSON(descriptions, descriptions_);
        DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(ext, ext_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(manualTaskId, manualTaskId_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
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
      class Ext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ext& obj) { 
          DARABONBA_PTR_TO_JSON(llmContent, llmContent_);
        };
        friend void from_json(const Darabonba::Json& j, Ext& obj) { 
          DARABONBA_PTR_FROM_JSON(llmContent, llmContent_);
        };
        Ext() = default ;
        Ext(const Ext &) = default ;
        Ext(Ext &&) = default ;
        Ext(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ext() = default ;
        Ext& operator=(const Ext &) = default ;
        Ext& operator=(Ext &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LlmContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LlmContent& obj) { 
            DARABONBA_PTR_TO_JSON(outputText, outputText_);
          };
          friend void from_json(const Darabonba::Json& j, LlmContent& obj) { 
            DARABONBA_PTR_FROM_JSON(outputText, outputText_);
          };
          LlmContent() = default ;
          LlmContent(const LlmContent &) = default ;
          LlmContent(LlmContent &&) = default ;
          LlmContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LlmContent() = default ;
          LlmContent& operator=(const LlmContent &) = default ;
          LlmContent& operator=(LlmContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->outputText_ == nullptr; };
          // outputText Field Functions 
          bool hasOutputText() const { return this->outputText_ != nullptr;};
          void deleteOutputText() { this->outputText_ = nullptr;};
          inline string getOutputText() const { DARABONBA_PTR_GET_DEFAULT(outputText_, "") };
          inline LlmContent& setOutputText(string outputText) { DARABONBA_PTR_SET_VALUE(outputText_, outputText) };


        protected:
          // The output content.
          shared_ptr<string> outputText_ {};
        };

        virtual bool empty() const override { return this->llmContent_ == nullptr; };
        // llmContent Field Functions 
        bool hasLlmContent() const { return this->llmContent_ != nullptr;};
        void deleteLlmContent() { this->llmContent_ = nullptr;};
        inline const Ext::LlmContent & getLlmContent() const { DARABONBA_PTR_GET_CONST(llmContent_, Ext::LlmContent) };
        inline Ext::LlmContent getLlmContent() { DARABONBA_PTR_GET(llmContent_, Ext::LlmContent) };
        inline Ext& setLlmContent(const Ext::LlmContent & llmContent) { DARABONBA_PTR_SET_VALUE(llmContent_, llmContent) };
        inline Ext& setLlmContent(Ext::LlmContent && llmContent) { DARABONBA_PTR_SET_RVALUE(llmContent_, llmContent) };


      protected:
        // The output from the Large Language Model (LLM).
        shared_ptr<Ext::LlmContent> llmContent_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->dataId_ == nullptr && this->descriptions_ == nullptr && this->deviceId_ == nullptr && this->ext_ == nullptr && this->labels_ == nullptr
        && this->manualTaskId_ == nullptr && this->reason_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // descriptions Field Functions 
      bool hasDescriptions() const { return this->descriptions_ != nullptr;};
      void deleteDescriptions() { this->descriptions_ = nullptr;};
      inline string getDescriptions() const { DARABONBA_PTR_GET_DEFAULT(descriptions_, "") };
      inline Data& setDescriptions(string descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // ext Field Functions 
      bool hasExt() const { return this->ext_ != nullptr;};
      void deleteExt() { this->ext_ = nullptr;};
      inline const Data::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, Data::Ext) };
      inline Data::Ext getExt() { DARABONBA_PTR_GET(ext_, Data::Ext) };
      inline Data& setExt(const Data::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
      inline Data& setExt(Data::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
      inline Data& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


      // manualTaskId Field Functions 
      bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
      void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
      inline string getManualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
      inline Data& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // The \\`accountId\\` specified in the request.
      shared_ptr<string> accountId_ {};
      // The data ID of the moderated object.
      // 
      // > If you specify the dataId parameter in the request, its value is returned in this parameter.
      shared_ptr<string> dataId_ {};
      // The description of the label.
      shared_ptr<string> descriptions_ {};
      // The \\`deviceId\\` specified in the request.
      shared_ptr<string> deviceId_ {};
      // Auxiliary reference information for the text.
      shared_ptr<Data::Ext> ext_ {};
      // The moderation labels. If multiple labels are returned, they are separated by commas (,). Valid values: ad: advertisement profanity: profanity contraband: contraband sexual_content: sexual content violence: violent and terrorist content nonsense: meaningless content spam: spam negative_content: undesirable content cyberbullying: cyberbullying C_customized: A match in a custom library
      shared_ptr<string> labels_ {};
      // The ID of the manual review task.
      shared_ptr<string> manualTaskId_ {};
      // A JSON string that contains the reason for the moderation result. The string includes the following fields:
      // 
      // 1. riskTips: The sub-labels.
      // 
      // 2. riskWords: The detected risk words.
      // 
      // 3. adNums: The detected ad-related numbers.
      // 
      // 4. customizedWords: The detected custom words.
      // 
      // 5. customizedLibs: The names of the custom libraries that contain a match.
      // 
      // 6. riskLevel: The risk level, which is recommended by the system. Valid values:
      // 
      // - high: high risk
      // 
      // - medium: medium risk
      // 
      // - low: low risk
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline TextModerationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TextModerationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TextModerationResponseBody::Data) };
    inline TextModerationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TextModerationResponseBody::Data) };
    inline TextModerationResponseBody& setData(const TextModerationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TextModerationResponseBody& setData(TextModerationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TextModerationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextModerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The moderation result data.
    shared_ptr<TextModerationResponseBody::Data> data_ {};
    // The response message for the request.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
