// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class ListProjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Pure, pure_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Pure, pure_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
    };
    ListProjectsRequest() = default ;
    ListProjectsRequest(const ListProjectsRequest &) = default ;
    ListProjectsRequest(ListProjectsRequest &&) = default ;
    ListProjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsRequest() = default ;
    ListProjectsRequest& operator=(const ListProjectsRequest &) = default ;
    ListProjectsRequest& operator=(ListProjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pure_ == nullptr && this->skip_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListProjectsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pure Field Functions 
    bool hasPure() const { return this->pure_ != nullptr;};
    void deletePure() { this->pure_ = nullptr;};
    inline bool getPure() const { DARABONBA_PTR_GET_DEFAULT(pure_, false) };
    inline ListProjectsRequest& setPure(bool pure) { DARABONBA_PTR_SET_VALUE(pure_, pure) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListProjectsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    // The filter keyword for a paged query.
    shared_ptr<string> keyword_ {};
    // The maximum number of records to return in a paged query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. If NextToken is empty, paged query starts from the beginning. Otherwise, paged query starts from where the previous query ended based on the token.
    shared_ptr<string> nextToken_ {};
    // Specifies whether to return only primary key information.
    shared_ptr<bool> pure_ {};
    // The number of records to skip in a paged query.
    shared_ptr<int32_t> skip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
