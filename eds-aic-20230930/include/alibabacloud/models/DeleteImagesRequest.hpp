// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
    };
    DeleteImagesRequest() = default ;
    DeleteImagesRequest(const DeleteImagesRequest &) = default ;
    DeleteImagesRequest(DeleteImagesRequest &&) = default ;
    DeleteImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImagesRequest() = default ;
    DeleteImagesRequest& operator=(const DeleteImagesRequest &) = default ;
    DeleteImagesRequest& operator=(DeleteImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageIds_ != nullptr; };
    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline const vector<string> & imageIds() const { DARABONBA_PTR_GET_CONST(imageIds_, vector<string>) };
    inline vector<string> imageIds() { DARABONBA_PTR_GET(imageIds_, vector<string>) };
    inline DeleteImagesRequest& setImageIds(const vector<string> & imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };
    inline DeleteImagesRequest& setImageIds(vector<string> && imageIds) { DARABONBA_PTR_SET_RVALUE(imageIds_, imageIds) };


  protected:
    // The IDs of the images.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> imageIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
