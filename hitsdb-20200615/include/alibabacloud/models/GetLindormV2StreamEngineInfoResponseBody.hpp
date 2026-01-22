// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2STREAMENGINEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2STREAMENGINEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2StreamEngineInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2StreamEngineInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2StreamEngineInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
    };
    GetLindormV2StreamEngineInfoResponseBody() = default ;
    GetLindormV2StreamEngineInfoResponseBody(const GetLindormV2StreamEngineInfoResponseBody &) = default ;
    GetLindormV2StreamEngineInfoResponseBody(GetLindormV2StreamEngineInfoResponseBody &&) = default ;
    GetLindormV2StreamEngineInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2StreamEngineInfoResponseBody() = default ;
    GetLindormV2StreamEngineInfoResponseBody& operator=(const GetLindormV2StreamEngineInfoResponseBody &) = default ;
    GetLindormV2StreamEngineInfoResponseBody& operator=(GetLindormV2StreamEngineInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(JmIpList, jmIpList_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(SgIpList, sgIpList_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(SpecId, specId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(JmIpList, jmIpList_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(SgIpList, sgIpList_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(SpecId, specId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ResourceGroupList() = default ;
      ResourceGroupList(const ResourceGroupList &) = default ;
      ResourceGroupList(ResourceGroupList &&) = default ;
      ResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroupList() = default ;
      ResourceGroupList& operator=(const ResourceGroupList &) = default ;
      ResourceGroupList& operator=(ResourceGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jmIpList_ == nullptr
        && this->quantity_ == nullptr && this->resourceGroupName_ == nullptr && this->sgIpList_ == nullptr && this->spec_ == nullptr && this->specId_ == nullptr
        && this->status_ == nullptr; };
      // jmIpList Field Functions 
      bool hasJmIpList() const { return this->jmIpList_ != nullptr;};
      void deleteJmIpList() { this->jmIpList_ = nullptr;};
      inline const vector<string> & getJmIpList() const { DARABONBA_PTR_GET_CONST(jmIpList_, vector<string>) };
      inline vector<string> getJmIpList() { DARABONBA_PTR_GET(jmIpList_, vector<string>) };
      inline ResourceGroupList& setJmIpList(const vector<string> & jmIpList) { DARABONBA_PTR_SET_VALUE(jmIpList_, jmIpList) };
      inline ResourceGroupList& setJmIpList(vector<string> && jmIpList) { DARABONBA_PTR_SET_RVALUE(jmIpList_, jmIpList) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
      inline ResourceGroupList& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline ResourceGroupList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // sgIpList Field Functions 
      bool hasSgIpList() const { return this->sgIpList_ != nullptr;};
      void deleteSgIpList() { this->sgIpList_ = nullptr;};
      inline const vector<string> & getSgIpList() const { DARABONBA_PTR_GET_CONST(sgIpList_, vector<string>) };
      inline vector<string> getSgIpList() { DARABONBA_PTR_GET(sgIpList_, vector<string>) };
      inline ResourceGroupList& setSgIpList(const vector<string> & sgIpList) { DARABONBA_PTR_SET_VALUE(sgIpList_, sgIpList) };
      inline ResourceGroupList& setSgIpList(vector<string> && sgIpList) { DARABONBA_PTR_SET_RVALUE(sgIpList_, sgIpList) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline ResourceGroupList& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // specId Field Functions 
      bool hasSpecId() const { return this->specId_ != nullptr;};
      void deleteSpecId() { this->specId_ = nullptr;};
      inline string getSpecId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
      inline ResourceGroupList& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceGroupList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<vector<string>> jmIpList_ {};
      shared_ptr<int32_t> quantity_ {};
      shared_ptr<string> resourceGroupName_ {};
      shared_ptr<vector<string>> sgIpList_ {};
      shared_ptr<string> spec_ {};
      shared_ptr<string> specId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormV2StreamEngineInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2StreamEngineInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupList Field Functions 
    bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
    void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
    inline const vector<GetLindormV2StreamEngineInfoResponseBody::ResourceGroupList> & getResourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, vector<GetLindormV2StreamEngineInfoResponseBody::ResourceGroupList>) };
    inline vector<GetLindormV2StreamEngineInfoResponseBody::ResourceGroupList> getResourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, vector<GetLindormV2StreamEngineInfoResponseBody::ResourceGroupList>) };
    inline GetLindormV2StreamEngineInfoResponseBody& setResourceGroupList(const vector<GetLindormV2StreamEngineInfoResponseBody::ResourceGroupList> & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
    inline GetLindormV2StreamEngineInfoResponseBody& setResourceGroupList(vector<GetLindormV2StreamEngineInfoResponseBody::ResourceGroupList> && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetLindormV2StreamEngineInfoResponseBody::ResourceGroupList>> resourceGroupList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
