// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POD_HPP_
#define ALIBABACLOUD_MODELS_POD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class Pod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Pod& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(PodStatus, podStatus_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, Pod& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(PodStatus, podStatus_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    Pod() = default ;
    Pod(const Pod &) = default ;
    Pod(Pod &&) = default ;
    Pod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Pod() = default ;
    Pod& operator=(const Pod &) = default ;
    Pod& operator=(Pod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->podName_ == nullptr && return this->podStatus_ == nullptr && return this->reason_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Pod& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline Pod& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // podStatus Field Functions 
    bool hasPodStatus() const { return this->podStatus_ != nullptr;};
    void deletePodStatus() { this->podStatus_ = nullptr;};
    inline string podStatus() const { DARABONBA_PTR_GET_DEFAULT(podStatus_, "") };
    inline Pod& setPodStatus(string podStatus) { DARABONBA_PTR_SET_VALUE(podStatus_, podStatus) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline Pod& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> podName_ = nullptr;
    std::shared_ptr<string> podStatus_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
