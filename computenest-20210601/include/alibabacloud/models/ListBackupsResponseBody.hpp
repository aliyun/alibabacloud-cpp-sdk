// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBackupsResponseBodyBackups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Backups, backups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Backups, backups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBackupsResponseBody() = default ;
    ListBackupsResponseBody(const ListBackupsResponseBody &) = default ;
    ListBackupsResponseBody(ListBackupsResponseBody &&) = default ;
    ListBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupsResponseBody() = default ;
    ListBackupsResponseBody& operator=(const ListBackupsResponseBody &) = default ;
    ListBackupsResponseBody& operator=(ListBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backups_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // backups Field Functions 
    bool hasBackups() const { return this->backups_ != nullptr;};
    void deleteBackups() { this->backups_ = nullptr;};
    inline const vector<ListBackupsResponseBodyBackups> & backups() const { DARABONBA_PTR_GET_CONST(backups_, vector<ListBackupsResponseBodyBackups>) };
    inline vector<ListBackupsResponseBodyBackups> backups() { DARABONBA_PTR_GET(backups_, vector<ListBackupsResponseBodyBackups>) };
    inline ListBackupsResponseBody& setBackups(const vector<ListBackupsResponseBodyBackups> & backups) { DARABONBA_PTR_SET_VALUE(backups_, backups) };
    inline ListBackupsResponseBody& setBackups(vector<ListBackupsResponseBodyBackups> && backups) { DARABONBA_PTR_SET_RVALUE(backups_, backups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBackupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBackupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBackupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the backup.
    std::shared_ptr<vector<ListBackupsResponseBodyBackups>> backups_ = nullptr;
    // The maximum number of records returned in this request.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Indicates the read position returned by the current call. An empty value means all data has been read.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Total data count under the current request conditions (optional; not returned by default).
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
