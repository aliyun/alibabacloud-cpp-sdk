// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSRESPONSEBODYREMEDIATIONEXECUTIONDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSRESPONSEBODYREMEDIATIONEXECUTIONDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationExecutionsResponseBodyRemediationExecutionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationExecutionsResponseBodyRemediationExecutionData& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RemediationExecutions, remediationExecutions_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationExecutionsResponseBodyRemediationExecutionData& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RemediationExecutions, remediationExecutions_);
    };
    ListRemediationExecutionsResponseBodyRemediationExecutionData() = default ;
    ListRemediationExecutionsResponseBodyRemediationExecutionData(const ListRemediationExecutionsResponseBodyRemediationExecutionData &) = default ;
    ListRemediationExecutionsResponseBodyRemediationExecutionData(ListRemediationExecutionsResponseBodyRemediationExecutionData &&) = default ;
    ListRemediationExecutionsResponseBodyRemediationExecutionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationExecutionsResponseBodyRemediationExecutionData() = default ;
    ListRemediationExecutionsResponseBodyRemediationExecutionData& operator=(const ListRemediationExecutionsResponseBodyRemediationExecutionData &) = default ;
    ListRemediationExecutionsResponseBodyRemediationExecutionData& operator=(ListRemediationExecutionsResponseBodyRemediationExecutionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->remediationExecutions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListRemediationExecutionsResponseBodyRemediationExecutionData& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRemediationExecutionsResponseBodyRemediationExecutionData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // remediationExecutions Field Functions 
    bool hasRemediationExecutions() const { return this->remediationExecutions_ != nullptr;};
    void deleteRemediationExecutions() { this->remediationExecutions_ = nullptr;};
    inline const vector<Models::ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions> & remediationExecutions() const { DARABONBA_PTR_GET_CONST(remediationExecutions_, vector<Models::ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions>) };
    inline vector<Models::ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions> remediationExecutions() { DARABONBA_PTR_GET(remediationExecutions_, vector<Models::ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions>) };
    inline ListRemediationExecutionsResponseBodyRemediationExecutionData& setRemediationExecutions(const vector<Models::ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions> & remediationExecutions) { DARABONBA_PTR_SET_VALUE(remediationExecutions_, remediationExecutions) };
    inline ListRemediationExecutionsResponseBodyRemediationExecutionData& setRemediationExecutions(vector<Models::ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions> && remediationExecutions) { DARABONBA_PTR_SET_RVALUE(remediationExecutions_, remediationExecutions) };


  protected:
    // The maximum number of entries to return for a single request.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The queried remediation records.
    std::shared_ptr<vector<Models::ListRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions>> remediationExecutions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
