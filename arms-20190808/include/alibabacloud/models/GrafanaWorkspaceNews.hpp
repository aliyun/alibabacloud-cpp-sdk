// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACENEWS_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACENEWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceNews& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(link, link_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceNews& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(link, link_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    GrafanaWorkspaceNews() = default ;
    GrafanaWorkspaceNews(const GrafanaWorkspaceNews &) = default ;
    GrafanaWorkspaceNews(GrafanaWorkspaceNews &&) = default ;
    GrafanaWorkspaceNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceNews() = default ;
    GrafanaWorkspaceNews& operator=(const GrafanaWorkspaceNews &) = default ;
    GrafanaWorkspaceNews& operator=(GrafanaWorkspaceNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->description_ != nullptr && this->image_ != nullptr && this->link_ != nullptr && this->title_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline int64_t date() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
    inline GrafanaWorkspaceNews& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GrafanaWorkspaceNews& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GrafanaWorkspaceNews& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline GrafanaWorkspaceNews& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GrafanaWorkspaceNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> date_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
