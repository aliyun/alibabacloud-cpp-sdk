// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTSINGLESUBPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTSINGLESUBPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequestSingleSubParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequestSingleSubParams& obj) { 
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequestSingleSubParams& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateLiveMPUTaskRequestSingleSubParams() = default ;
    UpdateLiveMPUTaskRequestSingleSubParams(const UpdateLiveMPUTaskRequestSingleSubParams &) = default ;
    UpdateLiveMPUTaskRequestSingleSubParams(UpdateLiveMPUTaskRequestSingleSubParams &&) = default ;
    UpdateLiveMPUTaskRequestSingleSubParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequestSingleSubParams() = default ;
    UpdateLiveMPUTaskRequestSingleSubParams& operator=(const UpdateLiveMPUTaskRequestSingleSubParams &) = default ;
    UpdateLiveMPUTaskRequestSingleSubParams& operator=(UpdateLiveMPUTaskRequestSingleSubParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceType_ == nullptr
        && return this->streamType_ == nullptr && return this->userId_ == nullptr; };
    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateLiveMPUTaskRequestSingleSubParams& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline UpdateLiveMPUTaskRequestSingleSubParams& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateLiveMPUTaskRequestSingleSubParams& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The type of the video source. This parameter is valid only when you set StreamType to 2. Valid values:
    // 
    // *   **camera** (default)
    // *   **shareScreen**
    std::shared_ptr<string> sourceType_ = nullptr;
    // The type of the stream that you want to relay. Valid values:
    // 
    // *   **0** (default): original stream
    // *   **1**: only the audio track
    // *   **2**: only the video track
    std::shared_ptr<string> streamType_ = nullptr;
    // The user ID. In the single-stream relay mode, you can relay only one stream in a request.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
