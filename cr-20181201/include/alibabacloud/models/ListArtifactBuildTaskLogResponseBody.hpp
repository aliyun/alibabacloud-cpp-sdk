// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListArtifactBuildTaskLogResponseBodyBuildTaskLogs.hpp>
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
    virtual bool empty() const override { return this->buildTaskLogs_ == nullptr
        && return this->code_ == nullptr && return this->isSuccess_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // buildTaskLogs Field Functions 
    bool hasBuildTaskLogs() const { return this->buildTaskLogs_ != nullptr;};
    void deleteBuildTaskLogs() { this->buildTaskLogs_ = nullptr;};
    inline const vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs> & buildTaskLogs() const { DARABONBA_PTR_GET_CONST(buildTaskLogs_, vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs>) };
    inline vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs> buildTaskLogs() { DARABONBA_PTR_GET(buildTaskLogs_, vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs>) };
    inline ListArtifactBuildTaskLogResponseBody& setBuildTaskLogs(const vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs> & buildTaskLogs) { DARABONBA_PTR_SET_VALUE(buildTaskLogs_, buildTaskLogs) };
    inline ListArtifactBuildTaskLogResponseBody& setBuildTaskLogs(vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs> && buildTaskLogs) { DARABONBA_PTR_SET_RVALUE(buildTaskLogs_, buildTaskLogs) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListArtifactBuildTaskLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListArtifactBuildTaskLogResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactBuildTaskLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListArtifactBuildTaskLogResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The log entries of the artifact build task.
    std::shared_ptr<vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs>> buildTaskLogs_ = nullptr;
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: successful
    // *   `false`: failed
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of log entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
