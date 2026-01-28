// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    RecognizeVideoCastCrewListRequest() = default ;
    RecognizeVideoCastCrewListRequest(const RecognizeVideoCastCrewListRequest &) = default ;
    RecognizeVideoCastCrewListRequest(RecognizeVideoCastCrewListRequest &&) = default ;
    RecognizeVideoCastCrewListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListRequest() = default ;
    RecognizeVideoCastCrewListRequest& operator=(const RecognizeVideoCastCrewListRequest &) = default ;
    RecognizeVideoCastCrewListRequest& operator=(RecognizeVideoCastCrewListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Params& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->params_ == nullptr
        && this->videoUrl_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<RecognizeVideoCastCrewListRequest::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<RecognizeVideoCastCrewListRequest::Params>) };
    inline vector<RecognizeVideoCastCrewListRequest::Params> getParams() { DARABONBA_PTR_GET(params_, vector<RecognizeVideoCastCrewListRequest::Params>) };
    inline RecognizeVideoCastCrewListRequest& setParams(const vector<RecognizeVideoCastCrewListRequest::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline RecognizeVideoCastCrewListRequest& setParams(vector<RecognizeVideoCastCrewListRequest::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline RecognizeVideoCastCrewListRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    shared_ptr<vector<RecognizeVideoCastCrewListRequest::Params>> params_ {};
    // This parameter is required.
    shared_ptr<string> videoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
