// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODYUNALLOCATIONID_HPP_
#define ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODYUNALLOCATIONID_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CopySnapshotResponseBodyUnAllocationId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySnapshotResponseBodyUnAllocationId& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySnapshotResponseBodyUnAllocationId& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    CopySnapshotResponseBodyUnAllocationId() = default ;
    CopySnapshotResponseBodyUnAllocationId(const CopySnapshotResponseBodyUnAllocationId &) = default ;
    CopySnapshotResponseBodyUnAllocationId(CopySnapshotResponseBodyUnAllocationId &&) = default ;
    CopySnapshotResponseBodyUnAllocationId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySnapshotResponseBodyUnAllocationId() = default ;
    CopySnapshotResponseBodyUnAllocationId& operator=(const CopySnapshotResponseBodyUnAllocationId &) = default ;
    CopySnapshotResponseBodyUnAllocationId& operator=(CopySnapshotResponseBodyUnAllocationId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CopySnapshotResponseBodyUnAllocationId& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
