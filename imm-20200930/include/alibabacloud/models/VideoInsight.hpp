// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOINSIGHT_HPP_
#define ALIBABACLOUD_MODELS_VIDEOINSIGHT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoInsight : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoInsight& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, VideoInsight& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    VideoInsight() = default ;
    VideoInsight(const VideoInsight &) = default ;
    VideoInsight(VideoInsight &&) = default ;
    VideoInsight(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoInsight() = default ;
    VideoInsight& operator=(const VideoInsight &) = default ;
    VideoInsight& operator=(VideoInsight &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr
        && return this->description_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline VideoInsight& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline VideoInsight& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> caption_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
