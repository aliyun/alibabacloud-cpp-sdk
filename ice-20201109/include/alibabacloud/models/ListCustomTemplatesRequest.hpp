// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Subtype, subtype_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCustomTemplatesRequest() = default ;
    ListCustomTemplatesRequest(const ListCustomTemplatesRequest &) = default ;
    ListCustomTemplatesRequest(ListCustomTemplatesRequest &&) = default ;
    ListCustomTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomTemplatesRequest() = default ;
    ListCustomTemplatesRequest& operator=(const ListCustomTemplatesRequest &) = default ;
    ListCustomTemplatesRequest& operator=(ListCustomTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->orderBy_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->subtype_ != nullptr && this->templateId_ != nullptr
        && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCustomTemplatesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListCustomTemplatesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline string subtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, "") };
    inline ListCustomTemplatesRequest& setSubtype(string subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListCustomTemplatesRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCustomTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The order in which the entries are sorted. Valid values:
    // 
    // *   CreateTimeDesc: sorted by creation time in descending order.
    // *   CreateTimeAsc: sorted by creation time in ascending order.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The subtype ID of the template.
    // 
    // *   Valid values for transcoding templates:
    // 
    //     *   1 (Normal): regular template.
    //     *   2 (AudioTranscode): audio transcoding template.
    //     *   3 (Remux): container format conversion template.
    //     *   4 (NarrowBandV1): Narrowband HD 1.0 template.
    //     *   5 (NarrowBandV2): Narrowband HD 2.0 template.
    // 
    // *   Valid values for snapshot templates:
    // 
    //     *   1 (Normal): regular template.
    //     *   2 (Sprite): sprite template.
    //     *   3 (WebVtt): WebVTT template.
    // 
    // *   Valid values for AI-assisted content moderation templates:
    // 
    //     *   1 (Video): video moderation template.
    //     *   2 (Audio): audio moderation template.
    //     *   3 (Image): image moderation template.
    // 
    // *   Valid values for AI-assisted intelligent erasure templates:
    // 
    //     *   1 (VideoDelogo): logo erasure template.
    //     *   2 (VideoDetext): subtitle erasure template.
    std::shared_ptr<string> subtype_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template type. Valid values:
    // 
    // *   1: transcoding template.
    // *   2: snapshot template.
    // *   3: animated image template.
    // *   4\\. image watermark template.
    // *   5: text watermark template.
    // *   6: subtitle template.
    // *   7: AI-assisted content moderation template.
    // *   8: AI-assisted intelligent thumbnail template.
    // *   9: AI-assisted intelligent erasure template.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
