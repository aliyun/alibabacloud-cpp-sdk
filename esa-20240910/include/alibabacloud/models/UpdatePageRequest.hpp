// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdatePageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdatePageRequest() = default ;
    UpdatePageRequest(const UpdatePageRequest &) = default ;
    UpdatePageRequest(UpdatePageRequest &&) = default ;
    UpdatePageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePageRequest() = default ;
    UpdatePageRequest& operator=(const UpdatePageRequest &) = default ;
    UpdatePageRequest& operator=(UpdatePageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentType_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdatePageRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UpdatePageRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdatePageRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The Base64-encoded content of the error page. The content type is specified by the Content-Type field.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The Content-Type field in the HTTP header. Valid values:
    // 
    // *   text/html
    // *   application/json
    // 
    // This parameter is required.
    std::shared_ptr<string> contentType_ = nullptr;
    // The description of the custom error page.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the custom error page, which can be obtained by calling the [ListPages](https://help.aliyun.com/document_detail/2850223.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the custom error page.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
