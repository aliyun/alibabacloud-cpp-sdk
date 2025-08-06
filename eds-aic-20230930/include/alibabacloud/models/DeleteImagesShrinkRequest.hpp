// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteImagesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImagesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageIds, imageIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImagesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIdsShrink_);
    };
    DeleteImagesShrinkRequest() = default ;
    DeleteImagesShrinkRequest(const DeleteImagesShrinkRequest &) = default ;
    DeleteImagesShrinkRequest(DeleteImagesShrinkRequest &&) = default ;
    DeleteImagesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImagesShrinkRequest() = default ;
    DeleteImagesShrinkRequest& operator=(const DeleteImagesShrinkRequest &) = default ;
    DeleteImagesShrinkRequest& operator=(DeleteImagesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageIdsShrink_ != nullptr; };
    // imageIdsShrink Field Functions 
    bool hasImageIdsShrink() const { return this->imageIdsShrink_ != nullptr;};
    void deleteImageIdsShrink() { this->imageIdsShrink_ = nullptr;};
    inline string imageIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(imageIdsShrink_, "") };
    inline DeleteImagesShrinkRequest& setImageIdsShrink(string imageIdsShrink) { DARABONBA_PTR_SET_VALUE(imageIdsShrink_, imageIdsShrink) };


  protected:
    // The IDs of the images.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
