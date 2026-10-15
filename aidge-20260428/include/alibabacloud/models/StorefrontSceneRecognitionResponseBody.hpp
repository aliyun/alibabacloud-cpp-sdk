// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOREFRONTSCENERECOGNITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOREFRONTSCENERECOGNITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class StorefrontSceneRecognitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorefrontSceneRecognitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StorefrontSceneRecognitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StorefrontSceneRecognitionResponseBody() = default ;
    StorefrontSceneRecognitionResponseBody(const StorefrontSceneRecognitionResponseBody &) = default ;
    StorefrontSceneRecognitionResponseBody(StorefrontSceneRecognitionResponseBody &&) = default ;
    StorefrontSceneRecognitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorefrontSceneRecognitionResponseBody() = default ;
    StorefrontSceneRecognitionResponseBody& operator=(const StorefrontSceneRecognitionResponseBody &) = default ;
    StorefrontSceneRecognitionResponseBody& operator=(StorefrontSceneRecognitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Details, details_);
          DARABONBA_PTR_TO_JSON(Grounding, grounding_);
          DARABONBA_PTR_TO_JSON(Scenes, scenes_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Details, details_);
          DARABONBA_PTR_FROM_JSON(Grounding, grounding_);
          DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
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
        class Grounding : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Grounding& obj) { 
            DARABONBA_PTR_TO_JSON(Coverage, coverage_);
            DARABONBA_PTR_TO_JSON(Regions, regions_);
          };
          friend void from_json(const Darabonba::Json& j, Grounding& obj) { 
            DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
            DARABONBA_PTR_FROM_JSON(Regions, regions_);
          };
          Grounding() = default ;
          Grounding(const Grounding &) = default ;
          Grounding(Grounding &&) = default ;
          Grounding(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Grounding() = default ;
          Grounding& operator=(const Grounding &) = default ;
          Grounding& operator=(Grounding &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Regions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Regions& obj) { 
              DARABONBA_PTR_TO_JSON(Bbox2d, bbox2d_);
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Regions& obj) { 
              DARABONBA_PTR_FROM_JSON(Bbox2d, bbox2d_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Text, text_);
            };
            Regions() = default ;
            Regions(const Regions &) = default ;
            Regions(Regions &&) = default ;
            Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Regions() = default ;
            Regions& operator=(const Regions &) = default ;
            Regions& operator=(Regions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bbox2d_ == nullptr
        && this->label_ == nullptr && this->text_ == nullptr; };
            // bbox2d Field Functions 
            bool hasBbox2d() const { return this->bbox2d_ != nullptr;};
            void deleteBbox2d() { this->bbox2d_ = nullptr;};
            inline const vector<float> & getBbox2d() const { DARABONBA_PTR_GET_CONST(bbox2d_, vector<float>) };
            inline vector<float> getBbox2d() { DARABONBA_PTR_GET(bbox2d_, vector<float>) };
            inline Regions& setBbox2d(const vector<float> & bbox2d) { DARABONBA_PTR_SET_VALUE(bbox2d_, bbox2d) };
            inline Regions& setBbox2d(vector<float> && bbox2d) { DARABONBA_PTR_SET_RVALUE(bbox2d_, bbox2d) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline Regions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Regions& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          protected:
            // The bounding box coordinates.
            shared_ptr<vector<float>> bbox2d_ {};
            // The label.
            shared_ptr<string> label_ {};
            // The recognized text.
            shared_ptr<string> text_ {};
          };

          virtual bool empty() const override { return this->coverage_ == nullptr
        && this->regions_ == nullptr; };
          // coverage Field Functions 
          bool hasCoverage() const { return this->coverage_ != nullptr;};
          void deleteCoverage() { this->coverage_ = nullptr;};
          inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
          inline Grounding& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


          // regions Field Functions 
          bool hasRegions() const { return this->regions_ != nullptr;};
          void deleteRegions() { this->regions_ = nullptr;};
          inline const vector<Grounding::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Grounding::Regions>) };
          inline vector<Grounding::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<Grounding::Regions>) };
          inline Grounding& setRegions(const vector<Grounding::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
          inline Grounding& setRegions(vector<Grounding::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


        protected:
          // The coverage.
          shared_ptr<string> coverage_ {};
          // The region list.
          shared_ptr<vector<Grounding::Regions>> regions_ {};
        };

        class Details : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Details& obj) { 
            DARABONBA_PTR_TO_JSON(Clazz, clazz_);
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          };
          friend void from_json(const Darabonba::Json& j, Details& obj) { 
            DARABONBA_PTR_FROM_JSON(Clazz, clazz_);
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
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
          virtual bool empty() const override { return this->clazz_ == nullptr
        && this->confidence_ == nullptr; };
          // clazz Field Functions 
          bool hasClazz() const { return this->clazz_ != nullptr;};
          void deleteClazz() { this->clazz_ = nullptr;};
          inline string getClazz() const { DARABONBA_PTR_GET_DEFAULT(clazz_, "") };
          inline Details& setClazz(string clazz) { DARABONBA_PTR_SET_VALUE(clazz_, clazz) };


          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Details& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        protected:
          // The non-empty category name.
          shared_ptr<string> clazz_ {};
          // A finite numerical value. The source document does not specify a value range.
          shared_ptr<float> confidence_ {};
        };

        virtual bool empty() const override { return this->details_ == nullptr
        && this->grounding_ == nullptr && this->scenes_ == nullptr; };
        // details Field Functions 
        bool hasDetails() const { return this->details_ != nullptr;};
        void deleteDetails() { this->details_ = nullptr;};
        inline const vector<Result::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Result::Details>) };
        inline vector<Result::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Result::Details>) };
        inline Result& setDetails(const vector<Result::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
        inline Result& setDetails(vector<Result::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


        // grounding Field Functions 
        bool hasGrounding() const { return this->grounding_ != nullptr;};
        void deleteGrounding() { this->grounding_ = nullptr;};
        inline const Result::Grounding & getGrounding() const { DARABONBA_PTR_GET_CONST(grounding_, Result::Grounding) };
        inline Result::Grounding getGrounding() { DARABONBA_PTR_GET(grounding_, Result::Grounding) };
        inline Result& setGrounding(const Result::Grounding & grounding) { DARABONBA_PTR_SET_VALUE(grounding_, grounding) };
        inline Result& setGrounding(Result::Grounding && grounding) { DARABONBA_PTR_SET_RVALUE(grounding_, grounding) };


        // scenes Field Functions 
        bool hasScenes() const { return this->scenes_ != nullptr;};
        void deleteScenes() { this->scenes_ = nullptr;};
        inline const vector<string> & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<string>) };
        inline vector<string> getScenes() { DARABONBA_PTR_GET(scenes_, vector<string>) };
        inline Result& setScenes(const vector<string> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
        inline Result& setScenes(vector<string> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


      protected:
        // The classification details. This can be an empty array.
        shared_ptr<vector<Result::Details>> details_ {};
        // The localization information.
        shared_ptr<Result::Grounding> grounding_ {};
        // The non-empty scene classification array.
        shared_ptr<vector<string>> scenes_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr
        && this->usageMap_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The scene recognition result details.
      shared_ptr<Data::Result> result_ {};
      // The usage information.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StorefrontSceneRecognitionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StorefrontSceneRecognitionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, StorefrontSceneRecognitionResponseBody::Data) };
    inline StorefrontSceneRecognitionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, StorefrontSceneRecognitionResponseBody::Data) };
    inline StorefrontSceneRecognitionResponseBody& setData(const StorefrontSceneRecognitionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StorefrontSceneRecognitionResponseBody& setData(StorefrontSceneRecognitionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StorefrontSceneRecognitionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StorefrontSceneRecognitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StorefrontSceneRecognitionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The scene recognition result.
    shared_ptr<StorefrontSceneRecognitionResponseBody::Data> data_ {};
    // The returned message or failure description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
