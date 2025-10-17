// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUESTSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUESTSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateSynchronizationJobRequestSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSynchronizationJobRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSynchronizationJobRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    CreateSynchronizationJobRequestSourceEndpoint() = default ;
    CreateSynchronizationJobRequestSourceEndpoint(const CreateSynchronizationJobRequestSourceEndpoint &) = default ;
    CreateSynchronizationJobRequestSourceEndpoint(CreateSynchronizationJobRequestSourceEndpoint &&) = default ;
    CreateSynchronizationJobRequestSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSynchronizationJobRequestSourceEndpoint() = default ;
    CreateSynchronizationJobRequestSourceEndpoint& operator=(const CreateSynchronizationJobRequestSourceEndpoint &) = default ;
    CreateSynchronizationJobRequestSourceEndpoint& operator=(CreateSynchronizationJobRequestSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateSynchronizationJobRequestSourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The instance type of the source database. Valid values:
    // 
    // *   **MySQL**: ApsaraDB RDS for MySQL instance or self-managed MySQL database
    // *   **PolarDB**: PolarDB for MySQL cluster or PolarDB O Edition cluster
    // *   **Redis**: Redis database
    // *   **DRDS**: PolarDB-X instance V1.0
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
