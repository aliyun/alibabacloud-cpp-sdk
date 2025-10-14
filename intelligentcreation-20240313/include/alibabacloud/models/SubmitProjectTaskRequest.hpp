// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitProjectTaskRequestFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitProjectTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(frames, frames_);
      DARABONBA_PTR_TO_JSON(scaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(subtitleTag, subtitleTag_);
      DARABONBA_PTR_TO_JSON(transparentBackground, transparentBackground_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(frames, frames_);
      DARABONBA_PTR_FROM_JSON(scaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(subtitleTag, subtitleTag_);
      DARABONBA_PTR_FROM_JSON(transparentBackground, transparentBackground_);
    };
    SubmitProjectTaskRequest() = default ;
    SubmitProjectTaskRequest(const SubmitProjectTaskRequest &) = default ;
    SubmitProjectTaskRequest(SubmitProjectTaskRequest &&) = default ;
    SubmitProjectTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectTaskRequest() = default ;
    SubmitProjectTaskRequest& operator=(const SubmitProjectTaskRequest &) = default ;
    SubmitProjectTaskRequest& operator=(SubmitProjectTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frames_ == nullptr
        && return this->scaleType_ == nullptr && return this->subtitleTag_ == nullptr && return this->transparentBackground_ == nullptr; };
    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<SubmitProjectTaskRequestFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<SubmitProjectTaskRequestFrames>) };
    inline vector<SubmitProjectTaskRequestFrames> frames() { DARABONBA_PTR_GET(frames_, vector<SubmitProjectTaskRequestFrames>) };
    inline SubmitProjectTaskRequest& setFrames(const vector<SubmitProjectTaskRequestFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline SubmitProjectTaskRequest& setFrames(vector<SubmitProjectTaskRequestFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline SubmitProjectTaskRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // subtitleTag Field Functions 
    bool hasSubtitleTag() const { return this->subtitleTag_ != nullptr;};
    void deleteSubtitleTag() { this->subtitleTag_ = nullptr;};
    inline int32_t subtitleTag() const { DARABONBA_PTR_GET_DEFAULT(subtitleTag_, 0) };
    inline SubmitProjectTaskRequest& setSubtitleTag(int32_t subtitleTag) { DARABONBA_PTR_SET_VALUE(subtitleTag_, subtitleTag) };


    // transparentBackground Field Functions 
    bool hasTransparentBackground() const { return this->transparentBackground_ != nullptr;};
    void deleteTransparentBackground() { this->transparentBackground_ = nullptr;};
    inline int32_t transparentBackground() const { DARABONBA_PTR_GET_DEFAULT(transparentBackground_, 0) };
    inline SubmitProjectTaskRequest& setTransparentBackground(int32_t transparentBackground) { DARABONBA_PTR_SET_VALUE(transparentBackground_, transparentBackground) };


  protected:
    // frame
    std::shared_ptr<vector<SubmitProjectTaskRequestFrames>> frames_ = nullptr;
    std::shared_ptr<string> scaleType_ = nullptr;
    std::shared_ptr<int32_t> subtitleTag_ = nullptr;
    std::shared_ptr<int32_t> transparentBackground_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
