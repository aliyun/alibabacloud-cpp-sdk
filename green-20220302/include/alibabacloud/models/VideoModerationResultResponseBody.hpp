// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VideoModerationResultResponseBody() = default ;
    VideoModerationResultResponseBody(const VideoModerationResultResponseBody &) = default ;
    VideoModerationResultResponseBody(VideoModerationResultResponseBody &&) = default ;
    VideoModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBody() = default ;
    VideoModerationResultResponseBody& operator=(const VideoModerationResultResponseBody &) = default ;
    VideoModerationResultResponseBody& operator=(VideoModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioResult, audioResult_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(FrameResult, frameResult_);
        DARABONBA_PTR_TO_JSON(LiveId, liveId_);
        DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioResult, audioResult_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(FrameResult, frameResult_);
        DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
        DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class FrameResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FrameResult& obj) { 
          DARABONBA_PTR_TO_JSON(FrameNum, frameNum_);
          DARABONBA_PTR_TO_JSON(FrameSummarys, frameSummarys_);
          DARABONBA_PTR_TO_JSON(Frames, frames_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, FrameResult& obj) { 
          DARABONBA_PTR_FROM_JSON(FrameNum, frameNum_);
          DARABONBA_PTR_FROM_JSON(FrameSummarys, frameSummarys_);
          DARABONBA_PTR_FROM_JSON(Frames, frames_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        FrameResult() = default ;
        FrameResult(const FrameResult &) = default ;
        FrameResult(FrameResult &&) = default ;
        FrameResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FrameResult() = default ;
        FrameResult& operator=(const FrameResult &) = default ;
        FrameResult& operator=(FrameResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Frames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Frames& obj) { 
            DARABONBA_PTR_TO_JSON(Offset, offset_);
            DARABONBA_PTR_TO_JSON(Results, results_);
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_TO_JSON(TempUrl, tempUrl_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, Frames& obj) { 
            DARABONBA_PTR_FROM_JSON(Offset, offset_);
            DARABONBA_PTR_FROM_JSON(Results, results_);
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_FROM_JSON(TempUrl, tempUrl_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
          class Results : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Results& obj) { 
              DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
              DARABONBA_PTR_TO_JSON(LogoData, logoData_);
              DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
              DARABONBA_PTR_TO_JSON(Result, result_);
              DARABONBA_PTR_TO_JSON(Service, service_);
              DARABONBA_ANY_TO_JSON(TextInImage, textInImage_);
            };
            friend void from_json(const Darabonba::Json& j, Results& obj) { 
              DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
              DARABONBA_PTR_FROM_JSON(LogoData, logoData_);
              DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
              DARABONBA_PTR_FROM_JSON(Result, result_);
              DARABONBA_PTR_FROM_JSON(Service, service_);
              DARABONBA_ANY_FROM_JSON(TextInImage, textInImage_);
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
            class Result : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Result& obj) { 
                DARABONBA_PTR_TO_JSON(Confidence, confidence_);
                DARABONBA_PTR_TO_JSON(Description, description_);
                DARABONBA_PTR_TO_JSON(Label, label_);
              };
              friend void from_json(const Darabonba::Json& j, Result& obj) { 
                DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
                DARABONBA_PTR_FROM_JSON(Description, description_);
                DARABONBA_PTR_FROM_JSON(Label, label_);
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
              virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
              // confidence Field Functions 
              bool hasConfidence() const { return this->confidence_ != nullptr;};
              void deleteConfidence() { this->confidence_ = nullptr;};
              inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
              inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


              // description Field Functions 
              bool hasDescription() const { return this->description_ != nullptr;};
              void deleteDescription() { this->description_ = nullptr;};
              inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
              inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


              // label Field Functions 
              bool hasLabel() const { return this->label_ != nullptr;};
              void deleteLabel() { this->label_ = nullptr;};
              inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
              inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            protected:
              // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places.
              shared_ptr<float> confidence_ {};
              // The description of the result.
              shared_ptr<string> description_ {};
              // The label returned after a frame is moderated. Multiple risk labels and the corresponding scores of confidence levels may be returned for a frame.
              shared_ptr<string> label_ {};
            };

            class PublicFigure : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PublicFigure& obj) { 
                DARABONBA_PTR_TO_JSON(FigureId, figureId_);
                DARABONBA_PTR_TO_JSON(FigureName, figureName_);
                DARABONBA_PTR_TO_JSON(Location, location_);
              };
              friend void from_json(const Darabonba::Json& j, PublicFigure& obj) { 
                DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
                DARABONBA_PTR_FROM_JSON(FigureName, figureName_);
                DARABONBA_PTR_FROM_JSON(Location, location_);
              };
              PublicFigure() = default ;
              PublicFigure(const PublicFigure &) = default ;
              PublicFigure(PublicFigure &&) = default ;
              PublicFigure(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PublicFigure() = default ;
              PublicFigure& operator=(const PublicFigure &) = default ;
              PublicFigure& operator=(PublicFigure &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Location : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Location& obj) { 
                  DARABONBA_PTR_TO_JSON(H, h_);
                  DARABONBA_PTR_TO_JSON(W, w_);
                  DARABONBA_PTR_TO_JSON(X, x_);
                  DARABONBA_PTR_TO_JSON(Y, y_);
                };
                friend void from_json(const Darabonba::Json& j, Location& obj) { 
                  DARABONBA_PTR_FROM_JSON(H, h_);
                  DARABONBA_PTR_FROM_JSON(W, w_);
                  DARABONBA_PTR_FROM_JSON(X, x_);
                  DARABONBA_PTR_FROM_JSON(Y, y_);
                };
                Location() = default ;
                Location(const Location &) = default ;
                Location(Location &&) = default ;
                Location(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Location() = default ;
                Location& operator=(const Location &) = default ;
                Location& operator=(Location &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->h_ == nullptr
        && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
                // h Field Functions 
                bool hasH() const { return this->h_ != nullptr;};
                void deleteH() { this->h_ = nullptr;};
                inline int32_t getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
                inline Location& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


                // w Field Functions 
                bool hasW() const { return this->w_ != nullptr;};
                void deleteW() { this->w_ = nullptr;};
                inline int32_t getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
                inline Location& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


                // x Field Functions 
                bool hasX() const { return this->x_ != nullptr;};
                void deleteX() { this->x_ = nullptr;};
                inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
                inline Location& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


                // y Field Functions 
                bool hasY() const { return this->y_ != nullptr;};
                void deleteY() { this->y_ = nullptr;};
                inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
                inline Location& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


              protected:
                shared_ptr<int32_t> h_ {};
                shared_ptr<int32_t> w_ {};
                shared_ptr<int32_t> x_ {};
                shared_ptr<int32_t> y_ {};
              };

              virtual bool empty() const override { return this->figureId_ == nullptr
        && this->figureName_ == nullptr && this->location_ == nullptr; };
              // figureId Field Functions 
              bool hasFigureId() const { return this->figureId_ != nullptr;};
              void deleteFigureId() { this->figureId_ = nullptr;};
              inline string getFigureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
              inline PublicFigure& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


              // figureName Field Functions 
              bool hasFigureName() const { return this->figureName_ != nullptr;};
              void deleteFigureName() { this->figureName_ = nullptr;};
              inline string getFigureName() const { DARABONBA_PTR_GET_DEFAULT(figureName_, "") };
              inline PublicFigure& setFigureName(string figureName) { DARABONBA_PTR_SET_VALUE(figureName_, figureName) };


              // location Field Functions 
              bool hasLocation() const { return this->location_ != nullptr;};
              void deleteLocation() { this->location_ = nullptr;};
              inline const vector<PublicFigure::Location> & getLocation() const { DARABONBA_PTR_GET_CONST(location_, vector<PublicFigure::Location>) };
              inline vector<PublicFigure::Location> getLocation() { DARABONBA_PTR_GET(location_, vector<PublicFigure::Location>) };
              inline PublicFigure& setLocation(const vector<PublicFigure::Location> & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
              inline PublicFigure& setLocation(vector<PublicFigure::Location> && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


            protected:
              // The information about the code of the identified figure.
              shared_ptr<string> figureId_ {};
              shared_ptr<string> figureName_ {};
              shared_ptr<vector<PublicFigure::Location>> location_ {};
            };

            class LogoData : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const LogoData& obj) { 
                DARABONBA_PTR_TO_JSON(Location, location_);
                DARABONBA_PTR_TO_JSON(Logo, logo_);
              };
              friend void from_json(const Darabonba::Json& j, LogoData& obj) { 
                DARABONBA_PTR_FROM_JSON(Location, location_);
                DARABONBA_PTR_FROM_JSON(Logo, logo_);
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
              class Logo : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Logo& obj) { 
                  DARABONBA_PTR_TO_JSON(confidence, confidence_);
                  DARABONBA_PTR_TO_JSON(label, label_);
                  DARABONBA_PTR_TO_JSON(name, name_);
                };
                friend void from_json(const Darabonba::Json& j, Logo& obj) { 
                  DARABONBA_PTR_FROM_JSON(confidence, confidence_);
                  DARABONBA_PTR_FROM_JSON(label, label_);
                  DARABONBA_PTR_FROM_JSON(name, name_);
                };
                Logo() = default ;
                Logo(const Logo &) = default ;
                Logo(Logo &&) = default ;
                Logo(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Logo() = default ;
                Logo& operator=(const Logo &) = default ;
                Logo& operator=(Logo &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->confidence_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr; };
                // confidence Field Functions 
                bool hasConfidence() const { return this->confidence_ != nullptr;};
                void deleteConfidence() { this->confidence_ = nullptr;};
                inline int64_t getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0L) };
                inline Logo& setConfidence(int64_t confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


                // label Field Functions 
                bool hasLabel() const { return this->label_ != nullptr;};
                void deleteLabel() { this->label_ = nullptr;};
                inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
                inline Logo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline Logo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              protected:
                // Confidence score, ranging from 0 to 100, with two decimal places.
                shared_ptr<int64_t> confidence_ {};
                // label
                shared_ptr<string> label_ {};
                // Logo name.
                shared_ptr<string> name_ {};
              };

              class Location : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Location& obj) { 
                  DARABONBA_PTR_TO_JSON(H, h_);
                  DARABONBA_PTR_TO_JSON(W, w_);
                  DARABONBA_PTR_TO_JSON(X, x_);
                  DARABONBA_PTR_TO_JSON(Y, y_);
                };
                friend void from_json(const Darabonba::Json& j, Location& obj) { 
                  DARABONBA_PTR_FROM_JSON(H, h_);
                  DARABONBA_PTR_FROM_JSON(W, w_);
                  DARABONBA_PTR_FROM_JSON(X, x_);
                  DARABONBA_PTR_FROM_JSON(Y, y_);
                };
                Location() = default ;
                Location(const Location &) = default ;
                Location(Location &&) = default ;
                Location(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Location() = default ;
                Location& operator=(const Location &) = default ;
                Location& operator=(Location &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->h_ == nullptr
        && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
                // h Field Functions 
                bool hasH() const { return this->h_ != nullptr;};
                void deleteH() { this->h_ = nullptr;};
                inline int32_t getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
                inline Location& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


                // w Field Functions 
                bool hasW() const { return this->w_ != nullptr;};
                void deleteW() { this->w_ = nullptr;};
                inline int32_t getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
                inline Location& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


                // x Field Functions 
                bool hasX() const { return this->x_ != nullptr;};
                void deleteX() { this->x_ = nullptr;};
                inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
                inline Location& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


                // y Field Functions 
                bool hasY() const { return this->y_ != nullptr;};
                void deleteY() { this->y_ = nullptr;};
                inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
                inline Location& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


              protected:
                // The height of the text area. Unit: pixels.
                shared_ptr<int32_t> h_ {};
                // The width of the text area. Unit: pixels.
                shared_ptr<int32_t> w_ {};
                // The distance from the top-left corner of the text area to the y-axis, with the top-left corner of the image as the origin. Unit: pixels.
                shared_ptr<int32_t> x_ {};
                // The distance from the top-left corner of the text area to the x-axis, with the top-left corner of the image as the origin. Unit: pixels.
                shared_ptr<int32_t> y_ {};
              };

              virtual bool empty() const override { return this->location_ == nullptr
        && this->logo_ == nullptr; };
              // location Field Functions 
              bool hasLocation() const { return this->location_ != nullptr;};
              void deleteLocation() { this->location_ = nullptr;};
              inline const LogoData::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, LogoData::Location) };
              inline LogoData::Location getLocation() { DARABONBA_PTR_GET(location_, LogoData::Location) };
              inline LogoData& setLocation(const LogoData::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
              inline LogoData& setLocation(LogoData::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


              // logo Field Functions 
              bool hasLogo() const { return this->logo_ != nullptr;};
              void deleteLogo() { this->logo_ = nullptr;};
              inline const vector<LogoData::Logo> & getLogo() const { DARABONBA_PTR_GET_CONST(logo_, vector<LogoData::Logo>) };
              inline vector<LogoData::Logo> getLogo() { DARABONBA_PTR_GET(logo_, vector<LogoData::Logo>) };
              inline LogoData& setLogo(const vector<LogoData::Logo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
              inline LogoData& setLogo(vector<LogoData::Logo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


            protected:
              // The location of the logo.
              shared_ptr<LogoData::Location> location_ {};
              // Logo information.
              shared_ptr<vector<LogoData::Logo>> logo_ {};
            };

            class CustomImage : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CustomImage& obj) { 
                DARABONBA_PTR_TO_JSON(ImageId, imageId_);
                DARABONBA_PTR_TO_JSON(LibId, libId_);
              };
              friend void from_json(const Darabonba::Json& j, CustomImage& obj) { 
                DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
                DARABONBA_PTR_FROM_JSON(LibId, libId_);
              };
              CustomImage() = default ;
              CustomImage(const CustomImage &) = default ;
              CustomImage(CustomImage &&) = default ;
              CustomImage(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CustomImage() = default ;
              CustomImage& operator=(const CustomImage &) = default ;
              CustomImage& operator=(CustomImage &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->imageId_ == nullptr
        && this->libId_ == nullptr; };
              // imageId Field Functions 
              bool hasImageId() const { return this->imageId_ != nullptr;};
              void deleteImageId() { this->imageId_ = nullptr;};
              inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
              inline CustomImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


              // libId Field Functions 
              bool hasLibId() const { return this->libId_ != nullptr;};
              void deleteLibId() { this->libId_ = nullptr;};
              inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
              inline CustomImage& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


            protected:
              // The ID of the custom image that is hit.
              shared_ptr<string> imageId_ {};
              // The ID of the custom image library that is hit.
              shared_ptr<string> libId_ {};
            };

            virtual bool empty() const override { return this->customImage_ == nullptr
        && this->logoData_ == nullptr && this->publicFigure_ == nullptr && this->result_ == nullptr && this->service_ == nullptr && this->textInImage_ == nullptr; };
            // customImage Field Functions 
            bool hasCustomImage() const { return this->customImage_ != nullptr;};
            void deleteCustomImage() { this->customImage_ = nullptr;};
            inline const vector<Results::CustomImage> & getCustomImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Results::CustomImage>) };
            inline vector<Results::CustomImage> getCustomImage() { DARABONBA_PTR_GET(customImage_, vector<Results::CustomImage>) };
            inline Results& setCustomImage(const vector<Results::CustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
            inline Results& setCustomImage(vector<Results::CustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


            // logoData Field Functions 
            bool hasLogoData() const { return this->logoData_ != nullptr;};
            void deleteLogoData() { this->logoData_ = nullptr;};
            inline const vector<Results::LogoData> & getLogoData() const { DARABONBA_PTR_GET_CONST(logoData_, vector<Results::LogoData>) };
            inline vector<Results::LogoData> getLogoData() { DARABONBA_PTR_GET(logoData_, vector<Results::LogoData>) };
            inline Results& setLogoData(const vector<Results::LogoData> & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
            inline Results& setLogoData(vector<Results::LogoData> && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


            // publicFigure Field Functions 
            bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
            void deletePublicFigure() { this->publicFigure_ = nullptr;};
            inline const vector<Results::PublicFigure> & getPublicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Results::PublicFigure>) };
            inline vector<Results::PublicFigure> getPublicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Results::PublicFigure>) };
            inline Results& setPublicFigure(const vector<Results::PublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
            inline Results& setPublicFigure(vector<Results::PublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


            // result Field Functions 
            bool hasResult() const { return this->result_ != nullptr;};
            void deleteResult() { this->result_ = nullptr;};
            inline const vector<Results::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Results::Result>) };
            inline vector<Results::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Results::Result>) };
            inline Results& setResult(const vector<Results::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
            inline Results& setResult(vector<Results::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


            // service Field Functions 
            bool hasService() const { return this->service_ != nullptr;};
            void deleteService() { this->service_ = nullptr;};
            inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
            inline Results& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


            // textInImage Field Functions 
            bool hasTextInImage() const { return this->textInImage_ != nullptr;};
            void deleteTextInImage() { this->textInImage_ = nullptr;};
            inline             const Darabonba::Json & getTextInImage() const { DARABONBA_GET(textInImage_) };
            Darabonba::Json & getTextInImage() { DARABONBA_GET(textInImage_) };
            inline Results& setTextInImage(const Darabonba::Json & textInImage) { DARABONBA_SET_VALUE(textInImage_, textInImage) };
            inline Results& setTextInImage(Darabonba::Json && textInImage) { DARABONBA_SET_RVALUE(textInImage_, textInImage) };


          protected:
            // If a custom image library is hit, information about the custom image library is returned.
            shared_ptr<vector<Results::CustomImage>> customImage_ {};
            // Returns logo information when the video contains a logo.
            shared_ptr<vector<Results::LogoData>> logoData_ {};
            // If the video contains a specific figure, the code of the identified figure is returned.
            shared_ptr<vector<Results::PublicFigure>> publicFigure_ {};
            // The results of frame moderation parameters such as the label parameter and the confidence parameter.
            shared_ptr<vector<Results::Result>> result_ {};
            // The moderation service that is called.
            shared_ptr<string> service_ {};
            // The information about the text hit in the image is returned.
            Darabonba::Json textInImage_ {};
          };

          virtual bool empty() const override { return this->offset_ == nullptr
        && this->results_ == nullptr && this->riskLevel_ == nullptr && this->tempUrl_ == nullptr && this->timestamp_ == nullptr; };
          // offset Field Functions 
          bool hasOffset() const { return this->offset_ != nullptr;};
          void deleteOffset() { this->offset_ = nullptr;};
          inline float getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0.0) };
          inline Frames& setOffset(float offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


          // results Field Functions 
          bool hasResults() const { return this->results_ != nullptr;};
          void deleteResults() { this->results_ = nullptr;};
          inline const vector<Frames::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Frames::Results>) };
          inline vector<Frames::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Frames::Results>) };
          inline Frames& setResults(const vector<Frames::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
          inline Frames& setResults(vector<Frames::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline Frames& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


          // tempUrl Field Functions 
          bool hasTempUrl() const { return this->tempUrl_ != nullptr;};
          void deleteTempUrl() { this->tempUrl_ = nullptr;};
          inline string getTempUrl() const { DARABONBA_PTR_GET_DEFAULT(tempUrl_, "") };
          inline Frames& setTempUrl(string tempUrl) { DARABONBA_PTR_SET_VALUE(tempUrl_, tempUrl) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline Frames& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        protected:
          // The interval between the start of the video file and the captured frame. Unit: seconds.
          shared_ptr<float> offset_ {};
          // The results of frame moderation parameters such as the label parameter and the confidence parameter.
          shared_ptr<vector<Frames::Results>> results_ {};
          // Risk Level.
          shared_ptr<string> riskLevel_ {};
          // The temporary URL of a captured frame.
          shared_ptr<string> tempUrl_ {};
          // The absolute timestamp. Unit: milliseconds.
          shared_ptr<int64_t> timestamp_ {};
        };

        class FrameSummarys : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FrameSummarys& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(LabelSum, labelSum_);
          };
          friend void from_json(const Darabonba::Json& j, FrameSummarys& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(LabelSum, labelSum_);
          };
          FrameSummarys() = default ;
          FrameSummarys(const FrameSummarys &) = default ;
          FrameSummarys(FrameSummarys &&) = default ;
          FrameSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FrameSummarys() = default ;
          FrameSummarys& operator=(const FrameSummarys &) = default ;
          FrameSummarys& operator=(FrameSummarys &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->labelSum_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline FrameSummarys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline FrameSummarys& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // labelSum Field Functions 
          bool hasLabelSum() const { return this->labelSum_ != nullptr;};
          void deleteLabelSum() { this->labelSum_ = nullptr;};
          inline int32_t getLabelSum() const { DARABONBA_PTR_GET_DEFAULT(labelSum_, 0) };
          inline FrameSummarys& setLabelSum(int32_t labelSum) { DARABONBA_PTR_SET_VALUE(labelSum_, labelSum) };


        protected:
          // The description of the result.
          shared_ptr<string> description_ {};
          // The label against which a captured frame is matched.
          shared_ptr<string> label_ {};
          // The number of times that the label is matched.
          shared_ptr<int32_t> labelSum_ {};
        };

        virtual bool empty() const override { return this->frameNum_ == nullptr
        && this->frameSummarys_ == nullptr && this->frames_ == nullptr && this->riskLevel_ == nullptr; };
        // frameNum Field Functions 
        bool hasFrameNum() const { return this->frameNum_ != nullptr;};
        void deleteFrameNum() { this->frameNum_ = nullptr;};
        inline int32_t getFrameNum() const { DARABONBA_PTR_GET_DEFAULT(frameNum_, 0) };
        inline FrameResult& setFrameNum(int32_t frameNum) { DARABONBA_PTR_SET_VALUE(frameNum_, frameNum) };


        // frameSummarys Field Functions 
        bool hasFrameSummarys() const { return this->frameSummarys_ != nullptr;};
        void deleteFrameSummarys() { this->frameSummarys_ = nullptr;};
        inline const vector<FrameResult::FrameSummarys> & getFrameSummarys() const { DARABONBA_PTR_GET_CONST(frameSummarys_, vector<FrameResult::FrameSummarys>) };
        inline vector<FrameResult::FrameSummarys> getFrameSummarys() { DARABONBA_PTR_GET(frameSummarys_, vector<FrameResult::FrameSummarys>) };
        inline FrameResult& setFrameSummarys(const vector<FrameResult::FrameSummarys> & frameSummarys) { DARABONBA_PTR_SET_VALUE(frameSummarys_, frameSummarys) };
        inline FrameResult& setFrameSummarys(vector<FrameResult::FrameSummarys> && frameSummarys) { DARABONBA_PTR_SET_RVALUE(frameSummarys_, frameSummarys) };


        // frames Field Functions 
        bool hasFrames() const { return this->frames_ != nullptr;};
        void deleteFrames() { this->frames_ = nullptr;};
        inline const vector<FrameResult::Frames> & getFrames() const { DARABONBA_PTR_GET_CONST(frames_, vector<FrameResult::Frames>) };
        inline vector<FrameResult::Frames> getFrames() { DARABONBA_PTR_GET(frames_, vector<FrameResult::Frames>) };
        inline FrameResult& setFrames(const vector<FrameResult::Frames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
        inline FrameResult& setFrames(vector<FrameResult::Frames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline FrameResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of captured frames that are returned for the video file.
        shared_ptr<int32_t> frameNum_ {};
        // The summary of the labels against which captured frames are matched.
        shared_ptr<vector<FrameResult::FrameSummarys>> frameSummarys_ {};
        // The information about the frames that match the labels.
        shared_ptr<vector<FrameResult::Frames>> frames_ {};
        // Risk Level.
        shared_ptr<string> riskLevel_ {};
      };

      class AudioResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AudioResult& obj) { 
          DARABONBA_PTR_TO_JSON(AudioSummarys, audioSummarys_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(SliceDetails, sliceDetails_);
        };
        friend void from_json(const Darabonba::Json& j, AudioResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioSummarys, audioSummarys_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(SliceDetails, sliceDetails_);
        };
        AudioResult() = default ;
        AudioResult(const AudioResult &) = default ;
        AudioResult(AudioResult &&) = default ;
        AudioResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AudioResult() = default ;
        AudioResult& operator=(const AudioResult &) = default ;
        AudioResult& operator=(AudioResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SliceDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SliceDetails& obj) { 
            DARABONBA_PTR_TO_JSON(Descriptions, descriptions_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
            DARABONBA_PTR_TO_JSON(Extend, extend_);
            DARABONBA_PTR_TO_JSON(Labels, labels_);
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_TO_JSON(RiskTips, riskTips_);
            DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, SliceDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(Descriptions, descriptions_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
            DARABONBA_PTR_FROM_JSON(Extend, extend_);
            DARABONBA_PTR_FROM_JSON(Labels, labels_);
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_FROM_JSON(RiskTips, riskTips_);
            DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          SliceDetails() = default ;
          SliceDetails(const SliceDetails &) = default ;
          SliceDetails(SliceDetails &&) = default ;
          SliceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SliceDetails() = default ;
          SliceDetails& operator=(const SliceDetails &) = default ;
          SliceDetails& operator=(SliceDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->descriptions_ == nullptr
        && this->endTime_ == nullptr && this->endTimestamp_ == nullptr && this->extend_ == nullptr && this->labels_ == nullptr && this->riskLevel_ == nullptr
        && this->riskTips_ == nullptr && this->riskWords_ == nullptr && this->score_ == nullptr && this->startTime_ == nullptr && this->startTimestamp_ == nullptr
        && this->text_ == nullptr && this->url_ == nullptr; };
          // descriptions Field Functions 
          bool hasDescriptions() const { return this->descriptions_ != nullptr;};
          void deleteDescriptions() { this->descriptions_ = nullptr;};
          inline string getDescriptions() const { DARABONBA_PTR_GET_DEFAULT(descriptions_, "") };
          inline SliceDetails& setDescriptions(string descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline SliceDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // endTimestamp Field Functions 
          bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
          void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
          inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
          inline SliceDetails& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


          // extend Field Functions 
          bool hasExtend() const { return this->extend_ != nullptr;};
          void deleteExtend() { this->extend_ = nullptr;};
          inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
          inline SliceDetails& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


          // labels Field Functions 
          bool hasLabels() const { return this->labels_ != nullptr;};
          void deleteLabels() { this->labels_ = nullptr;};
          inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
          inline SliceDetails& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline SliceDetails& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


          // riskTips Field Functions 
          bool hasRiskTips() const { return this->riskTips_ != nullptr;};
          void deleteRiskTips() { this->riskTips_ = nullptr;};
          inline string getRiskTips() const { DARABONBA_PTR_GET_DEFAULT(riskTips_, "") };
          inline SliceDetails& setRiskTips(string riskTips) { DARABONBA_PTR_SET_VALUE(riskTips_, riskTips) };


          // riskWords Field Functions 
          bool hasRiskWords() const { return this->riskWords_ != nullptr;};
          void deleteRiskWords() { this->riskWords_ = nullptr;};
          inline string getRiskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
          inline SliceDetails& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline SliceDetails& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline SliceDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // startTimestamp Field Functions 
          bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
          void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
          inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
          inline SliceDetails& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline SliceDetails& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline SliceDetails& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The description of the labels.
          shared_ptr<string> descriptions_ {};
          // The end time of the text after voice-to-text conversion. Unit: seconds.
          shared_ptr<int64_t> endTime_ {};
          // The end timestamp of the segment. Unit: milliseconds.
          shared_ptr<int64_t> endTimestamp_ {};
          // A reserved parameter.
          shared_ptr<string> extend_ {};
          // The details of the labels.
          shared_ptr<string> labels_ {};
          // Risk Level.
          shared_ptr<string> riskLevel_ {};
          // Subcategory labels. Multiple labels are separated by commas (,).
          shared_ptr<string> riskTips_ {};
          // The risk words that are hit. Multiple words are separated by commas (,).
          shared_ptr<string> riskWords_ {};
          // The risk score. Default range: 0 to 99.
          shared_ptr<float> score_ {};
          // The start time of the text after voice-to-text conversion. Unit: seconds.
          shared_ptr<int64_t> startTime_ {};
          // The start timestamp of the segment. Unit: milliseconds.
          shared_ptr<int64_t> startTimestamp_ {};
          // The text converted from voice.
          shared_ptr<string> text_ {};
          // If the moderation object is a voice stream, this parameter indicates the temporary access URL of the voice stream to which the text entry corresponds. The validity period of the URL is 30 minutes. You must prepare another URL to store the voice stream at the earliest opportunity.
          shared_ptr<string> url_ {};
        };

        class AudioSummarys : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioSummarys& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(LabelSum, labelSum_);
          };
          friend void from_json(const Darabonba::Json& j, AudioSummarys& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(LabelSum, labelSum_);
          };
          AudioSummarys() = default ;
          AudioSummarys(const AudioSummarys &) = default ;
          AudioSummarys(AudioSummarys &&) = default ;
          AudioSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioSummarys() = default ;
          AudioSummarys& operator=(const AudioSummarys &) = default ;
          AudioSummarys& operator=(AudioSummarys &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->labelSum_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline AudioSummarys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline AudioSummarys& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // labelSum Field Functions 
          bool hasLabelSum() const { return this->labelSum_ != nullptr;};
          void deleteLabelSum() { this->labelSum_ = nullptr;};
          inline int32_t getLabelSum() const { DARABONBA_PTR_GET_DEFAULT(labelSum_, 0) };
          inline AudioSummarys& setLabelSum(int32_t labelSum) { DARABONBA_PTR_SET_VALUE(labelSum_, labelSum) };


        protected:
          // The description of the labels.
          shared_ptr<string> description_ {};
          // The voice label.
          shared_ptr<string> label_ {};
          // The number of times that the label is matched.
          shared_ptr<int32_t> labelSum_ {};
        };

        virtual bool empty() const override { return this->audioSummarys_ == nullptr
        && this->riskLevel_ == nullptr && this->sliceDetails_ == nullptr; };
        // audioSummarys Field Functions 
        bool hasAudioSummarys() const { return this->audioSummarys_ != nullptr;};
        void deleteAudioSummarys() { this->audioSummarys_ = nullptr;};
        inline const vector<AudioResult::AudioSummarys> & getAudioSummarys() const { DARABONBA_PTR_GET_CONST(audioSummarys_, vector<AudioResult::AudioSummarys>) };
        inline vector<AudioResult::AudioSummarys> getAudioSummarys() { DARABONBA_PTR_GET(audioSummarys_, vector<AudioResult::AudioSummarys>) };
        inline AudioResult& setAudioSummarys(const vector<AudioResult::AudioSummarys> & audioSummarys) { DARABONBA_PTR_SET_VALUE(audioSummarys_, audioSummarys) };
        inline AudioResult& setAudioSummarys(vector<AudioResult::AudioSummarys> && audioSummarys) { DARABONBA_PTR_SET_RVALUE(audioSummarys_, audioSummarys) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline AudioResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // sliceDetails Field Functions 
        bool hasSliceDetails() const { return this->sliceDetails_ != nullptr;};
        void deleteSliceDetails() { this->sliceDetails_ = nullptr;};
        inline const vector<AudioResult::SliceDetails> & getSliceDetails() const { DARABONBA_PTR_GET_CONST(sliceDetails_, vector<AudioResult::SliceDetails>) };
        inline vector<AudioResult::SliceDetails> getSliceDetails() { DARABONBA_PTR_GET(sliceDetails_, vector<AudioResult::SliceDetails>) };
        inline AudioResult& setSliceDetails(const vector<AudioResult::SliceDetails> & sliceDetails) { DARABONBA_PTR_SET_VALUE(sliceDetails_, sliceDetails) };
        inline AudioResult& setSliceDetails(vector<AudioResult::SliceDetails> && sliceDetails) { DARABONBA_PTR_SET_RVALUE(sliceDetails_, sliceDetails) };


      protected:
        // Summary of voice labels.
        shared_ptr<vector<AudioResult::AudioSummarys>> audioSummarys_ {};
        // Risk Level.
        shared_ptr<string> riskLevel_ {};
        // The details about the text in the moderated voice. The value is a JSON array that contains one or more elements. Each element corresponds to a text entry.
        shared_ptr<vector<AudioResult::SliceDetails>> sliceDetails_ {};
      };

      virtual bool empty() const override { return this->audioResult_ == nullptr
        && this->dataId_ == nullptr && this->frameResult_ == nullptr && this->liveId_ == nullptr && this->manualTaskId_ == nullptr && this->riskLevel_ == nullptr
        && this->taskId_ == nullptr; };
      // audioResult Field Functions 
      bool hasAudioResult() const { return this->audioResult_ != nullptr;};
      void deleteAudioResult() { this->audioResult_ = nullptr;};
      inline const Data::AudioResult & getAudioResult() const { DARABONBA_PTR_GET_CONST(audioResult_, Data::AudioResult) };
      inline Data::AudioResult getAudioResult() { DARABONBA_PTR_GET(audioResult_, Data::AudioResult) };
      inline Data& setAudioResult(const Data::AudioResult & audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };
      inline Data& setAudioResult(Data::AudioResult && audioResult) { DARABONBA_PTR_SET_RVALUE(audioResult_, audioResult) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // frameResult Field Functions 
      bool hasFrameResult() const { return this->frameResult_ != nullptr;};
      void deleteFrameResult() { this->frameResult_ = nullptr;};
      inline const Data::FrameResult & getFrameResult() const { DARABONBA_PTR_GET_CONST(frameResult_, Data::FrameResult) };
      inline Data::FrameResult getFrameResult() { DARABONBA_PTR_GET(frameResult_, Data::FrameResult) };
      inline Data& setFrameResult(const Data::FrameResult & frameResult) { DARABONBA_PTR_SET_VALUE(frameResult_, frameResult) };
      inline Data& setFrameResult(Data::FrameResult && frameResult) { DARABONBA_PTR_SET_RVALUE(frameResult_, frameResult) };


      // liveId Field Functions 
      bool hasLiveId() const { return this->liveId_ != nullptr;};
      void deleteLiveId() { this->liveId_ = nullptr;};
      inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
      inline Data& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


      // manualTaskId Field Functions 
      bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
      void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
      inline string getManualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
      inline Data& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The voice moderation results. The moderation results contain a structure.
      shared_ptr<Data::AudioResult> audioResult_ {};
      // The value of dataId that is specified in the API request. If this parameter is not specified in the API request, the dataId field is not available in the response.
      shared_ptr<string> dataId_ {};
      // The image moderation results. If the call is successful, the HTTP status code 200 and moderation results are returned. The moderation results contain a structure.
      shared_ptr<Data::FrameResult> frameResult_ {};
      // The unique ID of the live stream.
      shared_ptr<string> liveId_ {};
      shared_ptr<string> manualTaskId_ {};
      // Risk Level.
      shared_ptr<string> riskLevel_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline VideoModerationResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VideoModerationResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VideoModerationResultResponseBody::Data) };
    inline VideoModerationResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VideoModerationResultResponseBody::Data) };
    inline VideoModerationResultResponseBody& setData(const VideoModerationResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VideoModerationResultResponseBody& setData(VideoModerationResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VideoModerationResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VideoModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The moderation results.
    shared_ptr<VideoModerationResultResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
