// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEpnInstanceAttributeResponseBodyConfVersions.hpp>
#include <alibabacloud/models/DescribeEpnInstanceAttributeResponseBodyInstances.hpp>
#include <alibabacloud/models/DescribeEpnInstanceAttributeResponseBodyVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfVersions, confVersions_);
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfVersions, confVersions_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeEpnInstanceAttributeResponseBody() = default ;
    DescribeEpnInstanceAttributeResponseBody(const DescribeEpnInstanceAttributeResponseBody &) = default ;
    DescribeEpnInstanceAttributeResponseBody(DescribeEpnInstanceAttributeResponseBody &&) = default ;
    DescribeEpnInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnInstanceAttributeResponseBody() = default ;
    DescribeEpnInstanceAttributeResponseBody& operator=(const DescribeEpnInstanceAttributeResponseBody &) = default ;
    DescribeEpnInstanceAttributeResponseBody& operator=(DescribeEpnInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confVersions_ != nullptr
        && this->EPNInstanceId_ != nullptr && this->EPNInstanceName_ != nullptr && this->instances_ != nullptr && this->networkingModel_ != nullptr && this->requestId_ != nullptr
        && this->vSwitches_ != nullptr; };
    // confVersions Field Functions 
    bool hasConfVersions() const { return this->confVersions_ != nullptr;};
    void deleteConfVersions() { this->confVersions_ = nullptr;};
    inline const vector<DescribeEpnInstanceAttributeResponseBodyConfVersions> & confVersions() const { DARABONBA_PTR_GET_CONST(confVersions_, vector<DescribeEpnInstanceAttributeResponseBodyConfVersions>) };
    inline vector<DescribeEpnInstanceAttributeResponseBodyConfVersions> confVersions() { DARABONBA_PTR_GET(confVersions_, vector<DescribeEpnInstanceAttributeResponseBodyConfVersions>) };
    inline DescribeEpnInstanceAttributeResponseBody& setConfVersions(const vector<DescribeEpnInstanceAttributeResponseBodyConfVersions> & confVersions) { DARABONBA_PTR_SET_VALUE(confVersions_, confVersions) };
    inline DescribeEpnInstanceAttributeResponseBody& setConfVersions(vector<DescribeEpnInstanceAttributeResponseBodyConfVersions> && confVersions) { DARABONBA_PTR_SET_RVALUE(confVersions_, confVersions) };


    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string EPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // EPNInstanceName Field Functions 
    bool hasEPNInstanceName() const { return this->EPNInstanceName_ != nullptr;};
    void deleteEPNInstanceName() { this->EPNInstanceName_ = nullptr;};
    inline string EPNInstanceName() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceName_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setEPNInstanceName(string EPNInstanceName) { DARABONBA_PTR_SET_VALUE(EPNInstanceName_, EPNInstanceName) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeEpnInstanceAttributeResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeEpnInstanceAttributeResponseBodyInstances>) };
    inline vector<DescribeEpnInstanceAttributeResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<DescribeEpnInstanceAttributeResponseBodyInstances>) };
    inline DescribeEpnInstanceAttributeResponseBody& setInstances(const vector<DescribeEpnInstanceAttributeResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeEpnInstanceAttributeResponseBody& setInstances(vector<DescribeEpnInstanceAttributeResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // networkingModel Field Functions 
    bool hasNetworkingModel() const { return this->networkingModel_ != nullptr;};
    void deleteNetworkingModel() { this->networkingModel_ = nullptr;};
    inline string networkingModel() const { DARABONBA_PTR_GET_DEFAULT(networkingModel_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setNetworkingModel(string networkingModel) { DARABONBA_PTR_SET_VALUE(networkingModel_, networkingModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<DescribeEpnInstanceAttributeResponseBodyVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<DescribeEpnInstanceAttributeResponseBodyVSwitches>) };
    inline vector<DescribeEpnInstanceAttributeResponseBodyVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<DescribeEpnInstanceAttributeResponseBodyVSwitches>) };
    inline DescribeEpnInstanceAttributeResponseBody& setVSwitches(const vector<DescribeEpnInstanceAttributeResponseBodyVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeEpnInstanceAttributeResponseBody& setVSwitches(vector<DescribeEpnInstanceAttributeResponseBodyVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    // The information about the EPN configurations.
    std::shared_ptr<vector<DescribeEpnInstanceAttributeResponseBodyConfVersions>> confVersions_ = nullptr;
    // The ID of the EPN instance.
    std::shared_ptr<string> EPNInstanceId_ = nullptr;
    // The name of the EPN instance.
    std::shared_ptr<string> EPNInstanceName_ = nullptr;
    // The information about the instance.
    std::shared_ptr<vector<DescribeEpnInstanceAttributeResponseBodyInstances>> instances_ = nullptr;
    // The networking mode. Valid values:
    // 
    // *   SpeedUp: intelligent acceleration network (Internet)
    // *   Connection: internal network
    // *   SpeedUpAndConnection: intelligent acceleration network and internal network
    std::shared_ptr<string> networkingModel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details of the vSwitch.
    std::shared_ptr<vector<DescribeEpnInstanceAttributeResponseBodyVSwitches>> vSwitches_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
