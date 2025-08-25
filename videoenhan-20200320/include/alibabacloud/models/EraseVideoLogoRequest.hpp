// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ERASEVIDEOLOGOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ERASEVIDEOLOGOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EraseVideoLogoRequestBoxes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class EraseVideoLogoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EraseVideoLogoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, EraseVideoLogoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    EraseVideoLogoRequest() = default ;
    EraseVideoLogoRequest(const EraseVideoLogoRequest &) = default ;
    EraseVideoLogoRequest(EraseVideoLogoRequest &&) = default ;
    EraseVideoLogoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EraseVideoLogoRequest() = default ;
    EraseVideoLogoRequest& operator=(const EraseVideoLogoRequest &) = default ;
    EraseVideoLogoRequest& operator=(EraseVideoLogoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boxes_ != nullptr
        && this->videoUrl_ != nullptr; };
    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<EraseVideoLogoRequestBoxes> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<EraseVideoLogoRequestBoxes>) };
    inline vector<EraseVideoLogoRequestBoxes> boxes() { DARABONBA_PTR_GET(boxes_, vector<EraseVideoLogoRequestBoxes>) };
    inline EraseVideoLogoRequest& setBoxes(const vector<EraseVideoLogoRequestBoxes> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline EraseVideoLogoRequest& setBoxes(vector<EraseVideoLogoRequestBoxes> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline EraseVideoLogoRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<vector<EraseVideoLogoRequestBoxes>> boxes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
