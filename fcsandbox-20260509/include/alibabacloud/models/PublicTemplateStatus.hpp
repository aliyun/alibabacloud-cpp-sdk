// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATESTATUS_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATESTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicTemplateStatusReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateStatus& obj) { 
      DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    PublicTemplateStatus() = default ;
    PublicTemplateStatus(const PublicTemplateStatus &) = default ;
    PublicTemplateStatus(PublicTemplateStatus &&) = default ;
    PublicTemplateStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateStatus() = default ;
    PublicTemplateStatus& operator=(const PublicTemplateStatus &) = default ;
    PublicTemplateStatus& operator=(PublicTemplateStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishedAt_ == nullptr
        && this->reason_ == nullptr && this->state_ == nullptr; };
    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline PublicTemplateStatus& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline const PublicTemplateStatusReason & getReason() const { DARABONBA_PTR_GET_CONST(reason_, PublicTemplateStatusReason) };
    inline PublicTemplateStatusReason getReason() { DARABONBA_PTR_GET(reason_, PublicTemplateStatusReason) };
    inline PublicTemplateStatus& setReason(const PublicTemplateStatusReason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
    inline PublicTemplateStatus& setReason(PublicTemplateStatusReason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline PublicTemplateStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<string> finishedAt_ {};
    shared_ptr<PublicTemplateStatusReason> reason_ {};
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
