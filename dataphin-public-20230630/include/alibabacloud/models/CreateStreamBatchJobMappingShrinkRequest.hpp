// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateStreamBatchJobMappingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamBatchJobMappingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(StreamBatchJobMappingCreateCommand, streamBatchJobMappingCreateCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamBatchJobMappingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(StreamBatchJobMappingCreateCommand, streamBatchJobMappingCreateCommandShrink_);
    };
    CreateStreamBatchJobMappingShrinkRequest() = default ;
    CreateStreamBatchJobMappingShrinkRequest(const CreateStreamBatchJobMappingShrinkRequest &) = default ;
    CreateStreamBatchJobMappingShrinkRequest(CreateStreamBatchJobMappingShrinkRequest &&) = default ;
    CreateStreamBatchJobMappingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamBatchJobMappingShrinkRequest() = default ;
    CreateStreamBatchJobMappingShrinkRequest& operator=(const CreateStreamBatchJobMappingShrinkRequest &) = default ;
    CreateStreamBatchJobMappingShrinkRequest& operator=(CreateStreamBatchJobMappingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->streamBatchJobMappingCreateCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateStreamBatchJobMappingShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // streamBatchJobMappingCreateCommandShrink Field Functions 
    bool hasStreamBatchJobMappingCreateCommandShrink() const { return this->streamBatchJobMappingCreateCommandShrink_ != nullptr;};
    void deleteStreamBatchJobMappingCreateCommandShrink() { this->streamBatchJobMappingCreateCommandShrink_ = nullptr;};
    inline string getStreamBatchJobMappingCreateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(streamBatchJobMappingCreateCommandShrink_, "") };
    inline CreateStreamBatchJobMappingShrinkRequest& setStreamBatchJobMappingCreateCommandShrink(string streamBatchJobMappingCreateCommandShrink) { DARABONBA_PTR_SET_VALUE(streamBatchJobMappingCreateCommandShrink_, streamBatchJobMappingCreateCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> streamBatchJobMappingCreateCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
