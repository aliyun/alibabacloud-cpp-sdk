// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTVIDEOCAPTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTVIDEOCAPTIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisRequestVideoCaptionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisRequestVideoCaptionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(videoCaptionFileUrl, videoCaptionFileUrl_);
      DARABONBA_PTR_TO_JSON(videoCaptions, videoCaptions_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisRequestVideoCaptionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(videoCaptionFileUrl, videoCaptionFileUrl_);
      DARABONBA_PTR_FROM_JSON(videoCaptions, videoCaptions_);
    };
    RunVideoAnalysisRequestVideoCaptionInfo() = default ;
    RunVideoAnalysisRequestVideoCaptionInfo(const RunVideoAnalysisRequestVideoCaptionInfo &) = default ;
    RunVideoAnalysisRequestVideoCaptionInfo(RunVideoAnalysisRequestVideoCaptionInfo &&) = default ;
    RunVideoAnalysisRequestVideoCaptionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisRequestVideoCaptionInfo() = default ;
    RunVideoAnalysisRequestVideoCaptionInfo& operator=(const RunVideoAnalysisRequestVideoCaptionInfo &) = default ;
    RunVideoAnalysisRequestVideoCaptionInfo& operator=(RunVideoAnalysisRequestVideoCaptionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoCaptionFileUrl_ == nullptr
        && return this->videoCaptions_ == nullptr; };
    // videoCaptionFileUrl Field Functions 
    bool hasVideoCaptionFileUrl() const { return this->videoCaptionFileUrl_ != nullptr;};
    void deleteVideoCaptionFileUrl() { this->videoCaptionFileUrl_ = nullptr;};
    inline string videoCaptionFileUrl() const { DARABONBA_PTR_GET_DEFAULT(videoCaptionFileUrl_, "") };
    inline RunVideoAnalysisRequestVideoCaptionInfo& setVideoCaptionFileUrl(string videoCaptionFileUrl) { DARABONBA_PTR_SET_VALUE(videoCaptionFileUrl_, videoCaptionFileUrl) };


    // videoCaptions Field Functions 
    bool hasVideoCaptions() const { return this->videoCaptions_ != nullptr;};
    void deleteVideoCaptions() { this->videoCaptions_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions> & videoCaptions() const { DARABONBA_PTR_GET_CONST(videoCaptions_, vector<Models::RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions>) };
    inline vector<Models::RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions> videoCaptions() { DARABONBA_PTR_GET(videoCaptions_, vector<Models::RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions>) };
    inline RunVideoAnalysisRequestVideoCaptionInfo& setVideoCaptions(const vector<Models::RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions> & videoCaptions) { DARABONBA_PTR_SET_VALUE(videoCaptions_, videoCaptions) };
    inline RunVideoAnalysisRequestVideoCaptionInfo& setVideoCaptions(vector<Models::RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions> && videoCaptions) { DARABONBA_PTR_SET_RVALUE(videoCaptions_, videoCaptions) };


  protected:
    std::shared_ptr<string> videoCaptionFileUrl_ = nullptr;
    std::shared_ptr<vector<Models::RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions>> videoCaptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
