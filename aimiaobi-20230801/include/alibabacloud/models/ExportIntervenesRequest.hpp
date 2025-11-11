// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTINTERVENESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTINTERVENESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportIntervenesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportIntervenesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
    };
    friend void from_json(const Darabonba::Json& j, ExportIntervenesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
    };
    ExportIntervenesRequest() = default ;
    ExportIntervenesRequest(const ExportIntervenesRequest &) = default ;
    ExportIntervenesRequest(ExportIntervenesRequest &&) = default ;
    ExportIntervenesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportIntervenesRequest() = default ;
    ExportIntervenesRequest& operator=(const ExportIntervenesRequest &) = default ;
    ExportIntervenesRequest& operator=(ExportIntervenesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ExportIntervenesRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
