// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationExecutionData, remediationExecutionData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationExecutionData, remediationExecutionData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRemediationExecutionsResponseBody() = default ;
    ListRemediationExecutionsResponseBody(const ListRemediationExecutionsResponseBody &) = default ;
    ListRemediationExecutionsResponseBody(ListRemediationExecutionsResponseBody &&) = default ;
    ListRemediationExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationExecutionsResponseBody() = default ;
    ListRemediationExecutionsResponseBody& operator=(const ListRemediationExecutionsResponseBody &) = default ;
    ListRemediationExecutionsResponseBody& operator=(ListRemediationExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemediationExecutionData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemediationExecutionData& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(RemediationExecutions, remediationExecutions_);
      };
      friend void from_json(const Darabonba::Json& j, RemediationExecutionData& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(RemediationExecutions, remediationExecutions_);
      };
      RemediationExecutionData() = default ;
      RemediationExecutionData(const RemediationExecutionData &) = default ;
      RemediationExecutionData(RemediationExecutionData &&) = default ;
      RemediationExecutionData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemediationExecutionData() = default ;
      RemediationExecutionData& operator=(const RemediationExecutionData &) = default ;
      RemediationExecutionData& operator=(RemediationExecutionData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemediationExecutions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemediationExecutions& obj) { 
          DARABONBA_PTR_TO_JSON(ExecutionCreateDate, executionCreateDate_);
          DARABONBA_PTR_TO_JSON(ExecutionInvocationId, executionInvocationId_);
          DARABONBA_PTR_TO_JSON(ExecutionResourceIds, executionResourceIds_);
          DARABONBA_PTR_TO_JSON(ExecutionResourceType, executionResourceType_);
          DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
          DARABONBA_PTR_TO_JSON(ExecutionStatusMessage, executionStatusMessage_);
        };
        friend void from_json(const Darabonba::Json& j, RemediationExecutions& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecutionCreateDate, executionCreateDate_);
          DARABONBA_PTR_FROM_JSON(ExecutionInvocationId, executionInvocationId_);
          DARABONBA_PTR_FROM_JSON(ExecutionResourceIds, executionResourceIds_);
          DARABONBA_PTR_FROM_JSON(ExecutionResourceType, executionResourceType_);
          DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
          DARABONBA_PTR_FROM_JSON(ExecutionStatusMessage, executionStatusMessage_);
        };
        RemediationExecutions() = default ;
        RemediationExecutions(const RemediationExecutions &) = default ;
        RemediationExecutions(RemediationExecutions &&) = default ;
        RemediationExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemediationExecutions() = default ;
        RemediationExecutions& operator=(const RemediationExecutions &) = default ;
        RemediationExecutions& operator=(RemediationExecutions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->executionCreateDate_ == nullptr
        && this->executionInvocationId_ == nullptr && this->executionResourceIds_ == nullptr && this->executionResourceType_ == nullptr && this->executionStatus_ == nullptr && this->executionStatusMessage_ == nullptr; };
        // executionCreateDate Field Functions 
        bool hasExecutionCreateDate() const { return this->executionCreateDate_ != nullptr;};
        void deleteExecutionCreateDate() { this->executionCreateDate_ = nullptr;};
        inline string getExecutionCreateDate() const { DARABONBA_PTR_GET_DEFAULT(executionCreateDate_, "") };
        inline RemediationExecutions& setExecutionCreateDate(string executionCreateDate) { DARABONBA_PTR_SET_VALUE(executionCreateDate_, executionCreateDate) };


        // executionInvocationId Field Functions 
        bool hasExecutionInvocationId() const { return this->executionInvocationId_ != nullptr;};
        void deleteExecutionInvocationId() { this->executionInvocationId_ = nullptr;};
        inline string getExecutionInvocationId() const { DARABONBA_PTR_GET_DEFAULT(executionInvocationId_, "") };
        inline RemediationExecutions& setExecutionInvocationId(string executionInvocationId) { DARABONBA_PTR_SET_VALUE(executionInvocationId_, executionInvocationId) };


        // executionResourceIds Field Functions 
        bool hasExecutionResourceIds() const { return this->executionResourceIds_ != nullptr;};
        void deleteExecutionResourceIds() { this->executionResourceIds_ = nullptr;};
        inline string getExecutionResourceIds() const { DARABONBA_PTR_GET_DEFAULT(executionResourceIds_, "") };
        inline RemediationExecutions& setExecutionResourceIds(string executionResourceIds) { DARABONBA_PTR_SET_VALUE(executionResourceIds_, executionResourceIds) };


        // executionResourceType Field Functions 
        bool hasExecutionResourceType() const { return this->executionResourceType_ != nullptr;};
        void deleteExecutionResourceType() { this->executionResourceType_ = nullptr;};
        inline string getExecutionResourceType() const { DARABONBA_PTR_GET_DEFAULT(executionResourceType_, "") };
        inline RemediationExecutions& setExecutionResourceType(string executionResourceType) { DARABONBA_PTR_SET_VALUE(executionResourceType_, executionResourceType) };


        // executionStatus Field Functions 
        bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
        void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
        inline string getExecutionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
        inline RemediationExecutions& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


        // executionStatusMessage Field Functions 
        bool hasExecutionStatusMessage() const { return this->executionStatusMessage_ != nullptr;};
        void deleteExecutionStatusMessage() { this->executionStatusMessage_ = nullptr;};
        inline string getExecutionStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(executionStatusMessage_, "") };
        inline RemediationExecutions& setExecutionStatusMessage(string executionStatusMessage) { DARABONBA_PTR_SET_VALUE(executionStatusMessage_, executionStatusMessage) };


      protected:
        // The time when the remediation record was created.
        shared_ptr<string> executionCreateDate_ {};
        // The invocation ID of the remediation record.
        shared_ptr<string> executionInvocationId_ {};
        // The IDs of the resources to which the remediation belongs. Separate multiple resource IDs with commas (,).
        shared_ptr<string> executionResourceIds_ {};
        // The resource type.
        shared_ptr<string> executionResourceType_ {};
        // The status of the remediation record. Valid values:
        // 
        // *   Success
        // *   Failed
        shared_ptr<string> executionStatus_ {};
        // The error message returned when the remediation fails.
        shared_ptr<string> executionStatusMessage_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->remediationExecutions_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
      inline RemediationExecutionData& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline RemediationExecutionData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // remediationExecutions Field Functions 
      bool hasRemediationExecutions() const { return this->remediationExecutions_ != nullptr;};
      void deleteRemediationExecutions() { this->remediationExecutions_ = nullptr;};
      inline const vector<RemediationExecutionData::RemediationExecutions> & getRemediationExecutions() const { DARABONBA_PTR_GET_CONST(remediationExecutions_, vector<RemediationExecutionData::RemediationExecutions>) };
      inline vector<RemediationExecutionData::RemediationExecutions> getRemediationExecutions() { DARABONBA_PTR_GET(remediationExecutions_, vector<RemediationExecutionData::RemediationExecutions>) };
      inline RemediationExecutionData& setRemediationExecutions(const vector<RemediationExecutionData::RemediationExecutions> & remediationExecutions) { DARABONBA_PTR_SET_VALUE(remediationExecutions_, remediationExecutions) };
      inline RemediationExecutionData& setRemediationExecutions(vector<RemediationExecutionData::RemediationExecutions> && remediationExecutions) { DARABONBA_PTR_SET_RVALUE(remediationExecutions_, remediationExecutions) };


    protected:
      // The maximum number of entries to return for a single request.
      shared_ptr<int64_t> maxResults_ {};
      // A pagination token. It can be used in the next request to retrieve a new page of results.
      shared_ptr<string> nextToken_ {};
      // The queried remediation records.
      shared_ptr<vector<RemediationExecutionData::RemediationExecutions>> remediationExecutions_ {};
    };

    virtual bool empty() const override { return this->remediationExecutionData_ == nullptr
        && this->requestId_ == nullptr; };
    // remediationExecutionData Field Functions 
    bool hasRemediationExecutionData() const { return this->remediationExecutionData_ != nullptr;};
    void deleteRemediationExecutionData() { this->remediationExecutionData_ = nullptr;};
    inline const ListRemediationExecutionsResponseBody::RemediationExecutionData & getRemediationExecutionData() const { DARABONBA_PTR_GET_CONST(remediationExecutionData_, ListRemediationExecutionsResponseBody::RemediationExecutionData) };
    inline ListRemediationExecutionsResponseBody::RemediationExecutionData getRemediationExecutionData() { DARABONBA_PTR_GET(remediationExecutionData_, ListRemediationExecutionsResponseBody::RemediationExecutionData) };
    inline ListRemediationExecutionsResponseBody& setRemediationExecutionData(const ListRemediationExecutionsResponseBody::RemediationExecutionData & remediationExecutionData) { DARABONBA_PTR_SET_VALUE(remediationExecutionData_, remediationExecutionData) };
    inline ListRemediationExecutionsResponseBody& setRemediationExecutionData(ListRemediationExecutionsResponseBody::RemediationExecutionData && remediationExecutionData) { DARABONBA_PTR_SET_RVALUE(remediationExecutionData_, remediationExecutionData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemediationExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried remediation records.
    shared_ptr<ListRemediationExecutionsResponseBody::RemediationExecutionData> remediationExecutionData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
