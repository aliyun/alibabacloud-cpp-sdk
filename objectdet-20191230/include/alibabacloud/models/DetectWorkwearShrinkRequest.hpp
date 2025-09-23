// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clothes, clothesShrink_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clothes, clothesShrink_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    DetectWorkwearShrinkRequest() = default ;
    DetectWorkwearShrinkRequest(const DetectWorkwearShrinkRequest &) = default ;
    DetectWorkwearShrinkRequest(DetectWorkwearShrinkRequest &&) = default ;
    DetectWorkwearShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearShrinkRequest() = default ;
    DetectWorkwearShrinkRequest& operator=(const DetectWorkwearShrinkRequest &) = default ;
    DetectWorkwearShrinkRequest& operator=(DetectWorkwearShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clothesShrink_ != nullptr
        && this->imageUrl_ != nullptr && this->labels_ != nullptr; };
    // clothesShrink Field Functions 
    bool hasClothesShrink() const { return this->clothesShrink_ != nullptr;};
    void deleteClothesShrink() { this->clothesShrink_ = nullptr;};
    inline string clothesShrink() const { DARABONBA_PTR_GET_DEFAULT(clothesShrink_, "") };
    inline DetectWorkwearShrinkRequest& setClothesShrink(string clothesShrink) { DARABONBA_PTR_SET_VALUE(clothesShrink_, clothesShrink) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DetectWorkwearShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline DetectWorkwearShrinkRequest& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DetectWorkwearShrinkRequest& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    std::shared_ptr<string> clothesShrink_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    // 1
    std::shared_ptr<vector<string>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
