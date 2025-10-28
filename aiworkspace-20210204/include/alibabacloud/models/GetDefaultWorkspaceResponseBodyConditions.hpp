// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODYCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODYCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDefaultWorkspaceResponseBodyConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultWorkspaceResponseBodyConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultWorkspaceResponseBodyConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDefaultWorkspaceResponseBodyConditions() = default ;
    GetDefaultWorkspaceResponseBodyConditions(const GetDefaultWorkspaceResponseBodyConditions &) = default ;
    GetDefaultWorkspaceResponseBodyConditions(GetDefaultWorkspaceResponseBodyConditions &&) = default ;
    GetDefaultWorkspaceResponseBodyConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultWorkspaceResponseBodyConditions() = default ;
    GetDefaultWorkspaceResponseBodyConditions& operator=(const GetDefaultWorkspaceResponseBodyConditions &) = default ;
    GetDefaultWorkspaceResponseBodyConditions& operator=(GetDefaultWorkspaceResponseBodyConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetDefaultWorkspaceResponseBodyConditions& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDefaultWorkspaceResponseBodyConditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDefaultWorkspaceResponseBodyConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The returned status code. HTTP status code 200 indicates that the request was successful. Other HTTP status codes indicate that the request failed.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The error message. If the returned status code is 200, this parameter is empty.
    std::shared_ptr<string> message_ = nullptr;
    // The task type. Valid values:
    // 
    // *   CREATING: The workspace is being created.
    // *   WORKSPACE_CREATED: The workspace is created.
    // *   MEMBERS_ADDED: The member is added.
    // *   ENABLED: The workspace is created and the member is added.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
