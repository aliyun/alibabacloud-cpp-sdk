// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessages& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_TO_JSON(createAt, createAt_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_FROM_JSON(createAt, createAt_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    InvokeAssistantRequestMessages() = default ;
    InvokeAssistantRequestMessages(const InvokeAssistantRequestMessages &) = default ;
    InvokeAssistantRequestMessages(InvokeAssistantRequestMessages &&) = default ;
    InvokeAssistantRequestMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessages() = default ;
    InvokeAssistantRequestMessages& operator=(const InvokeAssistantRequestMessages &) = default ;
    InvokeAssistantRequestMessages& operator=(InvokeAssistantRequestMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentDesc_ != nullptr && this->createAt_ != nullptr && this->role_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::InvokeAssistantRequestMessagesContent) };
    inline Models::InvokeAssistantRequestMessagesContent content() { DARABONBA_PTR_GET(content_, Models::InvokeAssistantRequestMessagesContent) };
    inline InvokeAssistantRequestMessages& setContent(const Models::InvokeAssistantRequestMessagesContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline InvokeAssistantRequestMessages& setContent(Models::InvokeAssistantRequestMessagesContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // contentDesc Field Functions 
    bool hasContentDesc() const { return this->contentDesc_ != nullptr;};
    void deleteContentDesc() { this->contentDesc_ = nullptr;};
    inline string contentDesc() const { DARABONBA_PTR_GET_DEFAULT(contentDesc_, "") };
    inline InvokeAssistantRequestMessages& setContentDesc(string contentDesc) { DARABONBA_PTR_SET_VALUE(contentDesc_, contentDesc) };


    // createAt Field Functions 
    bool hasCreateAt() const { return this->createAt_ != nullptr;};
    void deleteCreateAt() { this->createAt_ = nullptr;};
    inline int64_t createAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
    inline InvokeAssistantRequestMessages& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline InvokeAssistantRequestMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContent> content_ = nullptr;
    std::shared_ptr<string> contentDesc_ = nullptr;
    std::shared_ptr<int64_t> createAt_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
