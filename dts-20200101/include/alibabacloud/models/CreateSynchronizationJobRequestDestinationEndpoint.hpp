// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUESTDESTINATIONENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUESTDESTINATIONENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateSynchronizationJobRequestDestinationEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSynchronizationJobRequestDestinationEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSynchronizationJobRequestDestinationEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    CreateSynchronizationJobRequestDestinationEndpoint() = default ;
    CreateSynchronizationJobRequestDestinationEndpoint(const CreateSynchronizationJobRequestDestinationEndpoint &) = default ;
    CreateSynchronizationJobRequestDestinationEndpoint(CreateSynchronizationJobRequestDestinationEndpoint &&) = default ;
    CreateSynchronizationJobRequestDestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSynchronizationJobRequestDestinationEndpoint() = default ;
    CreateSynchronizationJobRequestDestinationEndpoint& operator=(const CreateSynchronizationJobRequestDestinationEndpoint &) = default ;
    CreateSynchronizationJobRequestDestinationEndpoint& operator=(CreateSynchronizationJobRequestDestinationEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateSynchronizationJobRequestDestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The instance type of the destination database. Valid values:
    // 
    // *   **MySQL**: ApsaraDB RDS for MySQL instance or self-managed MySQL database
    // *   **PolarDB**: PolarDB for MySQL cluster or PolarDB O Edition cluster
    // *   **Redis**: Redis database
    // *   **MaxCompute**: MaxCompute project
    // 
    // > 
    // *   Default value: **MySQL**.
    // *   For more information about the supported source and destination databases, see [Database types, initial synchronization types, and synchronization topologies](https://help.aliyun.com/document_detail/130744.html).
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
