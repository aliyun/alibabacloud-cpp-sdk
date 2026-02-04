// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPDOMAINREDIRECTRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPDOMAINREDIRECTRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppDomainRedirectRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppDomainRedirectRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppDomainRedirectRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListAppDomainRedirectRecordsRequest() = default ;
    ListAppDomainRedirectRecordsRequest(const ListAppDomainRedirectRecordsRequest &) = default ;
    ListAppDomainRedirectRecordsRequest(ListAppDomainRedirectRecordsRequest &&) = default ;
    ListAppDomainRedirectRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppDomainRedirectRecordsRequest() = default ;
    ListAppDomainRedirectRecordsRequest& operator=(const ListAppDomainRedirectRecordsRequest &) = default ;
    ListAppDomainRedirectRecordsRequest& operator=(ListAppDomainRedirectRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListAppDomainRedirectRecordsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppDomainRedirectRecordsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppDomainRedirectRecordsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // Application instance business ID
    shared_ptr<string> bizId_ {};
    // The number of results per query.
    // 
    // Range: 10~100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next query. It is empty if there is no next query.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
