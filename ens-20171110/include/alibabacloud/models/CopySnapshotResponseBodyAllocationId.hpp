// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODYALLOCATIONID_HPP_
#define ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODYALLOCATIONID_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CopySnapshotResponseBodyAllocationId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySnapshotResponseBodyAllocationId& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySnapshotResponseBodyAllocationId& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CopySnapshotResponseBodyAllocationId() = default ;
    CopySnapshotResponseBodyAllocationId(const CopySnapshotResponseBodyAllocationId &) = default ;
    CopySnapshotResponseBodyAllocationId(CopySnapshotResponseBodyAllocationId &&) = default ;
    CopySnapshotResponseBodyAllocationId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySnapshotResponseBodyAllocationId() = default ;
    CopySnapshotResponseBodyAllocationId& operator=(const CopySnapshotResponseBodyAllocationId &) = default ;
    CopySnapshotResponseBodyAllocationId& operator=(CopySnapshotResponseBodyAllocationId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->instanceId_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CopySnapshotResponseBodyAllocationId& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline CopySnapshotResponseBodyAllocationId& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline CopySnapshotResponseBodyAllocationId& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The IDs of the instances.
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
