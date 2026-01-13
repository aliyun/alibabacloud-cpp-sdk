// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIQSUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIQSUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GetIqsUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIqsUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(callerId, callerId_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetIqsUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(callerId, callerId_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
    };
    GetIqsUsageRequest() = default ;
    GetIqsUsageRequest(const GetIqsUsageRequest &) = default ;
    GetIqsUsageRequest(GetIqsUsageRequest &&) = default ;
    GetIqsUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIqsUsageRequest() = default ;
    GetIqsUsageRequest& operator=(const GetIqsUsageRequest &) = default ;
    GetIqsUsageRequest& operator=(GetIqsUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerId_ == nullptr
        && this->endDate_ == nullptr && this->startDate_ == nullptr; };
    // callerId Field Functions 
    bool hasCallerId() const { return this->callerId_ != nullptr;};
    void deleteCallerId() { this->callerId_ = nullptr;};
    inline string getCallerId() const { DARABONBA_PTR_GET_DEFAULT(callerId_, "") };
    inline GetIqsUsageRequest& setCallerId(string callerId) { DARABONBA_PTR_SET_VALUE(callerId_, callerId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetIqsUsageRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetIqsUsageRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<string> callerId_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
