// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCUSTOMPROMPT_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCUSTOMPROMPT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTaskRequestParametersCustomPromptContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersCustomPrompt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersCustomPrompt& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersCustomPrompt& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
    };
    CreateTaskRequestParametersCustomPrompt() = default ;
    CreateTaskRequestParametersCustomPrompt(const CreateTaskRequestParametersCustomPrompt &) = default ;
    CreateTaskRequestParametersCustomPrompt(CreateTaskRequestParametersCustomPrompt &&) = default ;
    CreateTaskRequestParametersCustomPrompt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersCustomPrompt() = default ;
    CreateTaskRequestParametersCustomPrompt& operator=(const CreateTaskRequestParametersCustomPrompt &) = default ;
    CreateTaskRequestParametersCustomPrompt& operator=(CreateTaskRequestParametersCustomPrompt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<Models::CreateTaskRequestParametersCustomPromptContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Models::CreateTaskRequestParametersCustomPromptContents>) };
    inline vector<Models::CreateTaskRequestParametersCustomPromptContents> contents() { DARABONBA_PTR_GET(contents_, vector<Models::CreateTaskRequestParametersCustomPromptContents>) };
    inline CreateTaskRequestParametersCustomPrompt& setContents(const vector<Models::CreateTaskRequestParametersCustomPromptContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline CreateTaskRequestParametersCustomPrompt& setContents(vector<Models::CreateTaskRequestParametersCustomPromptContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


  protected:
    std::shared_ptr<vector<Models::CreateTaskRequestParametersCustomPromptContents>> contents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
