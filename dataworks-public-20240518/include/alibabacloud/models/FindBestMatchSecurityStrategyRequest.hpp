// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDBESTMATCHSECURITYSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDBESTMATCHSECURITYSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class FindBestMatchSecurityStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindBestMatchSecurityStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlModule, controlModule_);
      DARABONBA_PTR_TO_JSON(ControlSubModule, controlSubModule_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, FindBestMatchSecurityStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlModule, controlModule_);
      DARABONBA_PTR_FROM_JSON(ControlSubModule, controlSubModule_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    FindBestMatchSecurityStrategyRequest() = default ;
    FindBestMatchSecurityStrategyRequest(const FindBestMatchSecurityStrategyRequest &) = default ;
    FindBestMatchSecurityStrategyRequest(FindBestMatchSecurityStrategyRequest &&) = default ;
    FindBestMatchSecurityStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindBestMatchSecurityStrategyRequest() = default ;
    FindBestMatchSecurityStrategyRequest& operator=(const FindBestMatchSecurityStrategyRequest &) = default ;
    FindBestMatchSecurityStrategyRequest& operator=(FindBestMatchSecurityStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlModule_ == nullptr
        && this->controlSubModule_ == nullptr && this->workspaceId_ == nullptr; };
    // controlModule Field Functions 
    bool hasControlModule() const { return this->controlModule_ != nullptr;};
    void deleteControlModule() { this->controlModule_ = nullptr;};
    inline string getControlModule() const { DARABONBA_PTR_GET_DEFAULT(controlModule_, "") };
    inline FindBestMatchSecurityStrategyRequest& setControlModule(string controlModule) { DARABONBA_PTR_SET_VALUE(controlModule_, controlModule) };


    // controlSubModule Field Functions 
    bool hasControlSubModule() const { return this->controlSubModule_ != nullptr;};
    void deleteControlSubModule() { this->controlSubModule_ = nullptr;};
    inline string getControlSubModule() const { DARABONBA_PTR_GET_DEFAULT(controlSubModule_, "") };
    inline FindBestMatchSecurityStrategyRequest& setControlSubModule(string controlSubModule) { DARABONBA_PTR_SET_VALUE(controlSubModule_, controlSubModule) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline FindBestMatchSecurityStrategyRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> controlModule_ {};
    shared_ptr<string> controlSubModule_ {};
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
