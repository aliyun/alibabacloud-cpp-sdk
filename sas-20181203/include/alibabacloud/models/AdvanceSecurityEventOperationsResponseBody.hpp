// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AdvanceSecurityEventOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdvanceSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, AdvanceSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    AdvanceSecurityEventOperationsResponseBody() = default ;
    AdvanceSecurityEventOperationsResponseBody(const AdvanceSecurityEventOperationsResponseBody &) = default ;
    AdvanceSecurityEventOperationsResponseBody(AdvanceSecurityEventOperationsResponseBody &&) = default ;
    AdvanceSecurityEventOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdvanceSecurityEventOperationsResponseBody() = default ;
    AdvanceSecurityEventOperationsResponseBody& operator=(const AdvanceSecurityEventOperationsResponseBody &) = default ;
    AdvanceSecurityEventOperationsResponseBody& operator=(AdvanceSecurityEventOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityEventOperationsResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventOperationsResponse& obj) { 
        DARABONBA_PTR_TO_JSON(MarkField, markField_);
        DARABONBA_PTR_TO_JSON(MarkFieldsSource, markFieldsSource_);
        DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_TO_JSON(UserCanOperate, userCanOperate_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventOperationsResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(MarkField, markField_);
        DARABONBA_PTR_FROM_JSON(MarkFieldsSource, markFieldsSource_);
        DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_FROM_JSON(UserCanOperate, userCanOperate_);
      };
      SecurityEventOperationsResponse() = default ;
      SecurityEventOperationsResponse(const SecurityEventOperationsResponse &) = default ;
      SecurityEventOperationsResponse(SecurityEventOperationsResponse &&) = default ;
      SecurityEventOperationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventOperationsResponse() = default ;
      SecurityEventOperationsResponse& operator=(const SecurityEventOperationsResponse &) = default ;
      SecurityEventOperationsResponse& operator=(SecurityEventOperationsResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MarkFieldsSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MarkFieldsSource& obj) { 
          DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_TO_JSON(FiledName, filedName_);
          DARABONBA_PTR_TO_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
        };
        friend void from_json(const Darabonba::Json& j, MarkFieldsSource& obj) { 
          DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
          DARABONBA_PTR_FROM_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
        };
        MarkFieldsSource() = default ;
        MarkFieldsSource(const MarkFieldsSource &) = default ;
        MarkFieldsSource(MarkFieldsSource &&) = default ;
        MarkFieldsSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MarkFieldsSource() = default ;
        MarkFieldsSource& operator=(const MarkFieldsSource &) = default ;
        MarkFieldsSource& operator=(MarkFieldsSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->filedAliasName_ == nullptr
        && this->filedName_ == nullptr && this->markMisValue_ == nullptr && this->supportedMisType_ == nullptr; };
        // filedAliasName Field Functions 
        bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
        void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
        inline string getFiledAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
        inline MarkFieldsSource& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


        // filedName Field Functions 
        bool hasFiledName() const { return this->filedName_ != nullptr;};
        void deleteFiledName() { this->filedName_ = nullptr;};
        inline string getFiledName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
        inline MarkFieldsSource& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


        // markMisValue Field Functions 
        bool hasMarkMisValue() const { return this->markMisValue_ != nullptr;};
        void deleteMarkMisValue() { this->markMisValue_ = nullptr;};
        inline string getMarkMisValue() const { DARABONBA_PTR_GET_DEFAULT(markMisValue_, "") };
        inline MarkFieldsSource& setMarkMisValue(string markMisValue) { DARABONBA_PTR_SET_VALUE(markMisValue_, markMisValue) };


        // supportedMisType Field Functions 
        bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
        void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
        inline const vector<string> & getSupportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
        inline vector<string> getSupportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
        inline MarkFieldsSource& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
        inline MarkFieldsSource& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


      protected:
        // The alias of the field that can be used in the whitelist rule.
        shared_ptr<string> filedAliasName_ {};
        // The field that can be used in the whitelist rule.
        shared_ptr<string> filedName_ {};
        // The value of the field that can be used in the whitelist rule.
        shared_ptr<string> markMisValue_ {};
        // The operation that is supported in the whitelist rule. Valid values:
        // 
        // *   **contains**: contains
        // *   **notContains**: does not contain
        // *   **regex**: regular expression
        // *   **strEqual**: equals
        // *   **strNotEqual**: does not equal
        shared_ptr<vector<string>> supportedMisType_ {};
      };

      class MarkField : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MarkField& obj) { 
          DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_TO_JSON(FiledName, filedName_);
          DARABONBA_PTR_TO_JSON(MarkMisType, markMisType_);
          DARABONBA_PTR_TO_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
        };
        friend void from_json(const Darabonba::Json& j, MarkField& obj) { 
          DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
          DARABONBA_PTR_FROM_JSON(MarkMisType, markMisType_);
          DARABONBA_PTR_FROM_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
        };
        MarkField() = default ;
        MarkField(const MarkField &) = default ;
        MarkField(MarkField &&) = default ;
        MarkField(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MarkField() = default ;
        MarkField& operator=(const MarkField &) = default ;
        MarkField& operator=(MarkField &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->filedAliasName_ == nullptr
        && this->filedName_ == nullptr && this->markMisType_ == nullptr && this->markMisValue_ == nullptr && this->supportedMisType_ == nullptr; };
        // filedAliasName Field Functions 
        bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
        void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
        inline string getFiledAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
        inline MarkField& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


        // filedName Field Functions 
        bool hasFiledName() const { return this->filedName_ != nullptr;};
        void deleteFiledName() { this->filedName_ = nullptr;};
        inline string getFiledName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
        inline MarkField& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


        // markMisType Field Functions 
        bool hasMarkMisType() const { return this->markMisType_ != nullptr;};
        void deleteMarkMisType() { this->markMisType_ = nullptr;};
        inline string getMarkMisType() const { DARABONBA_PTR_GET_DEFAULT(markMisType_, "") };
        inline MarkField& setMarkMisType(string markMisType) { DARABONBA_PTR_SET_VALUE(markMisType_, markMisType) };


        // markMisValue Field Functions 
        bool hasMarkMisValue() const { return this->markMisValue_ != nullptr;};
        void deleteMarkMisValue() { this->markMisValue_ = nullptr;};
        inline string getMarkMisValue() const { DARABONBA_PTR_GET_DEFAULT(markMisValue_, "") };
        inline MarkField& setMarkMisValue(string markMisValue) { DARABONBA_PTR_SET_VALUE(markMisValue_, markMisValue) };


        // supportedMisType Field Functions 
        bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
        void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
        inline const vector<string> & getSupportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
        inline vector<string> getSupportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
        inline MarkField& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
        inline MarkField& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


      protected:
        // The alias of the field that is used in the whitelist rule.
        shared_ptr<string> filedAliasName_ {};
        // The field that is used in the whitelist rule.
        shared_ptr<string> filedName_ {};
        // The operation that is used in the whitelist rule. Valid values:
        // 
        // *   **contains**: contains
        // *   **notContains**: does not contain
        // *   **regex**: regular expression
        // *   **strEqual**: equals
        // *   **strNotEqual**: does not equal
        shared_ptr<string> markMisType_ {};
        // The value of the field that is used in the whitelist rule.
        shared_ptr<string> markMisValue_ {};
        // The operation that is used and can be modified in the whitelist rule. Valid values:
        // 
        // *   **contains**: contains
        // *   **notContains**: does not contain
        // *   **regex**: regular expression
        // *   **strEqual**: equals
        // *   **strNotEqual**: does not equal
        shared_ptr<vector<string>> supportedMisType_ {};
      };

      virtual bool empty() const override { return this->markField_ == nullptr
        && this->markFieldsSource_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->userCanOperate_ == nullptr; };
      // markField Field Functions 
      bool hasMarkField() const { return this->markField_ != nullptr;};
      void deleteMarkField() { this->markField_ = nullptr;};
      inline const vector<SecurityEventOperationsResponse::MarkField> & getMarkField() const { DARABONBA_PTR_GET_CONST(markField_, vector<SecurityEventOperationsResponse::MarkField>) };
      inline vector<SecurityEventOperationsResponse::MarkField> getMarkField() { DARABONBA_PTR_GET(markField_, vector<SecurityEventOperationsResponse::MarkField>) };
      inline SecurityEventOperationsResponse& setMarkField(const vector<SecurityEventOperationsResponse::MarkField> & markField) { DARABONBA_PTR_SET_VALUE(markField_, markField) };
      inline SecurityEventOperationsResponse& setMarkField(vector<SecurityEventOperationsResponse::MarkField> && markField) { DARABONBA_PTR_SET_RVALUE(markField_, markField) };


      // markFieldsSource Field Functions 
      bool hasMarkFieldsSource() const { return this->markFieldsSource_ != nullptr;};
      void deleteMarkFieldsSource() { this->markFieldsSource_ = nullptr;};
      inline const vector<SecurityEventOperationsResponse::MarkFieldsSource> & getMarkFieldsSource() const { DARABONBA_PTR_GET_CONST(markFieldsSource_, vector<SecurityEventOperationsResponse::MarkFieldsSource>) };
      inline vector<SecurityEventOperationsResponse::MarkFieldsSource> getMarkFieldsSource() { DARABONBA_PTR_GET(markFieldsSource_, vector<SecurityEventOperationsResponse::MarkFieldsSource>) };
      inline SecurityEventOperationsResponse& setMarkFieldsSource(const vector<SecurityEventOperationsResponse::MarkFieldsSource> & markFieldsSource) { DARABONBA_PTR_SET_VALUE(markFieldsSource_, markFieldsSource) };
      inline SecurityEventOperationsResponse& setMarkFieldsSource(vector<SecurityEventOperationsResponse::MarkFieldsSource> && markFieldsSource) { DARABONBA_PTR_SET_RVALUE(markFieldsSource_, markFieldsSource) };


      // operationCode Field Functions 
      bool hasOperationCode() const { return this->operationCode_ != nullptr;};
      void deleteOperationCode() { this->operationCode_ = nullptr;};
      inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
      inline SecurityEventOperationsResponse& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


      // operationParams Field Functions 
      bool hasOperationParams() const { return this->operationParams_ != nullptr;};
      void deleteOperationParams() { this->operationParams_ = nullptr;};
      inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
      inline SecurityEventOperationsResponse& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


      // userCanOperate Field Functions 
      bool hasUserCanOperate() const { return this->userCanOperate_ != nullptr;};
      void deleteUserCanOperate() { this->userCanOperate_ = nullptr;};
      inline bool getUserCanOperate() const { DARABONBA_PTR_GET_DEFAULT(userCanOperate_, false) };
      inline SecurityEventOperationsResponse& setUserCanOperate(bool userCanOperate) { DARABONBA_PTR_SET_VALUE(userCanOperate_, userCanOperate) };


    protected:
      // The object on which the operation is performed. This parameter is required when you set the OperationCode parameter to **advance_mark_mis_info**.
      shared_ptr<vector<SecurityEventOperationsResponse::MarkField>> markField_ {};
      // The metadata configuration returned by the advanced whitelist rule.
      shared_ptr<vector<SecurityEventOperationsResponse::MarkFieldsSource>> markFieldsSource_ {};
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
      shared_ptr<string> operationCode_ {};
      // The configuration of the operation performed to handle the alert event.
      shared_ptr<string> operationParams_ {};
      // Indicates whether the operation can be performed.
      // 
      // *   **true**: The operation can be performed.
      // *   **false**: The operation cannot be performed.
      shared_ptr<bool> userCanOperate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEventOperationsResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AdvanceSecurityEventOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventOperationsResponse Field Functions 
    bool hasSecurityEventOperationsResponse() const { return this->securityEventOperationsResponse_ != nullptr;};
    void deleteSecurityEventOperationsResponse() { this->securityEventOperationsResponse_ = nullptr;};
    inline const vector<AdvanceSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> & getSecurityEventOperationsResponse() const { DARABONBA_PTR_GET_CONST(securityEventOperationsResponse_, vector<AdvanceSecurityEventOperationsResponseBody::SecurityEventOperationsResponse>) };
    inline vector<AdvanceSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> getSecurityEventOperationsResponse() { DARABONBA_PTR_GET(securityEventOperationsResponse_, vector<AdvanceSecurityEventOperationsResponseBody::SecurityEventOperationsResponse>) };
    inline AdvanceSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(const vector<AdvanceSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> & securityEventOperationsResponse) { DARABONBA_PTR_SET_VALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };
    inline AdvanceSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(vector<AdvanceSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> && securityEventOperationsResponse) { DARABONBA_PTR_SET_RVALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The operation performed on the alert event.
    shared_ptr<vector<AdvanceSecurityEventOperationsResponseBody::SecurityEventOperationsResponse>> securityEventOperationsResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
