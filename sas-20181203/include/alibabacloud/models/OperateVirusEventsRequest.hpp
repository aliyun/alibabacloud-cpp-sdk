// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEVIRUSEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEVIRUSEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateVirusEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateVirusEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationAll, operationAll_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationRange, operationRange_);
    };
    friend void from_json(const Darabonba::Json& j, OperateVirusEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationAll, operationAll_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationRange, operationRange_);
    };
    OperateVirusEventsRequest() = default ;
    OperateVirusEventsRequest(const OperateVirusEventsRequest &) = default ;
    OperateVirusEventsRequest(OperateVirusEventsRequest &&) = default ;
    OperateVirusEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateVirusEventsRequest() = default ;
    OperateVirusEventsRequest& operator=(const OperateVirusEventsRequest &) = default ;
    OperateVirusEventsRequest& operator=(OperateVirusEventsRequest &&) = default ;
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
    inline OperateVirusEventsRequest& setOperationAll(int32_t operationAll) { DARABONBA_PTR_SET_VALUE(operationAll_, operationAll) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline OperateVirusEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationRange Field Functions 
    bool hasOperationRange() const { return this->operationRange_ != nullptr;};
    void deleteOperationRange() { this->operationRange_ = nullptr;};
    inline string getOperationRange() const { DARABONBA_PTR_GET_DEFAULT(operationRange_, "") };
    inline OperateVirusEventsRequest& setOperationRange(string operationRange) { DARABONBA_PTR_SET_VALUE(operationRange_, operationRange) };


  protected:
    // Specifies whether to handle all alert events. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    // 
    // This parameter is required.
    shared_ptr<int32_t> operationAll_ {};
    // The operation that you want to perform on the alert events. Valid values:
    // 
    // *   **default**: performs in-depth detection and removal
    // *   **ignore**: ignores the alert event
    // *   **advance_mark_mis_info**: adds the alert events to the whitelist
    // *   **manual_handled**: marks the alert events as manually handled
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
    // The handling scope.
    shared_ptr<string> operationRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
