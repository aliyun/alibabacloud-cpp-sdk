// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATECONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATECONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chatData, chatData_);
      DARABONBA_PTR_TO_JSON(modelIds, modelIds_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chatData, chatData_);
      DARABONBA_PTR_FROM_JSON(modelIds, modelIds_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ModelRouterCreateConversationRequest() = default ;
    ModelRouterCreateConversationRequest(const ModelRouterCreateConversationRequest &) = default ;
    ModelRouterCreateConversationRequest(ModelRouterCreateConversationRequest &&) = default ;
    ModelRouterCreateConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateConversationRequest() = default ;
    ModelRouterCreateConversationRequest& operator=(const ModelRouterCreateConversationRequest &) = default ;
    ModelRouterCreateConversationRequest& operator=(ModelRouterCreateConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatData_ == nullptr
        && this->modelIds_ == nullptr && this->title_ == nullptr; };
    // chatData Field Functions 
    bool hasChatData() const { return this->chatData_ != nullptr;};
    void deleteChatData() { this->chatData_ = nullptr;};
    inline string getChatData() const { DARABONBA_PTR_GET_DEFAULT(chatData_, "") };
    inline ModelRouterCreateConversationRequest& setChatData(string chatData) { DARABONBA_PTR_SET_VALUE(chatData_, chatData) };


    // modelIds Field Functions 
    bool hasModelIds() const { return this->modelIds_ != nullptr;};
    void deleteModelIds() { this->modelIds_ = nullptr;};
    inline string getModelIds() const { DARABONBA_PTR_GET_DEFAULT(modelIds_, "") };
    inline ModelRouterCreateConversationRequest& setModelIds(string modelIds) { DARABONBA_PTR_SET_VALUE(modelIds_, modelIds) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ModelRouterCreateConversationRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> chatData_ {};
    shared_ptr<string> modelIds_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
