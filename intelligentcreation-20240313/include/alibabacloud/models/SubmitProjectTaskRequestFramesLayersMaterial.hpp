// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESLAYERSMATERIAL_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESLAYERSMATERIAL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitProjectTaskRequestFramesLayersMaterialMask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitProjectTaskRequestFramesLayersMaterial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectTaskRequestFramesLayersMaterial& obj) { 
      DARABONBA_PTR_TO_JSON(anchorStyleLevel, anchorStyleLevel_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(mask, mask_);
      DARABONBA_PTR_TO_JSON(speed, speed_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectTaskRequestFramesLayersMaterial& obj) { 
      DARABONBA_PTR_FROM_JSON(anchorStyleLevel, anchorStyleLevel_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(mask, mask_);
      DARABONBA_PTR_FROM_JSON(speed, speed_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(volume, volume_);
    };
    SubmitProjectTaskRequestFramesLayersMaterial() = default ;
    SubmitProjectTaskRequestFramesLayersMaterial(const SubmitProjectTaskRequestFramesLayersMaterial &) = default ;
    SubmitProjectTaskRequestFramesLayersMaterial(SubmitProjectTaskRequestFramesLayersMaterial &&) = default ;
    SubmitProjectTaskRequestFramesLayersMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectTaskRequestFramesLayersMaterial() = default ;
    SubmitProjectTaskRequestFramesLayersMaterial& operator=(const SubmitProjectTaskRequestFramesLayersMaterial &) = default ;
    SubmitProjectTaskRequestFramesLayersMaterial& operator=(SubmitProjectTaskRequestFramesLayersMaterial &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorStyleLevel_ == nullptr
        && return this->format_ == nullptr && return this->id_ == nullptr && return this->mask_ == nullptr && return this->speed_ == nullptr && return this->url_ == nullptr
        && return this->volume_ == nullptr; };
    // anchorStyleLevel Field Functions 
    bool hasAnchorStyleLevel() const { return this->anchorStyleLevel_ != nullptr;};
    void deleteAnchorStyleLevel() { this->anchorStyleLevel_ = nullptr;};
    inline string anchorStyleLevel() const { DARABONBA_PTR_GET_DEFAULT(anchorStyleLevel_, "") };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setAnchorStyleLevel(string anchorStyleLevel) { DARABONBA_PTR_SET_VALUE(anchorStyleLevel_, anchorStyleLevel) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline const Models::SubmitProjectTaskRequestFramesLayersMaterialMask & mask() const { DARABONBA_PTR_GET_CONST(mask_, Models::SubmitProjectTaskRequestFramesLayersMaterialMask) };
    inline Models::SubmitProjectTaskRequestFramesLayersMaterialMask mask() { DARABONBA_PTR_GET(mask_, Models::SubmitProjectTaskRequestFramesLayersMaterialMask) };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setMask(const Models::SubmitProjectTaskRequestFramesLayersMaterialMask & mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setMask(Models::SubmitProjectTaskRequestFramesLayersMaterialMask && mask) { DARABONBA_PTR_SET_RVALUE(mask_, mask) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SubmitProjectTaskRequestFramesLayersMaterial& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> anchorStyleLevel_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<Models::SubmitProjectTaskRequestFramesLayersMaterialMask> mask_ = nullptr;
    std::shared_ptr<string> speed_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
