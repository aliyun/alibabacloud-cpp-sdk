// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadVideoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnlysisPrompt, anlysisPrompt_);
      DARABONBA_PTR_TO_JSON(ReferenceVideo, referenceVideoShrink_);
      DARABONBA_PTR_TO_JSON(SourceVideos, sourceVideosShrink_);
      DARABONBA_PTR_TO_JSON(SplitInterval, splitInterval_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnlysisPrompt, anlysisPrompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceVideo, referenceVideoShrink_);
      DARABONBA_PTR_FROM_JSON(SourceVideos, sourceVideosShrink_);
      DARABONBA_PTR_FROM_JSON(SplitInterval, splitInterval_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncUploadVideoShrinkRequest() = default ;
    AsyncUploadVideoShrinkRequest(const AsyncUploadVideoShrinkRequest &) = default ;
    AsyncUploadVideoShrinkRequest(AsyncUploadVideoShrinkRequest &&) = default ;
    AsyncUploadVideoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoShrinkRequest() = default ;
    AsyncUploadVideoShrinkRequest& operator=(const AsyncUploadVideoShrinkRequest &) = default ;
    AsyncUploadVideoShrinkRequest& operator=(AsyncUploadVideoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anlysisPrompt_ != nullptr
        && this->referenceVideoShrink_ != nullptr && this->sourceVideosShrink_ != nullptr && this->splitInterval_ != nullptr && this->workspaceId_ != nullptr; };
    // anlysisPrompt Field Functions 
    bool hasAnlysisPrompt() const { return this->anlysisPrompt_ != nullptr;};
    void deleteAnlysisPrompt() { this->anlysisPrompt_ = nullptr;};
    inline string anlysisPrompt() const { DARABONBA_PTR_GET_DEFAULT(anlysisPrompt_, "") };
    inline AsyncUploadVideoShrinkRequest& setAnlysisPrompt(string anlysisPrompt) { DARABONBA_PTR_SET_VALUE(anlysisPrompt_, anlysisPrompt) };


    // referenceVideoShrink Field Functions 
    bool hasReferenceVideoShrink() const { return this->referenceVideoShrink_ != nullptr;};
    void deleteReferenceVideoShrink() { this->referenceVideoShrink_ = nullptr;};
    inline string referenceVideoShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceVideoShrink_, "") };
    inline AsyncUploadVideoShrinkRequest& setReferenceVideoShrink(string referenceVideoShrink) { DARABONBA_PTR_SET_VALUE(referenceVideoShrink_, referenceVideoShrink) };


    // sourceVideosShrink Field Functions 
    bool hasSourceVideosShrink() const { return this->sourceVideosShrink_ != nullptr;};
    void deleteSourceVideosShrink() { this->sourceVideosShrink_ = nullptr;};
    inline string sourceVideosShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceVideosShrink_, "") };
    inline AsyncUploadVideoShrinkRequest& setSourceVideosShrink(string sourceVideosShrink) { DARABONBA_PTR_SET_VALUE(sourceVideosShrink_, sourceVideosShrink) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t splitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline AsyncUploadVideoShrinkRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncUploadVideoShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> anlysisPrompt_ = nullptr;
    std::shared_ptr<string> referenceVideoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceVideosShrink_ = nullptr;
    std::shared_ptr<int32_t> splitInterval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
