// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOSCHECKINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOSCHECKINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class MosCheckInRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MosCheckInRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ExtParam, extParam_);
      DARABONBA_PTR_TO_JSON(QrCode, qrCode_);
    };
    friend void from_json(const Darabonba::Json& j, MosCheckInRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ExtParam, extParam_);
      DARABONBA_PTR_FROM_JSON(QrCode, qrCode_);
    };
    MosCheckInRequest() = default ;
    MosCheckInRequest(const MosCheckInRequest &) = default ;
    MosCheckInRequest(MosCheckInRequest &&) = default ;
    MosCheckInRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MosCheckInRequest() = default ;
    MosCheckInRequest& operator=(const MosCheckInRequest &) = default ;
    MosCheckInRequest& operator=(MosCheckInRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityId_ == nullptr
        && this->extParam_ == nullptr && this->qrCode_ == nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline MosCheckInRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // extParam Field Functions 
    bool hasExtParam() const { return this->extParam_ != nullptr;};
    void deleteExtParam() { this->extParam_ = nullptr;};
    inline string getExtParam() const { DARABONBA_PTR_GET_DEFAULT(extParam_, "") };
    inline MosCheckInRequest& setExtParam(string extParam) { DARABONBA_PTR_SET_VALUE(extParam_, extParam) };


    // qrCode Field Functions 
    bool hasQrCode() const { return this->qrCode_ != nullptr;};
    void deleteQrCode() { this->qrCode_ = nullptr;};
    inline string getQrCode() const { DARABONBA_PTR_GET_DEFAULT(qrCode_, "") };
    inline MosCheckInRequest& setQrCode(string qrCode) { DARABONBA_PTR_SET_VALUE(qrCode_, qrCode) };


  protected:
    shared_ptr<string> activityId_ {};
    shared_ptr<string> extParam_ {};
    shared_ptr<string> qrCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
