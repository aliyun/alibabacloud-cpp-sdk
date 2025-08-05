// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKBAILIANPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKBAILIANPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SinkBaiLianParametersAfter.hpp>
#include <alibabacloud/models/SinkBaiLianParametersBefore.hpp>
#include <alibabacloud/models/SinkBaiLianParametersOffset.hpp>
#include <alibabacloud/models/SinkBaiLianParametersOp.hpp>
#include <alibabacloud/models/SinkBaiLianParametersPartition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkBaiLianParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkBaiLianParameters& obj) { 
      DARABONBA_PTR_TO_JSON(After, after_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Before, before_);
      DARABONBA_ANY_TO_JSON(Context, context_);
      DARABONBA_ANY_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SinkBaiLianParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(After, after_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Before, before_);
      DARABONBA_ANY_FROM_JSON(Context, context_);
      DARABONBA_ANY_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SinkBaiLianParameters() = default ;
    SinkBaiLianParameters(const SinkBaiLianParameters &) = default ;
    SinkBaiLianParameters(SinkBaiLianParameters &&) = default ;
    SinkBaiLianParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkBaiLianParameters() = default ;
    SinkBaiLianParameters& operator=(const SinkBaiLianParameters &) = default ;
    SinkBaiLianParameters& operator=(SinkBaiLianParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->after_ != nullptr
        && this->applicationType_ != nullptr && this->before_ != nullptr && this->context_ != nullptr && this->extend_ != nullptr && this->offset_ != nullptr
        && this->op_ != nullptr && this->partition_ != nullptr && this->workspaceId_ != nullptr; };
    // after Field Functions 
    bool hasAfter() const { return this->after_ != nullptr;};
    void deleteAfter() { this->after_ = nullptr;};
    inline const SinkBaiLianParametersAfter & after() const { DARABONBA_PTR_GET_CONST(after_, SinkBaiLianParametersAfter) };
    inline SinkBaiLianParametersAfter after() { DARABONBA_PTR_GET(after_, SinkBaiLianParametersAfter) };
    inline SinkBaiLianParameters& setAfter(const SinkBaiLianParametersAfter & after) { DARABONBA_PTR_SET_VALUE(after_, after) };
    inline SinkBaiLianParameters& setAfter(SinkBaiLianParametersAfter && after) { DARABONBA_PTR_SET_RVALUE(after_, after) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline SinkBaiLianParameters& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // before Field Functions 
    bool hasBefore() const { return this->before_ != nullptr;};
    void deleteBefore() { this->before_ = nullptr;};
    inline const SinkBaiLianParametersBefore & before() const { DARABONBA_PTR_GET_CONST(before_, SinkBaiLianParametersBefore) };
    inline SinkBaiLianParametersBefore before() { DARABONBA_PTR_GET(before_, SinkBaiLianParametersBefore) };
    inline SinkBaiLianParameters& setBefore(const SinkBaiLianParametersBefore & before) { DARABONBA_PTR_SET_VALUE(before_, before) };
    inline SinkBaiLianParameters& setBefore(SinkBaiLianParametersBefore && before) { DARABONBA_PTR_SET_RVALUE(before_, before) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline     const Darabonba::Json & context() const { DARABONBA_GET(context_) };
    Darabonba::Json & context() { DARABONBA_GET(context_) };
    inline SinkBaiLianParameters& setContext(const Darabonba::Json & context) { DARABONBA_SET_VALUE(context_, context) };
    inline SinkBaiLianParameters& setContext(Darabonba::Json & context) { DARABONBA_SET_RVALUE(context_, context) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline     const Darabonba::Json & extend() const { DARABONBA_GET(extend_) };
    Darabonba::Json & extend() { DARABONBA_GET(extend_) };
    inline SinkBaiLianParameters& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
    inline SinkBaiLianParameters& setExtend(Darabonba::Json & extend) { DARABONBA_SET_RVALUE(extend_, extend) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline const SinkBaiLianParametersOffset & offset() const { DARABONBA_PTR_GET_CONST(offset_, SinkBaiLianParametersOffset) };
    inline SinkBaiLianParametersOffset offset() { DARABONBA_PTR_GET(offset_, SinkBaiLianParametersOffset) };
    inline SinkBaiLianParameters& setOffset(const SinkBaiLianParametersOffset & offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };
    inline SinkBaiLianParameters& setOffset(SinkBaiLianParametersOffset && offset) { DARABONBA_PTR_SET_RVALUE(offset_, offset) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline const SinkBaiLianParametersOp & op() const { DARABONBA_PTR_GET_CONST(op_, SinkBaiLianParametersOp) };
    inline SinkBaiLianParametersOp op() { DARABONBA_PTR_GET(op_, SinkBaiLianParametersOp) };
    inline SinkBaiLianParameters& setOp(const SinkBaiLianParametersOp & op) { DARABONBA_PTR_SET_VALUE(op_, op) };
    inline SinkBaiLianParameters& setOp(SinkBaiLianParametersOp && op) { DARABONBA_PTR_SET_RVALUE(op_, op) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const SinkBaiLianParametersPartition & partition() const { DARABONBA_PTR_GET_CONST(partition_, SinkBaiLianParametersPartition) };
    inline SinkBaiLianParametersPartition partition() { DARABONBA_PTR_GET(partition_, SinkBaiLianParametersPartition) };
    inline SinkBaiLianParameters& setPartition(const SinkBaiLianParametersPartition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline SinkBaiLianParameters& setPartition(SinkBaiLianParametersPartition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SinkBaiLianParameters& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<SinkBaiLianParametersAfter> after_ = nullptr;
    std::shared_ptr<string> applicationType_ = nullptr;
    std::shared_ptr<SinkBaiLianParametersBefore> before_ = nullptr;
    Darabonba::Json context_ = nullptr;
    Darabonba::Json extend_ = nullptr;
    std::shared_ptr<SinkBaiLianParametersOffset> offset_ = nullptr;
    std::shared_ptr<SinkBaiLianParametersOp> op_ = nullptr;
    std::shared_ptr<SinkBaiLianParametersPartition> partition_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
