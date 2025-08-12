// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEAIPRODUCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEAIPRODUCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveAIProduceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveAIProduceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveAIProduceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
    };
    AddLiveAIProduceRulesResponseBody() = default ;
    AddLiveAIProduceRulesResponseBody(const AddLiveAIProduceRulesResponseBody &) = default ;
    AddLiveAIProduceRulesResponseBody(AddLiveAIProduceRulesResponseBody &&) = default ;
    AddLiveAIProduceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveAIProduceRulesResponseBody() = default ;
    AddLiveAIProduceRulesResponseBody& operator=(const AddLiveAIProduceRulesResponseBody &) = default ;
    AddLiveAIProduceRulesResponseBody& operator=(AddLiveAIProduceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->rulesId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddLiveAIProduceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rulesId Field Functions 
    bool hasRulesId() const { return this->rulesId_ != nullptr;};
    void deleteRulesId() { this->rulesId_ = nullptr;};
    inline string rulesId() const { DARABONBA_PTR_GET_DEFAULT(rulesId_, "") };
    inline AddLiveAIProduceRulesResponseBody& setRulesId(string rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the subtitle rule.
    std::shared_ptr<string> rulesId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
