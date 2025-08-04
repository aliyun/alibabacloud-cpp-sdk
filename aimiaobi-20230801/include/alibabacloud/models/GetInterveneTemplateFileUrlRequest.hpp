// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENETEMPLATEFILEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENETEMPLATEFILEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneTemplateFileUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneTemplateFileUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneTemplateFileUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
    };
    GetInterveneTemplateFileUrlRequest() = default ;
    GetInterveneTemplateFileUrlRequest(const GetInterveneTemplateFileUrlRequest &) = default ;
    GetInterveneTemplateFileUrlRequest(GetInterveneTemplateFileUrlRequest &&) = default ;
    GetInterveneTemplateFileUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneTemplateFileUrlRequest() = default ;
    GetInterveneTemplateFileUrlRequest& operator=(const GetInterveneTemplateFileUrlRequest &) = default ;
    GetInterveneTemplateFileUrlRequest& operator=(GetInterveneTemplateFileUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GetInterveneTemplateFileUrlRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
