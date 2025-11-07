// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVerifyStatisticsResponseBodyResultObjectItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyStatisticsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(InitDevice, initDevice_);
      DARABONBA_PTR_TO_JSON(InitDeviceId, initDeviceId_);
      DARABONBA_PTR_TO_JSON(InitDeviceIdSuccess, initDeviceIdSuccess_);
      DARABONBA_PTR_TO_JSON(InitDeviceSuccess, initDeviceSuccess_);
      DARABONBA_PTR_TO_JSON(InitService, initService_);
      DARABONBA_PTR_TO_JSON(InitServiceId, initServiceId_);
      DARABONBA_PTR_TO_JSON(InitServiceIdSuccess, initServiceIdSuccess_);
      DARABONBA_PTR_TO_JSON(InitServiceSuccess, initServiceSuccess_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(VerifyDevice, verifyDevice_);
      DARABONBA_PTR_TO_JSON(VerifyDeviceId, verifyDeviceId_);
      DARABONBA_PTR_TO_JSON(VerifyDeviceIdSuccess, verifyDeviceIdSuccess_);
      DARABONBA_PTR_TO_JSON(VerifyDeviceIdSuccessPassed, verifyDeviceIdSuccessPassed_);
      DARABONBA_PTR_TO_JSON(VerifyDeviceSuccess, verifyDeviceSuccess_);
      DARABONBA_PTR_TO_JSON(VerifyDeviceSuccessPassed, verifyDeviceSuccessPassed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(InitDevice, initDevice_);
      DARABONBA_PTR_FROM_JSON(InitDeviceId, initDeviceId_);
      DARABONBA_PTR_FROM_JSON(InitDeviceIdSuccess, initDeviceIdSuccess_);
      DARABONBA_PTR_FROM_JSON(InitDeviceSuccess, initDeviceSuccess_);
      DARABONBA_PTR_FROM_JSON(InitService, initService_);
      DARABONBA_PTR_FROM_JSON(InitServiceId, initServiceId_);
      DARABONBA_PTR_FROM_JSON(InitServiceIdSuccess, initServiceIdSuccess_);
      DARABONBA_PTR_FROM_JSON(InitServiceSuccess, initServiceSuccess_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(VerifyDevice, verifyDevice_);
      DARABONBA_PTR_FROM_JSON(VerifyDeviceId, verifyDeviceId_);
      DARABONBA_PTR_FROM_JSON(VerifyDeviceIdSuccess, verifyDeviceIdSuccess_);
      DARABONBA_PTR_FROM_JSON(VerifyDeviceIdSuccessPassed, verifyDeviceIdSuccessPassed_);
      DARABONBA_PTR_FROM_JSON(VerifyDeviceSuccess, verifyDeviceSuccess_);
      DARABONBA_PTR_FROM_JSON(VerifyDeviceSuccessPassed, verifyDeviceSuccessPassed_);
    };
    DescribeVerifyStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyStatisticsResponseBodyResultObject(const DescribeVerifyStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyStatisticsResponseBodyResultObject(DescribeVerifyStatisticsResponseBodyResultObject &&) = default ;
    DescribeVerifyStatisticsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyStatisticsResponseBodyResultObject& operator=(const DescribeVerifyStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyStatisticsResponseBodyResultObject& operator=(DescribeVerifyStatisticsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->initDevice_ == nullptr
        && return this->initDeviceId_ == nullptr && return this->initDeviceIdSuccess_ == nullptr && return this->initDeviceSuccess_ == nullptr && return this->initService_ == nullptr && return this->initServiceId_ == nullptr
        && return this->initServiceIdSuccess_ == nullptr && return this->initServiceSuccess_ == nullptr && return this->items_ == nullptr && return this->verifyDevice_ == nullptr && return this->verifyDeviceId_ == nullptr
        && return this->verifyDeviceIdSuccess_ == nullptr && return this->verifyDeviceIdSuccessPassed_ == nullptr && return this->verifyDeviceSuccess_ == nullptr && return this->verifyDeviceSuccessPassed_ == nullptr; };
    // initDevice Field Functions 
    bool hasInitDevice() const { return this->initDevice_ != nullptr;};
    void deleteInitDevice() { this->initDevice_ = nullptr;};
    inline int64_t initDevice() const { DARABONBA_PTR_GET_DEFAULT(initDevice_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitDevice(int64_t initDevice) { DARABONBA_PTR_SET_VALUE(initDevice_, initDevice) };


    // initDeviceId Field Functions 
    bool hasInitDeviceId() const { return this->initDeviceId_ != nullptr;};
    void deleteInitDeviceId() { this->initDeviceId_ = nullptr;};
    inline int64_t initDeviceId() const { DARABONBA_PTR_GET_DEFAULT(initDeviceId_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitDeviceId(int64_t initDeviceId) { DARABONBA_PTR_SET_VALUE(initDeviceId_, initDeviceId) };


    // initDeviceIdSuccess Field Functions 
    bool hasInitDeviceIdSuccess() const { return this->initDeviceIdSuccess_ != nullptr;};
    void deleteInitDeviceIdSuccess() { this->initDeviceIdSuccess_ = nullptr;};
    inline int64_t initDeviceIdSuccess() const { DARABONBA_PTR_GET_DEFAULT(initDeviceIdSuccess_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitDeviceIdSuccess(int64_t initDeviceIdSuccess) { DARABONBA_PTR_SET_VALUE(initDeviceIdSuccess_, initDeviceIdSuccess) };


    // initDeviceSuccess Field Functions 
    bool hasInitDeviceSuccess() const { return this->initDeviceSuccess_ != nullptr;};
    void deleteInitDeviceSuccess() { this->initDeviceSuccess_ = nullptr;};
    inline int64_t initDeviceSuccess() const { DARABONBA_PTR_GET_DEFAULT(initDeviceSuccess_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitDeviceSuccess(int64_t initDeviceSuccess) { DARABONBA_PTR_SET_VALUE(initDeviceSuccess_, initDeviceSuccess) };


    // initService Field Functions 
    bool hasInitService() const { return this->initService_ != nullptr;};
    void deleteInitService() { this->initService_ = nullptr;};
    inline int64_t initService() const { DARABONBA_PTR_GET_DEFAULT(initService_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitService(int64_t initService) { DARABONBA_PTR_SET_VALUE(initService_, initService) };


    // initServiceId Field Functions 
    bool hasInitServiceId() const { return this->initServiceId_ != nullptr;};
    void deleteInitServiceId() { this->initServiceId_ = nullptr;};
    inline int64_t initServiceId() const { DARABONBA_PTR_GET_DEFAULT(initServiceId_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitServiceId(int64_t initServiceId) { DARABONBA_PTR_SET_VALUE(initServiceId_, initServiceId) };


    // initServiceIdSuccess Field Functions 
    bool hasInitServiceIdSuccess() const { return this->initServiceIdSuccess_ != nullptr;};
    void deleteInitServiceIdSuccess() { this->initServiceIdSuccess_ = nullptr;};
    inline int64_t initServiceIdSuccess() const { DARABONBA_PTR_GET_DEFAULT(initServiceIdSuccess_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitServiceIdSuccess(int64_t initServiceIdSuccess) { DARABONBA_PTR_SET_VALUE(initServiceIdSuccess_, initServiceIdSuccess) };


    // initServiceSuccess Field Functions 
    bool hasInitServiceSuccess() const { return this->initServiceSuccess_ != nullptr;};
    void deleteInitServiceSuccess() { this->initServiceSuccess_ = nullptr;};
    inline int64_t initServiceSuccess() const { DARABONBA_PTR_GET_DEFAULT(initServiceSuccess_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setInitServiceSuccess(int64_t initServiceSuccess) { DARABONBA_PTR_SET_VALUE(initServiceSuccess_, initServiceSuccess) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeVerifyStatisticsResponseBodyResultObjectItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeVerifyStatisticsResponseBodyResultObjectItems>) };
    inline vector<Models::DescribeVerifyStatisticsResponseBodyResultObjectItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeVerifyStatisticsResponseBodyResultObjectItems>) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setItems(const vector<Models::DescribeVerifyStatisticsResponseBodyResultObjectItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setItems(vector<Models::DescribeVerifyStatisticsResponseBodyResultObjectItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // verifyDevice Field Functions 
    bool hasVerifyDevice() const { return this->verifyDevice_ != nullptr;};
    void deleteVerifyDevice() { this->verifyDevice_ = nullptr;};
    inline int64_t verifyDevice() const { DARABONBA_PTR_GET_DEFAULT(verifyDevice_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setVerifyDevice(int64_t verifyDevice) { DARABONBA_PTR_SET_VALUE(verifyDevice_, verifyDevice) };


    // verifyDeviceId Field Functions 
    bool hasVerifyDeviceId() const { return this->verifyDeviceId_ != nullptr;};
    void deleteVerifyDeviceId() { this->verifyDeviceId_ = nullptr;};
    inline int64_t verifyDeviceId() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceId_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setVerifyDeviceId(int64_t verifyDeviceId) { DARABONBA_PTR_SET_VALUE(verifyDeviceId_, verifyDeviceId) };


    // verifyDeviceIdSuccess Field Functions 
    bool hasVerifyDeviceIdSuccess() const { return this->verifyDeviceIdSuccess_ != nullptr;};
    void deleteVerifyDeviceIdSuccess() { this->verifyDeviceIdSuccess_ = nullptr;};
    inline int64_t verifyDeviceIdSuccess() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceIdSuccess_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setVerifyDeviceIdSuccess(int64_t verifyDeviceIdSuccess) { DARABONBA_PTR_SET_VALUE(verifyDeviceIdSuccess_, verifyDeviceIdSuccess) };


    // verifyDeviceIdSuccessPassed Field Functions 
    bool hasVerifyDeviceIdSuccessPassed() const { return this->verifyDeviceIdSuccessPassed_ != nullptr;};
    void deleteVerifyDeviceIdSuccessPassed() { this->verifyDeviceIdSuccessPassed_ = nullptr;};
    inline int64_t verifyDeviceIdSuccessPassed() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceIdSuccessPassed_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setVerifyDeviceIdSuccessPassed(int64_t verifyDeviceIdSuccessPassed) { DARABONBA_PTR_SET_VALUE(verifyDeviceIdSuccessPassed_, verifyDeviceIdSuccessPassed) };


    // verifyDeviceSuccess Field Functions 
    bool hasVerifyDeviceSuccess() const { return this->verifyDeviceSuccess_ != nullptr;};
    void deleteVerifyDeviceSuccess() { this->verifyDeviceSuccess_ = nullptr;};
    inline int64_t verifyDeviceSuccess() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceSuccess_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setVerifyDeviceSuccess(int64_t verifyDeviceSuccess) { DARABONBA_PTR_SET_VALUE(verifyDeviceSuccess_, verifyDeviceSuccess) };


    // verifyDeviceSuccessPassed Field Functions 
    bool hasVerifyDeviceSuccessPassed() const { return this->verifyDeviceSuccessPassed_ != nullptr;};
    void deleteVerifyDeviceSuccessPassed() { this->verifyDeviceSuccessPassed_ = nullptr;};
    inline int64_t verifyDeviceSuccessPassed() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceSuccessPassed_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObject& setVerifyDeviceSuccessPassed(int64_t verifyDeviceSuccessPassed) { DARABONBA_PTR_SET_VALUE(verifyDeviceSuccessPassed_, verifyDeviceSuccessPassed) };


  protected:
    // Number of client initializations.
    std::shared_ptr<int64_t> initDevice_ = nullptr;
    // Number of identity deduplication client initializations.
    std::shared_ptr<int64_t> initDeviceId_ = nullptr;
    // Number of successful identity deduplication client initializations.
    std::shared_ptr<int64_t> initDeviceIdSuccess_ = nullptr;
    // Number of client initialization calls.
    std::shared_ptr<int64_t> initDeviceSuccess_ = nullptr;
    // Number of service-side initializations.
    std::shared_ptr<int64_t> initService_ = nullptr;
    // Total number of identity deduplication server initialization requests.
    std::shared_ptr<int64_t> initServiceId_ = nullptr;
    // Number of successful identity deduplication server initializations.
    std::shared_ptr<int64_t> initServiceIdSuccess_ = nullptr;
    // Number of successful service-side initialization authentications.
    std::shared_ptr<int64_t> initServiceSuccess_ = nullptr;
    // Daily pass/conversion rate (PV).
    std::shared_ptr<vector<Models::DescribeVerifyStatisticsResponseBodyResultObjectItems>> items_ = nullptr;
    // Number of client verifications.
    std::shared_ptr<int64_t> verifyDevice_ = nullptr;
    // Number of identity deduplication client authentications.
    std::shared_ptr<int64_t> verifyDeviceId_ = nullptr;
    // Number of successful identity deduplication client verifications.
    std::shared_ptr<int64_t> verifyDeviceIdSuccess_ = nullptr;
    // Number of successful identity deduplication client authentications.
    std::shared_ptr<int64_t> verifyDeviceIdSuccessPassed_ = nullptr;
    // Number of successful client authentications.
    std::shared_ptr<int64_t> verifyDeviceSuccess_ = nullptr;
    // Number of successful client authentications.
    std::shared_ptr<int64_t> verifyDeviceSuccessPassed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
