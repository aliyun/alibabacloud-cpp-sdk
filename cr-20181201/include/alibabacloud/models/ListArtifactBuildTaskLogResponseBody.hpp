// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactBuildTaskLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactBuildTaskLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTaskLogs, buildTaskLogs_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactBuildTaskLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTaskLogs, buildTaskLogs_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListArtifactBuildTaskLogResponseBody() = default ;
    ListArtifactBuildTaskLogResponseBody(const ListArtifactBuildTaskLogResponseBody &) = default ;
    ListArtifactBuildTaskLogResponseBody(ListArtifactBuildTaskLogResponseBody &&) = default ;
    ListArtifactBuildTaskLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactBuildTaskLogResponseBody() = default ;
    ListArtifactBuildTaskLogResponseBody& operator=(const ListArtifactBuildTaskLogResponseBody &) = default ;
    ListArtifactBuildTaskLogResponseBody& operator=(ListArtifactBuildTaskLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BuildTaskLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildTaskLogs& obj) { 
        DARABONBA_PTR_TO_JSON(LineNumber, lineNumber_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, BuildTaskLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(LineNumber, lineNumber_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      BuildTaskLogs() = default ;
      BuildTaskLogs(const BuildTaskLogs &) = default ;
      BuildTaskLogs(BuildTaskLogs &&) = default ;
      BuildTaskLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BuildTaskLogs() = default ;
      BuildTaskLogs& operator=(const BuildTaskLogs &) = default ;
      BuildTaskLogs& operator=(BuildTaskLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lineNumber_ == nullptr
        && this->message_ == nullptr; };
      // lineNumber Field Functions 
      bool hasLineNumber() const { return this->lineNumber_ != nullptr;};
      void deleteLineNumber() { this->lineNumber_ = nullptr;};
      inline int32_t getLineNumber() const { DARABONBA_PTR_GET_DEFAULT(lineNumber_, 0) };
      inline BuildTaskLogs& setLineNumber(int32_t lineNumber) { DARABONBA_PTR_SET_VALUE(lineNumber_, lineNumber) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline BuildTaskLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The row number of the log entry.
      shared_ptr<int32_t> lineNumber_ {};
      // The log data.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->buildTaskLogs_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // buildTaskLogs Field Functions 
    bool hasBuildTaskLogs() const { return this->buildTaskLogs_ != nullptr;};
    void deleteBuildTaskLogs() { this->buildTaskLogs_ = nullptr;};
    inline const vector<ListArtifactBuildTaskLogResponseBody::BuildTaskLogs> & getBuildTaskLogs() const { DARABONBA_PTR_GET_CONST(buildTaskLogs_, vector<ListArtifactBuildTaskLogResponseBody::BuildTaskLogs>) };
    inline vector<ListArtifactBuildTaskLogResponseBody::BuildTaskLogs> getBuildTaskLogs() { DARABONBA_PTR_GET(buildTaskLogs_, vector<ListArtifactBuildTaskLogResponseBody::BuildTaskLogs>) };
    inline ListArtifactBuildTaskLogResponseBody& setBuildTaskLogs(const vector<ListArtifactBuildTaskLogResponseBody::BuildTaskLogs> & buildTaskLogs) { DARABONBA_PTR_SET_VALUE(buildTaskLogs_, buildTaskLogs) };
    inline ListArtifactBuildTaskLogResponseBody& setBuildTaskLogs(vector<ListArtifactBuildTaskLogResponseBody::BuildTaskLogs> && buildTaskLogs) { DARABONBA_PTR_SET_RVALUE(buildTaskLogs_, buildTaskLogs) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListArtifactBuildTaskLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListArtifactBuildTaskLogResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactBuildTaskLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListArtifactBuildTaskLogResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The log entries of the artifact build task.
    shared_ptr<vector<ListArtifactBuildTaskLogResponseBody::BuildTaskLogs>> buildTaskLogs_ {};
    // The response code.
    shared_ptr<string> code_ {};
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: successful
    // *   `false`: failed
    shared_ptr<bool> isSuccess_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of log entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
