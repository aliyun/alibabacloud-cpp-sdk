// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMVIRUSEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMVIRUSEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ConfirmVirusEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmVirusEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationAll, operationAll_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationRange, operationRange_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmVirusEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationAll, operationAll_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationRange, operationRange_);
    };
    ConfirmVirusEventsRequest() = default ;
    ConfirmVirusEventsRequest(const ConfirmVirusEventsRequest &) = default ;
    ConfirmVirusEventsRequest(ConfirmVirusEventsRequest &&) = default ;
    ConfirmVirusEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmVirusEventsRequest() = default ;
    ConfirmVirusEventsRequest& operator=(const ConfirmVirusEventsRequest &) = default ;
    ConfirmVirusEventsRequest& operator=(ConfirmVirusEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationAll_ == nullptr
        && this->operationCode_ == nullptr && this->operationRange_ == nullptr; };
    // operationAll Field Functions 
    bool hasOperationAll() const { return this->operationAll_ != nullptr;};
    void deleteOperationAll() { this->operationAll_ = nullptr;};
    inline int32_t getOperationAll() const { DARABONBA_PTR_GET_DEFAULT(operationAll_, 0) };
    inline ConfirmVirusEventsRequest& setOperationAll(int32_t operationAll) { DARABONBA_PTR_SET_VALUE(operationAll_, operationAll) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline ConfirmVirusEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationRange Field Functions 
    bool hasOperationRange() const { return this->operationRange_ != nullptr;};
    void deleteOperationRange() { this->operationRange_ = nullptr;};
    inline string getOperationRange() const { DARABONBA_PTR_GET_DEFAULT(operationRange_, "") };
    inline ConfirmVirusEventsRequest& setOperationRange(string operationRange) { DARABONBA_PTR_SET_VALUE(operationRange_, operationRange) };


  protected:
    // Specifies whether to handle all alerts. Valid values:
    // - **1**: Yes.
    // - **0**: No.
    // 
    // This parameter is required.
    shared_ptr<int32_t> operationAll_ {};
    // The method to handle the alert event. Valid values:
    // 
    // - **default**: deep scan and removal
    // - **ignore**: ignore
    // - **advance_mark_mis_info**: add to whitelist
    // - **manual_handled**: manually handled
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
    // The scope of the trojan scan alert handling. This parameter is required when OperationAll is set to 0. This parameter is ignored when OperationAll is set to 1.
    shared_ptr<string> operationRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
