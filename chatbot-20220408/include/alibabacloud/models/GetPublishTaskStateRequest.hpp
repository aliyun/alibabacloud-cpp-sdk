// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHTASKSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHTASKSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class GetPublishTaskStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishTaskStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishTaskStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetPublishTaskStateRequest() = default ;
    GetPublishTaskStateRequest(const GetPublishTaskStateRequest &) = default ;
    GetPublishTaskStateRequest(GetPublishTaskStateRequest &&) = default ;
    GetPublishTaskStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishTaskStateRequest() = default ;
    GetPublishTaskStateRequest& operator=(const GetPublishTaskStateRequest &) = default ;
    GetPublishTaskStateRequest& operator=(GetPublishTaskStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->id_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GetPublishTaskStateRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPublishTaskStateRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
