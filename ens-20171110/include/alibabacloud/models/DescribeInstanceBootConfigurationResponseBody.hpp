// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBOOTCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBOOTCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceBootConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceBootConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceBootConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceBootConfigurationResponseBody() = default ;
    DescribeInstanceBootConfigurationResponseBody(const DescribeInstanceBootConfigurationResponseBody &) = default ;
    DescribeInstanceBootConfigurationResponseBody(DescribeInstanceBootConfigurationResponseBody &&) = default ;
    DescribeInstanceBootConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceBootConfigurationResponseBody() = default ;
    DescribeInstanceBootConfigurationResponseBody& operator=(const DescribeInstanceBootConfigurationResponseBody &) = default ;
    DescribeInstanceBootConfigurationResponseBody& operator=(DescribeInstanceBootConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(BootSet, bootSet_);
        DARABONBA_PTR_TO_JSON(BootType, bootType_);
        DARABONBA_PTR_TO_JSON(DiskSet, diskSet_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(BootSet, bootSet_);
        DARABONBA_PTR_FROM_JSON(BootType, bootType_);
        DARABONBA_PTR_FROM_JSON(DiskSet, diskSet_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bootSet_ == nullptr
        && this->bootType_ == nullptr && this->diskSet_ == nullptr && this->instanceId_ == nullptr; };
      // bootSet Field Functions 
      bool hasBootSet() const { return this->bootSet_ != nullptr;};
      void deleteBootSet() { this->bootSet_ = nullptr;};
      inline string getBootSet() const { DARABONBA_PTR_GET_DEFAULT(bootSet_, "") };
      inline Instances& setBootSet(string bootSet) { DARABONBA_PTR_SET_VALUE(bootSet_, bootSet) };


      // bootType Field Functions 
      bool hasBootType() const { return this->bootType_ != nullptr;};
      void deleteBootType() { this->bootType_ = nullptr;};
      inline string getBootType() const { DARABONBA_PTR_GET_DEFAULT(bootType_, "") };
      inline Instances& setBootType(string bootType) { DARABONBA_PTR_SET_VALUE(bootType_, bootType) };


      // diskSet Field Functions 
      bool hasDiskSet() const { return this->diskSet_ != nullptr;};
      void deleteDiskSet() { this->diskSet_ = nullptr;};
      inline string getDiskSet() const { DARABONBA_PTR_GET_DEFAULT(diskSet_, "") };
      inline Instances& setDiskSet(string diskSet) { DARABONBA_PTR_SET_VALUE(diskSet_, diskSet) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The startup method.
      shared_ptr<string> bootSet_ {};
      // The startup type.
      shared_ptr<string> bootType_ {};
      // Specifies whether the startup depends on the disk.
      shared_ptr<string> diskSet_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstanceBootConfigurationResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstanceBootConfigurationResponseBody::Instances) };
    inline DescribeInstanceBootConfigurationResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstanceBootConfigurationResponseBody::Instances) };
    inline DescribeInstanceBootConfigurationResponseBody& setInstances(const DescribeInstanceBootConfigurationResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstanceBootConfigurationResponseBody& setInstances(DescribeInstanceBootConfigurationResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceBootConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Schema of Response
    shared_ptr<DescribeInstanceBootConfigurationResponseBody::Instances> instances_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
