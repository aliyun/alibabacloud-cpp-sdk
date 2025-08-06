// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODESNAPSHOTWORKLOADS_HPP_
#define ALIBABACLOUD_MODELS_NODESNAPSHOTWORKLOADS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeSnapshotWorkloads : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeSnapshotWorkloads& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, NodeSnapshotWorkloads& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
    };
    NodeSnapshotWorkloads() = default ;
    NodeSnapshotWorkloads(const NodeSnapshotWorkloads &) = default ;
    NodeSnapshotWorkloads(NodeSnapshotWorkloads &&) = default ;
    NodeSnapshotWorkloads(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeSnapshotWorkloads() = default ;
    NodeSnapshotWorkloads& operator=(const NodeSnapshotWorkloads &) = default ;
    NodeSnapshotWorkloads& operator=(NodeSnapshotWorkloads &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->workloadId_ != nullptr && this->workloadType_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NodeSnapshotWorkloads& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string workloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline NodeSnapshotWorkloads& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline NodeSnapshotWorkloads& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> workloadId_ = nullptr;
    std::shared_ptr<string> workloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
