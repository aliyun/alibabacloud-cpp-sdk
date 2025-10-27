// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields.hpp>
#include <alibabacloud/models/DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField.hpp>
#include <alibabacloud/models/DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(MappingMarkFields, mappingMarkFields_);
      DARABONBA_PTR_TO_JSON(MarkField, markField_);
      DARABONBA_PTR_TO_JSON(MarkFieldsSource, markFieldsSource_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_TO_JSON(UserCanOperate, userCanOperate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(MappingMarkFields, mappingMarkFields_);
      DARABONBA_PTR_FROM_JSON(MarkField, markField_);
      DARABONBA_PTR_FROM_JSON(MarkFieldsSource, markFieldsSource_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(UserCanOperate, userCanOperate_);
    };
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse &&) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& operator=(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& operator=(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mappingMarkFields_ == nullptr
        && return this->markField_ == nullptr && return this->markFieldsSource_ == nullptr && return this->operationCode_ == nullptr && return this->operationParams_ == nullptr && return this->userCanOperate_ == nullptr; };
    // mappingMarkFields Field Functions 
    bool hasMappingMarkFields() const { return this->mappingMarkFields_ != nullptr;};
    void deleteMappingMarkFields() { this->mappingMarkFields_ = nullptr;};
    inline const vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields> & mappingMarkFields() const { DARABONBA_PTR_GET_CONST(mappingMarkFields_, vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields>) };
    inline vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields> mappingMarkFields() { DARABONBA_PTR_GET(mappingMarkFields_, vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields>) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMappingMarkFields(const vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields> & mappingMarkFields) { DARABONBA_PTR_SET_VALUE(mappingMarkFields_, mappingMarkFields) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMappingMarkFields(vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields> && mappingMarkFields) { DARABONBA_PTR_SET_RVALUE(mappingMarkFields_, mappingMarkFields) };


    // markField Field Functions 
    bool hasMarkField() const { return this->markField_ != nullptr;};
    void deleteMarkField() { this->markField_ = nullptr;};
    inline const vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> & markField() const { DARABONBA_PTR_GET_CONST(markField_, vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField>) };
    inline vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> markField() { DARABONBA_PTR_GET(markField_, vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField>) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkField(const vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> & markField) { DARABONBA_PTR_SET_VALUE(markField_, markField) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkField(vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField> && markField) { DARABONBA_PTR_SET_RVALUE(markField_, markField) };


    // markFieldsSource Field Functions 
    bool hasMarkFieldsSource() const { return this->markFieldsSource_ != nullptr;};
    void deleteMarkFieldsSource() { this->markFieldsSource_ = nullptr;};
    inline const vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> & markFieldsSource() const { DARABONBA_PTR_GET_CONST(markFieldsSource_, vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource>) };
    inline vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> markFieldsSource() { DARABONBA_PTR_GET(markFieldsSource_, vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource>) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkFieldsSource(const vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> & markFieldsSource) { DARABONBA_PTR_SET_VALUE(markFieldsSource_, markFieldsSource) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setMarkFieldsSource(vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource> && markFieldsSource) { DARABONBA_PTR_SET_RVALUE(markFieldsSource_, markFieldsSource) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string operationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string operationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // userCanOperate Field Functions 
    bool hasUserCanOperate() const { return this->userCanOperate_ != nullptr;};
    void deleteUserCanOperate() { this->userCanOperate_ = nullptr;};
    inline bool userCanOperate() const { DARABONBA_PTR_GET_DEFAULT(userCanOperate_, false) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse& setUserCanOperate(bool userCanOperate) { DARABONBA_PTR_SET_VALUE(userCanOperate_, userCanOperate) };


  protected:
    // The objects on which the operations are performed. This parameter is required when you add the alert to the whitelist by configuring precise defense rules.
    std::shared_ptr<vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields>> mappingMarkFields_ = nullptr;
    // The configurations that are used when the value of the OperationCode parameter is **advance_mark_mis_info**.
    std::shared_ptr<vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField>> markField_ = nullptr;
    // The configuration items that can be used when the value of the OperationCode parameter is advance_mark_mis_info.
    std::shared_ptr<vector<Models::DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource>> markFieldsSource_ = nullptr;
    // The operation that is performed to handle the alert. Valid values:
    // 
    // *   **block_ip**: blocks the source IP address.
    // *   **advance_mark_mis_info**: adds the alert to the whitelist.
    // *   **ignore**: ignores the alert.
    // *   **manual_handled**: marks the alert as manually handled.
    // *   **kill_process**: terminates the malicious process.
    // *   **cleanup**: performs in-depth virus detection and removal.
    // *   **kill_and_quara**: terminates the malicious process and quarantines the source file.
    // *   **disable_malicious_defense**: disables the malicious behavior defense feature.
    // *   **client_problem_check**: performs troubleshooting.
    // *   **quara**: quarantines the source file of the malicious process.
    // *   **defense_mark_mis_info**: enables the precise defense feature but disables the notification feature.
    // *   **rm_defense_mark_mis_info**: enables the notification feature.
    // *   **rm_mark_mis_info**: removes the alert from the whitelist.
    // *   **cancle_manual**: cancels marking the alert as manually handled.
    std::shared_ptr<string> operationCode_ = nullptr;
    // The configuration of the operation that is performed to handle the alert.
    // 
    // >  If the value of the **OperationCode** parameter is **kill_and_quara** or **block_ip**, the OperationParams parameter is required. If the value of the **OperationCode** parameter is a different value, the OperationParams parameter can be left empty.
    std::shared_ptr<string> operationParams_ = nullptr;
    // Indicates whether you can handle the alert in the current edition of Security Center. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> userCanOperate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
