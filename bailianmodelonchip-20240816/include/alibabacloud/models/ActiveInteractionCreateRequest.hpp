// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVEINTERACTIONCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVEINTERACTIONCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ActiveInteractionCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveInteractionCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(image, image_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveInteractionCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(image, image_);
    };
    ActiveInteractionCreateRequest() = default ;
    ActiveInteractionCreateRequest(const ActiveInteractionCreateRequest &) = default ;
    ActiveInteractionCreateRequest(ActiveInteractionCreateRequest &&) = default ;
    ActiveInteractionCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveInteractionCreateRequest() = default ;
    ActiveInteractionCreateRequest& operator=(const ActiveInteractionCreateRequest &) = default ;
    ActiveInteractionCreateRequest& operator=(ActiveInteractionCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ActiveInteractionCreateRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
