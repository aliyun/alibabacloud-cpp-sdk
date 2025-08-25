// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCastCrewListAdvanceRequestParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    RecognizeVideoCastCrewListAdvanceRequest() = default ;
    RecognizeVideoCastCrewListAdvanceRequest(const RecognizeVideoCastCrewListAdvanceRequest &) = default ;
    RecognizeVideoCastCrewListAdvanceRequest(RecognizeVideoCastCrewListAdvanceRequest &&) = default ;
    RecognizeVideoCastCrewListAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListAdvanceRequest() = default ;
    RecognizeVideoCastCrewListAdvanceRequest& operator=(const RecognizeVideoCastCrewListAdvanceRequest &) = default ;
    RecognizeVideoCastCrewListAdvanceRequest& operator=(RecognizeVideoCastCrewListAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->params_ != nullptr
        && this->videoUrlObject_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<RecognizeVideoCastCrewListAdvanceRequestParams> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<RecognizeVideoCastCrewListAdvanceRequestParams>) };
    inline vector<RecognizeVideoCastCrewListAdvanceRequestParams> params() { DARABONBA_PTR_GET(params_, vector<RecognizeVideoCastCrewListAdvanceRequestParams>) };
    inline RecognizeVideoCastCrewListAdvanceRequest& setParams(const vector<RecognizeVideoCastCrewListAdvanceRequestParams> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline RecognizeVideoCastCrewListAdvanceRequest& setParams(vector<RecognizeVideoCastCrewListAdvanceRequestParams> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline RecognizeVideoCastCrewListAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    std::shared_ptr<vector<RecognizeVideoCastCrewListAdvanceRequestParams>> params_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
