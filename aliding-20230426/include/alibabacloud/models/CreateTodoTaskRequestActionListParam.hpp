// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTACTIONLISTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTACTIONLISTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskRequestActionListParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskRequestActionListParam& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(header, header_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskRequestActionListParam& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(header, header_);
    };
    CreateTodoTaskRequestActionListParam() = default ;
    CreateTodoTaskRequestActionListParam(const CreateTodoTaskRequestActionListParam &) = default ;
    CreateTodoTaskRequestActionListParam(CreateTodoTaskRequestActionListParam &&) = default ;
    CreateTodoTaskRequestActionListParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskRequestActionListParam() = default ;
    CreateTodoTaskRequestActionListParam& operator=(const CreateTodoTaskRequestActionListParam &) = default ;
    CreateTodoTaskRequestActionListParam& operator=(CreateTodoTaskRequestActionListParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->header_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateTodoTaskRequestActionListParam& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const map<string, string> & header() const { DARABONBA_PTR_GET_CONST(header_, map<string, string>) };
    inline map<string, string> header() { DARABONBA_PTR_GET(header_, map<string, string>) };
    inline CreateTodoTaskRequestActionListParam& setHeader(const map<string, string> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline CreateTodoTaskRequestActionListParam& setHeader(map<string, string> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


  protected:
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<map<string, string>> header_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
