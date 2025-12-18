// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATORSRESPONSEBODYOPERATEAGGREGATORSRESULTOPERATEAGGREGATORS_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATORSRESPONSEBODYOPERATEAGGREGATORSRESULTOPERATEAGGREGATORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators() = default ;
    DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators(const DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators &) = default ;
    DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators(DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators &&) = default ;
    DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators() = default ;
    DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators& operator=(const DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators &) = default ;
    DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators& operator=(DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->errorCode_ == nullptr && return this->success_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the account group.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The error code returned.
    // 
    // > No error code is returned for the account group if the account group is deleted.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
