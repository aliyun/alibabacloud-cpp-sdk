// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETCONSUMEOFFSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETCONSUMEOFFSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ResetConsumeOffsetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetConsumeOffsetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resetTime, resetTime_);
      DARABONBA_PTR_TO_JSON(resetType, resetType_);
    };
    friend void from_json(const Darabonba::Json& j, ResetConsumeOffsetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resetTime, resetTime_);
      DARABONBA_PTR_FROM_JSON(resetType, resetType_);
    };
    ResetConsumeOffsetRequest() = default ;
    ResetConsumeOffsetRequest(const ResetConsumeOffsetRequest &) = default ;
    ResetConsumeOffsetRequest(ResetConsumeOffsetRequest &&) = default ;
    ResetConsumeOffsetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetConsumeOffsetRequest() = default ;
    ResetConsumeOffsetRequest& operator=(const ResetConsumeOffsetRequest &) = default ;
    ResetConsumeOffsetRequest& operator=(ResetConsumeOffsetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resetTime_ == nullptr
        && return this->resetType_ == nullptr; };
    // resetTime Field Functions 
    bool hasResetTime() const { return this->resetTime_ != nullptr;};
    void deleteResetTime() { this->resetTime_ = nullptr;};
    inline string resetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, "") };
    inline ResetConsumeOffsetRequest& setResetTime(string resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline ResetConsumeOffsetRequest& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


  protected:
    // The time when the consumer offset is reset.
    std::shared_ptr<string> resetTime_ = nullptr;
    // The method that is used to reset the consumer offset. Valid values: LATEST_OFFSET and SPECIFIED_TIME.
    std::shared_ptr<string> resetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
