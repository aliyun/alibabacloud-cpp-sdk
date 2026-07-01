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
    virtual bool empty() const override { return this->name_ == nullptr
        && this->orderBy_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->subtype_ == nullptr && this->templateId_ == nullptr
        && this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCustomTemplatesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListCustomTemplatesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline string getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, "") };
    inline ListCustomTemplatesRequest& setSubtype(string subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListCustomTemplatesRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCustomTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the template.
    shared_ptr<string> name_ {};
    // The sort order of the results. Valid values:
    // 
    // - `CreationTime:Desc`: Sorts the results by Creation Time in descending order.
    // 
    // - `CreationTime:Asc`: Sorts the results by Creation Time in ascending order.
    shared_ptr<string> orderBy_ {};
    // The page number of the results to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The subtype of the template. This parameter applies only when `Type` is set to 1, 2, 7, or 9.
    // 
    // - Transcoding Template subtypes:
    // 
    //   - 1: Normal (`Normal`)
    // 
    //   - 2: Audio-only (`AudioTranscode`)
    // 
    //   - 3: Remuxing (`Remux`)
    // 
    //   - 4: Narrowband HD 1.0 (`NarrowBandV1`)
    // 
    //   - 5: Narrowband HD 2.0 (`NarrowBandV2`)
    // 
    // - Screenshot Template subtypes:
    // 
    //   - 1: Normal (`Normal`)
    // 
    //   - 2: Sprite Image (`Sprite`)
    // 
    //   - 3: WebVTT (`WebVtt`)
    // 
    // - AI Content Moderation subtypes:
    // 
    //   - 1: Video moderation (`Video`)
    // 
    //   - 2: Audio moderation (`Audio`)
    // 
    //   - 3: Image moderation (`Image`)
    // 
    // - AI-powered Object Removal subtypes:
    // 
    //   - 1: Logo Removal (`VideoDelogo`)
    // 
    //   - 2: Text Removal (`VideoDetext`)
    shared_ptr<string> subtype_ {};
    // The ID of the template.
    shared_ptr<string> templateId_ {};
    // The type of the template. Valid values:
    // 
    // - 1: Transcoding Template
    // 
    // - 2: Screenshot Template
    // 
    // - 3: Animated GIF Template
    // 
    // - 4: Image Watermark Template
    // 
    // - 5: Text Watermark Template
    // 
    // - 6: Subtitle Template
    // 
    // - 7: AI Content Moderation
    // 
    // - 8: AI-powered Smart Cover
    // 
    // - 9: AI-powered Object Removal
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
