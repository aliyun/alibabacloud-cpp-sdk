// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMESBLOCKFRAMES_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMESBLOCKFRAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames() = default ;
    GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames(const GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames &) = default ;
    GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames(GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames &&) = default ;
    GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames() = default ;
    GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames& operator=(const GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames &) = default ;
    GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames& operator=(GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->offset_ == nullptr && return this->rate_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


  protected:
    // The label of the violation.
    std::shared_ptr<string> label_ = nullptr;
    // The offset of the frame.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // The confidence level of the violation.
    std::shared_ptr<double> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
