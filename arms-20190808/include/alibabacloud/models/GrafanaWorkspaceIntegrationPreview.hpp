// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATIONPREVIEW_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATIONPREVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceIntegrationPreview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceIntegrationPreview& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(thumbnail, thumbnail_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceIntegrationPreview& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(thumbnail, thumbnail_);
    };
    GrafanaWorkspaceIntegrationPreview() = default ;
    GrafanaWorkspaceIntegrationPreview(const GrafanaWorkspaceIntegrationPreview &) = default ;
    GrafanaWorkspaceIntegrationPreview(GrafanaWorkspaceIntegrationPreview &&) = default ;
    GrafanaWorkspaceIntegrationPreview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceIntegrationPreview() = default ;
    GrafanaWorkspaceIntegrationPreview& operator=(const GrafanaWorkspaceIntegrationPreview &) = default ;
    GrafanaWorkspaceIntegrationPreview& operator=(GrafanaWorkspaceIntegrationPreview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->image_ != nullptr && this->name_ != nullptr && this->thumbnail_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GrafanaWorkspaceIntegrationPreview& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GrafanaWorkspaceIntegrationPreview& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GrafanaWorkspaceIntegrationPreview& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline string thumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
    inline GrafanaWorkspaceIntegrationPreview& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> thumbnail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
