// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField.hpp>
#include <alibabacloud/models/AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(MarkField, markField_);
      DARABONBA_PTR_TO_JSON(MarkFieldsSource, markFieldsSource_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_TO_JSON(UserCanOperate, userCanOperate_);
    };
    friend void from_json(const Darabonba::Json& j, AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(MarkField, markField_);
      DARABONBA_PTR_FROM_JSON(MarkFieldsSource, markFieldsSource_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(UserCanOperate, userCanOperate_);
    };
    AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse() = default ;
    AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse(const AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse &) = default ;
    AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse(AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse &&) = default ;
    AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse() = default ;
    AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& operator=(const AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse &) = default ;
    AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& operator=(AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->markField_ == nullptr
        && return this->markFieldsSource_ == nullptr && return this->operationCode_ == nullptr && return this->operationParams_ == nullptr && return this->userCanOperate_ == nullptr; };
    // markField Field Functions 
    bool hasMarkField() const { return this->markField_ != nullptr;};
    void deleteMarkField() { this->markField_ = nullptr;};
    inline const vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> & markField() const { DARABONBA_PTR_GET_CONST(markField_, vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField>) };
    inline vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> markField() { DARABONBA_PTR_GET(markField_, vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField>) };
    inline AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkField(const vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> & markField) { DARABONBA_PTR_SET_VALUE(markField_, markField) };
    inline AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkField(vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> && markField) { DARABONBA_PTR_SET_RVALUE(markField_, markField) };


    // markFieldsSource Field Functions 
    bool hasMarkFieldsSource() const { return this->markFieldsSource_ != nullptr;};
    void deleteMarkFieldsSource() { this->markFieldsSource_ = nullptr;};
    inline const vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> & markFieldsSource() const { DARABONBA_PTR_GET_CONST(markFieldsSource_, vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource>) };
    inline vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> markFieldsSource() { DARABONBA_PTR_GET(markFieldsSource_, vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource>) };
    inline AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkFieldsSource(const vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> & markFieldsSource) { DARABONBA_PTR_SET_VALUE(markFieldsSource_, markFieldsSource) };
    inline AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkFieldsSource(vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> && markFieldsSource) { DARABONBA_PTR_SET_RVALUE(markFieldsSource_, markFieldsSource) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string operationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string operationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // userCanOperate Field Functions 
    bool hasUserCanOperate() const { return this->userCanOperate_ != nullptr;};
    void deleteUserCanOperate() { this->userCanOperate_ = nullptr;};
    inline bool userCanOperate() const { DARABONBA_PTR_GET_DEFAULT(userCanOperate_, false) };
    inline AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setUserCanOperate(bool userCanOperate) { DARABONBA_PTR_SET_VALUE(userCanOperate_, userCanOperate) };


  protected:
    // The object on which the operation is performed. This parameter is required when you set the OperationCode parameter to **advance_mark_mis_info**.
    std::shared_ptr<vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField>> markField_ = nullptr;
    // The metadata configuration returned by the advanced whitelist rule.
    std::shared_ptr<vector<Models::AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource>> markFieldsSource_ = nullptr;
    // The operation performed to handle the alert. Valid values:
    // 
    // *   **block_ip**: blocks the alert.
    // *   **advance_mark_mis_info**: adds the alert to the whitelist.
    // *   **ignore**: ignores the alert.
    // *   **manual_handled**: marks the alert as manually handled.
    // *   **kill_process**: terminates the malicious process.
    // *   **cleanup**: performs in-depth virus detection and removal.
    // *   **kill_and_quara**: performs virus detection and removal.
    // *   **disable_malicious_defense**: turns off malicious defense behavior.
    // *   **client_problem_check**: performs troubleshooting.
    // *   **quara**: performs quarantine operations.
    std::shared_ptr<string> operationCode_ = nullptr;
    // The configuration of the operation performed to handle the alert event.
    std::shared_ptr<string> operationParams_ = nullptr;
    // Indicates whether the operation can be performed.
    // 
    // *   **true**: The operation can be performed.
    // *   **false**: The operation cannot be performed.
    std::shared_ptr<bool> userCanOperate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
