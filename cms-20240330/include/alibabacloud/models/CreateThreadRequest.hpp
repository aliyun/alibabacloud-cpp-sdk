// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETHREADREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateThreadRequestVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateThreadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThreadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThreadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    CreateThreadRequest() = default ;
    CreateThreadRequest(const CreateThreadRequest &) = default ;
    CreateThreadRequest(CreateThreadRequest &&) = default ;
    CreateThreadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThreadRequest() = default ;
    CreateThreadRequest& operator=(const CreateThreadRequest &) = default ;
    CreateThreadRequest& operator=(CreateThreadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->title_ == nullptr
        && return this->variables_ == nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateThreadRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const CreateThreadRequestVariables & variables() const { DARABONBA_PTR_GET_CONST(variables_, CreateThreadRequestVariables) };
    inline CreateThreadRequestVariables variables() { DARABONBA_PTR_GET(variables_, CreateThreadRequestVariables) };
    inline CreateThreadRequest& setVariables(const CreateThreadRequestVariables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateThreadRequest& setVariables(CreateThreadRequestVariables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<CreateThreadRequestVariables> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
