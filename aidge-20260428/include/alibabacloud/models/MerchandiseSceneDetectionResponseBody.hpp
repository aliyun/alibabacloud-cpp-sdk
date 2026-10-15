// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISESCENEDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISESCENEDETECTIONRESPONSEBODY_HPP_
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
  class MerchandiseSceneDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandiseSceneDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandiseSceneDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MerchandiseSceneDetectionResponseBody() = default ;
    MerchandiseSceneDetectionResponseBody(const MerchandiseSceneDetectionResponseBody &) = default ;
    MerchandiseSceneDetectionResponseBody(MerchandiseSceneDetectionResponseBody &&) = default ;
    MerchandiseSceneDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandiseSceneDetectionResponseBody() = default ;
    MerchandiseSceneDetectionResponseBody& operator=(const MerchandiseSceneDetectionResponseBody &) = default ;
    MerchandiseSceneDetectionResponseBody& operator=(MerchandiseSceneDetectionResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Scenes, scenes_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Grounding, grounding_);
          DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
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
        class Scenes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Scenes& obj) { 
            DARABONBA_PTR_TO_JSON(AreaRate, areaRate_);
            DARABONBA_PTR_TO_JSON(OwnPurity, ownPurity_);
            DARABONBA_PTR_TO_JSON(Plumpness, plumpness_);
            DARABONBA_PTR_TO_JSON(SceneActualName, sceneActualName_);
            DARABONBA_PTR_TO_JSON(SceneCenter, sceneCenter_);
            DARABONBA_PTR_TO_JSON(SceneLocation, sceneLocation_);
            DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
            DARABONBA_PTR_TO_JSON(ShelfDistributionRate, shelfDistributionRate_);
          };
          friend void from_json(const Darabonba::Json& j, Scenes& obj) { 
            DARABONBA_PTR_FROM_JSON(AreaRate, areaRate_);
            DARABONBA_PTR_FROM_JSON(OwnPurity, ownPurity_);
            DARABONBA_PTR_FROM_JSON(Plumpness, plumpness_);
            DARABONBA_PTR_FROM_JSON(SceneActualName, sceneActualName_);
            DARABONBA_PTR_FROM_JSON(SceneCenter, sceneCenter_);
            DARABONBA_PTR_FROM_JSON(SceneLocation, sceneLocation_);
            DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
            DARABONBA_PTR_FROM_JSON(ShelfDistributionRate, shelfDistributionRate_);
          };
          Scenes() = default ;
          Scenes(const Scenes &) = default ;
          Scenes(Scenes &&) = default ;
          Scenes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Scenes() = default ;
          Scenes& operator=(const Scenes &) = default ;
          Scenes& operator=(Scenes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SceneLocation : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SceneLocation& obj) { 
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
            };
            friend void from_json(const Darabonba::Json& j, SceneLocation& obj) { 
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
            };
            SceneLocation() = default ;
            SceneLocation(const SceneLocation &) = default ;
            SceneLocation(SceneLocation &&) = default ;
            SceneLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SceneLocation() = default ;
            SceneLocation& operator=(const SceneLocation &) = default ;
            SceneLocation& operator=(SceneLocation &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
            inline SceneLocation& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
            inline SceneLocation& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The x-coordinate of the region point.
            shared_ptr<double> x_ {};
            // The y-coordinate of the region point.
            shared_ptr<double> y_ {};
          };

          virtual bool empty() const override { return this->areaRate_ == nullptr
        && this->ownPurity_ == nullptr && this->plumpness_ == nullptr && this->sceneActualName_ == nullptr && this->sceneCenter_ == nullptr && this->sceneLocation_ == nullptr
        && this->sceneName_ == nullptr && this->shelfDistributionRate_ == nullptr; };
          // areaRate Field Functions 
          bool hasAreaRate() const { return this->areaRate_ != nullptr;};
          void deleteAreaRate() { this->areaRate_ = nullptr;};
          inline double getAreaRate() const { DARABONBA_PTR_GET_DEFAULT(areaRate_, 0.0) };
          inline Scenes& setAreaRate(double areaRate) { DARABONBA_PTR_SET_VALUE(areaRate_, areaRate) };


          // ownPurity Field Functions 
          bool hasOwnPurity() const { return this->ownPurity_ != nullptr;};
          void deleteOwnPurity() { this->ownPurity_ = nullptr;};
          inline double getOwnPurity() const { DARABONBA_PTR_GET_DEFAULT(ownPurity_, 0.0) };
          inline Scenes& setOwnPurity(double ownPurity) { DARABONBA_PTR_SET_VALUE(ownPurity_, ownPurity) };


          // plumpness Field Functions 
          bool hasPlumpness() const { return this->plumpness_ != nullptr;};
          void deletePlumpness() { this->plumpness_ = nullptr;};
          inline double getPlumpness() const { DARABONBA_PTR_GET_DEFAULT(plumpness_, 0.0) };
          inline Scenes& setPlumpness(double plumpness) { DARABONBA_PTR_SET_VALUE(plumpness_, plumpness) };


          // sceneActualName Field Functions 
          bool hasSceneActualName() const { return this->sceneActualName_ != nullptr;};
          void deleteSceneActualName() { this->sceneActualName_ = nullptr;};
          inline string getSceneActualName() const { DARABONBA_PTR_GET_DEFAULT(sceneActualName_, "") };
          inline Scenes& setSceneActualName(string sceneActualName) { DARABONBA_PTR_SET_VALUE(sceneActualName_, sceneActualName) };


          // sceneCenter Field Functions 
          bool hasSceneCenter() const { return this->sceneCenter_ != nullptr;};
          void deleteSceneCenter() { this->sceneCenter_ = nullptr;};
          inline const vector<double> & getSceneCenter() const { DARABONBA_PTR_GET_CONST(sceneCenter_, vector<double>) };
          inline vector<double> getSceneCenter() { DARABONBA_PTR_GET(sceneCenter_, vector<double>) };
          inline Scenes& setSceneCenter(const vector<double> & sceneCenter) { DARABONBA_PTR_SET_VALUE(sceneCenter_, sceneCenter) };
          inline Scenes& setSceneCenter(vector<double> && sceneCenter) { DARABONBA_PTR_SET_RVALUE(sceneCenter_, sceneCenter) };


          // sceneLocation Field Functions 
          bool hasSceneLocation() const { return this->sceneLocation_ != nullptr;};
          void deleteSceneLocation() { this->sceneLocation_ = nullptr;};
          inline const vector<Scenes::SceneLocation> & getSceneLocation() const { DARABONBA_PTR_GET_CONST(sceneLocation_, vector<Scenes::SceneLocation>) };
          inline vector<Scenes::SceneLocation> getSceneLocation() { DARABONBA_PTR_GET(sceneLocation_, vector<Scenes::SceneLocation>) };
          inline Scenes& setSceneLocation(const vector<Scenes::SceneLocation> & sceneLocation) { DARABONBA_PTR_SET_VALUE(sceneLocation_, sceneLocation) };
          inline Scenes& setSceneLocation(vector<Scenes::SceneLocation> && sceneLocation) { DARABONBA_PTR_SET_RVALUE(sceneLocation_, sceneLocation) };


          // sceneName Field Functions 
          bool hasSceneName() const { return this->sceneName_ != nullptr;};
          void deleteSceneName() { this->sceneName_ = nullptr;};
          inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
          inline Scenes& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


          // shelfDistributionRate Field Functions 
          bool hasShelfDistributionRate() const { return this->shelfDistributionRate_ != nullptr;};
          void deleteShelfDistributionRate() { this->shelfDistributionRate_ = nullptr;};
          inline double getShelfDistributionRate() const { DARABONBA_PTR_GET_DEFAULT(shelfDistributionRate_, 0.0) };
          inline Scenes& setShelfDistributionRate(double shelfDistributionRate) { DARABONBA_PTR_SET_VALUE(shelfDistributionRate_, shelfDistributionRate) };


        protected:
          // Optional. The area proportion.
          shared_ptr<double> areaRate_ {};
          // Optional. The purity metric for proprietary products. The specific business criteria are subject to the recognition service.
          shared_ptr<double> ownPurity_ {};
          // Optional. The display plumpness metric.
          shared_ptr<double> plumpness_ {};
          // The display name of the scene. If omitted, the value is an empty string.
          shared_ptr<string> sceneActualName_ {};
          // The center point of the scene, which retains the original normalized coordinates. If omitted, the value is an empty array.
          shared_ptr<vector<double>> sceneCenter_ {};
          // The list of region points. Each item is in the {x,y} format and retains the original normalized coordinates. If omitted, the value is an empty array.
          shared_ptr<vector<Scenes::SceneLocation>> sceneLocation_ {};
          // The scene identifier. This parameter is required and cannot be empty.
          shared_ptr<string> sceneName_ {};
          // Optional. The shelf distribution proportion metric. The specific business criteria are subject to the recognition service.
          shared_ptr<double> shelfDistributionRate_ {};
        };

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
              DARABONBA_PTR_TO_JSON(Bbox_2d, bbox2d_);
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Regions& obj) { 
              DARABONBA_PTR_FROM_JSON(Bbox_2d, bbox2d_);
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
            inline const vector<double> & getBbox2d() const { DARABONBA_PTR_GET_CONST(bbox2d_, vector<double>) };
            inline vector<double> getBbox2d() { DARABONBA_PTR_GET(bbox2d_, vector<double>) };
            inline Regions& setBbox2d(const vector<double> & bbox2d) { DARABONBA_PTR_SET_VALUE(bbox2d_, bbox2d) };
            inline Regions& setBbox2d(vector<double> && bbox2d) { DARABONBA_PTR_SET_RVALUE(bbox2d_, bbox2d) };


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
            // The 2D bounding box in the format of [top-left x, top-left y, bottom-right x, bottom-right y]. Valid values: 0 to 1000. The left coordinate must be less than the right coordinate, and the top coordinate must be less than the bottom coordinate.
            shared_ptr<vector<double>> bbox2d_ {};
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
          // The list of regions.
          shared_ptr<vector<Grounding::Regions>> regions_ {};
        };

        virtual bool empty() const override { return this->grounding_ == nullptr
        && this->scenes_ == nullptr && this->type_ == nullptr; };
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
        inline const vector<Result::Scenes> & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<Result::Scenes>) };
        inline vector<Result::Scenes> getScenes() { DARABONBA_PTR_GET(scenes_, vector<Result::Scenes>) };
        inline Result& setScenes(const vector<Result::Scenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
        inline Result& setScenes(vector<Result::Scenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The positioning information.
        shared_ptr<Result::Grounding> grounding_ {};
        // The list of recognized scenes.
        shared_ptr<vector<Result::Scenes>> scenes_ {};
        // Fixed value: scene.
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
      // The details of the display scene detection result.
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
    inline MerchandiseSceneDetectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MerchandiseSceneDetectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MerchandiseSceneDetectionResponseBody::Data) };
    inline MerchandiseSceneDetectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MerchandiseSceneDetectionResponseBody::Data) };
    inline MerchandiseSceneDetectionResponseBody& setData(const MerchandiseSceneDetectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MerchandiseSceneDetectionResponseBody& setData(MerchandiseSceneDetectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MerchandiseSceneDetectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MerchandiseSceneDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MerchandiseSceneDetectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The display scene detection result.
    shared_ptr<MerchandiseSceneDetectionResponseBody::Data> data_ {};
    // The response message or failure description.
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
