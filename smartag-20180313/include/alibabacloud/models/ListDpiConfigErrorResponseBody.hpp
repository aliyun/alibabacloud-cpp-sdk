// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDPICONFIGERRORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDPICONFIGERRORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListDpiConfigErrorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDpiConfigErrorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DpiConfigError, dpiConfigError_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListDpiConfigErrorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DpiConfigError, dpiConfigError_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListDpiConfigErrorResponseBody() = default ;
    ListDpiConfigErrorResponseBody(const ListDpiConfigErrorResponseBody &) = default ;
    ListDpiConfigErrorResponseBody(ListDpiConfigErrorResponseBody &&) = default ;
    ListDpiConfigErrorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDpiConfigErrorResponseBody() = default ;
    ListDpiConfigErrorResponseBody& operator=(const ListDpiConfigErrorResponseBody &) = default ;
    ListDpiConfigErrorResponseBody& operator=(ListDpiConfigErrorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DpiConfigError : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DpiConfigError& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
        DARABONBA_PTR_TO_JSON(RuleConfigErrorList, ruleConfigErrorList_);
        DARABONBA_PTR_TO_JSON(SN, SN_);
        DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      };
      friend void from_json(const Darabonba::Json& j, DpiConfigError& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
        DARABONBA_PTR_FROM_JSON(RuleConfigErrorList, ruleConfigErrorList_);
        DARABONBA_PTR_FROM_JSON(SN, SN_);
        DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      };
      DpiConfigError() = default ;
      DpiConfigError(const DpiConfigError &) = default ;
      DpiConfigError(DpiConfigError &&) = default ;
      DpiConfigError(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DpiConfigError() = default ;
      DpiConfigError& operator=(const DpiConfigError &) = default ;
      DpiConfigError& operator=(DpiConfigError &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleConfigErrorList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleConfigErrorList& obj) { 
          DARABONBA_PTR_TO_JSON(DpiGroupIds, dpiGroupIds_);
          DARABONBA_PTR_TO_JSON(DpiSignatureIds, dpiSignatureIds_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, RuleConfigErrorList& obj) { 
          DARABONBA_PTR_FROM_JSON(DpiGroupIds, dpiGroupIds_);
          DARABONBA_PTR_FROM_JSON(DpiSignatureIds, dpiSignatureIds_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        };
        RuleConfigErrorList() = default ;
        RuleConfigErrorList(const RuleConfigErrorList &) = default ;
        RuleConfigErrorList(RuleConfigErrorList &&) = default ;
        RuleConfigErrorList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleConfigErrorList() = default ;
        RuleConfigErrorList& operator=(const RuleConfigErrorList &) = default ;
        RuleConfigErrorList& operator=(RuleConfigErrorList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dpiGroupIds_ == nullptr
        && this->dpiSignatureIds_ == nullptr && this->ruleId_ == nullptr; };
        // dpiGroupIds Field Functions 
        bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
        void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
        inline const vector<string> & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, vector<string>) };
        inline vector<string> getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, vector<string>) };
        inline RuleConfigErrorList& setDpiGroupIds(const vector<string> & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
        inline RuleConfigErrorList& setDpiGroupIds(vector<string> && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


        // dpiSignatureIds Field Functions 
        bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
        void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
        inline const vector<string> & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, vector<string>) };
        inline vector<string> getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, vector<string>) };
        inline RuleConfigErrorList& setDpiSignatureIds(const vector<string> & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
        inline RuleConfigErrorList& setDpiSignatureIds(vector<string> && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline RuleConfigErrorList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        // A list of IDs of application groups that have configuration errors.
        shared_ptr<vector<string>> dpiGroupIds_ {};
        // A list of IDs of applications that have configuration errors.
        shared_ptr<vector<string>> dpiSignatureIds_ {};
        // The ID of the rule that is associated with the application that has a configuration error.
        // 
        // - If you query DPI configuration errors for Resource Access Management, this parameter indicates the ID of the Resource Access Management rule instance that has a configuration error.
        // - If you query DPI configuration errors for a QoS policy, this parameter indicates the ID of the quintuple rule instance that has a configuration error.
        shared_ptr<string> ruleId_ {};
      };

      virtual bool empty() const override { return this->errorType_ == nullptr
        && this->ruleConfigErrorList_ == nullptr && this->SN_ == nullptr && this->smartAGId_ == nullptr; };
      // errorType Field Functions 
      bool hasErrorType() const { return this->errorType_ != nullptr;};
      void deleteErrorType() { this->errorType_ = nullptr;};
      inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
      inline DpiConfigError& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      // ruleConfigErrorList Field Functions 
      bool hasRuleConfigErrorList() const { return this->ruleConfigErrorList_ != nullptr;};
      void deleteRuleConfigErrorList() { this->ruleConfigErrorList_ = nullptr;};
      inline const vector<DpiConfigError::RuleConfigErrorList> & getRuleConfigErrorList() const { DARABONBA_PTR_GET_CONST(ruleConfigErrorList_, vector<DpiConfigError::RuleConfigErrorList>) };
      inline vector<DpiConfigError::RuleConfigErrorList> getRuleConfigErrorList() { DARABONBA_PTR_GET(ruleConfigErrorList_, vector<DpiConfigError::RuleConfigErrorList>) };
      inline DpiConfigError& setRuleConfigErrorList(const vector<DpiConfigError::RuleConfigErrorList> & ruleConfigErrorList) { DARABONBA_PTR_SET_VALUE(ruleConfigErrorList_, ruleConfigErrorList) };
      inline DpiConfigError& setRuleConfigErrorList(vector<DpiConfigError::RuleConfigErrorList> && ruleConfigErrorList) { DARABONBA_PTR_SET_RVALUE(ruleConfigErrorList_, ruleConfigErrorList) };


      // SN Field Functions 
      bool hasSN() const { return this->SN_ != nullptr;};
      void deleteSN() { this->SN_ = nullptr;};
      inline string getSN() const { DARABONBA_PTR_GET_DEFAULT(SN_, "") };
      inline DpiConfigError& setSN(string SN) { DARABONBA_PTR_SET_VALUE(SN_, SN) };


      // smartAGId Field Functions 
      bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
      void deleteSmartAGId() { this->smartAGId_ = nullptr;};
      inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
      inline DpiConfigError& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    protected:
      // The type of the configuration error.
      // 
      // - DeviceNotSupported: The Smart Access Gateway device does not support the DPI feature.
      // - VersionNotSupported: The DPI version of the Smart Access Gateway device is too old.
      // - **NotEnable**: The DPI feature is disabled for the Smart Access Gateway device.
      shared_ptr<string> errorType_ {};
      // A list of rule configuration errors.
      shared_ptr<vector<DpiConfigError::RuleConfigErrorList>> ruleConfigErrorList_ {};
      // The serial number of the Smart Access Gateway device.
      shared_ptr<string> SN_ {};
      // The ID of the Smart Access Gateway instance.
      shared_ptr<string> smartAGId_ {};
    };

    virtual bool empty() const override { return this->dpiConfigError_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // dpiConfigError Field Functions 
    bool hasDpiConfigError() const { return this->dpiConfigError_ != nullptr;};
    void deleteDpiConfigError() { this->dpiConfigError_ = nullptr;};
    inline const vector<ListDpiConfigErrorResponseBody::DpiConfigError> & getDpiConfigError() const { DARABONBA_PTR_GET_CONST(dpiConfigError_, vector<ListDpiConfigErrorResponseBody::DpiConfigError>) };
    inline vector<ListDpiConfigErrorResponseBody::DpiConfigError> getDpiConfigError() { DARABONBA_PTR_GET(dpiConfigError_, vector<ListDpiConfigErrorResponseBody::DpiConfigError>) };
    inline ListDpiConfigErrorResponseBody& setDpiConfigError(const vector<ListDpiConfigErrorResponseBody::DpiConfigError> & dpiConfigError) { DARABONBA_PTR_SET_VALUE(dpiConfigError_, dpiConfigError) };
    inline ListDpiConfigErrorResponseBody& setDpiConfigError(vector<ListDpiConfigErrorResponseBody::DpiConfigError> && dpiConfigError) { DARABONBA_PTR_SET_RVALUE(dpiConfigError_, dpiConfigError) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDpiConfigErrorResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDpiConfigErrorResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDpiConfigErrorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListDpiConfigErrorResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // A list of DPI configuration errors.
    shared_ptr<vector<ListDpiConfigErrorResponseBody::DpiConfigError>> dpiConfigError_ {};
    // The maximum number of configuration errors to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of DPI configuration errors.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
