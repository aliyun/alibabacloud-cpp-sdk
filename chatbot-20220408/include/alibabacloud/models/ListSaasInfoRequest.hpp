// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(SaasGroupCodes, saasGroupCodes_);
      DARABONBA_PTR_TO_JSON(SaasName, saasName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(SaasGroupCodes, saasGroupCodes_);
      DARABONBA_PTR_FROM_JSON(SaasName, saasName_);
    };
    ListSaasInfoRequest() = default ;
    ListSaasInfoRequest(const ListSaasInfoRequest &) = default ;
    ListSaasInfoRequest(ListSaasInfoRequest &&) = default ;
    ListSaasInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasInfoRequest() = default ;
    ListSaasInfoRequest& operator=(const ListSaasInfoRequest &) = default ;
    ListSaasInfoRequest& operator=(ListSaasInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->saasGroupCodes_ == nullptr && return this->saasName_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListSaasInfoRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // saasGroupCodes Field Functions 
    bool hasSaasGroupCodes() const { return this->saasGroupCodes_ != nullptr;};
    void deleteSaasGroupCodes() { this->saasGroupCodes_ = nullptr;};
    inline string saasGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(saasGroupCodes_, "") };
    inline ListSaasInfoRequest& setSaasGroupCodes(string saasGroupCodes) { DARABONBA_PTR_SET_VALUE(saasGroupCodes_, saasGroupCodes) };


    // saasName Field Functions 
    bool hasSaasName() const { return this->saasName_ != nullptr;};
    void deleteSaasName() { this->saasName_ = nullptr;};
    inline string saasName() const { DARABONBA_PTR_GET_DEFAULT(saasName_, "") };
    inline ListSaasInfoRequest& setSaasName(string saasName) { DARABONBA_PTR_SET_VALUE(saasName_, saasName) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> saasGroupCodes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> saasName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
