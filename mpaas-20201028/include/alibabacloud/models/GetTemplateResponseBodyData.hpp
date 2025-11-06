// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DescInfo, descInfo_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IconUrls, iconUrls_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_TO_JSON(ShowStyle, showStyle_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DescInfo, descInfo_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IconUrls, iconUrls_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_FROM_JSON(ShowStyle, showStyle_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    GetTemplateResponseBodyData() = default ;
    GetTemplateResponseBodyData(const GetTemplateResponseBodyData &) = default ;
    GetTemplateResponseBodyData(GetTemplateResponseBodyData &&) = default ;
    GetTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBodyData() = default ;
    GetTemplateResponseBodyData& operator=(const GetTemplateResponseBodyData &) = default ;
    GetTemplateResponseBodyData& operator=(GetTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->content_ == nullptr && return this->descInfo_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->iconUrls_ == nullptr
        && return this->id_ == nullptr && return this->imageUrls_ == nullptr && return this->name_ == nullptr && return this->pushStyle_ == nullptr && return this->showStyle_ == nullptr
        && return this->title_ == nullptr && return this->uri_ == nullptr && return this->variables_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetTemplateResponseBodyData& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetTemplateResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // descInfo Field Functions 
    bool hasDescInfo() const { return this->descInfo_ != nullptr;};
    void deleteDescInfo() { this->descInfo_ = nullptr;};
    inline string descInfo() const { DARABONBA_PTR_GET_DEFAULT(descInfo_, "") };
    inline GetTemplateResponseBodyData& setDescInfo(string descInfo) { DARABONBA_PTR_SET_VALUE(descInfo_, descInfo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTemplateResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetTemplateResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // iconUrls Field Functions 
    bool hasIconUrls() const { return this->iconUrls_ != nullptr;};
    void deleteIconUrls() { this->iconUrls_ = nullptr;};
    inline string iconUrls() const { DARABONBA_PTR_GET_DEFAULT(iconUrls_, "") };
    inline GetTemplateResponseBodyData& setIconUrls(string iconUrls) { DARABONBA_PTR_SET_VALUE(iconUrls_, iconUrls) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetTemplateResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline string imageUrls() const { DARABONBA_PTR_GET_DEFAULT(imageUrls_, "") };
    inline GetTemplateResponseBodyData& setImageUrls(string imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTemplateResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pushStyle Field Functions 
    bool hasPushStyle() const { return this->pushStyle_ != nullptr;};
    void deletePushStyle() { this->pushStyle_ = nullptr;};
    inline string pushStyle() const { DARABONBA_PTR_GET_DEFAULT(pushStyle_, "") };
    inline GetTemplateResponseBodyData& setPushStyle(string pushStyle) { DARABONBA_PTR_SET_VALUE(pushStyle_, pushStyle) };


    // showStyle Field Functions 
    bool hasShowStyle() const { return this->showStyle_ != nullptr;};
    void deleteShowStyle() { this->showStyle_ = nullptr;};
    inline string showStyle() const { DARABONBA_PTR_GET_DEFAULT(showStyle_, "") };
    inline GetTemplateResponseBodyData& setShowStyle(string showStyle) { DARABONBA_PTR_SET_VALUE(showStyle_, showStyle) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTemplateResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetTemplateResponseBodyData& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string variables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline GetTemplateResponseBodyData& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> descInfo_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> iconUrls_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> imageUrls_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pushStyle_ = nullptr;
    std::shared_ptr<string> showStyle_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
    std::shared_ptr<string> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
