// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBROADCASTVIDEOFROMTEMPLATEREQUESTVIDEOOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEBROADCASTVIDEOFROMTEMPLATEREQUESTVIDEOOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateBroadcastVideoFromTemplateRequestVideoOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBroadcastVideoFromTemplateRequestVideoOptions& obj) { 
      DARABONBA_PTR_TO_JSON(fps, fps_);
      DARABONBA_PTR_TO_JSON(resolution, resolution_);
      DARABONBA_PTR_TO_JSON(watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBroadcastVideoFromTemplateRequestVideoOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(fps, fps_);
      DARABONBA_PTR_FROM_JSON(resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(watermark, watermark_);
    };
    CreateBroadcastVideoFromTemplateRequestVideoOptions() = default ;
    CreateBroadcastVideoFromTemplateRequestVideoOptions(const CreateBroadcastVideoFromTemplateRequestVideoOptions &) = default ;
    CreateBroadcastVideoFromTemplateRequestVideoOptions(CreateBroadcastVideoFromTemplateRequestVideoOptions &&) = default ;
    CreateBroadcastVideoFromTemplateRequestVideoOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBroadcastVideoFromTemplateRequestVideoOptions() = default ;
    CreateBroadcastVideoFromTemplateRequestVideoOptions& operator=(const CreateBroadcastVideoFromTemplateRequestVideoOptions &) = default ;
    CreateBroadcastVideoFromTemplateRequestVideoOptions& operator=(CreateBroadcastVideoFromTemplateRequestVideoOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fps_ == nullptr
        && return this->resolution_ == nullptr && return this->watermark_ == nullptr; };
    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline int32_t fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
    inline CreateBroadcastVideoFromTemplateRequestVideoOptions& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline CreateBroadcastVideoFromTemplateRequestVideoOptions& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline bool watermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, false) };
    inline CreateBroadcastVideoFromTemplateRequestVideoOptions& setWatermark(bool watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


  protected:
    std::shared_ptr<int32_t> fps_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    std::shared_ptr<bool> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
