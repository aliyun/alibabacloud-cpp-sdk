// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGELABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGELABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListImageLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LabelFilter, labelFilter_);
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LabelFilter, labelFilter_);
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListImageLabelsRequest() = default ;
    ListImageLabelsRequest(const ListImageLabelsRequest &) = default ;
    ListImageLabelsRequest(ListImageLabelsRequest &&) = default ;
    ListImageLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageLabelsRequest() = default ;
    ListImageLabelsRequest& operator=(const ListImageLabelsRequest &) = default ;
    ListImageLabelsRequest& operator=(ListImageLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->labelFilter_ == nullptr && return this->labelKeys_ == nullptr && return this->region_ == nullptr && return this->workspaceId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImageLabelsRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // labelFilter Field Functions 
    bool hasLabelFilter() const { return this->labelFilter_ != nullptr;};
    void deleteLabelFilter() { this->labelFilter_ = nullptr;};
    inline string labelFilter() const { DARABONBA_PTR_GET_DEFAULT(labelFilter_, "") };
    inline ListImageLabelsRequest& setLabelFilter(string labelFilter) { DARABONBA_PTR_SET_VALUE(labelFilter_, labelFilter) };


    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline string labelKeys() const { DARABONBA_PTR_GET_DEFAULT(labelKeys_, "") };
    inline ListImageLabelsRequest& setLabelKeys(string labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListImageLabelsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListImageLabelsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The image ID. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The tag filter conditions, separated with commas (,). The format of a single condition filter is `key=value`. Takes effect independently from LabelKeys.
    std::shared_ptr<string> labelFilter_ = nullptr;
    // The tag keys, separated with commas (,). System tags start with system and take effect independently from LabelFilter.
    std::shared_ptr<string> labelKeys_ = nullptr;
    // The region where the image resides.
    std::shared_ptr<string> region_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
