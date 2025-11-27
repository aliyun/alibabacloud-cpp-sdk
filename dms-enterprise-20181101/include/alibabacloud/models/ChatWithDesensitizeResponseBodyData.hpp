// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithDesensitizeResponseBodyDataChoices.hpp>
#include <alibabacloud/models/ChatWithDesensitizeResponseBodyDataUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Choices, choices_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Choices, choices_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ChatWithDesensitizeResponseBodyData() = default ;
    ChatWithDesensitizeResponseBodyData(const ChatWithDesensitizeResponseBodyData &) = default ;
    ChatWithDesensitizeResponseBodyData(ChatWithDesensitizeResponseBodyData &&) = default ;
    ChatWithDesensitizeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeResponseBodyData() = default ;
    ChatWithDesensitizeResponseBodyData& operator=(const ChatWithDesensitizeResponseBodyData &) = default ;
    ChatWithDesensitizeResponseBodyData& operator=(ChatWithDesensitizeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->choices_ == nullptr
        && return this->created_ == nullptr && return this->message_ == nullptr && return this->model_ == nullptr && return this->statusCode_ == nullptr && return this->type_ == nullptr
        && return this->usage_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<Models::ChatWithDesensitizeResponseBodyDataChoices> & choices() const { DARABONBA_PTR_GET_CONST(choices_, vector<Models::ChatWithDesensitizeResponseBodyDataChoices>) };
    inline vector<Models::ChatWithDesensitizeResponseBodyDataChoices> choices() { DARABONBA_PTR_GET(choices_, vector<Models::ChatWithDesensitizeResponseBodyDataChoices>) };
    inline ChatWithDesensitizeResponseBodyData& setChoices(const vector<Models::ChatWithDesensitizeResponseBodyDataChoices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline ChatWithDesensitizeResponseBodyData& setChoices(vector<Models::ChatWithDesensitizeResponseBodyDataChoices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline ChatWithDesensitizeResponseBodyData& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChatWithDesensitizeResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatWithDesensitizeResponseBodyData& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline ChatWithDesensitizeResponseBodyData& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ChatWithDesensitizeResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::ChatWithDesensitizeResponseBodyDataUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::ChatWithDesensitizeResponseBodyDataUsage) };
    inline Models::ChatWithDesensitizeResponseBodyDataUsage usage() { DARABONBA_PTR_GET(usage_, Models::ChatWithDesensitizeResponseBodyDataUsage) };
    inline ChatWithDesensitizeResponseBodyData& setUsage(const Models::ChatWithDesensitizeResponseBodyDataUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline ChatWithDesensitizeResponseBodyData& setUsage(Models::ChatWithDesensitizeResponseBodyDataUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<vector<Models::ChatWithDesensitizeResponseBodyDataChoices>> choices_ = nullptr;
    std::shared_ptr<string> created_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> statusCode_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::ChatWithDesensitizeResponseBodyDataUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
