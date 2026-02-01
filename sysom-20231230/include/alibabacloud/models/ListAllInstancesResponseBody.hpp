// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAllInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAllInstancesResponseBody() = default ;
    ListAllInstancesResponseBody(const ListAllInstancesResponseBody &) = default ;
    ListAllInstancesResponseBody(ListAllInstancesResponseBody &&) = default ;
    ListAllInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllInstancesResponseBody() = default ;
    ListAllInstancesResponseBody& operator=(const ListAllInstancesResponseBody &) = default ;
    ListAllInstancesResponseBody& operator=(ListAllInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentConfigId, agentConfigId_);
        DARABONBA_PTR_TO_JSON(agentConfigName, agentConfigName_);
        DARABONBA_PTR_TO_JSON(attributes, attributes_);
        DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(imageId, imageId_);
        DARABONBA_PTR_TO_JSON(installLevel, installLevel_);
        DARABONBA_PTR_TO_JSON(installType, installType_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(kernelVersion, kernelVersion_);
        DARABONBA_PTR_TO_JSON(manageLevel, manageLevel_);
        DARABONBA_PTR_TO_JSON(manageType, manageType_);
        DARABONBA_PTR_TO_JSON(osArch, osArch_);
        DARABONBA_PTR_TO_JSON(osHealthScore, osHealthScore_);
        DARABONBA_PTR_TO_JSON(osName, osName_);
        DARABONBA_PTR_TO_JSON(privateIp, privateIp_);
        DARABONBA_PTR_TO_JSON(publicIp, publicIp_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(resourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentConfigId, agentConfigId_);
        DARABONBA_PTR_FROM_JSON(agentConfigName, agentConfigName_);
        DARABONBA_PTR_FROM_JSON(attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(imageId, imageId_);
        DARABONBA_PTR_FROM_JSON(installLevel, installLevel_);
        DARABONBA_PTR_FROM_JSON(installType, installType_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(kernelVersion, kernelVersion_);
        DARABONBA_PTR_FROM_JSON(manageLevel, manageLevel_);
        DARABONBA_PTR_FROM_JSON(manageType, manageType_);
        DARABONBA_PTR_FROM_JSON(osArch, osArch_);
        DARABONBA_PTR_FROM_JSON(osHealthScore, osHealthScore_);
        DARABONBA_PTR_FROM_JSON(osName, osName_);
        DARABONBA_PTR_FROM_JSON(privateIp, privateIp_);
        DARABONBA_PTR_FROM_JSON(publicIp, publicIp_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(resourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Attributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
          DARABONBA_PTR_TO_JSON(infoKey, infoKey_);
          DARABONBA_PTR_TO_JSON(infoType, infoType_);
          DARABONBA_PTR_TO_JSON(infoValue, infoValue_);
        };
        friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
          DARABONBA_PTR_FROM_JSON(infoKey, infoKey_);
          DARABONBA_PTR_FROM_JSON(infoType, infoType_);
          DARABONBA_PTR_FROM_JSON(infoValue, infoValue_);
        };
        Attributes() = default ;
        Attributes(const Attributes &) = default ;
        Attributes(Attributes &&) = default ;
        Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attributes() = default ;
        Attributes& operator=(const Attributes &) = default ;
        Attributes& operator=(Attributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->infoKey_ == nullptr
        && this->infoType_ == nullptr && this->infoValue_ == nullptr; };
        // infoKey Field Functions 
        bool hasInfoKey() const { return this->infoKey_ != nullptr;};
        void deleteInfoKey() { this->infoKey_ = nullptr;};
        inline string getInfoKey() const { DARABONBA_PTR_GET_DEFAULT(infoKey_, "") };
        inline Attributes& setInfoKey(string infoKey) { DARABONBA_PTR_SET_VALUE(infoKey_, infoKey) };


        // infoType Field Functions 
        bool hasInfoType() const { return this->infoType_ != nullptr;};
        void deleteInfoType() { this->infoType_ = nullptr;};
        inline string getInfoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
        inline Attributes& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


        // infoValue Field Functions 
        bool hasInfoValue() const { return this->infoValue_ != nullptr;};
        void deleteInfoValue() { this->infoValue_ = nullptr;};
        inline string getInfoValue() const { DARABONBA_PTR_GET_DEFAULT(infoValue_, "") };
        inline Attributes& setInfoValue(string infoValue) { DARABONBA_PTR_SET_VALUE(infoValue_, infoValue) };


      protected:
        shared_ptr<string> infoKey_ {};
        shared_ptr<string> infoType_ {};
        shared_ptr<string> infoValue_ {};
      };

      virtual bool empty() const override { return this->agentConfigId_ == nullptr
        && this->agentConfigName_ == nullptr && this->attributes_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->imageId_ == nullptr
        && this->installLevel_ == nullptr && this->installType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr
        && this->kernelVersion_ == nullptr && this->manageLevel_ == nullptr && this->manageType_ == nullptr && this->osArch_ == nullptr && this->osHealthScore_ == nullptr
        && this->osName_ == nullptr && this->privateIp_ == nullptr && this->publicIp_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceGroupName_ == nullptr
        && this->status_ == nullptr; };
      // agentConfigId Field Functions 
      bool hasAgentConfigId() const { return this->agentConfigId_ != nullptr;};
      void deleteAgentConfigId() { this->agentConfigId_ = nullptr;};
      inline string getAgentConfigId() const { DARABONBA_PTR_GET_DEFAULT(agentConfigId_, "") };
      inline Data& setAgentConfigId(string agentConfigId) { DARABONBA_PTR_SET_VALUE(agentConfigId_, agentConfigId) };


      // agentConfigName Field Functions 
      bool hasAgentConfigName() const { return this->agentConfigName_ != nullptr;};
      void deleteAgentConfigName() { this->agentConfigName_ = nullptr;};
      inline string getAgentConfigName() const { DARABONBA_PTR_GET_DEFAULT(agentConfigName_, "") };
      inline Data& setAgentConfigName(string agentConfigName) { DARABONBA_PTR_SET_VALUE(agentConfigName_, agentConfigName) };


      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<Data::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Data::Attributes>) };
      inline vector<Data::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<Data::Attributes>) };
      inline Data& setAttributes(const vector<Data::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Data& setAttributes(vector<Data::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // installLevel Field Functions 
      bool hasInstallLevel() const { return this->installLevel_ != nullptr;};
      void deleteInstallLevel() { this->installLevel_ = nullptr;};
      inline string getInstallLevel() const { DARABONBA_PTR_GET_DEFAULT(installLevel_, "") };
      inline Data& setInstallLevel(string installLevel) { DARABONBA_PTR_SET_VALUE(installLevel_, installLevel) };


      // installType Field Functions 
      bool hasInstallType() const { return this->installType_ != nullptr;};
      void deleteInstallType() { this->installType_ = nullptr;};
      inline string getInstallType() const { DARABONBA_PTR_GET_DEFAULT(installType_, "") };
      inline Data& setInstallType(string installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Data& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // kernelVersion Field Functions 
      bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
      void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
      inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
      inline Data& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


      // manageLevel Field Functions 
      bool hasManageLevel() const { return this->manageLevel_ != nullptr;};
      void deleteManageLevel() { this->manageLevel_ = nullptr;};
      inline string getManageLevel() const { DARABONBA_PTR_GET_DEFAULT(manageLevel_, "") };
      inline Data& setManageLevel(string manageLevel) { DARABONBA_PTR_SET_VALUE(manageLevel_, manageLevel) };


      // manageType Field Functions 
      bool hasManageType() const { return this->manageType_ != nullptr;};
      void deleteManageType() { this->manageType_ = nullptr;};
      inline string getManageType() const { DARABONBA_PTR_GET_DEFAULT(manageType_, "") };
      inline Data& setManageType(string manageType) { DARABONBA_PTR_SET_VALUE(manageType_, manageType) };


      // osArch Field Functions 
      bool hasOsArch() const { return this->osArch_ != nullptr;};
      void deleteOsArch() { this->osArch_ = nullptr;};
      inline string getOsArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
      inline Data& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


      // osHealthScore Field Functions 
      bool hasOsHealthScore() const { return this->osHealthScore_ != nullptr;};
      void deleteOsHealthScore() { this->osHealthScore_ = nullptr;};
      inline int32_t getOsHealthScore() const { DARABONBA_PTR_GET_DEFAULT(osHealthScore_, 0) };
      inline Data& setOsHealthScore(int32_t osHealthScore) { DARABONBA_PTR_SET_VALUE(osHealthScore_, osHealthScore) };


      // osName Field Functions 
      bool hasOsName() const { return this->osName_ != nullptr;};
      void deleteOsName() { this->osName_ = nullptr;};
      inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
      inline Data& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


      // privateIp Field Functions 
      bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
      void deletePrivateIp() { this->privateIp_ = nullptr;};
      inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
      inline Data& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


      // publicIp Field Functions 
      bool hasPublicIp() const { return this->publicIp_ != nullptr;};
      void deletePublicIp() { this->publicIp_ = nullptr;};
      inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
      inline Data& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline Data& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> agentConfigId_ {};
      shared_ptr<string> agentConfigName_ {};
      shared_ptr<vector<Data::Attributes>> attributes_ {};
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> clusterName_ {};
      shared_ptr<string> imageId_ {};
      shared_ptr<string> installLevel_ {};
      shared_ptr<string> installType_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> instanceType_ {};
      shared_ptr<string> kernelVersion_ {};
      shared_ptr<string> manageLevel_ {};
      shared_ptr<string> manageType_ {};
      shared_ptr<string> osArch_ {};
      shared_ptr<int32_t> osHealthScore_ {};
      shared_ptr<string> osName_ {};
      shared_ptr<string> privateIp_ {};
      shared_ptr<string> publicIp_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> resourceGroupName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAllInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAllInstancesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAllInstancesResponseBody::Data>) };
    inline vector<ListAllInstancesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAllInstancesResponseBody::Data>) };
    inline ListAllInstancesResponseBody& setData(const vector<ListAllInstancesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAllInstancesResponseBody& setData(vector<ListAllInstancesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAllInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAllInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAllInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAllInstancesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAllInstancesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
