// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITIONSPEC_HPP_
#define ALIBABACLOUD_MODELS_PARTITIONSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Partition.hpp>
#include <alibabacloud/models/PartitionSpecSharedStorageDescriptor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class PartitionSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PartitionSpec& obj) { 
      DARABONBA_PTR_TO_JSON(SharedSDPartitions, sharedSDPartitions_);
      DARABONBA_PTR_TO_JSON(SharedStorageDescriptor, sharedStorageDescriptor_);
    };
    friend void from_json(const Darabonba::Json& j, PartitionSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(SharedSDPartitions, sharedSDPartitions_);
      DARABONBA_PTR_FROM_JSON(SharedStorageDescriptor, sharedStorageDescriptor_);
    };
    PartitionSpec() = default ;
    PartitionSpec(const PartitionSpec &) = default ;
    PartitionSpec(PartitionSpec &&) = default ;
    PartitionSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PartitionSpec() = default ;
    PartitionSpec& operator=(const PartitionSpec &) = default ;
    PartitionSpec& operator=(PartitionSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sharedSDPartitions_ == nullptr
        && return this->sharedStorageDescriptor_ == nullptr; };
    // sharedSDPartitions Field Functions 
    bool hasSharedSDPartitions() const { return this->sharedSDPartitions_ != nullptr;};
    void deleteSharedSDPartitions() { this->sharedSDPartitions_ = nullptr;};
    inline const vector<Partition> & sharedSDPartitions() const { DARABONBA_PTR_GET_CONST(sharedSDPartitions_, vector<Partition>) };
    inline vector<Partition> sharedSDPartitions() { DARABONBA_PTR_GET(sharedSDPartitions_, vector<Partition>) };
    inline PartitionSpec& setSharedSDPartitions(const vector<Partition> & sharedSDPartitions) { DARABONBA_PTR_SET_VALUE(sharedSDPartitions_, sharedSDPartitions) };
    inline PartitionSpec& setSharedSDPartitions(vector<Partition> && sharedSDPartitions) { DARABONBA_PTR_SET_RVALUE(sharedSDPartitions_, sharedSDPartitions) };


    // sharedStorageDescriptor Field Functions 
    bool hasSharedStorageDescriptor() const { return this->sharedStorageDescriptor_ != nullptr;};
    void deleteSharedStorageDescriptor() { this->sharedStorageDescriptor_ = nullptr;};
    inline const PartitionSpecSharedStorageDescriptor & sharedStorageDescriptor() const { DARABONBA_PTR_GET_CONST(sharedStorageDescriptor_, PartitionSpecSharedStorageDescriptor) };
    inline PartitionSpecSharedStorageDescriptor sharedStorageDescriptor() { DARABONBA_PTR_GET(sharedStorageDescriptor_, PartitionSpecSharedStorageDescriptor) };
    inline PartitionSpec& setSharedStorageDescriptor(const PartitionSpecSharedStorageDescriptor & sharedStorageDescriptor) { DARABONBA_PTR_SET_VALUE(sharedStorageDescriptor_, sharedStorageDescriptor) };
    inline PartitionSpec& setSharedStorageDescriptor(PartitionSpecSharedStorageDescriptor && sharedStorageDescriptor) { DARABONBA_PTR_SET_RVALUE(sharedStorageDescriptor_, sharedStorageDescriptor) };


  protected:
    std::shared_ptr<vector<Partition>> sharedSDPartitions_ = nullptr;
    std::shared_ptr<PartitionSpecSharedStorageDescriptor> sharedStorageDescriptor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
