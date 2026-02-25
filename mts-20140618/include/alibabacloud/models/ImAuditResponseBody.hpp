// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageQuotaExceed, imageQuotaExceed_);
      DARABONBA_PTR_TO_JSON(ImageResults, imageResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TextQuotaExceed, textQuotaExceed_);
      DARABONBA_PTR_TO_JSON(TextResults, textResults_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageQuotaExceed, imageQuotaExceed_);
      DARABONBA_PTR_FROM_JSON(ImageResults, imageResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TextQuotaExceed, textQuotaExceed_);
      DARABONBA_PTR_FROM_JSON(TextResults, textResults_);
    };
    ImAuditResponseBody() = default ;
    ImAuditResponseBody(const ImAuditResponseBody &) = default ;
    ImAuditResponseBody(ImAuditResponseBody &&) = default ;
    ImAuditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBody() = default ;
    ImAuditResponseBody& operator=(const ImAuditResponseBody &) = default ;
    ImAuditResponseBody& operator=(ImAuditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TextResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TextResults& obj) { 
        DARABONBA_PTR_TO_JSON(result, result_);
      };
      friend void from_json(const Darabonba::Json& j, TextResults& obj) { 
        DARABONBA_PTR_FROM_JSON(result, result_);
      };
      TextResults() = default ;
      TextResults(const TextResults &) = default ;
      TextResults(TextResults &&) = default ;
      TextResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TextResults() = default ;
      TextResults& operator=(const TextResults &) = default ;
      TextResults& operator=(TextResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(dataId, dataId_);
          DARABONBA_PTR_TO_JSON(msg, msg_);
          DARABONBA_PTR_TO_JSON(results, results_);
          DARABONBA_PTR_TO_JSON(taskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(dataId, dataId_);
          DARABONBA_PTR_FROM_JSON(msg, msg_);
          DARABONBA_PTR_FROM_JSON(results, results_);
          DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Results : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Results& obj) { 
            DARABONBA_PTR_TO_JSON(details, details_);
            DARABONBA_PTR_TO_JSON(label, label_);
            DARABONBA_PTR_TO_JSON(rate, rate_);
            DARABONBA_PTR_TO_JSON(scene, scene_);
            DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
          };
          friend void from_json(const Darabonba::Json& j, Results& obj) { 
            DARABONBA_PTR_FROM_JSON(details, details_);
            DARABONBA_PTR_FROM_JSON(label, label_);
            DARABONBA_PTR_FROM_JSON(rate, rate_);
            DARABONBA_PTR_FROM_JSON(scene, scene_);
            DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
          };
          Results() = default ;
          Results(const Results &) = default ;
          Results(Results &&) = default ;
          Results(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Results() = default ;
          Results& operator=(const Results &) = default ;
          Results& operator=(Results &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Details : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Details& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(contexts, contexts_);
            };
            friend void from_json(const Darabonba::Json& j, Details& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(contexts, contexts_);
            };
            Details() = default ;
            Details(const Details &) = default ;
            Details(Details &&) = default ;
            Details(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Details() = default ;
            Details& operator=(const Details &) = default ;
            Details& operator=(Details &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Contexts : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Contexts& obj) { 
                DARABONBA_PTR_TO_JSON(context, context_);
                DARABONBA_PTR_TO_JSON(libCode, libCode_);
                DARABONBA_PTR_TO_JSON(libName, libName_);
                DARABONBA_PTR_TO_JSON(positions, positions_);
                DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
              };
              friend void from_json(const Darabonba::Json& j, Contexts& obj) { 
                DARABONBA_PTR_FROM_JSON(context, context_);
                DARABONBA_PTR_FROM_JSON(libCode, libCode_);
                DARABONBA_PTR_FROM_JSON(libName, libName_);
                DARABONBA_PTR_FROM_JSON(positions, positions_);
                DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
              };
              Contexts() = default ;
              Contexts(const Contexts &) = default ;
              Contexts(Contexts &&) = default ;
              Contexts(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Contexts() = default ;
              Contexts& operator=(const Contexts &) = default ;
              Contexts& operator=(Contexts &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->context_ == nullptr
        && this->libCode_ == nullptr && this->libName_ == nullptr && this->positions_ == nullptr && this->ruleType_ == nullptr; };
              // context Field Functions 
              bool hasContext() const { return this->context_ != nullptr;};
              void deleteContext() { this->context_ = nullptr;};
              inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
              inline Contexts& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


              // libCode Field Functions 
              bool hasLibCode() const { return this->libCode_ != nullptr;};
              void deleteLibCode() { this->libCode_ = nullptr;};
              inline string getLibCode() const { DARABONBA_PTR_GET_DEFAULT(libCode_, "") };
              inline Contexts& setLibCode(string libCode) { DARABONBA_PTR_SET_VALUE(libCode_, libCode) };


              // libName Field Functions 
              bool hasLibName() const { return this->libName_ != nullptr;};
              void deleteLibName() { this->libName_ = nullptr;};
              inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
              inline Contexts& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


              // positions Field Functions 
              bool hasPositions() const { return this->positions_ != nullptr;};
              void deletePositions() { this->positions_ = nullptr;};
              inline const vector<string> & getPositions() const { DARABONBA_PTR_GET_CONST(positions_, vector<string>) };
              inline vector<string> getPositions() { DARABONBA_PTR_GET(positions_, vector<string>) };
              inline Contexts& setPositions(const vector<string> & positions) { DARABONBA_PTR_SET_VALUE(positions_, positions) };
              inline Contexts& setPositions(vector<string> && positions) { DARABONBA_PTR_SET_RVALUE(positions_, positions) };


              // ruleType Field Functions 
              bool hasRuleType() const { return this->ruleType_ != nullptr;};
              void deleteRuleType() { this->ruleType_ = nullptr;};
              inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
              inline Contexts& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


            protected:
              // The term that the moderated text hits. If the text hits a term, the term is returned. If the text hits the algorithmic model, this parameter is not returned.
              shared_ptr<string> context_ {};
              // The code of the custom text library. This parameter is returned if the moderated text hits a term in the custom text library.
              shared_ptr<string> libCode_ {};
              // The name of the custom text library. This parameter is returned if the moderated text hits a term in the custom text library.
              shared_ptr<string> libName_ {};
              // The position of the term that the moderated text hits in the original text.
              shared_ptr<vector<string>> positions_ {};
              // The behavior rule. This parameter is returned if the moderated text hits the behavior rule. Valid values:
              // 
              // *   user_id
              // *   ip
              // *   umid
              // *   content
              // *   similar_content
              // *   imei
              // *   imsi
              shared_ptr<string> ruleType_ {};
            };

            virtual bool empty() const override { return this->label_ == nullptr
        && this->contexts_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline Details& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // contexts Field Functions 
            bool hasContexts() const { return this->contexts_ != nullptr;};
            void deleteContexts() { this->contexts_ = nullptr;};
            inline const vector<Details::Contexts> & getContexts() const { DARABONBA_PTR_GET_CONST(contexts_, vector<Details::Contexts>) };
            inline vector<Details::Contexts> getContexts() { DARABONBA_PTR_GET(contexts_, vector<Details::Contexts>) };
            inline Details& setContexts(const vector<Details::Contexts> & contexts) { DARABONBA_PTR_SET_VALUE(contexts_, contexts) };
            inline Details& setContexts(vector<Details::Contexts> && contexts) { DARABONBA_PTR_SET_RVALUE(contexts_, contexts) };


          protected:
            // The category of the risky content that the moderated text hits. Valid values:
            // 
            // *   spam: spam
            // *   ad: ad
            // *   politics: political content
            // *   terrorism: terrorist content
            // *   abuse: abuse
            // *   porn: pornographic content
            // *   flood: excessive junk content
            // *   contraband: prohibited content
            // *   meaningless: meaningless content
            // *   customized: custom content, such as a custom keyword
            shared_ptr<string> label_ {};
            // The context information of the risky content that the moderated text hits.
            shared_ptr<vector<Details::Contexts>> contexts_ {};
          };

          virtual bool empty() const override { return this->details_ == nullptr
        && this->label_ == nullptr && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr; };
          // details Field Functions 
          bool hasDetails() const { return this->details_ != nullptr;};
          void deleteDetails() { this->details_ = nullptr;};
          inline const vector<Results::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Results::Details>) };
          inline vector<Results::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Results::Details>) };
          inline Results& setDetails(const vector<Results::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
          inline Results& setDetails(vector<Results::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Results& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
          inline Results& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


          // scene Field Functions 
          bool hasScene() const { return this->scene_ != nullptr;};
          void deleteScene() { this->scene_ = nullptr;};
          inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
          inline Results& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline Results& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        protected:
          // The risky content that the moderated text hits. A text entry can hit multiple pieces of risky content.
          shared_ptr<vector<Results::Details>> details_ {};
          // The category of the moderation result for the moderated text. Valid values:
          // 
          // *   normal: normal content
          // *   spam: spam
          // *   ad: ad
          // *   politics: political content
          // *   terrorism: terrorist content
          // *   abuse: abuse
          // *   porn: pornographic content
          // *   flood: excessive junk content
          // *   contraband: prohibited content
          // *   meaningless: meaningless content
          // *   customized: custom content, such as a custom keyword
          shared_ptr<string> label_ {};
          // The score of the confidence level. Valid values: 0 to 100. A greater value indicates a higher confidence level. If a value of pass is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content is normal. If a value of review or block is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content contains violations.
          // 
          // >  This score is for reference only. We strongly recommend that you do not use this score in your business. We recommend that you use the values that are returned for the suggestion, label, and sublabel parameters to determine whether the content contains violations. The sublabel parameter is returned by some operations.
          shared_ptr<double> rate_ {};
          // The moderation scenario.
          shared_ptr<string> scene_ {};
          // The recommended subsequent operation. Valid values:
          // 
          // *   pass: The content passes the moderation.
          // *   review: The content needs to be manually reviewed again.
          // *   block: The content contains violations. We recommend that you delete or block the content.
          shared_ptr<string> suggestion_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->content_ == nullptr && this->dataId_ == nullptr && this->msg_ == nullptr && this->results_ == nullptr && this->taskId_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
        inline Result& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline Result& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline Result& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // results Field Functions 
        bool hasResults() const { return this->results_ != nullptr;};
        void deleteResults() { this->results_ = nullptr;};
        inline const vector<Result::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Result::Results>) };
        inline vector<Result::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Result::Results>) };
        inline Result& setResults(const vector<Result::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
        inline Result& setResults(vector<Result::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Result& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The error code. The error code is the same as the HTTP status code. For more information, see [Error codes](https://help.aliyun.com/document_detail/29254.html).
        shared_ptr<int64_t> code_ {};
        // The text that you specify in the moderation request.
        shared_ptr<string> content_ {};
        // The sequence number of the text.
        shared_ptr<string> dataId_ {};
        // The message that is returned for the request.
        shared_ptr<string> msg_ {};
        // The returned data. If the HTTP status code 200 is returned, the array in the returned results contains one or more elements. Each element is a struct.
        shared_ptr<vector<Result::Results>> results_ {};
        // The ID of the moderation task.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<TextResults::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<TextResults::Result>) };
      inline vector<TextResults::Result> getResult() { DARABONBA_PTR_GET(result_, vector<TextResults::Result>) };
      inline TextResults& setResult(const vector<TextResults::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline TextResults& setResult(vector<TextResults::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // The text moderation results.
      shared_ptr<vector<TextResults::Result>> result_ {};
    };

    class ImageResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageResults& obj) { 
        DARABONBA_PTR_TO_JSON(result, result_);
      };
      friend void from_json(const Darabonba::Json& j, ImageResults& obj) { 
        DARABONBA_PTR_FROM_JSON(result, result_);
      };
      ImageResults() = default ;
      ImageResults(const ImageResults &) = default ;
      ImageResults(ImageResults &&) = default ;
      ImageResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageResults() = default ;
      ImageResults& operator=(const ImageResults &) = default ;
      ImageResults& operator=(ImageResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(dataId, dataId_);
          DARABONBA_ANY_TO_JSON(extras, extras_);
          DARABONBA_PTR_TO_JSON(msg, msg_);
          DARABONBA_PTR_TO_JSON(results, results_);
          DARABONBA_PTR_TO_JSON(taskId, taskId_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(dataId, dataId_);
          DARABONBA_ANY_FROM_JSON(extras, extras_);
          DARABONBA_PTR_FROM_JSON(msg, msg_);
          DARABONBA_PTR_FROM_JSON(results, results_);
          DARABONBA_PTR_FROM_JSON(taskId, taskId_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Results : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Results& obj) { 
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Rate, rate_);
            DARABONBA_PTR_TO_JSON(Scene, scene_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(frames, frames_);
            DARABONBA_PTR_TO_JSON(hintWordsInfo, hintWordsInfo_);
            DARABONBA_PTR_TO_JSON(logoData, logoData_);
            DARABONBA_PTR_TO_JSON(ocrData, ocrData_);
            DARABONBA_PTR_TO_JSON(programCodeData, programCodeData_);
            DARABONBA_PTR_TO_JSON(qrcodeData, qrcodeData_);
            DARABONBA_PTR_TO_JSON(qrcodeLocations, qrcodeLocations_);
            DARABONBA_PTR_TO_JSON(sfaceData, sfaceData_);
          };
          friend void from_json(const Darabonba::Json& j, Results& obj) { 
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Rate, rate_);
            DARABONBA_PTR_FROM_JSON(Scene, scene_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(frames, frames_);
            DARABONBA_PTR_FROM_JSON(hintWordsInfo, hintWordsInfo_);
            DARABONBA_PTR_FROM_JSON(logoData, logoData_);
            DARABONBA_PTR_FROM_JSON(ocrData, ocrData_);
            DARABONBA_PTR_FROM_JSON(programCodeData, programCodeData_);
            DARABONBA_PTR_FROM_JSON(qrcodeData, qrcodeData_);
            DARABONBA_PTR_FROM_JSON(qrcodeLocations, qrcodeLocations_);
            DARABONBA_PTR_FROM_JSON(sfaceData, sfaceData_);
          };
          Results() = default ;
          Results(const Results &) = default ;
          Results(Results &&) = default ;
          Results(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Results() = default ;
          Results& operator=(const Results &) = default ;
          Results& operator=(Results &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SfaceData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SfaceData& obj) { 
              DARABONBA_PTR_TO_JSON(faces, faces_);
              DARABONBA_PTR_TO_JSON(h, h_);
              DARABONBA_PTR_TO_JSON(w, w_);
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, SfaceData& obj) { 
              DARABONBA_PTR_FROM_JSON(faces, faces_);
              DARABONBA_PTR_FROM_JSON(h, h_);
              DARABONBA_PTR_FROM_JSON(w, w_);
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            SfaceData() = default ;
            SfaceData(const SfaceData &) = default ;
            SfaceData(SfaceData &&) = default ;
            SfaceData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SfaceData() = default ;
            SfaceData& operator=(const SfaceData &) = default ;
            SfaceData& operator=(SfaceData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Faces : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Faces& obj) { 
                DARABONBA_PTR_TO_JSON(idid, idid_);
                DARABONBA_PTR_TO_JSON(name, name_);
                DARABONBA_PTR_TO_JSON(re, re_);
              };
              friend void from_json(const Darabonba::Json& j, Faces& obj) { 
                DARABONBA_PTR_FROM_JSON(idid, idid_);
                DARABONBA_PTR_FROM_JSON(name, name_);
                DARABONBA_PTR_FROM_JSON(re, re_);
              };
              Faces() = default ;
              Faces(const Faces &) = default ;
              Faces(Faces &&) = default ;
              Faces(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Faces() = default ;
              Faces& operator=(const Faces &) = default ;
              Faces& operator=(Faces &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->idid_ == nullptr
        && this->name_ == nullptr && this->re_ == nullptr; };
              // idid Field Functions 
              bool hasIdid() const { return this->idid_ != nullptr;};
              void deleteIdid() { this->idid_ = nullptr;};
              inline string getIdid() const { DARABONBA_PTR_GET_DEFAULT(idid_, "") };
              inline Faces& setIdid(string idid) { DARABONBA_PTR_SET_VALUE(idid_, idid) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Faces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // re Field Functions 
              bool hasRe() const { return this->re_ != nullptr;};
              void deleteRe() { this->re_ = nullptr;};
              inline float getRe() const { DARABONBA_PTR_GET_DEFAULT(re_, 0.0) };
              inline Faces& setRe(float re) { DARABONBA_PTR_SET_VALUE(re_, re) };


            protected:
              // The ID of the detected face. The value is a string.
              shared_ptr<string> idid_ {};
              // This value is a string, which indicates the name of a similar person.
              shared_ptr<string> name_ {};
              // The score of the confidence level. The value is a float point number. Valid values: 0 to 100. A greater value indicates a higher confidence level for facial recognition.
              shared_ptr<float> re_ {};
            };

            virtual bool empty() const override { return this->faces_ == nullptr
        && this->h_ == nullptr && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
            // faces Field Functions 
            bool hasFaces() const { return this->faces_ != nullptr;};
            void deleteFaces() { this->faces_ = nullptr;};
            inline const vector<SfaceData::Faces> & getFaces() const { DARABONBA_PTR_GET_CONST(faces_, vector<SfaceData::Faces>) };
            inline vector<SfaceData::Faces> getFaces() { DARABONBA_PTR_GET(faces_, vector<SfaceData::Faces>) };
            inline SfaceData& setFaces(const vector<SfaceData::Faces> & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
            inline SfaceData& setFaces(vector<SfaceData::Faces> && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


            // h Field Functions 
            bool hasH() const { return this->h_ != nullptr;};
            void deleteH() { this->h_ = nullptr;};
            inline float getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
            inline SfaceData& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


            // w Field Functions 
            bool hasW() const { return this->w_ != nullptr;};
            void deleteW() { this->w_ = nullptr;};
            inline float getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
            inline SfaceData& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
            inline SfaceData& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
            inline SfaceData& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The information about the face detected in the moderated image.
            shared_ptr<vector<SfaceData::Faces>> faces_ {};
            // The height of the face area. Unit: pixel.
            shared_ptr<float> h_ {};
            // The width of the face area. Unit: pixel.
            shared_ptr<float> w_ {};
            // The distance between the upper-left corner of the face area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> x_ {};
            // The distance between the upper-left corner of the face area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> y_ {};
          };

          class QrcodeLocations : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const QrcodeLocations& obj) { 
              DARABONBA_PTR_TO_JSON(h, h_);
              DARABONBA_PTR_TO_JSON(qrcode, qrcode_);
              DARABONBA_PTR_TO_JSON(w, w_);
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, QrcodeLocations& obj) { 
              DARABONBA_PTR_FROM_JSON(h, h_);
              DARABONBA_PTR_FROM_JSON(qrcode, qrcode_);
              DARABONBA_PTR_FROM_JSON(w, w_);
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            QrcodeLocations() = default ;
            QrcodeLocations(const QrcodeLocations &) = default ;
            QrcodeLocations(QrcodeLocations &&) = default ;
            QrcodeLocations(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~QrcodeLocations() = default ;
            QrcodeLocations& operator=(const QrcodeLocations &) = default ;
            QrcodeLocations& operator=(QrcodeLocations &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->h_ == nullptr
        && this->qrcode_ == nullptr && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
            // h Field Functions 
            bool hasH() const { return this->h_ != nullptr;};
            void deleteH() { this->h_ = nullptr;};
            inline float getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
            inline QrcodeLocations& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


            // qrcode Field Functions 
            bool hasQrcode() const { return this->qrcode_ != nullptr;};
            void deleteQrcode() { this->qrcode_ = nullptr;};
            inline string getQrcode() const { DARABONBA_PTR_GET_DEFAULT(qrcode_, "") };
            inline QrcodeLocations& setQrcode(string qrcode) { DARABONBA_PTR_SET_VALUE(qrcode_, qrcode) };


            // w Field Functions 
            bool hasW() const { return this->w_ != nullptr;};
            void deleteW() { this->w_ = nullptr;};
            inline float getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
            inline QrcodeLocations& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
            inline QrcodeLocations& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
            inline QrcodeLocations& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The height of the QR code area. Unit: pixel.
            shared_ptr<float> h_ {};
            // The URL that the detected QR code points to.
            shared_ptr<string> qrcode_ {};
            // The width of the QR code area. Unit: pixel.
            shared_ptr<float> w_ {};
            // The distance between the upper-left corner of the QR code area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> x_ {};
            // The distance between the upper-left corner of the QR code area and the x-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> y_ {};
          };

          class ProgramCodeData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ProgramCodeData& obj) { 
              DARABONBA_PTR_TO_JSON(h, h_);
              DARABONBA_PTR_TO_JSON(w, w_);
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, ProgramCodeData& obj) { 
              DARABONBA_PTR_FROM_JSON(h, h_);
              DARABONBA_PTR_FROM_JSON(w, w_);
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            ProgramCodeData() = default ;
            ProgramCodeData(const ProgramCodeData &) = default ;
            ProgramCodeData(ProgramCodeData &&) = default ;
            ProgramCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ProgramCodeData() = default ;
            ProgramCodeData& operator=(const ProgramCodeData &) = default ;
            ProgramCodeData& operator=(ProgramCodeData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->h_ == nullptr
        && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
            // h Field Functions 
            bool hasH() const { return this->h_ != nullptr;};
            void deleteH() { this->h_ = nullptr;};
            inline float getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
            inline ProgramCodeData& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


            // w Field Functions 
            bool hasW() const { return this->w_ != nullptr;};
            void deleteW() { this->w_ = nullptr;};
            inline float getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
            inline ProgramCodeData& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
            inline ProgramCodeData& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
            inline ProgramCodeData& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The height of the mini program code area. Unit: pixel.
            shared_ptr<float> h_ {};
            // The width of the mini program code area. Unit: pixel.
            shared_ptr<float> w_ {};
            // The distance between the upper-left corner of the mini program code area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> x_ {};
            // The distance between the upper-left corner of the mini program code area and the x-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> y_ {};
          };

          class LogoData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LogoData& obj) { 
              DARABONBA_PTR_TO_JSON(h, h_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(type, type_);
              DARABONBA_PTR_TO_JSON(w, w_);
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, LogoData& obj) { 
              DARABONBA_PTR_FROM_JSON(h, h_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(type, type_);
              DARABONBA_PTR_FROM_JSON(w, w_);
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            LogoData() = default ;
            LogoData(const LogoData &) = default ;
            LogoData(LogoData &&) = default ;
            LogoData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LogoData() = default ;
            LogoData& operator=(const LogoData &) = default ;
            LogoData& operator=(LogoData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->h_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
            // h Field Functions 
            bool hasH() const { return this->h_ != nullptr;};
            void deleteH() { this->h_ = nullptr;};
            inline float getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
            inline LogoData& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline LogoData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline LogoData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // w Field Functions 
            bool hasW() const { return this->w_ != nullptr;};
            void deleteW() { this->w_ = nullptr;};
            inline float getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
            inline LogoData& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
            inline LogoData& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
            inline LogoData& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The height of the logo area. Unit: pixel.
            shared_ptr<float> h_ {};
            // The name of the detected logo.
            shared_ptr<string> name_ {};
            // The type of the detected logo. For example, a value of TV indicates a controlled media logo.
            shared_ptr<string> type_ {};
            // The width of the logo area. Unit: pixel.
            shared_ptr<float> w_ {};
            // The distance between the upper-left corner of the logo area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> x_ {};
            // The distance between the upper-left corner of the logo area and the x-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
            shared_ptr<float> y_ {};
          };

          class HintWordsInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HintWordsInfo& obj) { 
              DARABONBA_PTR_TO_JSON(context, context_);
            };
            friend void from_json(const Darabonba::Json& j, HintWordsInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(context, context_);
            };
            HintWordsInfo() = default ;
            HintWordsInfo(const HintWordsInfo &) = default ;
            HintWordsInfo(HintWordsInfo &&) = default ;
            HintWordsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HintWordsInfo() = default ;
            HintWordsInfo& operator=(const HintWordsInfo &) = default ;
            HintWordsInfo& operator=(HintWordsInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->context_ == nullptr; };
            // context Field Functions 
            bool hasContext() const { return this->context_ != nullptr;};
            void deleteContext() { this->context_ = nullptr;};
            inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
            inline HintWordsInfo& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


          protected:
            // The term hit by the detected text.
            shared_ptr<string> context_ {};
          };

          class Frames : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Frames& obj) { 
              DARABONBA_PTR_TO_JSON(rate, rate_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Frames& obj) { 
              DARABONBA_PTR_FROM_JSON(rate, rate_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            Frames() = default ;
            Frames(const Frames &) = default ;
            Frames(Frames &&) = default ;
            Frames(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Frames() = default ;
            Frames& operator=(const Frames &) = default ;
            Frames& operator=(Frames &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->rate_ == nullptr
        && this->url_ == nullptr; };
            // rate Field Functions 
            bool hasRate() const { return this->rate_ != nullptr;};
            void deleteRate() { this->rate_ = nullptr;};
            inline float getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
            inline Frames& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Frames& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The score of the confidence level. Valid values: 0 to 100. A higher confidence level indicates higher reliability of the moderation result. We recommend that you do not use this score in your business.
            shared_ptr<float> rate_ {};
            // The temporary access URL of the truncated frame. The URL is valid for 5 minutes.
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->label_ == nullptr
        && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr && this->frames_ == nullptr && this->hintWordsInfo_ == nullptr
        && this->logoData_ == nullptr && this->ocrData_ == nullptr && this->programCodeData_ == nullptr && this->qrcodeData_ == nullptr && this->qrcodeLocations_ == nullptr
        && this->sfaceData_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Results& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
          inline Results& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


          // scene Field Functions 
          bool hasScene() const { return this->scene_ != nullptr;};
          void deleteScene() { this->scene_ = nullptr;};
          inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
          inline Results& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline Results& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // frames Field Functions 
          bool hasFrames() const { return this->frames_ != nullptr;};
          void deleteFrames() { this->frames_ = nullptr;};
          inline const vector<Results::Frames> & getFrames() const { DARABONBA_PTR_GET_CONST(frames_, vector<Results::Frames>) };
          inline vector<Results::Frames> getFrames() { DARABONBA_PTR_GET(frames_, vector<Results::Frames>) };
          inline Results& setFrames(const vector<Results::Frames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
          inline Results& setFrames(vector<Results::Frames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


          // hintWordsInfo Field Functions 
          bool hasHintWordsInfo() const { return this->hintWordsInfo_ != nullptr;};
          void deleteHintWordsInfo() { this->hintWordsInfo_ = nullptr;};
          inline const vector<Results::HintWordsInfo> & getHintWordsInfo() const { DARABONBA_PTR_GET_CONST(hintWordsInfo_, vector<Results::HintWordsInfo>) };
          inline vector<Results::HintWordsInfo> getHintWordsInfo() { DARABONBA_PTR_GET(hintWordsInfo_, vector<Results::HintWordsInfo>) };
          inline Results& setHintWordsInfo(const vector<Results::HintWordsInfo> & hintWordsInfo) { DARABONBA_PTR_SET_VALUE(hintWordsInfo_, hintWordsInfo) };
          inline Results& setHintWordsInfo(vector<Results::HintWordsInfo> && hintWordsInfo) { DARABONBA_PTR_SET_RVALUE(hintWordsInfo_, hintWordsInfo) };


          // logoData Field Functions 
          bool hasLogoData() const { return this->logoData_ != nullptr;};
          void deleteLogoData() { this->logoData_ = nullptr;};
          inline const vector<Results::LogoData> & getLogoData() const { DARABONBA_PTR_GET_CONST(logoData_, vector<Results::LogoData>) };
          inline vector<Results::LogoData> getLogoData() { DARABONBA_PTR_GET(logoData_, vector<Results::LogoData>) };
          inline Results& setLogoData(const vector<Results::LogoData> & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
          inline Results& setLogoData(vector<Results::LogoData> && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


          // ocrData Field Functions 
          bool hasOcrData() const { return this->ocrData_ != nullptr;};
          void deleteOcrData() { this->ocrData_ = nullptr;};
          inline const vector<string> & getOcrData() const { DARABONBA_PTR_GET_CONST(ocrData_, vector<string>) };
          inline vector<string> getOcrData() { DARABONBA_PTR_GET(ocrData_, vector<string>) };
          inline Results& setOcrData(const vector<string> & ocrData) { DARABONBA_PTR_SET_VALUE(ocrData_, ocrData) };
          inline Results& setOcrData(vector<string> && ocrData) { DARABONBA_PTR_SET_RVALUE(ocrData_, ocrData) };


          // programCodeData Field Functions 
          bool hasProgramCodeData() const { return this->programCodeData_ != nullptr;};
          void deleteProgramCodeData() { this->programCodeData_ = nullptr;};
          inline const vector<Results::ProgramCodeData> & getProgramCodeData() const { DARABONBA_PTR_GET_CONST(programCodeData_, vector<Results::ProgramCodeData>) };
          inline vector<Results::ProgramCodeData> getProgramCodeData() { DARABONBA_PTR_GET(programCodeData_, vector<Results::ProgramCodeData>) };
          inline Results& setProgramCodeData(const vector<Results::ProgramCodeData> & programCodeData) { DARABONBA_PTR_SET_VALUE(programCodeData_, programCodeData) };
          inline Results& setProgramCodeData(vector<Results::ProgramCodeData> && programCodeData) { DARABONBA_PTR_SET_RVALUE(programCodeData_, programCodeData) };


          // qrcodeData Field Functions 
          bool hasQrcodeData() const { return this->qrcodeData_ != nullptr;};
          void deleteQrcodeData() { this->qrcodeData_ = nullptr;};
          inline const vector<string> & getQrcodeData() const { DARABONBA_PTR_GET_CONST(qrcodeData_, vector<string>) };
          inline vector<string> getQrcodeData() { DARABONBA_PTR_GET(qrcodeData_, vector<string>) };
          inline Results& setQrcodeData(const vector<string> & qrcodeData) { DARABONBA_PTR_SET_VALUE(qrcodeData_, qrcodeData) };
          inline Results& setQrcodeData(vector<string> && qrcodeData) { DARABONBA_PTR_SET_RVALUE(qrcodeData_, qrcodeData) };


          // qrcodeLocations Field Functions 
          bool hasQrcodeLocations() const { return this->qrcodeLocations_ != nullptr;};
          void deleteQrcodeLocations() { this->qrcodeLocations_ = nullptr;};
          inline const vector<Results::QrcodeLocations> & getQrcodeLocations() const { DARABONBA_PTR_GET_CONST(qrcodeLocations_, vector<Results::QrcodeLocations>) };
          inline vector<Results::QrcodeLocations> getQrcodeLocations() { DARABONBA_PTR_GET(qrcodeLocations_, vector<Results::QrcodeLocations>) };
          inline Results& setQrcodeLocations(const vector<Results::QrcodeLocations> & qrcodeLocations) { DARABONBA_PTR_SET_VALUE(qrcodeLocations_, qrcodeLocations) };
          inline Results& setQrcodeLocations(vector<Results::QrcodeLocations> && qrcodeLocations) { DARABONBA_PTR_SET_RVALUE(qrcodeLocations_, qrcodeLocations) };


          // sfaceData Field Functions 
          bool hasSfaceData() const { return this->sfaceData_ != nullptr;};
          void deleteSfaceData() { this->sfaceData_ = nullptr;};
          inline const vector<Results::SfaceData> & getSfaceData() const { DARABONBA_PTR_GET_CONST(sfaceData_, vector<Results::SfaceData>) };
          inline vector<Results::SfaceData> getSfaceData() { DARABONBA_PTR_GET(sfaceData_, vector<Results::SfaceData>) };
          inline Results& setSfaceData(const vector<Results::SfaceData> & sfaceData) { DARABONBA_PTR_SET_VALUE(sfaceData_, sfaceData) };
          inline Results& setSfaceData(vector<Results::SfaceData> && sfaceData) { DARABONBA_PTR_SET_RVALUE(sfaceData_, sfaceData) };


        protected:
          // The category of the moderation results. Valid values vary based on the specified moderation scenario.
          // 
          // *   If the Scenes parameter is set to porn, the valid values are:
          // 
          //     *   normal: no pornographic content
          //     *   sexy: sexy content
          //     *   porn: pornographic content
          // 
          // *   If the Scenes parameter is set to terrorism, the valid values are:
          // 
          //     *   normal: no pornographic content
          //     *   bloody: bloody content
          //     *   explosion: explosions and smoke
          //     *   outfit: special costume
          //     *   logo: special logo
          //     *   weapon: weapon
          //     *   politics: political content
          //     *   violence: violence
          //     *   crowd: crowd
          //     *   parade: parade
          //     *   carcrash: car accident
          //     *   flag: flag
          //     *   location: landmark
          //     *   others: other content
          // 
          // *   If the Scenes parameter is set to ad, the valid values are:
          // 
          //     *   normal: no pornographic content
          //     *   ad: ad violation
          //     *   politics: politically sensitive content in text
          //     *   porn: pornographic content in text
          //     *   abuse: abuse in text
          //     *   terrorism: terrorist content in text
          //     *   contraband: prohibited content in text
          //     *   spam: junk content in text
          //     *   npx: illegal ad
          //     *   qrcode: QR code
          //     *   programCode: mini program code
          // 
          // *   If the Scenes parameter is set to qrcode, the valid values are:
          // 
          //     *   normal: no pornographic content
          //     *   qrcode: QR code
          //     *   programCode: mini program code
          // 
          // *   If the Scenes parameter is set to live, the valid values are:
          // 
          //     *   normal: no pornographic content
          //     *   meaningless: no content in the image, such as black or white screen
          //     *   PIP: picture-in-picture
          //     *   smoking: smoking
          //     *   drivelive: live broadcasting in a running vehicle
          // 
          // *   If the Scenes parameter is set to logo, the valid values are:
          // 
          //     *   normal: no pornographic content
          //     *   TV: controlled logo
          //     *   trademark: trademark
          shared_ptr<string> label_ {};
          // The score of the confidence level. Valid values: 0 to 100. A greater value indicates a higher confidence level. If a value of pass is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content is normal. If a value of review or block is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content contains violations.
          // 
          // >  This score is for reference only. We strongly recommend that you do not use this score in your business. We recommend that you use the values that are returned for the suggestion, label, and sublabel parameters to determine whether the content contains violations. The sublabel parameter is returned by some operations.
          shared_ptr<double> rate_ {};
          // The image moderation scenario. Valid values:
          // 
          // *   porn: pornography
          // *   terrorism: terrorist content
          // *   ad: ad violation
          // *   qrcode: QR code
          // *   live: undesirable scene
          // *   logo: special logo
          shared_ptr<string> scene_ {};
          // The recommended subsequent operation. Valid values:
          // 
          // *   pass: The content passes the moderation. No further actions are required.
          // *   review: The moderation object contains suspected violations and requires human review.
          // *   block: The moderation object contains violations. We recommend that you delete or block the object.
          shared_ptr<string> suggestion_ {};
          // If the temporary access URL of the image is too long, a truncated temporary access URL is returned for each frame.
          shared_ptr<vector<Results::Frames>> frames_ {};
          // The information about the term hit by the ad or violation text detected in the moderated image.
          shared_ptr<vector<Results::HintWordsInfo>> hintWordsInfo_ {};
          // The information about the logo detected in the moderated image.
          shared_ptr<vector<Results::LogoData>> logoData_ {};
          // ocrData
          shared_ptr<vector<string>> ocrData_ {};
          // The location information of the mini program code detected in the moderated image.
          shared_ptr<vector<Results::ProgramCodeData>> programCodeData_ {};
          // The information about the text that is included in the QR code detected in the moderated image.
          shared_ptr<vector<string>> qrcodeData_ {};
          // The coordinates of the QR code detected in the image.
          shared_ptr<vector<Results::QrcodeLocations>> qrcodeLocations_ {};
          // The information about the terrorist content detected in the moderated image.
          shared_ptr<vector<Results::SfaceData>> sfaceData_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataId_ == nullptr && this->extras_ == nullptr && this->msg_ == nullptr && this->results_ == nullptr && this->taskId_ == nullptr
        && this->url_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
        inline Result& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline Result& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // extras Field Functions 
        bool hasExtras() const { return this->extras_ != nullptr;};
        void deleteExtras() { this->extras_ = nullptr;};
        inline         const Darabonba::Json & getExtras() const { DARABONBA_GET(extras_) };
        Darabonba::Json & getExtras() { DARABONBA_GET(extras_) };
        inline Result& setExtras(const Darabonba::Json & extras) { DARABONBA_SET_VALUE(extras_, extras) };
        inline Result& setExtras(Darabonba::Json && extras) { DARABONBA_SET_RVALUE(extras_, extras) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline Result& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // results Field Functions 
        bool hasResults() const { return this->results_ != nullptr;};
        void deleteResults() { this->results_ = nullptr;};
        inline const vector<Result::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Result::Results>) };
        inline vector<Result::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Result::Results>) };
        inline Result& setResults(const vector<Result::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
        inline Result& setResults(vector<Result::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Result& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Result& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The error code. The error code is the same as the HTTP status code. This parameter is not returned if the request is successful.
        shared_ptr<int64_t> code_ {};
        // The ID of the moderated object.
        // 
        // >  If you set the dataId parameter in the moderation request, the dataId parameter is returned in the response.
        shared_ptr<string> dataId_ {};
        // The additional information about the image. If ad is specified for the Scenes parameter, the following content may be returned for this parameter: hitLibInfo: the information about the custom text library that is hit by the text in the image. The value of this parameter is an array. For more information about the structure, see [hitLibInfo](https://help.aliyun.com/document_detail/268644.html).
        Darabonba::Json extras_ {};
        // The message that is returned for the request.
        shared_ptr<string> msg_ {};
        // The returned data. If the call is successful, the array in the returned results contains one or more elements. Each element is a struct.
        shared_ptr<vector<Result::Results>> results_ {};
        // The ID of the moderation task.
        shared_ptr<string> taskId_ {};
        // The URL of the moderated object.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<ImageResults::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ImageResults::Result>) };
      inline vector<ImageResults::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ImageResults::Result>) };
      inline ImageResults& setResult(const vector<ImageResults::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline ImageResults& setResult(vector<ImageResults::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // The image moderation results.
      shared_ptr<vector<ImageResults::Result>> result_ {};
    };

    virtual bool empty() const override { return this->imageQuotaExceed_ == nullptr
        && this->imageResults_ == nullptr && this->requestId_ == nullptr && this->textQuotaExceed_ == nullptr && this->textResults_ == nullptr; };
    // imageQuotaExceed Field Functions 
    bool hasImageQuotaExceed() const { return this->imageQuotaExceed_ != nullptr;};
    void deleteImageQuotaExceed() { this->imageQuotaExceed_ = nullptr;};
    inline bool getImageQuotaExceed() const { DARABONBA_PTR_GET_DEFAULT(imageQuotaExceed_, false) };
    inline ImAuditResponseBody& setImageQuotaExceed(bool imageQuotaExceed) { DARABONBA_PTR_SET_VALUE(imageQuotaExceed_, imageQuotaExceed) };


    // imageResults Field Functions 
    bool hasImageResults() const { return this->imageResults_ != nullptr;};
    void deleteImageResults() { this->imageResults_ = nullptr;};
    inline const ImAuditResponseBody::ImageResults & getImageResults() const { DARABONBA_PTR_GET_CONST(imageResults_, ImAuditResponseBody::ImageResults) };
    inline ImAuditResponseBody::ImageResults getImageResults() { DARABONBA_PTR_GET(imageResults_, ImAuditResponseBody::ImageResults) };
    inline ImAuditResponseBody& setImageResults(const ImAuditResponseBody::ImageResults & imageResults) { DARABONBA_PTR_SET_VALUE(imageResults_, imageResults) };
    inline ImAuditResponseBody& setImageResults(ImAuditResponseBody::ImageResults && imageResults) { DARABONBA_PTR_SET_RVALUE(imageResults_, imageResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImAuditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // textQuotaExceed Field Functions 
    bool hasTextQuotaExceed() const { return this->textQuotaExceed_ != nullptr;};
    void deleteTextQuotaExceed() { this->textQuotaExceed_ = nullptr;};
    inline bool getTextQuotaExceed() const { DARABONBA_PTR_GET_DEFAULT(textQuotaExceed_, false) };
    inline ImAuditResponseBody& setTextQuotaExceed(bool textQuotaExceed) { DARABONBA_PTR_SET_VALUE(textQuotaExceed_, textQuotaExceed) };


    // textResults Field Functions 
    bool hasTextResults() const { return this->textResults_ != nullptr;};
    void deleteTextResults() { this->textResults_ = nullptr;};
    inline const ImAuditResponseBody::TextResults & getTextResults() const { DARABONBA_PTR_GET_CONST(textResults_, ImAuditResponseBody::TextResults) };
    inline ImAuditResponseBody::TextResults getTextResults() { DARABONBA_PTR_GET(textResults_, ImAuditResponseBody::TextResults) };
    inline ImAuditResponseBody& setTextResults(const ImAuditResponseBody::TextResults & textResults) { DARABONBA_PTR_SET_VALUE(textResults_, textResults) };
    inline ImAuditResponseBody& setTextResults(ImAuditResponseBody::TextResults && textResults) { DARABONBA_PTR_SET_RVALUE(textResults_, textResults) };


  protected:
    // Indicates whether the image moderation QPS exceeds the limit. Valid values: true and false. A value of true indicates that the QPS does not exceed the limit. A value of false indicates that the QPS exceeds the limit.
    shared_ptr<bool> imageQuotaExceed_ {};
    // The image moderation results. If the HTTP status code 200 is returned, the array in the returned results contains one or more elements. For more information about the parameters, see [Data returned by the ImAudit operation](https://help.aliyun.com/document_detail/268644.html).
    shared_ptr<ImAuditResponseBody::ImageResults> imageResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the text moderation QPS exceeds the limit. Valid values: true and false.
    shared_ptr<bool> textQuotaExceed_ {};
    // The text moderation results. If the HTTP status code 200 is returned, the array in the returned results contains one or more elements. For more information about the parameters, see [Data returned by the ImAudit operation](https://help.aliyun.com/document_detail/268644.html).
    shared_ptr<ImAuditResponseBody::TextResults> textResults_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
