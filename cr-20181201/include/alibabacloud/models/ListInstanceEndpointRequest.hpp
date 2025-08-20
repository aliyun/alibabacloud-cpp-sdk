// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    ListInstanceEndpointRequest() = default ;
    ListInstanceEndpointRequest(const ListInstanceEndpointRequest &) = default ;
    ListInstanceEndpointRequest(ListInstanceEndpointRequest &&) = default ;
    ListInstanceEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceEndpointRequest() = default ;
    ListInstanceEndpointRequest& operator=(const ListInstanceEndpointRequest &) = default ;
    ListInstanceEndpointRequest& operator=(ListInstanceEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->moduleName_ != nullptr && this->summary_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceEndpointRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListInstanceEndpointRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline bool summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, false) };
    inline ListInstanceEndpointRequest& setSummary(bool summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the module that you want to access. Valid values:
    // 
    // *   `Registry`: image repositories.
    // *   `Chart`: Helm charts.
    std::shared_ptr<string> moduleName_ = nullptr;
    // Specify whether to return endpoints in simple mode. If yes, no access control information about the endpoint is returned.
    std::shared_ptr<bool> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
