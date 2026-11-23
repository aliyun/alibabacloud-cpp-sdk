// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYACTIVITYADMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYACTIVITYADMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class VerifyActivityAdmissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyActivityAdmissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(IdCardNo, idCardNo_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyActivityAdmissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(IdCardNo, idCardNo_);
    };
    VerifyActivityAdmissionRequest() = default ;
    VerifyActivityAdmissionRequest(const VerifyActivityAdmissionRequest &) = default ;
    VerifyActivityAdmissionRequest(VerifyActivityAdmissionRequest &&) = default ;
    VerifyActivityAdmissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyActivityAdmissionRequest() = default ;
    VerifyActivityAdmissionRequest& operator=(const VerifyActivityAdmissionRequest &) = default ;
    VerifyActivityAdmissionRequest& operator=(VerifyActivityAdmissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityId_ == nullptr
        && this->idCardNo_ == nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline VerifyActivityAdmissionRequest& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // idCardNo Field Functions 
    bool hasIdCardNo() const { return this->idCardNo_ != nullptr;};
    void deleteIdCardNo() { this->idCardNo_ = nullptr;};
    inline string getIdCardNo() const { DARABONBA_PTR_GET_DEFAULT(idCardNo_, "") };
    inline VerifyActivityAdmissionRequest& setIdCardNo(string idCardNo) { DARABONBA_PTR_SET_VALUE(idCardNo_, idCardNo) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> activityId_ {};
    // This parameter is required.
    shared_ptr<string> idCardNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
