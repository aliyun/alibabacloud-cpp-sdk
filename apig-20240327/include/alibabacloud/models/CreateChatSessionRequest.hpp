// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateChatSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(products, products_);
      DARABONBA_PTR_TO_JSON(talkType, talkType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(products, products_);
      DARABONBA_PTR_FROM_JSON(talkType, talkType_);
    };
    CreateChatSessionRequest() = default ;
    CreateChatSessionRequest(const CreateChatSessionRequest &) = default ;
    CreateChatSessionRequest(CreateChatSessionRequest &&) = default ;
    CreateChatSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionRequest() = default ;
    CreateChatSessionRequest& operator=(const CreateChatSessionRequest &) = default ;
    CreateChatSessionRequest& operator=(CreateChatSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->products_ == nullptr && this->talkType_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateChatSessionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<string> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<string>) };
    inline vector<string> getProducts() { DARABONBA_PTR_GET(products_, vector<string>) };
    inline CreateChatSessionRequest& setProducts(const vector<string> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline CreateChatSessionRequest& setProducts(vector<string> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // talkType Field Functions 
    bool hasTalkType() const { return this->talkType_ != nullptr;};
    void deleteTalkType() { this->talkType_ = nullptr;};
    inline string getTalkType() const { DARABONBA_PTR_GET_DEFAULT(talkType_, "") };
    inline CreateChatSessionRequest& setTalkType(string talkType) { DARABONBA_PTR_SET_VALUE(talkType_, talkType) };


  protected:
    // The name of the chat session.
    shared_ptr<string> name_ {};
    // The list of API products associated with the chat session.
    shared_ptr<vector<string>> products_ {};
    // The conversation type of the session. Valid values: MODEL and AGENT.
    shared_ptr<string> talkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
