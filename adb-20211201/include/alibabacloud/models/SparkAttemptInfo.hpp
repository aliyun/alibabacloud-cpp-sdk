// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPARKATTEMPTINFO_HPP_
#define ALIBABACLOUD_MODELS_SPARKATTEMPTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Detail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SparkAttemptInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SparkAttemptInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, SparkAttemptInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    SparkAttemptInfo() = default ;
    SparkAttemptInfo(const SparkAttemptInfo &) = default ;
    SparkAttemptInfo(SparkAttemptInfo &&) = default ;
    SparkAttemptInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SparkAttemptInfo() = default ;
    SparkAttemptInfo& operator=(const SparkAttemptInfo &) = default ;
    SparkAttemptInfo& operator=(SparkAttemptInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attemptId_ != nullptr
        && this->detail_ != nullptr && this->message_ != nullptr && this->priority_ != nullptr && this->state_ != nullptr; };
    // attemptId Field Functions 
    bool hasAttemptId() const { return this->attemptId_ != nullptr;};
    void deleteAttemptId() { this->attemptId_ = nullptr;};
    inline string attemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
    inline SparkAttemptInfo& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Detail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Detail) };
    inline Detail detail() { DARABONBA_PTR_GET(detail_, Detail) };
    inline SparkAttemptInfo& setDetail(const Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline SparkAttemptInfo& setDetail(Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SparkAttemptInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline SparkAttemptInfo& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SparkAttemptInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> attemptId_ = nullptr;
    std::shared_ptr<Detail> detail_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
