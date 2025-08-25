// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCastCrewListRequestParams.hpp>
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
    virtual bool empty() const override { this->params_ != nullptr
        && this->videoUrl_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<RecognizeVideoCastCrewListRequestParams> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<RecognizeVideoCastCrewListRequestParams>) };
    inline vector<RecognizeVideoCastCrewListRequestParams> params() { DARABONBA_PTR_GET(params_, vector<RecognizeVideoCastCrewListRequestParams>) };
    inline RecognizeVideoCastCrewListRequest& setParams(const vector<RecognizeVideoCastCrewListRequestParams> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline RecognizeVideoCastCrewListRequest& setParams(vector<RecognizeVideoCastCrewListRequestParams> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline RecognizeVideoCastCrewListRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<vector<RecognizeVideoCastCrewListRequestParams>> params_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
