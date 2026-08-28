// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGlobalPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(globalPolicyType, globalPolicyType_);
      DARABONBA_PTR_TO_JSON(ipAccessControlContent, ipAccessControlContent_);
      DARABONBA_PTR_TO_JSON(ipAccessControlProtocolLayer, ipAccessControlProtocolLayer_);
      DARABONBA_PTR_TO_JSON(ipAccessControlResourceName, ipAccessControlResourceName_);
      DARABONBA_PTR_TO_JSON(ipAccessControlType, ipAccessControlType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(globalPolicyType, globalPolicyType_);
      DARABONBA_PTR_FROM_JSON(ipAccessControlContent, ipAccessControlContent_);
      DARABONBA_PTR_FROM_JSON(ipAccessControlProtocolLayer, ipAccessControlProtocolLayer_);
      DARABONBA_PTR_FROM_JSON(ipAccessControlResourceName, ipAccessControlResourceName_);
      DARABONBA_PTR_FROM_JSON(ipAccessControlType, ipAccessControlType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListGlobalPoliciesRequest() = default ;
    ListGlobalPoliciesRequest(const ListGlobalPoliciesRequest &) = default ;
    ListGlobalPoliciesRequest(ListGlobalPoliciesRequest &&) = default ;
    ListGlobalPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalPoliciesRequest() = default ;
    ListGlobalPoliciesRequest& operator=(const ListGlobalPoliciesRequest &) = default ;
    ListGlobalPoliciesRequest& operator=(ListGlobalPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceType_ == nullptr
        && this->className_ == nullptr && this->enable_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->globalPolicyType_ == nullptr
        && this->ipAccessControlContent_ == nullptr && this->ipAccessControlProtocolLayer_ == nullptr && this->ipAccessControlResourceName_ == nullptr && this->ipAccessControlType_ == nullptr && this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string getAttachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline ListGlobalPoliciesRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline ListGlobalPoliciesRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListGlobalPoliciesRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListGlobalPoliciesRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGlobalPoliciesRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // globalPolicyType Field Functions 
    bool hasGlobalPolicyType() const { return this->globalPolicyType_ != nullptr;};
    void deleteGlobalPolicyType() { this->globalPolicyType_ = nullptr;};
    inline string getGlobalPolicyType() const { DARABONBA_PTR_GET_DEFAULT(globalPolicyType_, "") };
    inline ListGlobalPoliciesRequest& setGlobalPolicyType(string globalPolicyType) { DARABONBA_PTR_SET_VALUE(globalPolicyType_, globalPolicyType) };


    // ipAccessControlContent Field Functions 
    bool hasIpAccessControlContent() const { return this->ipAccessControlContent_ != nullptr;};
    void deleteIpAccessControlContent() { this->ipAccessControlContent_ = nullptr;};
    inline string getIpAccessControlContent() const { DARABONBA_PTR_GET_DEFAULT(ipAccessControlContent_, "") };
    inline ListGlobalPoliciesRequest& setIpAccessControlContent(string ipAccessControlContent) { DARABONBA_PTR_SET_VALUE(ipAccessControlContent_, ipAccessControlContent) };


    // ipAccessControlProtocolLayer Field Functions 
    bool hasIpAccessControlProtocolLayer() const { return this->ipAccessControlProtocolLayer_ != nullptr;};
    void deleteIpAccessControlProtocolLayer() { this->ipAccessControlProtocolLayer_ = nullptr;};
    inline string getIpAccessControlProtocolLayer() const { DARABONBA_PTR_GET_DEFAULT(ipAccessControlProtocolLayer_, "") };
    inline ListGlobalPoliciesRequest& setIpAccessControlProtocolLayer(string ipAccessControlProtocolLayer) { DARABONBA_PTR_SET_VALUE(ipAccessControlProtocolLayer_, ipAccessControlProtocolLayer) };


    // ipAccessControlResourceName Field Functions 
    bool hasIpAccessControlResourceName() const { return this->ipAccessControlResourceName_ != nullptr;};
    void deleteIpAccessControlResourceName() { this->ipAccessControlResourceName_ = nullptr;};
    inline string getIpAccessControlResourceName() const { DARABONBA_PTR_GET_DEFAULT(ipAccessControlResourceName_, "") };
    inline ListGlobalPoliciesRequest& setIpAccessControlResourceName(string ipAccessControlResourceName) { DARABONBA_PTR_SET_VALUE(ipAccessControlResourceName_, ipAccessControlResourceName) };


    // ipAccessControlType Field Functions 
    bool hasIpAccessControlType() const { return this->ipAccessControlType_ != nullptr;};
    void deleteIpAccessControlType() { this->ipAccessControlType_ = nullptr;};
    inline string getIpAccessControlType() const { DARABONBA_PTR_GET_DEFAULT(ipAccessControlType_, "") };
    inline ListGlobalPoliciesRequest& setIpAccessControlType(string ipAccessControlType) { DARABONBA_PTR_SET_VALUE(ipAccessControlType_, ipAccessControlType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGlobalPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGlobalPoliciesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGlobalPoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> attachResourceType_ {};
    shared_ptr<string> className_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<string> environmentId_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> globalPolicyType_ {};
    shared_ptr<string> ipAccessControlContent_ {};
    shared_ptr<string> ipAccessControlProtocolLayer_ {};
    shared_ptr<string> ipAccessControlResourceName_ {};
    shared_ptr<string> ipAccessControlType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
