// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIVideoTagResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIVideoTagResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoTagResult, videoTagResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIVideoTagResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoTagResult, videoTagResult_);
    };
    GetAIVideoTagResultResponseBody() = default ;
    GetAIVideoTagResultResponseBody(const GetAIVideoTagResultResponseBody &) = default ;
    GetAIVideoTagResultResponseBody(GetAIVideoTagResultResponseBody &&) = default ;
    GetAIVideoTagResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIVideoTagResultResponseBody() = default ;
    GetAIVideoTagResultResponseBody& operator=(const GetAIVideoTagResultResponseBody &) = default ;
    GetAIVideoTagResultResponseBody& operator=(GetAIVideoTagResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoTagResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoTagResult& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(Person, person_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, VideoTagResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(Person, person_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      VideoTagResult() = default ;
      VideoTagResult(const VideoTagResult &) = default ;
      VideoTagResult(VideoTagResult &&) = default ;
      VideoTagResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoTagResult() = default ;
      VideoTagResult& operator=(const VideoTagResult &) = default ;
      VideoTagResult& operator=(VideoTagResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Time : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Time& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Time& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Time() = default ;
        Time(const Time &) = default ;
        Time(Time &&) = default ;
        Time(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Time() = default ;
        Time& operator=(const Time &) = default ;
        Time& operator=(Time &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tag_ == nullptr
        && this->times_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Time& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline const vector<string> & getTimes() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
        inline vector<string> getTimes() { DARABONBA_PTR_GET(times_, vector<string>) };
        inline Time& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
        inline Time& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


      protected:
        // The tag string.
        shared_ptr<string> tag_ {};
        // The points in time when the tags are displayed. Unit: milliseconds.
        shared_ptr<vector<string>> times_ {};
      };

      class Person : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Person& obj) { 
          DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Person& obj) { 
          DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Person() = default ;
        Person(const Person &) = default ;
        Person(Person &&) = default ;
        Person(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Person() = default ;
        Person& operator=(const Person &) = default ;
        Person& operator=(Person &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->faceUrl_ == nullptr
        && this->tag_ == nullptr && this->times_ == nullptr; };
        // faceUrl Field Functions 
        bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
        void deleteFaceUrl() { this->faceUrl_ = nullptr;};
        inline string getFaceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
        inline Person& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Person& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline const vector<string> & getTimes() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
        inline vector<string> getTimes() { DARABONBA_PTR_GET(times_, vector<string>) };
        inline Person& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
        inline Person& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


      protected:
        // The URL of the profile photo.
        // 
        // > This parameter is returned only when a figure tag was used.
        shared_ptr<string> faceUrl_ {};
        // The tag string.
        shared_ptr<string> tag_ {};
        // The points in time when the tags are displayed. Unit: milliseconds.
        shared_ptr<vector<string>> times_ {};
      };

      class Location : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Location& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Location& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
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
        virtual bool empty() const override { return this->tag_ == nullptr
        && this->times_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Location& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline const vector<string> & getTimes() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
        inline vector<string> getTimes() { DARABONBA_PTR_GET(times_, vector<string>) };
        inline Location& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
        inline Location& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


      protected:
        // The tag string.
        shared_ptr<string> tag_ {};
        // The points in time when the tags are displayed. Unit: milliseconds.
        shared_ptr<vector<string>> times_ {};
      };

      class Keyword : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Keyword& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Keyword& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Keyword() = default ;
        Keyword(const Keyword &) = default ;
        Keyword(Keyword &&) = default ;
        Keyword(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Keyword() = default ;
        Keyword& operator=(const Keyword &) = default ;
        Keyword& operator=(Keyword &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tag_ == nullptr
        && this->times_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Keyword& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline const vector<string> & getTimes() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
        inline vector<string> getTimes() { DARABONBA_PTR_GET(times_, vector<string>) };
        inline Keyword& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
        inline Keyword& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


      protected:
        // The tag string.
        shared_ptr<string> tag_ {};
        // The points in time when the tags are displayed. Unit: milliseconds.
        shared_ptr<vector<string>> times_ {};
      };

      class Category : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Category& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, Category& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
        };
        Category() = default ;
        Category(const Category &) = default ;
        Category(Category &&) = default ;
        Category(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Category() = default ;
        Category& operator=(const Category &) = default ;
        Category& operator=(Category &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tag_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Category& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      protected:
        // The tag string.
        shared_ptr<string> tag_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->keyword_ == nullptr && this->location_ == nullptr && this->person_ == nullptr && this->time_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline const vector<VideoTagResult::Category> & getCategory() const { DARABONBA_PTR_GET_CONST(category_, vector<VideoTagResult::Category>) };
      inline vector<VideoTagResult::Category> getCategory() { DARABONBA_PTR_GET(category_, vector<VideoTagResult::Category>) };
      inline VideoTagResult& setCategory(const vector<VideoTagResult::Category> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
      inline VideoTagResult& setCategory(vector<VideoTagResult::Category> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline const vector<VideoTagResult::Keyword> & getKeyword() const { DARABONBA_PTR_GET_CONST(keyword_, vector<VideoTagResult::Keyword>) };
      inline vector<VideoTagResult::Keyword> getKeyword() { DARABONBA_PTR_GET(keyword_, vector<VideoTagResult::Keyword>) };
      inline VideoTagResult& setKeyword(const vector<VideoTagResult::Keyword> & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
      inline VideoTagResult& setKeyword(vector<VideoTagResult::Keyword> && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline const vector<VideoTagResult::Location> & getLocation() const { DARABONBA_PTR_GET_CONST(location_, vector<VideoTagResult::Location>) };
      inline vector<VideoTagResult::Location> getLocation() { DARABONBA_PTR_GET(location_, vector<VideoTagResult::Location>) };
      inline VideoTagResult& setLocation(const vector<VideoTagResult::Location> & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
      inline VideoTagResult& setLocation(vector<VideoTagResult::Location> && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


      // person Field Functions 
      bool hasPerson() const { return this->person_ != nullptr;};
      void deletePerson() { this->person_ = nullptr;};
      inline const vector<VideoTagResult::Person> & getPerson() const { DARABONBA_PTR_GET_CONST(person_, vector<VideoTagResult::Person>) };
      inline vector<VideoTagResult::Person> getPerson() { DARABONBA_PTR_GET(person_, vector<VideoTagResult::Person>) };
      inline VideoTagResult& setPerson(const vector<VideoTagResult::Person> & person) { DARABONBA_PTR_SET_VALUE(person_, person) };
      inline VideoTagResult& setPerson(vector<VideoTagResult::Person> && person) { DARABONBA_PTR_SET_RVALUE(person_, person) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline const vector<VideoTagResult::Time> & getTime() const { DARABONBA_PTR_GET_CONST(time_, vector<VideoTagResult::Time>) };
      inline vector<VideoTagResult::Time> getTime() { DARABONBA_PTR_GET(time_, vector<VideoTagResult::Time>) };
      inline VideoTagResult& setTime(const vector<VideoTagResult::Time> & time) { DARABONBA_PTR_SET_VALUE(time_, time) };
      inline VideoTagResult& setTime(vector<VideoTagResult::Time> && time) { DARABONBA_PTR_SET_RVALUE(time_, time) };


    protected:
      // The video categories.
      shared_ptr<vector<VideoTagResult::Category>> category_ {};
      // The keyword tags.
      shared_ptr<vector<VideoTagResult::Keyword>> keyword_ {};
      // The location tags.
      shared_ptr<vector<VideoTagResult::Location>> location_ {};
      // The figure tags.
      shared_ptr<vector<VideoTagResult::Person>> person_ {};
      // The time tags.
      shared_ptr<vector<VideoTagResult::Time>> time_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->videoTagResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIVideoTagResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoTagResult Field Functions 
    bool hasVideoTagResult() const { return this->videoTagResult_ != nullptr;};
    void deleteVideoTagResult() { this->videoTagResult_ = nullptr;};
    inline const GetAIVideoTagResultResponseBody::VideoTagResult & getVideoTagResult() const { DARABONBA_PTR_GET_CONST(videoTagResult_, GetAIVideoTagResultResponseBody::VideoTagResult) };
    inline GetAIVideoTagResultResponseBody::VideoTagResult getVideoTagResult() { DARABONBA_PTR_GET(videoTagResult_, GetAIVideoTagResultResponseBody::VideoTagResult) };
    inline GetAIVideoTagResultResponseBody& setVideoTagResult(const GetAIVideoTagResultResponseBody::VideoTagResult & videoTagResult) { DARABONBA_PTR_SET_VALUE(videoTagResult_, videoTagResult) };
    inline GetAIVideoTagResultResponseBody& setVideoTagResult(GetAIVideoTagResultResponseBody::VideoTagResult && videoTagResult) { DARABONBA_PTR_SET_RVALUE(videoTagResult_, videoTagResult) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetAIVideoTagResultResponseBody::VideoTagResult> videoTagResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
