// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATARESPONSECHOICESMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATARESPONSECHOICESMESSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunAgentResponseBodyDataResponseChoicesMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentResponseBodyDataResponseChoicesMessage& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(roleDisplayName, roleDisplayName_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentResponseBodyDataResponseChoicesMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(roleDisplayName, roleDisplayName_);
    };
    RunAgentResponseBodyDataResponseChoicesMessage() = default ;
    RunAgentResponseBodyDataResponseChoicesMessage(const RunAgentResponseBodyDataResponseChoicesMessage &) = default ;
    RunAgentResponseBodyDataResponseChoicesMessage(RunAgentResponseBodyDataResponseChoicesMessage &&) = default ;
    RunAgentResponseBodyDataResponseChoicesMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentResponseBodyDataResponseChoicesMessage() = default ;
    RunAgentResponseBodyDataResponseChoicesMessage& operator=(const RunAgentResponseBodyDataResponseChoicesMessage &) = default ;
    RunAgentResponseBodyDataResponseChoicesMessage& operator=(RunAgentResponseBodyDataResponseChoicesMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->role_ != nullptr && this->roleDisplayName_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunAgentResponseBodyDataResponseChoicesMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline RunAgentResponseBodyDataResponseChoicesMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // roleDisplayName Field Functions 
    bool hasRoleDisplayName() const { return this->roleDisplayName_ != nullptr;};
    void deleteRoleDisplayName() { this->roleDisplayName_ = nullptr;};
    inline string roleDisplayName() const { DARABONBA_PTR_GET_DEFAULT(roleDisplayName_, "") };
    inline RunAgentResponseBodyDataResponseChoicesMessage& setRoleDisplayName(string roleDisplayName) { DARABONBA_PTR_SET_VALUE(roleDisplayName_, roleDisplayName) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> roleDisplayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
