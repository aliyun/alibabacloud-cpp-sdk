// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMESBLOCKFRAMES_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMESBLOCKFRAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetImageModerationResultResponseBodyModerationResultFramesBlockFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageModerationResultResponseBodyModerationResultFramesBlockFrames& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageModerationResultResponseBodyModerationResultFramesBlockFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    GetImageModerationResultResponseBodyModerationResultFramesBlockFrames() = default ;
    GetImageModerationResultResponseBodyModerationResultFramesBlockFrames(const GetImageModerationResultResponseBodyModerationResultFramesBlockFrames &) = default ;
    GetImageModerationResultResponseBodyModerationResultFramesBlockFrames(GetImageModerationResultResponseBodyModerationResultFramesBlockFrames &&) = default ;
    GetImageModerationResultResponseBodyModerationResultFramesBlockFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageModerationResultResponseBodyModerationResultFramesBlockFrames() = default ;
    GetImageModerationResultResponseBodyModerationResultFramesBlockFrames& operator=(const GetImageModerationResultResponseBodyModerationResultFramesBlockFrames &) = default ;
    GetImageModerationResultResponseBodyModerationResultFramesBlockFrames& operator=(GetImageModerationResultResponseBodyModerationResultFramesBlockFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->offset_ != nullptr && this->rate_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetImageModerationResultResponseBodyModerationResultFramesBlockFrames& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline GetImageModerationResultResponseBodyModerationResultFramesBlockFrames& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline GetImageModerationResultResponseBodyModerationResultFramesBlockFrames& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


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
