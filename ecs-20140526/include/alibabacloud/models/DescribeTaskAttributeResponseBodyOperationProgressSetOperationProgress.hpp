// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(RelatedItemSet, relatedItemSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(RelatedItemSet, relatedItemSet_);
    };
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress() = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress(const DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress &) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress(DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress &&) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress() = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& operator=(const DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress &) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& operator=(DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->operationStatus_ != nullptr && this->relatedItemSet_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline string operationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
    inline DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // relatedItemSet Field Functions 
    bool hasRelatedItemSet() const { return this->relatedItemSet_ != nullptr;};
    void deleteRelatedItemSet() { this->relatedItemSet_ = nullptr;};
    inline const Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet & relatedItemSet() const { DARABONBA_PTR_GET_CONST(relatedItemSet_, Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet) };
    inline Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet relatedItemSet() { DARABONBA_PTR_GET(relatedItemSet_, Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet) };
    inline DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& setRelatedItemSet(const Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet & relatedItemSet) { DARABONBA_PTR_SET_VALUE(relatedItemSet_, relatedItemSet) };
    inline DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress& setRelatedItemSet(Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet && relatedItemSet) { DARABONBA_PTR_SET_RVALUE(relatedItemSet_, relatedItemSet) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The status of the operation.
    std::shared_ptr<string> operationStatus_ = nullptr;
    // The type of resource information.
    std::shared_ptr<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet> relatedItemSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
