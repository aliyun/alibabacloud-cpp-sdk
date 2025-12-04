// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDatasetVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfoShrink_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfoShrink_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateDatasetVersionShrinkRequest() = default ;
    CreateDatasetVersionShrinkRequest(const CreateDatasetVersionShrinkRequest &) = default ;
    CreateDatasetVersionShrinkRequest(CreateDatasetVersionShrinkRequest &&) = default ;
    CreateDatasetVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetVersionShrinkRequest() = default ;
    CreateDatasetVersionShrinkRequest& operator=(const CreateDatasetVersionShrinkRequest &) = default ;
    CreateDatasetVersionShrinkRequest& operator=(CreateDatasetVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->datasetId_ == nullptr && return this->importInfoShrink_ == nullptr && return this->mountPath_ == nullptr && return this->url_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatasetVersionShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateDatasetVersionShrinkRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // importInfoShrink Field Functions 
    bool hasImportInfoShrink() const { return this->importInfoShrink_ != nullptr;};
    void deleteImportInfoShrink() { this->importInfoShrink_ = nullptr;};
    inline string importInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(importInfoShrink_, "") };
    inline CreateDatasetVersionShrinkRequest& setImportInfoShrink(string importInfoShrink) { DARABONBA_PTR_SET_VALUE(importInfoShrink_, importInfoShrink) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateDatasetVersionShrinkRequest& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateDatasetVersionShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<string> importInfoShrink_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
