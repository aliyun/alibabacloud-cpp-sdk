// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVEINTERACTIONEUCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVEINTERACTIONEUCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ActiveInteractionEuCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveInteractionEuCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(image, image_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveInteractionEuCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(image, image_);
    };
    ActiveInteractionEuCreateRequest() = default ;
    ActiveInteractionEuCreateRequest(const ActiveInteractionEuCreateRequest &) = default ;
    ActiveInteractionEuCreateRequest(ActiveInteractionEuCreateRequest &&) = default ;
    ActiveInteractionEuCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveInteractionEuCreateRequest() = default ;
    ActiveInteractionEuCreateRequest& operator=(const ActiveInteractionEuCreateRequest &) = default ;
    ActiveInteractionEuCreateRequest& operator=(ActiveInteractionEuCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ActiveInteractionEuCreateRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
