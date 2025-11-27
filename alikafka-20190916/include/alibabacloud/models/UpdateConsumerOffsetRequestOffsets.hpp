// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMEROFFSETREQUESTOFFSETS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMEROFFSETREQUESTOFFSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpdateConsumerOffsetRequestOffsets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerOffsetRequestOffsets& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerOffsetRequestOffsets& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
    };
    UpdateConsumerOffsetRequestOffsets() = default ;
    UpdateConsumerOffsetRequestOffsets(const UpdateConsumerOffsetRequestOffsets &) = default ;
    UpdateConsumerOffsetRequestOffsets(UpdateConsumerOffsetRequestOffsets &&) = default ;
    UpdateConsumerOffsetRequestOffsets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerOffsetRequestOffsets() = default ;
    UpdateConsumerOffsetRequestOffsets& operator=(const UpdateConsumerOffsetRequestOffsets &) = default ;
    UpdateConsumerOffsetRequestOffsets& operator=(UpdateConsumerOffsetRequestOffsets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offset_ == nullptr
        && return this->partition_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline UpdateConsumerOffsetRequestOffsets& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline UpdateConsumerOffsetRequestOffsets& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


  protected:
    // The consumer offset of the partition.
    std::shared_ptr<int64_t> offset_ = nullptr;
    // The partition ID.
    std::shared_ptr<int32_t> partition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
