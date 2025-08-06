// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSRESPONSEBODYNONEXISTIMAGEIDS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSRESPONSEBODYNONEXISTIMAGEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateImageInfosResponseBodyNonExistImageIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageInfosResponseBodyNonExistImageIds& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageInfosResponseBodyNonExistImageIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
    };
    UpdateImageInfosResponseBodyNonExistImageIds() = default ;
    UpdateImageInfosResponseBodyNonExistImageIds(const UpdateImageInfosResponseBodyNonExistImageIds &) = default ;
    UpdateImageInfosResponseBodyNonExistImageIds(UpdateImageInfosResponseBodyNonExistImageIds &&) = default ;
    UpdateImageInfosResponseBodyNonExistImageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageInfosResponseBodyNonExistImageIds() = default ;
    UpdateImageInfosResponseBodyNonExistImageIds& operator=(const UpdateImageInfosResponseBodyNonExistImageIds &) = default ;
    UpdateImageInfosResponseBodyNonExistImageIds& operator=(UpdateImageInfosResponseBodyNonExistImageIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline const vector<string> & imageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
    inline vector<string> imageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
    inline UpdateImageInfosResponseBodyNonExistImageIds& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
    inline UpdateImageInfosResponseBodyNonExistImageIds& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


  protected:
    std::shared_ptr<vector<string>> imageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
