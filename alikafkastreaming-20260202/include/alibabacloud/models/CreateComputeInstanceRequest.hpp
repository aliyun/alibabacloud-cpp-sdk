// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class CreateComputeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PaidType, paidType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateComputeInstanceRequest() = default ;
    CreateComputeInstanceRequest(const CreateComputeInstanceRequest &) = default ;
    CreateComputeInstanceRequest(CreateComputeInstanceRequest &&) = default ;
    CreateComputeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeInstanceRequest() = default ;
    CreateComputeInstanceRequest& operator=(const CreateComputeInstanceRequest &) = default ;
    CreateComputeInstanceRequest& operator=(CreateComputeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paidType_ == nullptr
        && this->regionId_ == nullptr; };
    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int64_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0L) };
    inline CreateComputeInstanceRequest& setPaidType(int64_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateComputeInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> paidType_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
