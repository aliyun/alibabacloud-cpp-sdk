// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOEMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOEMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQoeMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQoeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioData, audioData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoData, videoData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQoeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioData, audioData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoData, videoData_);
    };
    DescribeQoeMetricDataResponseBody() = default ;
    DescribeQoeMetricDataResponseBody(const DescribeQoeMetricDataResponseBody &) = default ;
    DescribeQoeMetricDataResponseBody(DescribeQoeMetricDataResponseBody &&) = default ;
    DescribeQoeMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQoeMetricDataResponseBody() = default ;
    DescribeQoeMetricDataResponseBody& operator=(const DescribeQoeMetricDataResponseBody &) = default ;
    DescribeQoeMetricDataResponseBody& operator=(DescribeQoeMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoData& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, VideoData& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      VideoData() = default ;
      VideoData(const VideoData &) = default ;
      VideoData(VideoData &&) = default ;
      VideoData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoData() = default ;
      VideoData& operator=(const VideoData &) = default ;
      VideoData& operator=(VideoData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
        inline Nodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
        inline Nodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->type_ == nullptr && this->userId_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<VideoData::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<VideoData::Nodes>) };
      inline vector<VideoData::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<VideoData::Nodes>) };
      inline VideoData& setNodes(const vector<VideoData::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline VideoData& setNodes(vector<VideoData::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VideoData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline VideoData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<VideoData::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> userId_ {};
    };

    class AudioData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioData& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AudioData& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AudioData() = default ;
      AudioData(const AudioData &) = default ;
      AudioData(AudioData &&) = default ;
      AudioData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioData() = default ;
      AudioData& operator=(const AudioData &) = default ;
      AudioData& operator=(AudioData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
        inline Nodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
        inline Nodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->type_ == nullptr && this->userId_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<AudioData::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<AudioData::Nodes>) };
      inline vector<AudioData::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<AudioData::Nodes>) };
      inline AudioData& setNodes(const vector<AudioData::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline AudioData& setNodes(vector<AudioData::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AudioData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AudioData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<AudioData::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->audioData_ == nullptr
        && this->requestId_ == nullptr && this->videoData_ == nullptr; };
    // audioData Field Functions 
    bool hasAudioData() const { return this->audioData_ != nullptr;};
    void deleteAudioData() { this->audioData_ = nullptr;};
    inline const vector<DescribeQoeMetricDataResponseBody::AudioData> & getAudioData() const { DARABONBA_PTR_GET_CONST(audioData_, vector<DescribeQoeMetricDataResponseBody::AudioData>) };
    inline vector<DescribeQoeMetricDataResponseBody::AudioData> getAudioData() { DARABONBA_PTR_GET(audioData_, vector<DescribeQoeMetricDataResponseBody::AudioData>) };
    inline DescribeQoeMetricDataResponseBody& setAudioData(const vector<DescribeQoeMetricDataResponseBody::AudioData> & audioData) { DARABONBA_PTR_SET_VALUE(audioData_, audioData) };
    inline DescribeQoeMetricDataResponseBody& setAudioData(vector<DescribeQoeMetricDataResponseBody::AudioData> && audioData) { DARABONBA_PTR_SET_RVALUE(audioData_, audioData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQoeMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoData Field Functions 
    bool hasVideoData() const { return this->videoData_ != nullptr;};
    void deleteVideoData() { this->videoData_ = nullptr;};
    inline const vector<DescribeQoeMetricDataResponseBody::VideoData> & getVideoData() const { DARABONBA_PTR_GET_CONST(videoData_, vector<DescribeQoeMetricDataResponseBody::VideoData>) };
    inline vector<DescribeQoeMetricDataResponseBody::VideoData> getVideoData() { DARABONBA_PTR_GET(videoData_, vector<DescribeQoeMetricDataResponseBody::VideoData>) };
    inline DescribeQoeMetricDataResponseBody& setVideoData(const vector<DescribeQoeMetricDataResponseBody::VideoData> & videoData) { DARABONBA_PTR_SET_VALUE(videoData_, videoData) };
    inline DescribeQoeMetricDataResponseBody& setVideoData(vector<DescribeQoeMetricDataResponseBody::VideoData> && videoData) { DARABONBA_PTR_SET_RVALUE(videoData_, videoData) };


  protected:
    shared_ptr<vector<DescribeQoeMetricDataResponseBody::AudioData>> audioData_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeQoeMetricDataResponseBody::VideoData>> videoData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
