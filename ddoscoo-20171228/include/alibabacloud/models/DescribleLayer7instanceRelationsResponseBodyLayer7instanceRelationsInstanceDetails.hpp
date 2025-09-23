// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODYLAYER7INSTANCERELATIONSINSTANCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODYLAYER7INSTANCERELATIONSINSTANCEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EipList, eipList_);
      DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EipList, eipList_);
      DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
    };
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails() = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails(const DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails &) = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails(DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails &&) = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails() = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& operator=(const DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails &) = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& operator=(DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipList_ != nullptr
        && this->functionVersion_ != nullptr && this->instanceId_ != nullptr && this->ipMode_ != nullptr && this->ipVersion_ != nullptr; };
    // eipList Field Functions 
    bool hasEipList() const { return this->eipList_ != nullptr;};
    void deleteEipList() { this->eipList_ = nullptr;};
    inline const vector<string> & eipList() const { DARABONBA_PTR_GET_CONST(eipList_, vector<string>) };
    inline vector<string> eipList() { DARABONBA_PTR_GET(eipList_, vector<string>) };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& setEipList(const vector<string> & eipList) { DARABONBA_PTR_SET_VALUE(eipList_, eipList) };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& setEipList(vector<string> && eipList) { DARABONBA_PTR_SET_RVALUE(eipList_, eipList) };


    // functionVersion Field Functions 
    bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
    void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
    inline string functionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipMode Field Functions 
    bool hasIpMode() const { return this->ipMode_ != nullptr;};
    void deleteIpMode() { this->ipMode_ = nullptr;};
    inline string ipMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


  protected:
    std::shared_ptr<vector<string>> eipList_ = nullptr;
    std::shared_ptr<string> functionVersion_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ipMode_ = nullptr;
    std::shared_ptr<string> ipVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
