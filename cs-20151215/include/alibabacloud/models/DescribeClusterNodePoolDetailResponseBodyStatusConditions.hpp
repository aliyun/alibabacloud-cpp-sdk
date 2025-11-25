// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSTATUSCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSTATUSCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyStatusConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyStatusConditions& obj) { 
      DARABONBA_PTR_TO_JSON(last_transition_time, lastTransitionTime_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyStatusConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(last_transition_time, lastTransitionTime_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeClusterNodePoolDetailResponseBodyStatusConditions() = default ;
    DescribeClusterNodePoolDetailResponseBodyStatusConditions(const DescribeClusterNodePoolDetailResponseBodyStatusConditions &) = default ;
    DescribeClusterNodePoolDetailResponseBodyStatusConditions(DescribeClusterNodePoolDetailResponseBodyStatusConditions &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyStatusConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyStatusConditions() = default ;
    DescribeClusterNodePoolDetailResponseBodyStatusConditions& operator=(const DescribeClusterNodePoolDetailResponseBodyStatusConditions &) = default ;
    DescribeClusterNodePoolDetailResponseBodyStatusConditions& operator=(DescribeClusterNodePoolDetailResponseBodyStatusConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastTransitionTime_ == nullptr
        && return this->message_ == nullptr && return this->reason_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // lastTransitionTime Field Functions 
    bool hasLastTransitionTime() const { return this->lastTransitionTime_ != nullptr;};
    void deleteLastTransitionTime() { this->lastTransitionTime_ = nullptr;};
    inline string lastTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(lastTransitionTime_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyStatusConditions& setLastTransitionTime(string lastTransitionTime) { DARABONBA_PTR_SET_VALUE(lastTransitionTime_, lastTransitionTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyStatusConditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyStatusConditions& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyStatusConditions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyStatusConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> lastTransitionTime_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
