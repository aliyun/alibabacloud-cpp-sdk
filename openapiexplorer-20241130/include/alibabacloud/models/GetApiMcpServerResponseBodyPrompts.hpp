// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODYPROMPTS_HPP_
#define ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODYPROMPTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApiMcpServerResponseBodyPromptsArguments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetApiMcpServerResponseBodyPrompts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiMcpServerResponseBodyPrompts& obj) { 
      DARABONBA_PTR_TO_JSON(arguments, arguments_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiMcpServerResponseBodyPrompts& obj) { 
      DARABONBA_PTR_FROM_JSON(arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetApiMcpServerResponseBodyPrompts() = default ;
    GetApiMcpServerResponseBodyPrompts(const GetApiMcpServerResponseBodyPrompts &) = default ;
    GetApiMcpServerResponseBodyPrompts(GetApiMcpServerResponseBodyPrompts &&) = default ;
    GetApiMcpServerResponseBodyPrompts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiMcpServerResponseBodyPrompts() = default ;
    GetApiMcpServerResponseBodyPrompts& operator=(const GetApiMcpServerResponseBodyPrompts &) = default ;
    GetApiMcpServerResponseBodyPrompts& operator=(GetApiMcpServerResponseBodyPrompts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arguments_ == nullptr
        && return this->content_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr; };
    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline const vector<Models::GetApiMcpServerResponseBodyPromptsArguments> & arguments() const { DARABONBA_PTR_GET_CONST(arguments_, vector<Models::GetApiMcpServerResponseBodyPromptsArguments>) };
    inline vector<Models::GetApiMcpServerResponseBodyPromptsArguments> arguments() { DARABONBA_PTR_GET(arguments_, vector<Models::GetApiMcpServerResponseBodyPromptsArguments>) };
    inline GetApiMcpServerResponseBodyPrompts& setArguments(const vector<Models::GetApiMcpServerResponseBodyPromptsArguments> & arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };
    inline GetApiMcpServerResponseBodyPrompts& setArguments(vector<Models::GetApiMcpServerResponseBodyPromptsArguments> && arguments) { DARABONBA_PTR_SET_RVALUE(arguments_, arguments) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetApiMcpServerResponseBodyPrompts& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApiMcpServerResponseBodyPrompts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApiMcpServerResponseBodyPrompts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<Models::GetApiMcpServerResponseBodyPromptsArguments>> arguments_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
