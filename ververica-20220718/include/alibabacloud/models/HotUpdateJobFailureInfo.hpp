// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTUPDATEJOBFAILUREINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTUPDATEJOBFAILUREINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class HotUpdateJobFailureInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotUpdateJobFailureInfo& obj) { 
      DARABONBA_PTR_TO_JSON(failureSeverity, failureSeverity_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, HotUpdateJobFailureInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(failureSeverity, failureSeverity_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    HotUpdateJobFailureInfo() = default ;
    HotUpdateJobFailureInfo(const HotUpdateJobFailureInfo &) = default ;
    HotUpdateJobFailureInfo(HotUpdateJobFailureInfo &&) = default ;
    HotUpdateJobFailureInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotUpdateJobFailureInfo() = default ;
    HotUpdateJobFailureInfo& operator=(const HotUpdateJobFailureInfo &) = default ;
    HotUpdateJobFailureInfo& operator=(HotUpdateJobFailureInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failureSeverity_ == nullptr
        && return this->message_ == nullptr && return this->reason_ == nullptr; };
    // failureSeverity Field Functions 
    bool hasFailureSeverity() const { return this->failureSeverity_ != nullptr;};
    void deleteFailureSeverity() { this->failureSeverity_ = nullptr;};
    inline string failureSeverity() const { DARABONBA_PTR_GET_DEFAULT(failureSeverity_, "") };
    inline HotUpdateJobFailureInfo& setFailureSeverity(string failureSeverity) { DARABONBA_PTR_SET_VALUE(failureSeverity_, failureSeverity) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotUpdateJobFailureInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline HotUpdateJobFailureInfo& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> failureSeverity_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
