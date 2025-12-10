// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATATEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATATEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListTemplatesResponseBodyTemplateDataTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBodyTemplateDataTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(DocLink, docLink_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ImageLink, imageLink_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBodyTemplateDataTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(DocLink, docLink_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ImageLink, imageLink_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ListTemplatesResponseBodyTemplateDataTemplate() = default ;
    ListTemplatesResponseBodyTemplateDataTemplate(const ListTemplatesResponseBodyTemplateDataTemplate &) = default ;
    ListTemplatesResponseBodyTemplateDataTemplate(ListTemplatesResponseBodyTemplateDataTemplate &&) = default ;
    ListTemplatesResponseBodyTemplateDataTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBodyTemplateDataTemplate() = default ;
    ListTemplatesResponseBodyTemplateDataTemplate& operator=(const ListTemplatesResponseBodyTemplateDataTemplate &) = default ;
    ListTemplatesResponseBodyTemplateDataTemplate& operator=(ListTemplatesResponseBodyTemplateDataTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->creator_ == nullptr && return this->description_ == nullptr && return this->detail_ == nullptr && return this->docLink_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtModifiedTime_ == nullptr && return this->imageLink_ == nullptr && return this->labels_ == nullptr && return this->name_ == nullptr && return this->templateId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // docLink Field Functions 
    bool hasDocLink() const { return this->docLink_ != nullptr;};
    void deleteDocLink() { this->docLink_ = nullptr;};
    inline string docLink() const { DARABONBA_PTR_GET_DEFAULT(docLink_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setDocLink(string docLink) { DARABONBA_PTR_SET_VALUE(docLink_, docLink) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // imageLink Field Functions 
    bool hasImageLink() const { return this->imageLink_ != nullptr;};
    void deleteImageLink() { this->imageLink_ = nullptr;};
    inline string imageLink() const { DARABONBA_PTR_GET_DEFAULT(imageLink_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setImageLink(string imageLink) { DARABONBA_PTR_SET_VALUE(imageLink_, imageLink) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Darabonba::Json> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> labels() { DARABONBA_PTR_GET(labels_, vector<Darabonba::Json>) };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setLabels(const vector<Darabonba::Json> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setLabels(vector<Darabonba::Json> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> docLink_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> imageLink_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> labels_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
