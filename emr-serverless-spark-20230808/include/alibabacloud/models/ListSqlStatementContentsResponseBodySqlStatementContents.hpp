// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLSTATEMENTCONTENTSRESPONSEBODYSQLSTATEMENTCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLSTATEMENTCONTENTSRESPONSEBODYSQLSTATEMENTCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListSqlStatementContentsResponseBodySqlStatementContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSqlStatementContentsResponseBodySqlStatementContents& obj) { 
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSqlStatementContentsResponseBodySqlStatementContents& obj) { 
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListSqlStatementContentsResponseBodySqlStatementContents() = default ;
    ListSqlStatementContentsResponseBodySqlStatementContents(const ListSqlStatementContentsResponseBodySqlStatementContents &) = default ;
    ListSqlStatementContentsResponseBodySqlStatementContents(ListSqlStatementContentsResponseBodySqlStatementContents &&) = default ;
    ListSqlStatementContentsResponseBodySqlStatementContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSqlStatementContentsResponseBodySqlStatementContents() = default ;
    ListSqlStatementContentsResponseBodySqlStatementContents& operator=(const ListSqlStatementContentsResponseBodySqlStatementContents &) = default ;
    ListSqlStatementContentsResponseBodySqlStatementContents& operator=(ListSqlStatementContentsResponseBodySqlStatementContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline string contents() const { DARABONBA_PTR_GET_DEFAULT(contents_, "") };
    inline ListSqlStatementContentsResponseBodySqlStatementContents& setContents(string contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSqlStatementContentsResponseBodySqlStatementContents& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSqlStatementContentsResponseBodySqlStatementContents& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSqlStatementContentsResponseBodySqlStatementContents& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> contents_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
