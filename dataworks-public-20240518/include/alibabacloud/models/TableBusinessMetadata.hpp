// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEBUSINESSMETADATA_HPP_
#define ALIBABACLOUD_MODELS_TABLEBUSINESSMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableBusinessMetadataCategories.hpp>
#include <alibabacloud/models/TableBusinessMetadataExtension.hpp>
#include <alibabacloud/models/TableBusinessMetadataTags.hpp>
#include <alibabacloud/models/TableBusinessMetadataUpstreamTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TableBusinessMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableBusinessMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(Readme, readme_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpstreamTasks, upstreamTasks_);
    };
    friend void from_json(const Darabonba::Json& j, TableBusinessMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(Readme, readme_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpstreamTasks, upstreamTasks_);
    };
    TableBusinessMetadata() = default ;
    TableBusinessMetadata(const TableBusinessMetadata &) = default ;
    TableBusinessMetadata(TableBusinessMetadata &&) = default ;
    TableBusinessMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableBusinessMetadata() = default ;
    TableBusinessMetadata& operator=(const TableBusinessMetadata &) = default ;
    TableBusinessMetadata& operator=(TableBusinessMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && return this->extension_ == nullptr && return this->readme_ == nullptr && return this->tags_ == nullptr && return this->upstreamTasks_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<vector<Models::TableBusinessMetadataCategories>> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<vector<Models::TableBusinessMetadataCategories>>) };
    inline vector<vector<Models::TableBusinessMetadataCategories>> categories() { DARABONBA_PTR_GET(categories_, vector<vector<Models::TableBusinessMetadataCategories>>) };
    inline TableBusinessMetadata& setCategories(const vector<vector<Models::TableBusinessMetadataCategories>> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline TableBusinessMetadata& setCategories(vector<vector<Models::TableBusinessMetadataCategories>> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const Models::TableBusinessMetadataExtension & extension() const { DARABONBA_PTR_GET_CONST(extension_, Models::TableBusinessMetadataExtension) };
    inline Models::TableBusinessMetadataExtension extension() { DARABONBA_PTR_GET(extension_, Models::TableBusinessMetadataExtension) };
    inline TableBusinessMetadata& setExtension(const Models::TableBusinessMetadataExtension & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline TableBusinessMetadata& setExtension(Models::TableBusinessMetadataExtension && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


    // readme Field Functions 
    bool hasReadme() const { return this->readme_ != nullptr;};
    void deleteReadme() { this->readme_ = nullptr;};
    inline string readme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
    inline TableBusinessMetadata& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::TableBusinessMetadataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::TableBusinessMetadataTags>) };
    inline vector<Models::TableBusinessMetadataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::TableBusinessMetadataTags>) };
    inline TableBusinessMetadata& setTags(const vector<Models::TableBusinessMetadataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TableBusinessMetadata& setTags(vector<Models::TableBusinessMetadataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // upstreamTasks Field Functions 
    bool hasUpstreamTasks() const { return this->upstreamTasks_ != nullptr;};
    void deleteUpstreamTasks() { this->upstreamTasks_ = nullptr;};
    inline const vector<Models::TableBusinessMetadataUpstreamTasks> & upstreamTasks() const { DARABONBA_PTR_GET_CONST(upstreamTasks_, vector<Models::TableBusinessMetadataUpstreamTasks>) };
    inline vector<Models::TableBusinessMetadataUpstreamTasks> upstreamTasks() { DARABONBA_PTR_GET(upstreamTasks_, vector<Models::TableBusinessMetadataUpstreamTasks>) };
    inline TableBusinessMetadata& setUpstreamTasks(const vector<Models::TableBusinessMetadataUpstreamTasks> & upstreamTasks) { DARABONBA_PTR_SET_VALUE(upstreamTasks_, upstreamTasks) };
    inline TableBusinessMetadata& setUpstreamTasks(vector<Models::TableBusinessMetadataUpstreamTasks> && upstreamTasks) { DARABONBA_PTR_SET_RVALUE(upstreamTasks_, upstreamTasks) };


  protected:
    std::shared_ptr<vector<vector<Models::TableBusinessMetadataCategories>>> categories_ = nullptr;
    std::shared_ptr<Models::TableBusinessMetadataExtension> extension_ = nullptr;
    std::shared_ptr<string> readme_ = nullptr;
    std::shared_ptr<vector<Models::TableBusinessMetadataTags>> tags_ = nullptr;
    std::shared_ptr<vector<Models::TableBusinessMetadataUpstreamTasks>> upstreamTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
