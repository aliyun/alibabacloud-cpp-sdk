// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaClipByFaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaClipByFaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaClipList, mediaClipList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaClipByFaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaClipList, mediaClipList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaClipByFaceResponseBody() = default ;
    SearchMediaClipByFaceResponseBody(const SearchMediaClipByFaceResponseBody &) = default ;
    SearchMediaClipByFaceResponseBody(SearchMediaClipByFaceResponseBody &&) = default ;
    SearchMediaClipByFaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaClipByFaceResponseBody() = default ;
    SearchMediaClipByFaceResponseBody& operator=(const SearchMediaClipByFaceResponseBody &) = default ;
    SearchMediaClipByFaceResponseBody& operator=(SearchMediaClipByFaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaClipList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaClipList& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(LabelName, labelName_);
        DARABONBA_PTR_TO_JSON(OccurrencesInfos, occurrencesInfos_);
        DARABONBA_PTR_TO_JSON(Score, score_);
      };
      friend void from_json(const Darabonba::Json& j, MediaClipList& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
        DARABONBA_PTR_FROM_JSON(OccurrencesInfos, occurrencesInfos_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
      };
      MediaClipList() = default ;
      MediaClipList(const MediaClipList &) = default ;
      MediaClipList(MediaClipList &&) = default ;
      MediaClipList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaClipList() = default ;
      MediaClipList& operator=(const MediaClipList &) = default ;
      MediaClipList& operator=(MediaClipList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OccurrencesInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OccurrencesInfos& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TrackData, trackData_);
        };
        friend void from_json(const Darabonba::Json& j, OccurrencesInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TrackData, trackData_);
        };
        OccurrencesInfos() = default ;
        OccurrencesInfos(const OccurrencesInfos &) = default ;
        OccurrencesInfos(OccurrencesInfos &&) = default ;
        OccurrencesInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OccurrencesInfos() = default ;
        OccurrencesInfos& operator=(const OccurrencesInfos &) = default ;
        OccurrencesInfos& operator=(OccurrencesInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TrackData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrackData& obj) { 
            DARABONBA_PTR_TO_JSON(BoxPosition, boxPosition_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, TrackData& obj) { 
            DARABONBA_PTR_FROM_JSON(BoxPosition, boxPosition_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          };
          TrackData() = default ;
          TrackData(const TrackData &) = default ;
          TrackData(TrackData &&) = default ;
          TrackData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrackData() = default ;
          TrackData& operator=(const TrackData &) = default ;
          TrackData& operator=(TrackData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BoxPosition : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BoxPosition& obj) { 
              DARABONBA_PTR_TO_JSON(H, h_);
              DARABONBA_PTR_TO_JSON(W, w_);
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
            };
            friend void from_json(const Darabonba::Json& j, BoxPosition& obj) { 
              DARABONBA_PTR_FROM_JSON(H, h_);
              DARABONBA_PTR_FROM_JSON(W, w_);
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
            };
            BoxPosition() = default ;
            BoxPosition(const BoxPosition &) = default ;
            BoxPosition(BoxPosition &&) = default ;
            BoxPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BoxPosition() = default ;
            BoxPosition& operator=(const BoxPosition &) = default ;
            BoxPosition& operator=(BoxPosition &&) = default ;
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
            inline BoxPosition& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


            // w Field Functions 
            bool hasW() const { return this->w_ != nullptr;};
            void deleteW() { this->w_ = nullptr;};
            inline int32_t getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
            inline BoxPosition& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
            inline BoxPosition& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
            inline BoxPosition& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The height of the rectangle frame. Unit: pixels.
            shared_ptr<int32_t> h_ {};
            // The width of the rectangle frame. Unit: pixels.
            shared_ptr<int32_t> w_ {};
            // The x-axis coordinate of the upper-left corner. Unit: pixels.
            shared_ptr<int32_t> x_ {};
            // The y-axis coordinate of the upper-left corner. Unit: pixels.
            shared_ptr<int32_t> y_ {};
          };

          virtual bool empty() const override { return this->boxPosition_ == nullptr
        && this->timestamp_ == nullptr; };
          // boxPosition Field Functions 
          bool hasBoxPosition() const { return this->boxPosition_ != nullptr;};
          void deleteBoxPosition() { this->boxPosition_ = nullptr;};
          inline const TrackData::BoxPosition & getBoxPosition() const { DARABONBA_PTR_GET_CONST(boxPosition_, TrackData::BoxPosition) };
          inline TrackData::BoxPosition getBoxPosition() { DARABONBA_PTR_GET(boxPosition_, TrackData::BoxPosition) };
          inline TrackData& setBoxPosition(const TrackData::BoxPosition & boxPosition) { DARABONBA_PTR_SET_VALUE(boxPosition_, boxPosition) };
          inline TrackData& setBoxPosition(TrackData::BoxPosition && boxPosition) { DARABONBA_PTR_SET_RVALUE(boxPosition_, boxPosition) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline float getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
          inline TrackData& setTimestamp(float timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        protected:
          // The coordinates of the face.
          shared_ptr<TrackData::BoxPosition> boxPosition_ {};
          // The timestamp when the face appears in the clip. Unit: seconds. The value is of the Float type.
          shared_ptr<float> timestamp_ {};
        };

        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->expression_ == nullptr && this->startTime_ == nullptr && this->trackData_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
        inline OccurrencesInfos& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline OccurrencesInfos& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline float getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
        inline OccurrencesInfos& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // trackData Field Functions 
        bool hasTrackData() const { return this->trackData_ != nullptr;};
        void deleteTrackData() { this->trackData_ = nullptr;};
        inline const vector<OccurrencesInfos::TrackData> & getTrackData() const { DARABONBA_PTR_GET_CONST(trackData_, vector<OccurrencesInfos::TrackData>) };
        inline vector<OccurrencesInfos::TrackData> getTrackData() { DARABONBA_PTR_GET(trackData_, vector<OccurrencesInfos::TrackData>) };
        inline OccurrencesInfos& setTrackData(const vector<OccurrencesInfos::TrackData> & trackData) { DARABONBA_PTR_SET_VALUE(trackData_, trackData) };
        inline OccurrencesInfos& setTrackData(vector<OccurrencesInfos::TrackData> && trackData) { DARABONBA_PTR_SET_RVALUE(trackData_, trackData) };


      protected:
        // The end time of the clip. Unit: seconds. The value is of the Float type.
        shared_ptr<float> endTime_ {};
        shared_ptr<string> expression_ {};
        // The start time of the clip. Unit: seconds. The value is of the Float type.
        shared_ptr<float> startTime_ {};
        // The information about the face in the clip.
        shared_ptr<vector<OccurrencesInfos::TrackData>> trackData_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->entityId_ == nullptr && this->labelName_ == nullptr && this->occurrencesInfos_ == nullptr && this->score_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline MediaClipList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline MediaClipList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // labelName Field Functions 
      bool hasLabelName() const { return this->labelName_ != nullptr;};
      void deleteLabelName() { this->labelName_ = nullptr;};
      inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
      inline MediaClipList& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


      // occurrencesInfos Field Functions 
      bool hasOccurrencesInfos() const { return this->occurrencesInfos_ != nullptr;};
      void deleteOccurrencesInfos() { this->occurrencesInfos_ = nullptr;};
      inline const vector<MediaClipList::OccurrencesInfos> & getOccurrencesInfos() const { DARABONBA_PTR_GET_CONST(occurrencesInfos_, vector<MediaClipList::OccurrencesInfos>) };
      inline vector<MediaClipList::OccurrencesInfos> getOccurrencesInfos() { DARABONBA_PTR_GET(occurrencesInfos_, vector<MediaClipList::OccurrencesInfos>) };
      inline MediaClipList& setOccurrencesInfos(const vector<MediaClipList::OccurrencesInfos> & occurrencesInfos) { DARABONBA_PTR_SET_VALUE(occurrencesInfos_, occurrencesInfos) };
      inline MediaClipList& setOccurrencesInfos(vector<MediaClipList::OccurrencesInfos> && occurrencesInfos) { DARABONBA_PTR_SET_RVALUE(occurrencesInfos_, occurrencesInfos) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline MediaClipList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    protected:
      // The type of the character. Valid values: celebrity sensitive politician custom unknown
      shared_ptr<string> category_ {};
      // The ID of the entity, which is the same as the entity ID returned in tag analysis.
      shared_ptr<string> entityId_ {};
      // The name of the entity.
      shared_ptr<string> labelName_ {};
      // The information about clips related to the face.
      shared_ptr<vector<MediaClipList::OccurrencesInfos>> occurrencesInfos_ {};
      // The score of the clip. The value is of the Float type. The value is in the range of [0,1].
      shared_ptr<float> score_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->mediaClipList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaClipByFaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaClipList Field Functions 
    bool hasMediaClipList() const { return this->mediaClipList_ != nullptr;};
    void deleteMediaClipList() { this->mediaClipList_ = nullptr;};
    inline const vector<SearchMediaClipByFaceResponseBody::MediaClipList> & getMediaClipList() const { DARABONBA_PTR_GET_CONST(mediaClipList_, vector<SearchMediaClipByFaceResponseBody::MediaClipList>) };
    inline vector<SearchMediaClipByFaceResponseBody::MediaClipList> getMediaClipList() { DARABONBA_PTR_GET(mediaClipList_, vector<SearchMediaClipByFaceResponseBody::MediaClipList>) };
    inline SearchMediaClipByFaceResponseBody& setMediaClipList(const vector<SearchMediaClipByFaceResponseBody::MediaClipList> & mediaClipList) { DARABONBA_PTR_SET_VALUE(mediaClipList_, mediaClipList) };
    inline SearchMediaClipByFaceResponseBody& setMediaClipList(vector<SearchMediaClipByFaceResponseBody::MediaClipList> && mediaClipList) { DARABONBA_PTR_SET_RVALUE(mediaClipList_, mediaClipList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaClipByFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaClipByFaceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaClipByFaceResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The media asset clips that meet the requirements.
    shared_ptr<vector<SearchMediaClipByFaceResponseBody::MediaClipList>> mediaClipList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<string> success_ {};
    // The total number of media asset clips that meet the conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
