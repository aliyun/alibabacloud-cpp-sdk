// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBYINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBYINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateImageByInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageByInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageByInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateImageByInstanceResponseBodyData() = default ;
    CreateImageByInstanceResponseBodyData(const CreateImageByInstanceResponseBodyData &) = default ;
    CreateImageByInstanceResponseBodyData(CreateImageByInstanceResponseBodyData &&) = default ;
    CreateImageByInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageByInstanceResponseBodyData() = default ;
    CreateImageByInstanceResponseBodyData& operator=(const CreateImageByInstanceResponseBodyData &) = default ;
    CreateImageByInstanceResponseBodyData& operator=(CreateImageByInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->taskId_ == nullptr && return this->versionId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateImageByInstanceResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateImageByInstanceResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateImageByInstanceResponseBodyData& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the RDS image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the image creation task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
