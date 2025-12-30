// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCascadedBundle, deleteCascadedBundle_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCascadedBundle, deleteCascadedBundle_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
    virtual bool empty() const override { return this->deleteCascadedBundle_ == nullptr
        && this->imageId_ == nullptr && this->regionId_ == nullptr; };
    // deleteCascadedBundle Field Functions 
    bool hasDeleteCascadedBundle() const { return this->deleteCascadedBundle_ != nullptr;};
    void deleteDeleteCascadedBundle() { this->deleteCascadedBundle_ = nullptr;};
    inline bool getDeleteCascadedBundle() const { DARABONBA_PTR_GET_DEFAULT(deleteCascadedBundle_, false) };
    inline DeleteImagesRequest& setDeleteCascadedBundle(bool deleteCascadedBundle) { DARABONBA_PTR_SET_VALUE(deleteCascadedBundle_, deleteCascadedBundle) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline const vector<string> & getImageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
    inline vector<string> getImageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
    inline DeleteImagesRequest& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
    inline DeleteImagesRequest& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteImagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to delete the associated template.
    shared_ptr<bool> deleteCascadedBundle_ {};
    // The image IDs. You can specify 1 to 100 image IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> imageId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
