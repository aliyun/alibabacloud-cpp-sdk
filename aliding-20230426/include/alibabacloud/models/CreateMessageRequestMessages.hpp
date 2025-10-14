// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMessageRequestMessagesContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageRequestMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageRequestMessages& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_TO_JSON(createAt, createAt_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageRequestMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_FROM_JSON(createAt, createAt_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    CreateMessageRequestMessages() = default ;
    CreateMessageRequestMessages(const CreateMessageRequestMessages &) = default ;
    CreateMessageRequestMessages(CreateMessageRequestMessages &&) = default ;
    CreateMessageRequestMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageRequestMessages() = default ;
    CreateMessageRequestMessages& operator=(const CreateMessageRequestMessages &) = default ;
    CreateMessageRequestMessages& operator=(CreateMessageRequestMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentDesc_ == nullptr && return this->createAt_ == nullptr && return this->role_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::CreateMessageRequestMessagesContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::CreateMessageRequestMessagesContent) };
    inline Models::CreateMessageRequestMessagesContent content() { DARABONBA_PTR_GET(content_, Models::CreateMessageRequestMessagesContent) };
    inline CreateMessageRequestMessages& setContent(const Models::CreateMessageRequestMessagesContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CreateMessageRequestMessages& setContent(Models::CreateMessageRequestMessagesContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // contentDesc Field Functions 
    bool hasContentDesc() const { return this->contentDesc_ != nullptr;};
    void deleteContentDesc() { this->contentDesc_ = nullptr;};
    inline string contentDesc() const { DARABONBA_PTR_GET_DEFAULT(contentDesc_, "") };
    inline CreateMessageRequestMessages& setContentDesc(string contentDesc) { DARABONBA_PTR_SET_VALUE(contentDesc_, contentDesc) };


    // createAt Field Functions 
    bool hasCreateAt() const { return this->createAt_ != nullptr;};
    void deleteCreateAt() { this->createAt_ = nullptr;};
    inline int64_t createAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
    inline CreateMessageRequestMessages& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateMessageRequestMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<Models::CreateMessageRequestMessagesContent> content_ = nullptr;
    std::shared_ptr<string> contentDesc_ = nullptr;
    std::shared_ptr<int64_t> createAt_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
