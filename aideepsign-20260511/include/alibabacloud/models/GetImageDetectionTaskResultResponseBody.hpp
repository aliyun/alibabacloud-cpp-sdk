// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetImageDetectionTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DetectMode, detectMode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tamper, tamper_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DetectMode, detectMode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tamper, tamper_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetImageDetectionTaskResultResponseBody() = default ;
    GetImageDetectionTaskResultResponseBody(const GetImageDetectionTaskResultResponseBody &) = default ;
    GetImageDetectionTaskResultResponseBody(GetImageDetectionTaskResultResponseBody &&) = default ;
    GetImageDetectionTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDetectionTaskResultResponseBody() = default ;
    GetImageDetectionTaskResultResponseBody& operator=(const GetImageDetectionTaskResultResponseBody &) = default ;
    GetImageDetectionTaskResultResponseBody& operator=(GetImageDetectionTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tamper : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tamper& obj) { 
        DARABONBA_PTR_TO_JSON(BaseResults, baseResults_);
        DARABONBA_PTR_TO_JSON(LlmResult, llmResult_);
        DARABONBA_PTR_TO_JSON(RiskCode, riskCode_);
        DARABONBA_PTR_TO_JSON(RiskReasons, riskReasons_);
      };
      friend void from_json(const Darabonba::Json& j, Tamper& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseResults, baseResults_);
        DARABONBA_PTR_FROM_JSON(LlmResult, llmResult_);
        DARABONBA_PTR_FROM_JSON(RiskCode, riskCode_);
        DARABONBA_PTR_FROM_JSON(RiskReasons, riskReasons_);
      };
      Tamper() = default ;
      Tamper(const Tamper &) = default ;
      Tamper(Tamper &&) = default ;
      Tamper(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tamper() = default ;
      Tamper& operator=(const Tamper &) = default ;
      Tamper& operator=(Tamper &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BaseResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaseResults& obj) { 
          DARABONBA_PTR_TO_JSON(Aigc, aigc_);
          DARABONBA_PTR_TO_JSON(Aips, aips_);
          DARABONBA_PTR_TO_JSON(ImgType, imgType_);
          DARABONBA_PTR_TO_JSON(PsLoc, psLoc_);
        };
        friend void from_json(const Darabonba::Json& j, BaseResults& obj) { 
          DARABONBA_PTR_FROM_JSON(Aigc, aigc_);
          DARABONBA_PTR_FROM_JSON(Aips, aips_);
          DARABONBA_PTR_FROM_JSON(ImgType, imgType_);
          DARABONBA_PTR_FROM_JSON(PsLoc, psLoc_);
        };
        BaseResults() = default ;
        BaseResults(const BaseResults &) = default ;
        BaseResults(BaseResults &&) = default ;
        BaseResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaseResults() = default ;
        BaseResults& operator=(const BaseResults &) = default ;
        BaseResults& operator=(BaseResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PsLoc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PsLoc& obj) { 
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(Items, items_);
          };
          friend void from_json(const Darabonba::Json& j, PsLoc& obj) { 
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(Items, items_);
          };
          PsLoc() = default ;
          PsLoc(const PsLoc &) = default ;
          PsLoc(PsLoc &&) = default ;
          PsLoc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PsLoc() = default ;
          PsLoc& operator=(const PsLoc &) = default ;
          PsLoc& operator=(PsLoc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(Bbox, bbox_);
              DARABONBA_PTR_TO_JSON(Score, score_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(Bbox, bbox_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
            };
            Items() = default ;
            Items(const Items &) = default ;
            Items(Items &&) = default ;
            Items(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Items() = default ;
            Items& operator=(const Items &) = default ;
            Items& operator=(Items &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bbox_ == nullptr
        && this->score_ == nullptr; };
            // bbox Field Functions 
            bool hasBbox() const { return this->bbox_ != nullptr;};
            void deleteBbox() { this->bbox_ = nullptr;};
            inline const vector<float> & getBbox() const { DARABONBA_PTR_GET_CONST(bbox_, vector<float>) };
            inline vector<float> getBbox() { DARABONBA_PTR_GET(bbox_, vector<float>) };
            inline Items& setBbox(const vector<float> & bbox) { DARABONBA_PTR_SET_VALUE(bbox_, bbox) };
            inline Items& setBbox(vector<float> && bbox) { DARABONBA_PTR_SET_RVALUE(bbox_, bbox) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
            inline Items& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          protected:
            // The bounding box coordinates of the tampered region in the format `[x1, y1, x2, y2]`.
            shared_ptr<vector<float>> bbox_ {};
            // The tamper confidence level for the region. Value range: `0 to 1`.
            shared_ptr<float> score_ {};
          };

          virtual bool empty() const override { return this->desc_ == nullptr
        && this->items_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline PsLoc& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const vector<PsLoc::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<PsLoc::Items>) };
          inline vector<PsLoc::Items> getItems() { DARABONBA_PTR_GET(items_, vector<PsLoc::Items>) };
          inline PsLoc& setItems(const vector<PsLoc::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline PsLoc& setItems(vector<PsLoc::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        protected:
          // The description of the PS tamper localization result.
          shared_ptr<string> desc_ {};
          // The list of tampered regions.
          shared_ptr<vector<PsLoc::Items>> items_ {};
        };

        class Aips : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Aips& obj) { 
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(Score, score_);
          };
          friend void from_json(const Darabonba::Json& j, Aips& obj) { 
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
          };
          Aips() = default ;
          Aips(const Aips &) = default ;
          Aips(Aips &&) = default ;
          Aips(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Aips() = default ;
          Aips& operator=(const Aips &) = default ;
          Aips& operator=(Aips &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->score_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline Aips& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline Aips& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        protected:
          // The description of the AI post-processing detection result.
          shared_ptr<string> desc_ {};
          // The AI post-processing detection score. Value range: 0 to 1. A higher value indicates a greater likelihood of AI post-processing.
          shared_ptr<float> score_ {};
        };

        class Aigc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Aigc& obj) { 
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(Score, score_);
          };
          friend void from_json(const Darabonba::Json& j, Aigc& obj) { 
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
          };
          Aigc() = default ;
          Aigc(const Aigc &) = default ;
          Aigc(Aigc &&) = default ;
          Aigc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Aigc() = default ;
          Aigc& operator=(const Aigc &) = default ;
          Aigc& operator=(Aigc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->score_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline Aigc& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline Aigc& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        protected:
          // The description of the AIGC detection result.
          shared_ptr<string> desc_ {};
          // The AIGC detection score. Value range: 0 to 1. A higher value indicates a greater likelihood of AI generation.
          shared_ptr<float> score_ {};
        };

        virtual bool empty() const override { return this->aigc_ == nullptr
        && this->aips_ == nullptr && this->imgType_ == nullptr && this->psLoc_ == nullptr; };
        // aigc Field Functions 
        bool hasAigc() const { return this->aigc_ != nullptr;};
        void deleteAigc() { this->aigc_ = nullptr;};
        inline const BaseResults::Aigc & getAigc() const { DARABONBA_PTR_GET_CONST(aigc_, BaseResults::Aigc) };
        inline BaseResults::Aigc getAigc() { DARABONBA_PTR_GET(aigc_, BaseResults::Aigc) };
        inline BaseResults& setAigc(const BaseResults::Aigc & aigc) { DARABONBA_PTR_SET_VALUE(aigc_, aigc) };
        inline BaseResults& setAigc(BaseResults::Aigc && aigc) { DARABONBA_PTR_SET_RVALUE(aigc_, aigc) };


        // aips Field Functions 
        bool hasAips() const { return this->aips_ != nullptr;};
        void deleteAips() { this->aips_ = nullptr;};
        inline const BaseResults::Aips & getAips() const { DARABONBA_PTR_GET_CONST(aips_, BaseResults::Aips) };
        inline BaseResults::Aips getAips() { DARABONBA_PTR_GET(aips_, BaseResults::Aips) };
        inline BaseResults& setAips(const BaseResults::Aips & aips) { DARABONBA_PTR_SET_VALUE(aips_, aips) };
        inline BaseResults& setAips(BaseResults::Aips && aips) { DARABONBA_PTR_SET_RVALUE(aips_, aips) };


        // imgType Field Functions 
        bool hasImgType() const { return this->imgType_ != nullptr;};
        void deleteImgType() { this->imgType_ = nullptr;};
        inline string getImgType() const { DARABONBA_PTR_GET_DEFAULT(imgType_, "") };
        inline BaseResults& setImgType(string imgType) { DARABONBA_PTR_SET_VALUE(imgType_, imgType) };


        // psLoc Field Functions 
        bool hasPsLoc() const { return this->psLoc_ != nullptr;};
        void deletePsLoc() { this->psLoc_ = nullptr;};
        inline const BaseResults::PsLoc & getPsLoc() const { DARABONBA_PTR_GET_CONST(psLoc_, BaseResults::PsLoc) };
        inline BaseResults::PsLoc getPsLoc() { DARABONBA_PTR_GET(psLoc_, BaseResults::PsLoc) };
        inline BaseResults& setPsLoc(const BaseResults::PsLoc & psLoc) { DARABONBA_PTR_SET_VALUE(psLoc_, psLoc) };
        inline BaseResults& setPsLoc(BaseResults::PsLoc && psLoc) { DARABONBA_PTR_SET_RVALUE(psLoc_, psLoc) };


      protected:
        // The AIGC detection score.
        shared_ptr<BaseResults::Aigc> aigc_ {};
        // The AI post-processing detection score.
        shared_ptr<BaseResults::Aips> aips_ {};
        // The image type.
        shared_ptr<string> imgType_ {};
        // The PS tamper localization results.
        shared_ptr<BaseResults::PsLoc> psLoc_ {};
      };

      virtual bool empty() const override { return this->baseResults_ == nullptr
        && this->llmResult_ == nullptr && this->riskCode_ == nullptr && this->riskReasons_ == nullptr; };
      // baseResults Field Functions 
      bool hasBaseResults() const { return this->baseResults_ != nullptr;};
      void deleteBaseResults() { this->baseResults_ = nullptr;};
      inline const Tamper::BaseResults & getBaseResults() const { DARABONBA_PTR_GET_CONST(baseResults_, Tamper::BaseResults) };
      inline Tamper::BaseResults getBaseResults() { DARABONBA_PTR_GET(baseResults_, Tamper::BaseResults) };
      inline Tamper& setBaseResults(const Tamper::BaseResults & baseResults) { DARABONBA_PTR_SET_VALUE(baseResults_, baseResults) };
      inline Tamper& setBaseResults(Tamper::BaseResults && baseResults) { DARABONBA_PTR_SET_RVALUE(baseResults_, baseResults) };


      // llmResult Field Functions 
      bool hasLlmResult() const { return this->llmResult_ != nullptr;};
      void deleteLlmResult() { this->llmResult_ = nullptr;};
      inline string getLlmResult() const { DARABONBA_PTR_GET_DEFAULT(llmResult_, "") };
      inline Tamper& setLlmResult(string llmResult) { DARABONBA_PTR_SET_VALUE(llmResult_, llmResult) };


      // riskCode Field Functions 
      bool hasRiskCode() const { return this->riskCode_ != nullptr;};
      void deleteRiskCode() { this->riskCode_ = nullptr;};
      inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
      inline Tamper& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


      // riskReasons Field Functions 
      bool hasRiskReasons() const { return this->riskReasons_ != nullptr;};
      void deleteRiskReasons() { this->riskReasons_ = nullptr;};
      inline const vector<string> & getRiskReasons() const { DARABONBA_PTR_GET_CONST(riskReasons_, vector<string>) };
      inline vector<string> getRiskReasons() { DARABONBA_PTR_GET(riskReasons_, vector<string>) };
      inline Tamper& setRiskReasons(const vector<string> & riskReasons) { DARABONBA_PTR_SET_VALUE(riskReasons_, riskReasons) };
      inline Tamper& setRiskReasons(vector<string> && riskReasons) { DARABONBA_PTR_SET_RVALUE(riskReasons_, riskReasons) };


    protected:
      // The basic detection results, including detection scores across multiple dimensions.
      shared_ptr<Tamper::BaseResults> baseResults_ {};
      // The comprehensive analysis result from the large language model.
      shared_ptr<string> llmResult_ {};
      // The risk code. A value of `"0"` indicates no risk.
      shared_ptr<string> riskCode_ {};
      // The list of risk reasons. An empty array is returned when no risk is detected.
      shared_ptr<vector<string>> riskReasons_ {};
    };

    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Confidence, confidence_);
        DARABONBA_PTR_TO_JSON(Label, label_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->confidence_ == nullptr
        && this->label_ == nullptr; };
      // confidence Field Functions 
      bool hasConfidence() const { return this->confidence_ != nullptr;};
      void deleteConfidence() { this->confidence_ = nullptr;};
      inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
      inline Labels& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Labels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    protected:
      // The confidence level. Value range: 0 to 1.
      shared_ptr<float> confidence_ {};
      // The detection label. Valid values:
      // - ai_generated: AI-generated.
      // - non_ai_generated: not AI-generated.
      shared_ptr<string> label_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->detectMode_ == nullptr && this->httpStatusCode_ == nullptr && this->labels_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr && this->tamper_ == nullptr && this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageDetectionTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // detectMode Field Functions 
    bool hasDetectMode() const { return this->detectMode_ != nullptr;};
    void deleteDetectMode() { this->detectMode_ = nullptr;};
    inline string getDetectMode() const { DARABONBA_PTR_GET_DEFAULT(detectMode_, "") };
    inline GetImageDetectionTaskResultResponseBody& setDetectMode(string detectMode) { DARABONBA_PTR_SET_VALUE(detectMode_, detectMode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetImageDetectionTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<GetImageDetectionTaskResultResponseBody::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<GetImageDetectionTaskResultResponseBody::Labels>) };
    inline vector<GetImageDetectionTaskResultResponseBody::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<GetImageDetectionTaskResultResponseBody::Labels>) };
    inline GetImageDetectionTaskResultResponseBody& setLabels(const vector<GetImageDetectionTaskResultResponseBody::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetImageDetectionTaskResultResponseBody& setLabels(vector<GetImageDetectionTaskResultResponseBody::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageDetectionTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageDetectionTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageDetectionTaskResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageDetectionTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tamper Field Functions 
    bool hasTamper() const { return this->tamper_ != nullptr;};
    void deleteTamper() { this->tamper_ = nullptr;};
    inline const GetImageDetectionTaskResultResponseBody::Tamper & getTamper() const { DARABONBA_PTR_GET_CONST(tamper_, GetImageDetectionTaskResultResponseBody::Tamper) };
    inline GetImageDetectionTaskResultResponseBody::Tamper getTamper() { DARABONBA_PTR_GET(tamper_, GetImageDetectionTaskResultResponseBody::Tamper) };
    inline GetImageDetectionTaskResultResponseBody& setTamper(const GetImageDetectionTaskResultResponseBody::Tamper & tamper) { DARABONBA_PTR_SET_VALUE(tamper_, tamper) };
    inline GetImageDetectionTaskResultResponseBody& setTamper(GetImageDetectionTaskResultResponseBody::Tamper && tamper) { DARABONBA_PTR_SET_RVALUE(tamper_, tamper) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetImageDetectionTaskResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The business error code. The value `"OK"` is returned when the request succeeds.
    shared_ptr<string> code_ {};
    // The detection mode that was actually executed. Valid values:
    // - aigc: AIGC only.
    // - tamper: tamper detection.
    // 
    // This parameter is returned only when `Status` is `succeeded`.
    shared_ptr<string> detectMode_ {};
    // The HTTP status code. The value `200` is returned when the request succeeds.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of AIGC detection result labels. This parameter is returned only when `Status` is `succeeded` and the task includes AIGC detection.
    shared_ptr<vector<GetImageDetectionTaskResultResponseBody::Labels>> labels_ {};
    // The additional information. The value `"success"` is returned when the request succeeds. An error message is returned when the task fails. This parameter is returned only when `Status` is `failed`.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task status. Valid values:
    // - `pending`: waiting.
    // - `running`: in progress.
    // - `succeeded`: completed.
    // - `failed`: failed.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The tamper detection results. This parameter is returned only when `DetectType` is `tamper` or `auto` (and the image is identified as a credential-type image).
    shared_ptr<GetImageDetectionTaskResultResponseBody::Tamper> tamper_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
