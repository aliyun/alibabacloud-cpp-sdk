// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATETEMPLATEMCPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATETEMPLATEMCPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ActivateTemplateMCPRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateTemplateMCPRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enabledTools, enabledTools_);
      DARABONBA_PTR_TO_JSON(transport, transport_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateTemplateMCPRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enabledTools, enabledTools_);
      DARABONBA_PTR_FROM_JSON(transport, transport_);
    };
    ActivateTemplateMCPRequest() = default ;
    ActivateTemplateMCPRequest(const ActivateTemplateMCPRequest &) = default ;
    ActivateTemplateMCPRequest(ActivateTemplateMCPRequest &&) = default ;
    ActivateTemplateMCPRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateTemplateMCPRequest() = default ;
    ActivateTemplateMCPRequest& operator=(const ActivateTemplateMCPRequest &) = default ;
    ActivateTemplateMCPRequest& operator=(ActivateTemplateMCPRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabledTools_ == nullptr
        && this->transport_ == nullptr; };
    // enabledTools Field Functions 
    bool hasEnabledTools() const { return this->enabledTools_ != nullptr;};
    void deleteEnabledTools() { this->enabledTools_ = nullptr;};
    inline const vector<string> & getEnabledTools() const { DARABONBA_PTR_GET_CONST(enabledTools_, vector<string>) };
    inline vector<string> getEnabledTools() { DARABONBA_PTR_GET(enabledTools_, vector<string>) };
    inline ActivateTemplateMCPRequest& setEnabledTools(const vector<string> & enabledTools) { DARABONBA_PTR_SET_VALUE(enabledTools_, enabledTools) };
    inline ActivateTemplateMCPRequest& setEnabledTools(vector<string> && enabledTools) { DARABONBA_PTR_SET_RVALUE(enabledTools_, enabledTools) };


    // transport Field Functions 
    bool hasTransport() const { return this->transport_ != nullptr;};
    void deleteTransport() { this->transport_ = nullptr;};
    inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
    inline ActivateTemplateMCPRequest& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


  protected:
    shared_ptr<vector<string>> enabledTools_ {};
    shared_ptr<string> transport_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
