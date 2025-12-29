// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBINSTANCESOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBINSTANCESOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebInstanceInfo.hpp>
#include <map>
#include <alibabacloud/models/WebVersionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebInstancesOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebInstancesOutput& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentError, currentError_);
      DARABONBA_PTR_TO_JSON(WebInstances, webInstances_);
      DARABONBA_PTR_TO_JSON(WebVersionStatus, webVersionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebInstancesOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentError, currentError_);
      DARABONBA_PTR_FROM_JSON(WebInstances, webInstances_);
      DARABONBA_PTR_FROM_JSON(WebVersionStatus, webVersionStatus_);
    };
    ListWebInstancesOutput() = default ;
    ListWebInstancesOutput(const ListWebInstancesOutput &) = default ;
    ListWebInstancesOutput(ListWebInstancesOutput &&) = default ;
    ListWebInstancesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebInstancesOutput() = default ;
    ListWebInstancesOutput& operator=(const ListWebInstancesOutput &) = default ;
    ListWebInstancesOutput& operator=(ListWebInstancesOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentError_ == nullptr
        && this->webInstances_ == nullptr && this->webVersionStatus_ == nullptr; };
    // currentError Field Functions 
    bool hasCurrentError() const { return this->currentError_ != nullptr;};
    void deleteCurrentError() { this->currentError_ = nullptr;};
    inline string getCurrentError() const { DARABONBA_PTR_GET_DEFAULT(currentError_, "") };
    inline ListWebInstancesOutput& setCurrentError(string currentError) { DARABONBA_PTR_SET_VALUE(currentError_, currentError) };


    // webInstances Field Functions 
    bool hasWebInstances() const { return this->webInstances_ != nullptr;};
    void deleteWebInstances() { this->webInstances_ = nullptr;};
    inline const vector<WebInstanceInfo> & getWebInstances() const { DARABONBA_PTR_GET_CONST(webInstances_, vector<WebInstanceInfo>) };
    inline vector<WebInstanceInfo> getWebInstances() { DARABONBA_PTR_GET(webInstances_, vector<WebInstanceInfo>) };
    inline ListWebInstancesOutput& setWebInstances(const vector<WebInstanceInfo> & webInstances) { DARABONBA_PTR_SET_VALUE(webInstances_, webInstances) };
    inline ListWebInstancesOutput& setWebInstances(vector<WebInstanceInfo> && webInstances) { DARABONBA_PTR_SET_RVALUE(webInstances_, webInstances) };


    // webVersionStatus Field Functions 
    bool hasWebVersionStatus() const { return this->webVersionStatus_ != nullptr;};
    void deleteWebVersionStatus() { this->webVersionStatus_ = nullptr;};
    inline const map<string, WebVersionStatus> & getWebVersionStatus() const { DARABONBA_PTR_GET_CONST(webVersionStatus_, map<string, WebVersionStatus>) };
    inline map<string, WebVersionStatus> getWebVersionStatus() { DARABONBA_PTR_GET(webVersionStatus_, map<string, WebVersionStatus>) };
    inline ListWebInstancesOutput& setWebVersionStatus(const map<string, WebVersionStatus> & webVersionStatus) { DARABONBA_PTR_SET_VALUE(webVersionStatus_, webVersionStatus) };
    inline ListWebInstancesOutput& setWebVersionStatus(map<string, WebVersionStatus> && webVersionStatus) { DARABONBA_PTR_SET_RVALUE(webVersionStatus_, webVersionStatus) };


  protected:
    shared_ptr<string> currentError_ {};
    shared_ptr<vector<WebInstanceInfo>> webInstances_ {};
    shared_ptr<map<string, WebVersionStatus>> webVersionStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
