// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MILKPOWDERCARTONCODEREPHOTOGRAPHYDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MILKPOWDERCARTONCODEREPHOTOGRAPHYDETECTIONRESPONSEBODY_HPP_
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
  class MilkPowderCartonCodeRephotographyDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MilkPowderCartonCodeRephotographyDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MilkPowderCartonCodeRephotographyDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MilkPowderCartonCodeRephotographyDetectionResponseBody() = default ;
    MilkPowderCartonCodeRephotographyDetectionResponseBody(const MilkPowderCartonCodeRephotographyDetectionResponseBody &) = default ;
    MilkPowderCartonCodeRephotographyDetectionResponseBody(MilkPowderCartonCodeRephotographyDetectionResponseBody &&) = default ;
    MilkPowderCartonCodeRephotographyDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MilkPowderCartonCodeRephotographyDetectionResponseBody() = default ;
    MilkPowderCartonCodeRephotographyDetectionResponseBody& operator=(const MilkPowderCartonCodeRephotographyDetectionResponseBody &) = default ;
    MilkPowderCartonCodeRephotographyDetectionResponseBody& operator=(MilkPowderCartonCodeRephotographyDetectionResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Grounding, grounding_);
          DARABONBA_PTR_TO_JSON(IsFake, isFake_);
          DARABONBA_PTR_TO_JSON(IsSuspect, isSuspect_);
          DARABONBA_PTR_TO_JSON(PhotoStatus, photoStatus_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Grounding, grounding_);
          DARABONBA_PTR_FROM_JSON(IsFake, isFake_);
          DARABONBA_PTR_FROM_JSON(IsSuspect, isSuspect_);
          DARABONBA_PTR_FROM_JSON(PhotoStatus, photoStatus_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
            // The coordinates of the bounding box in the `[top-left x, top-left y, bottom-right x, bottom-right y]` format. The value range is 0 to 1000. The left value must be less than the right value, and the top value must be less than the bottom value.
            shared_ptr<vector<float>> bbox2d_ {};
            // The category of the target. For enumerated values, see the following table.
            shared_ptr<string> label_ {};
            // The confirmed short name or text, which contains up to 24 characters. This field is an empty string if the text is unclear.
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
          // The coverage of the grounding. Valid values:
          // - `complete`: The relevant visible targets are complete.
          // - `partial`: Only some targets are valid or recognizable.
          shared_ptr<string> coverage_ {};
          // The array of targets, which contains up to 12 items. This array can be empty if no relevant targets are found.
          shared_ptr<vector<Grounding::Regions>> regions_ {};
        };

        virtual bool empty() const override { return this->grounding_ == nullptr
        && this->isFake_ == nullptr && this->isSuspect_ == nullptr && this->photoStatus_ == nullptr && this->score_ == nullptr && this->type_ == nullptr; };
        // grounding Field Functions 
        bool hasGrounding() const { return this->grounding_ != nullptr;};
        void deleteGrounding() { this->grounding_ = nullptr;};
        inline const Result::Grounding & getGrounding() const { DARABONBA_PTR_GET_CONST(grounding_, Result::Grounding) };
        inline Result::Grounding getGrounding() { DARABONBA_PTR_GET(grounding_, Result::Grounding) };
        inline Result& setGrounding(const Result::Grounding & grounding) { DARABONBA_PTR_SET_VALUE(grounding_, grounding) };
        inline Result& setGrounding(Result::Grounding && grounding) { DARABONBA_PTR_SET_RVALUE(grounding_, grounding) };


        // isFake Field Functions 
        bool hasIsFake() const { return this->isFake_ != nullptr;};
        void deleteIsFake() { this->isFake_ = nullptr;};
        inline bool getIsFake() const { DARABONBA_PTR_GET_DEFAULT(isFake_, false) };
        inline Result& setIsFake(bool isFake) { DARABONBA_PTR_SET_VALUE(isFake_, isFake) };


        // isSuspect Field Functions 
        bool hasIsSuspect() const { return this->isSuspect_ != nullptr;};
        void deleteIsSuspect() { this->isSuspect_ = nullptr;};
        inline bool getIsSuspect() const { DARABONBA_PTR_GET_DEFAULT(isSuspect_, false) };
        inline Result& setIsSuspect(bool isSuspect) { DARABONBA_PTR_SET_VALUE(isSuspect_, isSuspect) };


        // photoStatus Field Functions 
        bool hasPhotoStatus() const { return this->photoStatus_ != nullptr;};
        void deletePhotoStatus() { this->photoStatus_ = nullptr;};
        inline int32_t getPhotoStatus() const { DARABONBA_PTR_GET_DEFAULT(photoStatus_, 0) };
        inline Result& setPhotoStatus(int32_t photoStatus) { DARABONBA_PTR_SET_VALUE(photoStatus_, photoStatus) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Result& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The supplementary element grounding results.
        shared_ptr<Result::Grounding> grounding_ {};
        // Indicates whether the image is recaptured.
        shared_ptr<bool> isFake_ {};
        // Indicates whether the image is suspected to be recaptured.
        shared_ptr<bool> isSuspect_ {};
        // The recapture status. Valid values:
        // - `0`: Non-recapture.
        // - `1`: Recapture.
        // - `2`: Suspected recapture.
        shared_ptr<int32_t> photoStatus_ {};
        // The confidence score for recapture detection.
        shared_ptr<float> score_ {};
        // The detection type. The value is fixed to `boxCode`.
        shared_ptr<string> type_ {};
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
      // The details of the recapture detection result.
      shared_ptr<Data::Result> result_ {};
      // The usage information. The value is `{"ProcessingCount":1}` if the call is successful, or an empty object if the call fails.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MilkPowderCartonCodeRephotographyDetectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MilkPowderCartonCodeRephotographyDetectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MilkPowderCartonCodeRephotographyDetectionResponseBody::Data) };
    inline MilkPowderCartonCodeRephotographyDetectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MilkPowderCartonCodeRephotographyDetectionResponseBody::Data) };
    inline MilkPowderCartonCodeRephotographyDetectionResponseBody& setData(const MilkPowderCartonCodeRephotographyDetectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MilkPowderCartonCodeRephotographyDetectionResponseBody& setData(MilkPowderCartonCodeRephotographyDetectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MilkPowderCartonCodeRephotographyDetectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MilkPowderCartonCodeRephotographyDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MilkPowderCartonCodeRephotographyDetectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The recapture detection result.
    shared_ptr<MilkPowderCartonCodeRephotographyDetectionResponseBody::Data> data_ {};
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
