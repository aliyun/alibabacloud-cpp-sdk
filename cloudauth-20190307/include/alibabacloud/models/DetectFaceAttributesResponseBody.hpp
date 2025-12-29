// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DetectFaceAttributesResponseBody() = default ;
    DetectFaceAttributesResponseBody(const DetectFaceAttributesResponseBody &) = default ;
    DetectFaceAttributesResponseBody(DetectFaceAttributesResponseBody &&) = default ;
    DetectFaceAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesResponseBody() = default ;
    DetectFaceAttributesResponseBody& operator=(const DetectFaceAttributesResponseBody &) = default ;
    DetectFaceAttributesResponseBody& operator=(DetectFaceAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FaceInfos, faceInfos_);
        DARABONBA_PTR_TO_JSON(ImgHeight, imgHeight_);
        DARABONBA_PTR_TO_JSON(ImgWidth, imgWidth_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceInfos, faceInfos_);
        DARABONBA_PTR_FROM_JSON(ImgHeight, imgHeight_);
        DARABONBA_PTR_FROM_JSON(ImgWidth, imgWidth_);
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
      class FaceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FaceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(FaceAttributesDetectInfo, faceAttributesDetectInfo_);
        };
        friend void from_json(const Darabonba::Json& j, FaceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(FaceAttributesDetectInfo, faceAttributesDetectInfo_);
        };
        FaceInfos() = default ;
        FaceInfos(const FaceInfos &) = default ;
        FaceInfos(FaceInfos &&) = default ;
        FaceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FaceInfos() = default ;
        FaceInfos& operator=(const FaceInfos &) = default ;
        FaceInfos& operator=(FaceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FaceAttributesDetectInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FaceAttributesDetectInfo& obj) { 
            DARABONBA_PTR_TO_JSON(FaceAttributes, faceAttributes_);
            DARABONBA_PTR_TO_JSON(FaceRect, faceRect_);
          };
          friend void from_json(const Darabonba::Json& j, FaceAttributesDetectInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(FaceAttributes, faceAttributes_);
            DARABONBA_PTR_FROM_JSON(FaceRect, faceRect_);
          };
          FaceAttributesDetectInfo() = default ;
          FaceAttributesDetectInfo(const FaceAttributesDetectInfo &) = default ;
          FaceAttributesDetectInfo(FaceAttributesDetectInfo &&) = default ;
          FaceAttributesDetectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FaceAttributesDetectInfo() = default ;
          FaceAttributesDetectInfo& operator=(const FaceAttributesDetectInfo &) = default ;
          FaceAttributesDetectInfo& operator=(FaceAttributesDetectInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FaceRect : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FaceRect& obj) { 
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(Left, left_);
              DARABONBA_PTR_TO_JSON(Top, top_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, FaceRect& obj) { 
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(Left, left_);
              DARABONBA_PTR_FROM_JSON(Top, top_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
            };
            FaceRect() = default ;
            FaceRect(const FaceRect &) = default ;
            FaceRect(FaceRect &&) = default ;
            FaceRect(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FaceRect() = default ;
            FaceRect& operator=(const FaceRect &) = default ;
            FaceRect& operator=(FaceRect &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->height_ == nullptr
        && this->left_ == nullptr && this->top_ == nullptr && this->width_ == nullptr; };
            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
            inline FaceRect& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // left Field Functions 
            bool hasLeft() const { return this->left_ != nullptr;};
            void deleteLeft() { this->left_ = nullptr;};
            inline int32_t getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0) };
            inline FaceRect& setLeft(int32_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


            // top Field Functions 
            bool hasTop() const { return this->top_ != nullptr;};
            void deleteTop() { this->top_ = nullptr;};
            inline int32_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
            inline FaceRect& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
            inline FaceRect& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            // Height of the face rectangle.
            shared_ptr<int32_t> height_ {};
            // Distance from the top-left corner of the face rectangle to the left edge of the original image, in pixels.
            shared_ptr<int32_t> left_ {};
            // Distance from the top-left corner of the face rectangle to the top edge of the original image, in pixels.
            shared_ptr<int32_t> top_ {};
            // Width of the face rectangle.
            shared_ptr<int32_t> width_ {};
          };

          class FaceAttributes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FaceAttributes& obj) { 
              DARABONBA_PTR_TO_JSON(Blur, blur_);
              DARABONBA_PTR_TO_JSON(Facequal, facequal_);
              DARABONBA_PTR_TO_JSON(Facetype, facetype_);
              DARABONBA_PTR_TO_JSON(Glasses, glasses_);
              DARABONBA_PTR_TO_JSON(Headpose, headpose_);
              DARABONBA_PTR_TO_JSON(Integrity, integrity_);
              DARABONBA_PTR_TO_JSON(Respirator, respirator_);
              DARABONBA_PTR_TO_JSON(Smiling, smiling_);
            };
            friend void from_json(const Darabonba::Json& j, FaceAttributes& obj) { 
              DARABONBA_PTR_FROM_JSON(Blur, blur_);
              DARABONBA_PTR_FROM_JSON(Facequal, facequal_);
              DARABONBA_PTR_FROM_JSON(Facetype, facetype_);
              DARABONBA_PTR_FROM_JSON(Glasses, glasses_);
              DARABONBA_PTR_FROM_JSON(Headpose, headpose_);
              DARABONBA_PTR_FROM_JSON(Integrity, integrity_);
              DARABONBA_PTR_FROM_JSON(Respirator, respirator_);
              DARABONBA_PTR_FROM_JSON(Smiling, smiling_);
            };
            FaceAttributes() = default ;
            FaceAttributes(const FaceAttributes &) = default ;
            FaceAttributes(FaceAttributes &&) = default ;
            FaceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FaceAttributes() = default ;
            FaceAttributes& operator=(const FaceAttributes &) = default ;
            FaceAttributes& operator=(FaceAttributes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Smiling : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Smiling& obj) { 
                DARABONBA_PTR_TO_JSON(Threshold, threshold_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Smiling& obj) { 
                DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              Smiling() = default ;
              Smiling(const Smiling &) = default ;
              Smiling(Smiling &&) = default ;
              Smiling(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Smiling() = default ;
              Smiling& operator=(const Smiling &) = default ;
              Smiling& operator=(Smiling &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->threshold_ == nullptr
        && this->value_ == nullptr; };
              // threshold Field Functions 
              bool hasThreshold() const { return this->threshold_ != nullptr;};
              void deleteThreshold() { this->threshold_ = nullptr;};
              inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
              inline Smiling& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
              inline Smiling& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // Smile threshold.
              shared_ptr<float> threshold_ {};
              // Smile score.
              shared_ptr<float> value_ {};
            };

            class Headpose : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Headpose& obj) { 
                DARABONBA_PTR_TO_JSON(PitchAngle, pitchAngle_);
                DARABONBA_PTR_TO_JSON(RollAngle, rollAngle_);
                DARABONBA_PTR_TO_JSON(YawAngle, yawAngle_);
              };
              friend void from_json(const Darabonba::Json& j, Headpose& obj) { 
                DARABONBA_PTR_FROM_JSON(PitchAngle, pitchAngle_);
                DARABONBA_PTR_FROM_JSON(RollAngle, rollAngle_);
                DARABONBA_PTR_FROM_JSON(YawAngle, yawAngle_);
              };
              Headpose() = default ;
              Headpose(const Headpose &) = default ;
              Headpose(Headpose &&) = default ;
              Headpose(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Headpose() = default ;
              Headpose& operator=(const Headpose &) = default ;
              Headpose& operator=(Headpose &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->pitchAngle_ == nullptr
        && this->rollAngle_ == nullptr && this->yawAngle_ == nullptr; };
              // pitchAngle Field Functions 
              bool hasPitchAngle() const { return this->pitchAngle_ != nullptr;};
              void deletePitchAngle() { this->pitchAngle_ = nullptr;};
              inline float getPitchAngle() const { DARABONBA_PTR_GET_DEFAULT(pitchAngle_, 0.0) };
              inline Headpose& setPitchAngle(float pitchAngle) { DARABONBA_PTR_SET_VALUE(pitchAngle_, pitchAngle) };


              // rollAngle Field Functions 
              bool hasRollAngle() const { return this->rollAngle_ != nullptr;};
              void deleteRollAngle() { this->rollAngle_ = nullptr;};
              inline float getRollAngle() const { DARABONBA_PTR_GET_DEFAULT(rollAngle_, 0.0) };
              inline Headpose& setRollAngle(float rollAngle) { DARABONBA_PTR_SET_VALUE(rollAngle_, rollAngle) };


              // yawAngle Field Functions 
              bool hasYawAngle() const { return this->yawAngle_ != nullptr;};
              void deleteYawAngle() { this->yawAngle_ = nullptr;};
              inline float getYawAngle() const { DARABONBA_PTR_GET_DEFAULT(yawAngle_, 0.0) };
              inline Headpose& setYawAngle(float yawAngle) { DARABONBA_PTR_SET_VALUE(yawAngle_, yawAngle) };


            protected:
              // Pitch angle, in degrees.
              shared_ptr<float> pitchAngle_ {};
              // Roll angle, in degrees.
              shared_ptr<float> rollAngle_ {};
              // Yaw angle, in degrees.
              shared_ptr<float> yawAngle_ {};
            };

            virtual bool empty() const override { return this->blur_ == nullptr
        && this->facequal_ == nullptr && this->facetype_ == nullptr && this->glasses_ == nullptr && this->headpose_ == nullptr && this->integrity_ == nullptr
        && this->respirator_ == nullptr && this->smiling_ == nullptr; };
            // blur Field Functions 
            bool hasBlur() const { return this->blur_ != nullptr;};
            void deleteBlur() { this->blur_ = nullptr;};
            inline float getBlur() const { DARABONBA_PTR_GET_DEFAULT(blur_, 0.0) };
            inline FaceAttributes& setBlur(float blur) { DARABONBA_PTR_SET_VALUE(blur_, blur) };


            // facequal Field Functions 
            bool hasFacequal() const { return this->facequal_ != nullptr;};
            void deleteFacequal() { this->facequal_ = nullptr;};
            inline float getFacequal() const { DARABONBA_PTR_GET_DEFAULT(facequal_, 0.0) };
            inline FaceAttributes& setFacequal(float facequal) { DARABONBA_PTR_SET_VALUE(facequal_, facequal) };


            // facetype Field Functions 
            bool hasFacetype() const { return this->facetype_ != nullptr;};
            void deleteFacetype() { this->facetype_ = nullptr;};
            inline string getFacetype() const { DARABONBA_PTR_GET_DEFAULT(facetype_, "") };
            inline FaceAttributes& setFacetype(string facetype) { DARABONBA_PTR_SET_VALUE(facetype_, facetype) };


            // glasses Field Functions 
            bool hasGlasses() const { return this->glasses_ != nullptr;};
            void deleteGlasses() { this->glasses_ = nullptr;};
            inline string getGlasses() const { DARABONBA_PTR_GET_DEFAULT(glasses_, "") };
            inline FaceAttributes& setGlasses(string glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };


            // headpose Field Functions 
            bool hasHeadpose() const { return this->headpose_ != nullptr;};
            void deleteHeadpose() { this->headpose_ = nullptr;};
            inline const FaceAttributes::Headpose & getHeadpose() const { DARABONBA_PTR_GET_CONST(headpose_, FaceAttributes::Headpose) };
            inline FaceAttributes::Headpose getHeadpose() { DARABONBA_PTR_GET(headpose_, FaceAttributes::Headpose) };
            inline FaceAttributes& setHeadpose(const FaceAttributes::Headpose & headpose) { DARABONBA_PTR_SET_VALUE(headpose_, headpose) };
            inline FaceAttributes& setHeadpose(FaceAttributes::Headpose && headpose) { DARABONBA_PTR_SET_RVALUE(headpose_, headpose) };


            // integrity Field Functions 
            bool hasIntegrity() const { return this->integrity_ != nullptr;};
            void deleteIntegrity() { this->integrity_ = nullptr;};
            inline int32_t getIntegrity() const { DARABONBA_PTR_GET_DEFAULT(integrity_, 0) };
            inline FaceAttributes& setIntegrity(int32_t integrity) { DARABONBA_PTR_SET_VALUE(integrity_, integrity) };


            // respirator Field Functions 
            bool hasRespirator() const { return this->respirator_ != nullptr;};
            void deleteRespirator() { this->respirator_ = nullptr;};
            inline string getRespirator() const { DARABONBA_PTR_GET_DEFAULT(respirator_, "") };
            inline FaceAttributes& setRespirator(string respirator) { DARABONBA_PTR_SET_VALUE(respirator_, respirator) };


            // smiling Field Functions 
            bool hasSmiling() const { return this->smiling_ != nullptr;};
            void deleteSmiling() { this->smiling_ = nullptr;};
            inline const FaceAttributes::Smiling & getSmiling() const { DARABONBA_PTR_GET_CONST(smiling_, FaceAttributes::Smiling) };
            inline FaceAttributes::Smiling getSmiling() { DARABONBA_PTR_GET(smiling_, FaceAttributes::Smiling) };
            inline FaceAttributes& setSmiling(const FaceAttributes::Smiling & smiling) { DARABONBA_PTR_SET_VALUE(smiling_, smiling) };
            inline FaceAttributes& setSmiling(FaceAttributes::Smiling && smiling) { DARABONBA_PTR_SET_RVALUE(smiling_, smiling) };


          protected:
            // Face blur level, with higher values indicating more blurriness. Typically, a value ≥2.0 is considered quite blurry. It is recommended to adjust based on actual business data testing.
            shared_ptr<float> blur_ {};
            // A score ranging from 0 to 100. The higher the score, the better the quality. It is recommended to consider a score of 50 or above as acceptable quality.
            shared_ptr<float> facequal_ {};
            // Whether it is a human face. Values:
            // 
            // - **None**: Not a human face
            // - **Face**: Human face
            // - **Profile**: Profile (head turned left or right by more than 30°)
            // 
            // > If no face is detected, the `faceInfos` in the response will be empty; here, `None` means that a face was detected but is considered to be a cartoon, pet, etc.
            shared_ptr<string> facetype_ {};
            // Whether wearing glasses. Values:
            // 
            // - **None**: Not wearing glasses
            // - **Wear**: Wearing regular glasses
            // - **Sunglass**: Wearing sunglasses
            shared_ptr<string> glasses_ {};
            // Face pose.
            shared_ptr<FaceAttributes::Headpose> headpose_ {};
            // A score ranging from 0 to 100. The higher the score, the more complete the face. It is recommended to consider a score of 70 or above as acceptable completeness.
            shared_ptr<int32_t> integrity_ {};
            // Whether wearing a mask. Values:
            // 
            // - Wear: Wearing a mask.
            // - None: Not wearing a mask.
            shared_ptr<string> respirator_ {};
            // Whether smiling.
            shared_ptr<FaceAttributes::Smiling> smiling_ {};
          };

          virtual bool empty() const override { return this->faceAttributes_ == nullptr
        && this->faceRect_ == nullptr; };
          // faceAttributes Field Functions 
          bool hasFaceAttributes() const { return this->faceAttributes_ != nullptr;};
          void deleteFaceAttributes() { this->faceAttributes_ = nullptr;};
          inline const FaceAttributesDetectInfo::FaceAttributes & getFaceAttributes() const { DARABONBA_PTR_GET_CONST(faceAttributes_, FaceAttributesDetectInfo::FaceAttributes) };
          inline FaceAttributesDetectInfo::FaceAttributes getFaceAttributes() { DARABONBA_PTR_GET(faceAttributes_, FaceAttributesDetectInfo::FaceAttributes) };
          inline FaceAttributesDetectInfo& setFaceAttributes(const FaceAttributesDetectInfo::FaceAttributes & faceAttributes) { DARABONBA_PTR_SET_VALUE(faceAttributes_, faceAttributes) };
          inline FaceAttributesDetectInfo& setFaceAttributes(FaceAttributesDetectInfo::FaceAttributes && faceAttributes) { DARABONBA_PTR_SET_RVALUE(faceAttributes_, faceAttributes) };


          // faceRect Field Functions 
          bool hasFaceRect() const { return this->faceRect_ != nullptr;};
          void deleteFaceRect() { this->faceRect_ = nullptr;};
          inline const FaceAttributesDetectInfo::FaceRect & getFaceRect() const { DARABONBA_PTR_GET_CONST(faceRect_, FaceAttributesDetectInfo::FaceRect) };
          inline FaceAttributesDetectInfo::FaceRect getFaceRect() { DARABONBA_PTR_GET(faceRect_, FaceAttributesDetectInfo::FaceRect) };
          inline FaceAttributesDetectInfo& setFaceRect(const FaceAttributesDetectInfo::FaceRect & faceRect) { DARABONBA_PTR_SET_VALUE(faceRect_, faceRect) };
          inline FaceAttributesDetectInfo& setFaceRect(FaceAttributesDetectInfo::FaceRect && faceRect) { DARABONBA_PTR_SET_RVALUE(faceRect_, faceRect) };


        protected:
          // Face attributes.
          shared_ptr<FaceAttributesDetectInfo::FaceAttributes> faceAttributes_ {};
          // Position of the face in the original image.
          shared_ptr<FaceAttributesDetectInfo::FaceRect> faceRect_ {};
        };

        virtual bool empty() const override { return this->faceAttributesDetectInfo_ == nullptr; };
        // faceAttributesDetectInfo Field Functions 
        bool hasFaceAttributesDetectInfo() const { return this->faceAttributesDetectInfo_ != nullptr;};
        void deleteFaceAttributesDetectInfo() { this->faceAttributesDetectInfo_ = nullptr;};
        inline const vector<FaceInfos::FaceAttributesDetectInfo> & getFaceAttributesDetectInfo() const { DARABONBA_PTR_GET_CONST(faceAttributesDetectInfo_, vector<FaceInfos::FaceAttributesDetectInfo>) };
        inline vector<FaceInfos::FaceAttributesDetectInfo> getFaceAttributesDetectInfo() { DARABONBA_PTR_GET(faceAttributesDetectInfo_, vector<FaceInfos::FaceAttributesDetectInfo>) };
        inline FaceInfos& setFaceAttributesDetectInfo(const vector<FaceInfos::FaceAttributesDetectInfo> & faceAttributesDetectInfo) { DARABONBA_PTR_SET_VALUE(faceAttributesDetectInfo_, faceAttributesDetectInfo) };
        inline FaceInfos& setFaceAttributesDetectInfo(vector<FaceInfos::FaceAttributesDetectInfo> && faceAttributesDetectInfo) { DARABONBA_PTR_SET_RVALUE(faceAttributesDetectInfo_, faceAttributesDetectInfo) };


      protected:
        shared_ptr<vector<FaceInfos::FaceAttributesDetectInfo>> faceAttributesDetectInfo_ {};
      };

      virtual bool empty() const override { return this->faceInfos_ == nullptr
        && this->imgHeight_ == nullptr && this->imgWidth_ == nullptr; };
      // faceInfos Field Functions 
      bool hasFaceInfos() const { return this->faceInfos_ != nullptr;};
      void deleteFaceInfos() { this->faceInfos_ = nullptr;};
      inline const Data::FaceInfos & getFaceInfos() const { DARABONBA_PTR_GET_CONST(faceInfos_, Data::FaceInfos) };
      inline Data::FaceInfos getFaceInfos() { DARABONBA_PTR_GET(faceInfos_, Data::FaceInfos) };
      inline Data& setFaceInfos(const Data::FaceInfos & faceInfos) { DARABONBA_PTR_SET_VALUE(faceInfos_, faceInfos) };
      inline Data& setFaceInfos(Data::FaceInfos && faceInfos) { DARABONBA_PTR_SET_RVALUE(faceInfos_, faceInfos) };


      // imgHeight Field Functions 
      bool hasImgHeight() const { return this->imgHeight_ != nullptr;};
      void deleteImgHeight() { this->imgHeight_ = nullptr;};
      inline int32_t getImgHeight() const { DARABONBA_PTR_GET_DEFAULT(imgHeight_, 0) };
      inline Data& setImgHeight(int32_t imgHeight) { DARABONBA_PTR_SET_VALUE(imgHeight_, imgHeight) };


      // imgWidth Field Functions 
      bool hasImgWidth() const { return this->imgWidth_ != nullptr;};
      void deleteImgWidth() { this->imgWidth_ = nullptr;};
      inline int32_t getImgWidth() const { DARABONBA_PTR_GET_DEFAULT(imgWidth_, 0) };
      inline Data& setImgWidth(int32_t imgWidth) { DARABONBA_PTR_SET_VALUE(imgWidth_, imgWidth) };


    protected:
      // Face detection results.
      shared_ptr<Data::FaceInfos> faceInfos_ {};
      // Original image height, in pixels.
      shared_ptr<int32_t> imgHeight_ {};
      // Original image width, in pixels.
      shared_ptr<int32_t> imgWidth_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DetectFaceAttributesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DetectFaceAttributesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DetectFaceAttributesResponseBody::Data) };
    inline DetectFaceAttributesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DetectFaceAttributesResponseBody::Data) };
    inline DetectFaceAttributesResponseBody& setData(const DetectFaceAttributesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetectFaceAttributesResponseBody& setData(DetectFaceAttributesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetectFaceAttributesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectFaceAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DetectFaceAttributesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code.
    shared_ptr<string> code_ {};
    // Returned data.
    shared_ptr<DetectFaceAttributesResponseBody::Data> data_ {};
    // Error code.
    shared_ptr<string> message_ {};
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Whether the response was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
