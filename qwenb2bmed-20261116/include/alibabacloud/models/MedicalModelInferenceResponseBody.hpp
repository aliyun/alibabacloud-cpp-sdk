// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALMODELINFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MEDICALMODELINFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BMed20261116
{
namespace Models
{
  class MedicalModelInferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalModelInferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(audioFrames, audioFrames_);
      DARABONBA_PTR_TO_JSON(communication, communication_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_ANY_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalModelInferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(audioFrames, audioFrames_);
      DARABONBA_PTR_FROM_JSON(communication, communication_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_ANY_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    MedicalModelInferenceResponseBody() = default ;
    MedicalModelInferenceResponseBody(const MedicalModelInferenceResponseBody &) = default ;
    MedicalModelInferenceResponseBody(MedicalModelInferenceResponseBody &&) = default ;
    MedicalModelInferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalModelInferenceResponseBody() = default ;
    MedicalModelInferenceResponseBody& operator=(const MedicalModelInferenceResponseBody &) = default ;
    MedicalModelInferenceResponseBody& operator=(MedicalModelInferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_ANY_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_ANY_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline       const Darabonba::Json & getCode() const { DARABONBA_GET(code_) };
      Darabonba::Json & getCode() { DARABONBA_GET(code_) };
      inline Error& setCode(const Darabonba::Json & code) { DARABONBA_SET_VALUE(code_, code) };
      inline Error& setCode(Darabonba::Json && code) { DARABONBA_SET_RVALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Error& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      // The business error code used by the client to identify the failure type.
      Darabonba::Json code_ {};
      // The descriptive text of the business error.
      shared_ptr<string> message_ {};
      // The business request correlation ID of the failed call, used for troubleshooting.
      shared_ptr<string> requestId_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(debug, debug_);
        DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(messages, messages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(debug, debug_);
        DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(messages, messages_);
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
      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_ANY_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(metaData, metaData_);
          DARABONBA_PTR_TO_JSON(mimeType, mimeType_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_ANY_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(metaData, metaData_);
          DARABONBA_PTR_FROM_JSON(mimeType, mimeType_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MetaData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MetaData& obj) { 
            DARABONBA_PTR_TO_JSON(barTitle, barTitle_);
            DARABONBA_ANY_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(multiLoad, multiLoad_);
            DARABONBA_PTR_TO_JSON(sourceSeq, sourceSeq_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, MetaData& obj) { 
            DARABONBA_PTR_FROM_JSON(barTitle, barTitle_);
            DARABONBA_ANY_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(multiLoad, multiLoad_);
            DARABONBA_PTR_FROM_JSON(sourceSeq, sourceSeq_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          MetaData() = default ;
          MetaData(const MetaData &) = default ;
          MetaData(MetaData &&) = default ;
          MetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MetaData() = default ;
          MetaData& operator=(const MetaData &) = default ;
          MetaData& operator=(MetaData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MultiLoad : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MultiLoad& obj) { 
              DARABONBA_ANY_TO_JSON(content, content_);
              DARABONBA_PTR_TO_JSON(sourceSeq, sourceSeq_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, MultiLoad& obj) { 
              DARABONBA_ANY_FROM_JSON(content, content_);
              DARABONBA_PTR_FROM_JSON(sourceSeq, sourceSeq_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            MultiLoad() = default ;
            MultiLoad(const MultiLoad &) = default ;
            MultiLoad(MultiLoad &&) = default ;
            MultiLoad(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MultiLoad() = default ;
            MultiLoad& operator=(const MultiLoad &) = default ;
            MultiLoad& operator=(MultiLoad &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->content_ == nullptr
        && this->sourceSeq_ == nullptr && this->type_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline             const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
            Darabonba::Json & getContent() { DARABONBA_GET(content_) };
            inline MultiLoad& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
            inline MultiLoad& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


            // sourceSeq Field Functions 
            bool hasSourceSeq() const { return this->sourceSeq_ != nullptr;};
            void deleteSourceSeq() { this->sourceSeq_ = nullptr;};
            inline string getSourceSeq() const { DARABONBA_PTR_GET_DEFAULT(sourceSeq_, "") };
            inline MultiLoad& setSourceSeq(string sourceSeq) { DARABONBA_PTR_SET_VALUE(sourceSeq_, sourceSeq) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline MultiLoad& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The content of the card.
            Darabonba::Json content_ {};
            // The reference identifier of the card.
            shared_ptr<string> sourceSeq_ {};
            // The type of the card.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->barTitle_ == nullptr
        && this->content_ == nullptr && this->multiLoad_ == nullptr && this->sourceSeq_ == nullptr && this->type_ == nullptr; };
          // barTitle Field Functions 
          bool hasBarTitle() const { return this->barTitle_ != nullptr;};
          void deleteBarTitle() { this->barTitle_ = nullptr;};
          inline string getBarTitle() const { DARABONBA_PTR_GET_DEFAULT(barTitle_, "") };
          inline MetaData& setBarTitle(string barTitle) { DARABONBA_PTR_SET_VALUE(barTitle_, barTitle) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline           const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
          Darabonba::Json & getContent() { DARABONBA_GET(content_) };
          inline MetaData& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
          inline MetaData& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


          // multiLoad Field Functions 
          bool hasMultiLoad() const { return this->multiLoad_ != nullptr;};
          void deleteMultiLoad() { this->multiLoad_ = nullptr;};
          inline const vector<MetaData::MultiLoad> & getMultiLoad() const { DARABONBA_PTR_GET_CONST(multiLoad_, vector<MetaData::MultiLoad>) };
          inline vector<MetaData::MultiLoad> getMultiLoad() { DARABONBA_PTR_GET(multiLoad_, vector<MetaData::MultiLoad>) };
          inline MetaData& setMultiLoad(const vector<MetaData::MultiLoad> & multiLoad) { DARABONBA_PTR_SET_VALUE(multiLoad_, multiLoad) };
          inline MetaData& setMultiLoad(vector<MetaData::MultiLoad> && multiLoad) { DARABONBA_PTR_SET_RVALUE(multiLoad_, multiLoad) };


          // sourceSeq Field Functions 
          bool hasSourceSeq() const { return this->sourceSeq_ != nullptr;};
          void deleteSourceSeq() { this->sourceSeq_ = nullptr;};
          inline string getSourceSeq() const { DARABONBA_PTR_GET_DEFAULT(sourceSeq_, "") };
          inline MetaData& setSourceSeq(string sourceSeq) { DARABONBA_PTR_SET_VALUE(sourceSeq_, sourceSeq) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline MetaData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The title of the status bar.
          shared_ptr<string> barTitle_ {};
          // The content of the metadata.
          Darabonba::Json content_ {};
          // The list of structured content associated with the body, such as image-text cards, returned by message type.
          shared_ptr<vector<MetaData::MultiLoad>> multiLoad_ {};
          // The source identifier.
          shared_ptr<string> sourceSeq_ {};
          // The type of the metadata.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->metaData_ == nullptr && this->mimeType_ == nullptr && this->status_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline         const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
        Darabonba::Json & getContent() { DARABONBA_GET(content_) };
        inline Messages& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
        inline Messages& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


        // metaData Field Functions 
        bool hasMetaData() const { return this->metaData_ != nullptr;};
        void deleteMetaData() { this->metaData_ = nullptr;};
        inline const Messages::MetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, Messages::MetaData) };
        inline Messages::MetaData getMetaData() { DARABONBA_PTR_GET(metaData_, Messages::MetaData) };
        inline Messages& setMetaData(const Messages::MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
        inline Messages& setMetaData(Messages::MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


        // mimeType Field Functions 
        bool hasMimeType() const { return this->mimeType_ != nullptr;};
        void deleteMimeType() { this->mimeType_ = nullptr;};
        inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
        inline Messages& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Messages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The text or content corresponding to the message type.
        Darabonba::Json content_ {};
        // The extended metadata associated with this message.
        shared_ptr<Messages::MetaData> metaData_ {};
        // The type of the message.
        shared_ptr<string> mimeType_ {};
        // The status of the business message.
        shared_ptr<string> status_ {};
      };

      class ExtraInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtraInfo& obj) { 
          DARABONBA_PTR_TO_JSON(inputResources, inputResources_);
        };
        friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(inputResources, inputResources_);
        };
        ExtraInfo() = default ;
        ExtraInfo(const ExtraInfo &) = default ;
        ExtraInfo(ExtraInfo &&) = default ;
        ExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtraInfo() = default ;
        ExtraInfo& operator=(const ExtraInfo &) = default ;
        ExtraInfo& operator=(ExtraInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InputResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputResources& obj) { 
            DARABONBA_PTR_TO_JSON(contentIndex, contentIndex_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
            DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, InputResources& obj) { 
            DARABONBA_PTR_FROM_JSON(contentIndex, contentIndex_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
            DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          InputResources() = default ;
          InputResources(const InputResources &) = default ;
          InputResources(InputResources &&) = default ;
          InputResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputResources() = default ;
          InputResources& operator=(const InputResources &) = default ;
          InputResources& operator=(InputResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentIndex_ == nullptr
        && this->fileName_ == nullptr && this->resourceId_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
          // contentIndex Field Functions 
          bool hasContentIndex() const { return this->contentIndex_ != nullptr;};
          void deleteContentIndex() { this->contentIndex_ = nullptr;};
          inline int32_t getContentIndex() const { DARABONBA_PTR_GET_DEFAULT(contentIndex_, 0) };
          inline InputResources& setContentIndex(int32_t contentIndex) { DARABONBA_PTR_SET_VALUE(contentIndex_, contentIndex) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline InputResources& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
          inline InputResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline InputResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline InputResources& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The index of the original content block.
          shared_ptr<int32_t> contentIndex_ {};
          // The name of the resource file.
          shared_ptr<string> fileName_ {};
          // The ID of the transferred resource.
          shared_ptr<string> resourceId_ {};
          // The type of the input resource.
          shared_ptr<string> type_ {};
          // The URL of the transferred resource.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->inputResources_ == nullptr; };
        // inputResources Field Functions 
        bool hasInputResources() const { return this->inputResources_ != nullptr;};
        void deleteInputResources() { this->inputResources_ = nullptr;};
        inline const vector<ExtraInfo::InputResources> & getInputResources() const { DARABONBA_PTR_GET_CONST(inputResources_, vector<ExtraInfo::InputResources>) };
        inline vector<ExtraInfo::InputResources> getInputResources() { DARABONBA_PTR_GET(inputResources_, vector<ExtraInfo::InputResources>) };
        inline ExtraInfo& setInputResources(const vector<ExtraInfo::InputResources> & inputResources) { DARABONBA_PTR_SET_VALUE(inputResources_, inputResources) };
        inline ExtraInfo& setInputResources(vector<ExtraInfo::InputResources> && inputResources) { DARABONBA_PTR_SET_RVALUE(inputResources_, inputResources) };


      protected:
        // The transfer results of the input resources for this round.
        shared_ptr<vector<ExtraInfo::InputResources>> inputResources_ {};
      };

      virtual bool empty() const override { return this->debug_ == nullptr
        && this->extraInfo_ == nullptr && this->messages_ == nullptr; };
      // debug Field Functions 
      bool hasDebug() const { return this->debug_ != nullptr;};
      void deleteDebug() { this->debug_ = nullptr;};
      inline       const Darabonba::Json & getDebug() const { DARABONBA_GET(debug_) };
      Darabonba::Json & getDebug() { DARABONBA_GET(debug_) };
      inline Data& setDebug(const Darabonba::Json & debug) { DARABONBA_SET_VALUE(debug_, debug) };
      inline Data& setDebug(Darabonba::Json && debug) { DARABONBA_SET_RVALUE(debug_, debug) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline const Data::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, Data::ExtraInfo) };
      inline Data::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, Data::ExtraInfo) };
      inline Data& setExtraInfo(const Data::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
      inline Data& setExtraInfo(Data::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    protected:
      // The optional debug information included in the business response.
      Darabonba::Json debug_ {};
      // The extended business information, which may include inputResources.
      shared_ptr<Data::ExtraInfo> extraInfo_ {};
      // The list of messages returned in this business response or the current streaming response frame.
      shared_ptr<vector<Data::Messages>> messages_ {};
    };

    class Communication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Communication& obj) { 
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(responseId, responseId_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Communication& obj) { 
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(responseId, responseId_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      };
      Communication() = default ;
      Communication(const Communication &) = default ;
      Communication(Communication &&) = default ;
      Communication(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Communication() = default ;
      Communication& operator=(const Communication &) = default ;
      Communication& operator=(Communication &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->requestId_ == nullptr
        && this->responseId_ == nullptr && this->sessionId_ == nullptr; };
      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Communication& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // responseId Field Functions 
      bool hasResponseId() const { return this->responseId_ != nullptr;};
      void deleteResponseId() { this->responseId_ = nullptr;};
      inline int64_t getResponseId() const { DARABONBA_PTR_GET_DEFAULT(responseId_, 0L) };
      inline Communication& setResponseId(int64_t responseId) { DARABONBA_PTR_SET_VALUE(responseId_, responseId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Communication& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // The business request ID. This is the same as the business request ID when present.
      shared_ptr<string> requestId_ {};
      // The ID of the business response frame.
      shared_ptr<int64_t> responseId_ {};
      // The ID of the customer session.
      shared_ptr<string> sessionId_ {};
    };

    class AudioFrames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioFrames& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(last, last_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AudioFrames& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(last, last_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      AudioFrames() = default ;
      AudioFrames(const AudioFrames &) = default ;
      AudioFrames(AudioFrames &&) = default ;
      AudioFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioFrames() = default ;
      AudioFrames& operator=(const AudioFrames &) = default ;
      AudioFrames& operator=(AudioFrames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->last_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline AudioFrames& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline AudioFrames& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // last Field Functions 
      bool hasLast() const { return this->last_ != nullptr;};
      void deleteLast() { this->last_ = nullptr;};
      inline bool getLast() const { DARABONBA_PTR_GET_DEFAULT(last_, false) };
      inline AudioFrames& setLast(bool last) { DARABONBA_PTR_SET_VALUE(last_, last) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline AudioFrames& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline AudioFrames& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AudioFrames& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The error code.
      shared_ptr<string> code_ {};
      // The encoded audio data.
      shared_ptr<string> data_ {};
      // Indicates whether this is the last audio frame.
      shared_ptr<bool> last_ {};
      // The error description.
      shared_ptr<string> message_ {};
      // The request correlation ID.
      shared_ptr<string> requestId_ {};
      // The type of the audio or error frame.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->audioFrames_ == nullptr
        && this->communication_ == nullptr && this->data_ == nullptr && this->error_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr
        && this->requestId_ == nullptr; };
    // audioFrames Field Functions 
    bool hasAudioFrames() const { return this->audioFrames_ != nullptr;};
    void deleteAudioFrames() { this->audioFrames_ = nullptr;};
    inline const vector<MedicalModelInferenceResponseBody::AudioFrames> & getAudioFrames() const { DARABONBA_PTR_GET_CONST(audioFrames_, vector<MedicalModelInferenceResponseBody::AudioFrames>) };
    inline vector<MedicalModelInferenceResponseBody::AudioFrames> getAudioFrames() { DARABONBA_PTR_GET(audioFrames_, vector<MedicalModelInferenceResponseBody::AudioFrames>) };
    inline MedicalModelInferenceResponseBody& setAudioFrames(const vector<MedicalModelInferenceResponseBody::AudioFrames> & audioFrames) { DARABONBA_PTR_SET_VALUE(audioFrames_, audioFrames) };
    inline MedicalModelInferenceResponseBody& setAudioFrames(vector<MedicalModelInferenceResponseBody::AudioFrames> && audioFrames) { DARABONBA_PTR_SET_RVALUE(audioFrames_, audioFrames) };


    // communication Field Functions 
    bool hasCommunication() const { return this->communication_ != nullptr;};
    void deleteCommunication() { this->communication_ = nullptr;};
    inline const MedicalModelInferenceResponseBody::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, MedicalModelInferenceResponseBody::Communication) };
    inline MedicalModelInferenceResponseBody::Communication getCommunication() { DARABONBA_PTR_GET(communication_, MedicalModelInferenceResponseBody::Communication) };
    inline MedicalModelInferenceResponseBody& setCommunication(const MedicalModelInferenceResponseBody::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
    inline MedicalModelInferenceResponseBody& setCommunication(MedicalModelInferenceResponseBody::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MedicalModelInferenceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MedicalModelInferenceResponseBody::Data) };
    inline MedicalModelInferenceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MedicalModelInferenceResponseBody::Data) };
    inline MedicalModelInferenceResponseBody& setData(const MedicalModelInferenceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MedicalModelInferenceResponseBody& setData(MedicalModelInferenceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const MedicalModelInferenceResponseBody::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, MedicalModelInferenceResponseBody::Error) };
    inline MedicalModelInferenceResponseBody::Error getError() { DARABONBA_PTR_GET(error_, MedicalModelInferenceResponseBody::Error) };
    inline MedicalModelInferenceResponseBody& setError(const MedicalModelInferenceResponseBody::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline MedicalModelInferenceResponseBody& setError(MedicalModelInferenceResponseBody::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline     const Darabonba::Json & getErrorCode() const { DARABONBA_GET(errorCode_) };
    Darabonba::Json & getErrorCode() { DARABONBA_GET(errorCode_) };
    inline MedicalModelInferenceResponseBody& setErrorCode(const Darabonba::Json & errorCode) { DARABONBA_SET_VALUE(errorCode_, errorCode) };
    inline MedicalModelInferenceResponseBody& setErrorCode(Darabonba::Json && errorCode) { DARABONBA_SET_RVALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline MedicalModelInferenceResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MedicalModelInferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The optional list of audio frames in the response. This can be empty or omitted when no audio is present.
    shared_ptr<vector<MedicalModelInferenceResponseBody::AudioFrames>> audioFrames_ {};
    // The information used to associate response frames with the original business request and session.
    shared_ptr<MedicalModelInferenceResponseBody::Communication> communication_ {};
    // The business data returned in this response, including messages and optional extended information.
    shared_ptr<MedicalModelInferenceResponseBody::Data> data_ {};
    // The error details returned when a business call fails.
    shared_ptr<MedicalModelInferenceResponseBody::Error> error_ {};
    // The business status code.
    Darabonba::Json errorCode_ {};
    // The business status description.
    shared_ptr<string> errorMsg_ {};
    // The optional business request correlation ID. For the POP request ID, see x-acs-request-id.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BMed20261116
#endif
