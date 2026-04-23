// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAGENTCONCURRENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIAGENTCONCURRENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAIAgentConcurrencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIAgentConcurrencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIAgentConcurrencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
    };
    GetAIAgentConcurrencyRequest() = default ;
    GetAIAgentConcurrencyRequest(const GetAIAgentConcurrencyRequest &) = default ;
    GetAIAgentConcurrencyRequest(GetAIAgentConcurrencyRequest &&) = default ;
    GetAIAgentConcurrencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIAgentConcurrencyRequest() = default ;
    GetAIAgentConcurrencyRequest& operator=(const GetAIAgentConcurrencyRequest &) = default ;
    GetAIAgentConcurrencyRequest& operator=(GetAIAgentConcurrencyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string getAIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline GetAIAgentConcurrencyRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


  protected:
    // This parameter is required.
    shared_ptr<string> AIAgentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
