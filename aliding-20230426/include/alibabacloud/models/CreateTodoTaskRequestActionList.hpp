// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTACTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTACTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTodoTaskRequestActionListParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskRequestActionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskRequestActionList& obj) { 
      DARABONBA_PTR_TO_JSON(actionKey, actionKey_);
      DARABONBA_PTR_TO_JSON(actionType, actionType_);
      DARABONBA_PTR_TO_JSON(buttonStyleType, buttonStyleType_);
      DARABONBA_PTR_TO_JSON(param, param_);
      DARABONBA_PTR_TO_JSON(pcUrl, pcUrl_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskRequestActionList& obj) { 
      DARABONBA_PTR_FROM_JSON(actionKey, actionKey_);
      DARABONBA_PTR_FROM_JSON(actionType, actionType_);
      DARABONBA_PTR_FROM_JSON(buttonStyleType, buttonStyleType_);
      DARABONBA_PTR_FROM_JSON(param, param_);
      DARABONBA_PTR_FROM_JSON(pcUrl, pcUrl_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    CreateTodoTaskRequestActionList() = default ;
    CreateTodoTaskRequestActionList(const CreateTodoTaskRequestActionList &) = default ;
    CreateTodoTaskRequestActionList(CreateTodoTaskRequestActionList &&) = default ;
    CreateTodoTaskRequestActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskRequestActionList() = default ;
    CreateTodoTaskRequestActionList& operator=(const CreateTodoTaskRequestActionList &) = default ;
    CreateTodoTaskRequestActionList& operator=(CreateTodoTaskRequestActionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionKey_ != nullptr
        && this->actionType_ != nullptr && this->buttonStyleType_ != nullptr && this->param_ != nullptr && this->pcUrl_ != nullptr && this->title_ != nullptr
        && this->url_ != nullptr; };
    // actionKey Field Functions 
    bool hasActionKey() const { return this->actionKey_ != nullptr;};
    void deleteActionKey() { this->actionKey_ = nullptr;};
    inline string actionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
    inline CreateTodoTaskRequestActionList& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline CreateTodoTaskRequestActionList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // buttonStyleType Field Functions 
    bool hasButtonStyleType() const { return this->buttonStyleType_ != nullptr;};
    void deleteButtonStyleType() { this->buttonStyleType_ = nullptr;};
    inline int32_t buttonStyleType() const { DARABONBA_PTR_GET_DEFAULT(buttonStyleType_, 0) };
    inline CreateTodoTaskRequestActionList& setButtonStyleType(int32_t buttonStyleType) { DARABONBA_PTR_SET_VALUE(buttonStyleType_, buttonStyleType) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const Models::CreateTodoTaskRequestActionListParam & param() const { DARABONBA_PTR_GET_CONST(param_, Models::CreateTodoTaskRequestActionListParam) };
    inline Models::CreateTodoTaskRequestActionListParam param() { DARABONBA_PTR_GET(param_, Models::CreateTodoTaskRequestActionListParam) };
    inline CreateTodoTaskRequestActionList& setParam(const Models::CreateTodoTaskRequestActionListParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateTodoTaskRequestActionList& setParam(Models::CreateTodoTaskRequestActionListParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // pcUrl Field Functions 
    bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
    void deletePcUrl() { this->pcUrl_ = nullptr;};
    inline string pcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
    inline CreateTodoTaskRequestActionList& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTodoTaskRequestActionList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateTodoTaskRequestActionList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> actionKey_ = nullptr;
    std::shared_ptr<int32_t> actionType_ = nullptr;
    std::shared_ptr<int32_t> buttonStyleType_ = nullptr;
    std::shared_ptr<Models::CreateTodoTaskRequestActionListParam> param_ = nullptr;
    std::shared_ptr<string> pcUrl_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
