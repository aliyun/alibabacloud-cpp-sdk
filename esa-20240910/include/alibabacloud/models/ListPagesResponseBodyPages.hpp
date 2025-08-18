// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPAGESRESPONSEBODYPAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTPAGESRESPONSEBODYPAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListPagesResponseBodyPages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPagesResponseBodyPages& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPagesResponseBodyPages& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListPagesResponseBodyPages() = default ;
    ListPagesResponseBodyPages(const ListPagesResponseBodyPages &) = default ;
    ListPagesResponseBodyPages(ListPagesResponseBodyPages &&) = default ;
    ListPagesResponseBodyPages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPagesResponseBodyPages() = default ;
    ListPagesResponseBodyPages& operator=(const ListPagesResponseBodyPages &) = default ;
    ListPagesResponseBodyPages& operator=(ListPagesResponseBodyPages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentType_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->kind_ != nullptr && this->name_ != nullptr
        && this->updateTime_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListPagesResponseBodyPages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ListPagesResponseBodyPages& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPagesResponseBodyPages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListPagesResponseBodyPages& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListPagesResponseBodyPages& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPagesResponseBodyPages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListPagesResponseBodyPages& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The Base64-encoded content of the error page. The content type is specified by the Content-Type field.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The Content-Type field in the HTTP header.
    // 
    // This parameter is required.
    std::shared_ptr<string> contentType_ = nullptr;
    // The description of the custom error page.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the custom error page.[](~~2850223~~)
    std::shared_ptr<int64_t> id_ = nullptr;
    // The type of the custom error page.
    std::shared_ptr<string> kind_ = nullptr;
    // The name of the custom error page.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the custom error page was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
