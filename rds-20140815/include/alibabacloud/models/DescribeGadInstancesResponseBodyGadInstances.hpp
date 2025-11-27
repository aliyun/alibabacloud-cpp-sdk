// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYGADINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYGADINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeGadInstancesResponseBodyGadInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesResponseBodyGadInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GadInstanceMembers, gadInstanceMembers_);
      DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesResponseBodyGadInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GadInstanceMembers, gadInstanceMembers_);
      DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGadInstancesResponseBodyGadInstances() = default ;
    DescribeGadInstancesResponseBodyGadInstances(const DescribeGadInstancesResponseBodyGadInstances &) = default ;
    DescribeGadInstancesResponseBodyGadInstances(DescribeGadInstancesResponseBodyGadInstances &&) = default ;
    DescribeGadInstancesResponseBodyGadInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesResponseBodyGadInstances() = default ;
    DescribeGadInstancesResponseBodyGadInstances& operator=(const DescribeGadInstancesResponseBodyGadInstances &) = default ;
    DescribeGadInstancesResponseBodyGadInstances& operator=(DescribeGadInstancesResponseBodyGadInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->gadInstanceMembers_ == nullptr && return this->gadInstanceName_ == nullptr && return this->modificationTime_ == nullptr && return this->service_ == nullptr
        && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeGadInstancesResponseBodyGadInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeGadInstancesResponseBodyGadInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gadInstanceMembers Field Functions 
    bool hasGadInstanceMembers() const { return this->gadInstanceMembers_ != nullptr;};
    void deleteGadInstanceMembers() { this->gadInstanceMembers_ = nullptr;};
    inline const vector<Models::DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers> & gadInstanceMembers() const { DARABONBA_PTR_GET_CONST(gadInstanceMembers_, vector<Models::DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers>) };
    inline vector<Models::DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers> gadInstanceMembers() { DARABONBA_PTR_GET(gadInstanceMembers_, vector<Models::DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers>) };
    inline DescribeGadInstancesResponseBodyGadInstances& setGadInstanceMembers(const vector<Models::DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers> & gadInstanceMembers) { DARABONBA_PTR_SET_VALUE(gadInstanceMembers_, gadInstanceMembers) };
    inline DescribeGadInstancesResponseBodyGadInstances& setGadInstanceMembers(vector<Models::DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers> && gadInstanceMembers) { DARABONBA_PTR_SET_RVALUE(gadInstanceMembers_, gadInstanceMembers) };


    // gadInstanceName Field Functions 
    bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
    void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
    inline string gadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
    inline DescribeGadInstancesResponseBodyGadInstances& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline DescribeGadInstancesResponseBodyGadInstances& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeGadInstancesResponseBodyGadInstances& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGadInstancesResponseBodyGadInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the global active database cluster was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The information about each node in the cluster.
    std::shared_ptr<vector<Models::DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers>> gadInstanceMembers_ = nullptr;
    // The ID of the global active database cluster.
    std::shared_ptr<string> gadInstanceName_ = nullptr;
    // The time when the most recent modification was made to the global active database cluster. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The database engine that is run by the global active database cluster.
    // 
    // >  The value of this parameter is fixed as **mysql**.
    std::shared_ptr<string> service_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **activation**: The cluster is running.
    // *   **creating**: The cluster is being created.
    // *   **replica_adding**: Nodes are being added to the cluster.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
