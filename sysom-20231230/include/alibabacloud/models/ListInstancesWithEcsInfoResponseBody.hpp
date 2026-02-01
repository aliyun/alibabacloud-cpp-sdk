// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFORESPONSEBODY_HPP_
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
  class ListInstancesWithEcsInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesWithEcsInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesWithEcsInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListInstancesWithEcsInfoResponseBody() = default ;
    ListInstancesWithEcsInfoResponseBody(const ListInstancesWithEcsInfoResponseBody &) = default ;
    ListInstancesWithEcsInfoResponseBody(ListInstancesWithEcsInfoResponseBody &&) = default ;
    ListInstancesWithEcsInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesWithEcsInfoResponseBody() = default ;
    ListInstancesWithEcsInfoResponseBody& operator=(const ListInstancesWithEcsInfoResponseBody &) = default ;
    ListInstancesWithEcsInfoResponseBody& operator=(ListInstancesWithEcsInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
        DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
        DARABONBA_PTR_TO_JSON(instance_tag, instanceTag_);
        DARABONBA_PTR_TO_JSON(kernel_version, kernelVersion_);
        DARABONBA_PTR_TO_JSON(os_arch, osArch_);
        DARABONBA_PTR_TO_JSON(os_health_score, osHealthScore_);
        DARABONBA_PTR_TO_JSON(os_name, osName_);
        DARABONBA_PTR_TO_JSON(private_ip, privateIp_);
        DARABONBA_PTR_TO_JSON(public_ip, publicIp_);
        DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(resource_group_name, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
        DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
        DARABONBA_PTR_FROM_JSON(instance_tag, instanceTag_);
        DARABONBA_PTR_FROM_JSON(kernel_version, kernelVersion_);
        DARABONBA_PTR_FROM_JSON(os_arch, osArch_);
        DARABONBA_PTR_FROM_JSON(os_health_score, osHealthScore_);
        DARABONBA_PTR_FROM_JSON(os_name, osName_);
        DARABONBA_PTR_FROM_JSON(private_ip, privateIp_);
        DARABONBA_PTR_FROM_JSON(public_ip, publicIp_);
        DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(resource_group_name, resourceGroupName_);
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
      class InstanceTag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceTag& obj) { 
          DARABONBA_PTR_TO_JSON(tag_key, tagKey_);
          DARABONBA_PTR_TO_JSON(tag_value, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTag& obj) { 
          DARABONBA_PTR_FROM_JSON(tag_key, tagKey_);
          DARABONBA_PTR_FROM_JSON(tag_value, tagValue_);
        };
        InstanceTag() = default ;
        InstanceTag(const InstanceTag &) = default ;
        InstanceTag(InstanceTag &&) = default ;
        InstanceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceTag() = default ;
        InstanceTag& operator=(const InstanceTag &) = default ;
        InstanceTag& operator=(InstanceTag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline InstanceTag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline InstanceTag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceTag_ == nullptr && this->kernelVersion_ == nullptr && this->osArch_ == nullptr
        && this->osHealthScore_ == nullptr && this->osName_ == nullptr && this->privateIp_ == nullptr && this->publicIp_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceGroupName_ == nullptr && this->status_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


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


      // instanceTag Field Functions 
      bool hasInstanceTag() const { return this->instanceTag_ != nullptr;};
      void deleteInstanceTag() { this->instanceTag_ = nullptr;};
      inline const vector<Data::InstanceTag> & getInstanceTag() const { DARABONBA_PTR_GET_CONST(instanceTag_, vector<Data::InstanceTag>) };
      inline vector<Data::InstanceTag> getInstanceTag() { DARABONBA_PTR_GET(instanceTag_, vector<Data::InstanceTag>) };
      inline Data& setInstanceTag(const vector<Data::InstanceTag> & instanceTag) { DARABONBA_PTR_SET_VALUE(instanceTag_, instanceTag) };
      inline Data& setInstanceTag(vector<Data::InstanceTag> && instanceTag) { DARABONBA_PTR_SET_RVALUE(instanceTag_, instanceTag) };


      // kernelVersion Field Functions 
      bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
      void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
      inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
      inline Data& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


      // osArch Field Functions 
      bool hasOsArch() const { return this->osArch_ != nullptr;};
      void deleteOsArch() { this->osArch_ = nullptr;};
      inline string getOsArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
      inline Data& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


      // osHealthScore Field Functions 
      bool hasOsHealthScore() const { return this->osHealthScore_ != nullptr;};
      void deleteOsHealthScore() { this->osHealthScore_ = nullptr;};
      inline string getOsHealthScore() const { DARABONBA_PTR_GET_DEFAULT(osHealthScore_, "") };
      inline Data& setOsHealthScore(string osHealthScore) { DARABONBA_PTR_SET_VALUE(osHealthScore_, osHealthScore) };


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
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<vector<Data::InstanceTag>> instanceTag_ {};
      shared_ptr<string> kernelVersion_ {};
      shared_ptr<string> osArch_ {};
      shared_ptr<string> osHealthScore_ {};
      shared_ptr<string> osName_ {};
      shared_ptr<string> privateIp_ {};
      shared_ptr<string> publicIp_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> resourceGroupName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstancesWithEcsInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInstancesWithEcsInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInstancesWithEcsInfoResponseBody::Data>) };
    inline vector<ListInstancesWithEcsInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInstancesWithEcsInfoResponseBody::Data>) };
    inline ListInstancesWithEcsInfoResponseBody& setData(const vector<ListInstancesWithEcsInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstancesWithEcsInfoResponseBody& setData(vector<ListInstancesWithEcsInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstancesWithEcsInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesWithEcsInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListInstancesWithEcsInfoResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListInstancesWithEcsInfoResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
