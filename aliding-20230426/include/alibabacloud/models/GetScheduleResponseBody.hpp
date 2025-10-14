// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScheduleResponseBodyScheduleInformation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scheduleInformation, scheduleInformation_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scheduleInformation, scheduleInformation_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetScheduleResponseBody() = default ;
    GetScheduleResponseBody(const GetScheduleResponseBody &) = default ;
    GetScheduleResponseBody(GetScheduleResponseBody &&) = default ;
    GetScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleResponseBody() = default ;
    GetScheduleResponseBody& operator=(const GetScheduleResponseBody &) = default ;
    GetScheduleResponseBody& operator=(GetScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scheduleInformation_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleInformation Field Functions 
    bool hasScheduleInformation() const { return this->scheduleInformation_ != nullptr;};
    void deleteScheduleInformation() { this->scheduleInformation_ = nullptr;};
    inline const vector<GetScheduleResponseBodyScheduleInformation> & scheduleInformation() const { DARABONBA_PTR_GET_CONST(scheduleInformation_, vector<GetScheduleResponseBodyScheduleInformation>) };
    inline vector<GetScheduleResponseBodyScheduleInformation> scheduleInformation() { DARABONBA_PTR_GET(scheduleInformation_, vector<GetScheduleResponseBodyScheduleInformation>) };
    inline GetScheduleResponseBody& setScheduleInformation(const vector<GetScheduleResponseBodyScheduleInformation> & scheduleInformation) { DARABONBA_PTR_SET_VALUE(scheduleInformation_, scheduleInformation) };
    inline GetScheduleResponseBody& setScheduleInformation(vector<GetScheduleResponseBodyScheduleInformation> && scheduleInformation) { DARABONBA_PTR_SET_RVALUE(scheduleInformation_, scheduleInformation) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetScheduleResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetScheduleResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetScheduleResponseBodyScheduleInformation>> scheduleInformation_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
