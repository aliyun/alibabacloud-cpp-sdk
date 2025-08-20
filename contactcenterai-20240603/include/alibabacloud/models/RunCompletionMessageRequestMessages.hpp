// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGEREQUESTMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGEREQUESTMESSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionMessageRequestMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionMessageRequestMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionMessageRequestMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    RunCompletionMessageRequestMessages() = default ;
    RunCompletionMessageRequestMessages(const RunCompletionMessageRequestMessages &) = default ;
    RunCompletionMessageRequestMessages(RunCompletionMessageRequestMessages &&) = default ;
    RunCompletionMessageRequestMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionMessageRequestMessages() = default ;
    RunCompletionMessageRequestMessages& operator=(const RunCompletionMessageRequestMessages &) = default ;
    RunCompletionMessageRequestMessages& operator=(RunCompletionMessageRequestMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->role_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunCompletionMessageRequestMessages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline RunCompletionMessageRequestMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
