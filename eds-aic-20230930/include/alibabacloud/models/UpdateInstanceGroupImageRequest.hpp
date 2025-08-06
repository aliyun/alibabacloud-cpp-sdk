// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEGROUPIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEGROUPIMAGEREQUEST_HPP_
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
  class UpdateInstanceGroupImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceGroupImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceGroupImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
    };
    UpdateInstanceGroupImageRequest() = default ;
    UpdateInstanceGroupImageRequest(const UpdateInstanceGroupImageRequest &) = default ;
    UpdateInstanceGroupImageRequest(UpdateInstanceGroupImageRequest &&) = default ;
    UpdateInstanceGroupImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceGroupImageRequest() = default ;
    UpdateInstanceGroupImageRequest& operator=(const UpdateInstanceGroupImageRequest &) = default ;
    UpdateInstanceGroupImageRequest& operator=(UpdateInstanceGroupImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->instanceGroupIds_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateInstanceGroupImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & instanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> instanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline UpdateInstanceGroupImageRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline UpdateInstanceGroupImageRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


  protected:
    // The ID of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The IDs of the instance groups.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
