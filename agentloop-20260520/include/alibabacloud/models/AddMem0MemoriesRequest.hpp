// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEM0MEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEM0MEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class AddMem0MemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMem0MemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddMem0MemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    AddMem0MemoriesRequest() = default ;
    AddMem0MemoriesRequest(const AddMem0MemoriesRequest &) = default ;
    AddMem0MemoriesRequest(AddMem0MemoriesRequest &&) = default ;
    AddMem0MemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMem0MemoriesRequest() = default ;
    AddMem0MemoriesRequest& operator=(const AddMem0MemoriesRequest &) = default ;
    AddMem0MemoriesRequest& operator=(AddMem0MemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->body_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline AddMem0MemoriesRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & getBody() const { DARABONBA_GET(body_) };
    Darabonba::Json & getBody() { DARABONBA_GET(body_) };
    inline AddMem0MemoriesRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline AddMem0MemoriesRequest& setBody(Darabonba::Json && body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<string> agentSpace_ {};
    Darabonba::Json body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
