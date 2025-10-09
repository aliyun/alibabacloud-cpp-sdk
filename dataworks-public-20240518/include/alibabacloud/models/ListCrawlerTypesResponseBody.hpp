// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCRAWLERTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCRAWLERTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CrawlerType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrawlerTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrawlerTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrawlerTypes, crawlerTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrawlerTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrawlerTypes, crawlerTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCrawlerTypesResponseBody() = default ;
    ListCrawlerTypesResponseBody(const ListCrawlerTypesResponseBody &) = default ;
    ListCrawlerTypesResponseBody(ListCrawlerTypesResponseBody &&) = default ;
    ListCrawlerTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrawlerTypesResponseBody() = default ;
    ListCrawlerTypesResponseBody& operator=(const ListCrawlerTypesResponseBody &) = default ;
    ListCrawlerTypesResponseBody& operator=(ListCrawlerTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crawlerTypes_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // crawlerTypes Field Functions 
    bool hasCrawlerTypes() const { return this->crawlerTypes_ != nullptr;};
    void deleteCrawlerTypes() { this->crawlerTypes_ = nullptr;};
    inline const vector<CrawlerType> & crawlerTypes() const { DARABONBA_PTR_GET_CONST(crawlerTypes_, vector<CrawlerType>) };
    inline vector<CrawlerType> crawlerTypes() { DARABONBA_PTR_GET(crawlerTypes_, vector<CrawlerType>) };
    inline ListCrawlerTypesResponseBody& setCrawlerTypes(const vector<CrawlerType> & crawlerTypes) { DARABONBA_PTR_SET_VALUE(crawlerTypes_, crawlerTypes) };
    inline ListCrawlerTypesResponseBody& setCrawlerTypes(vector<CrawlerType> && crawlerTypes) { DARABONBA_PTR_SET_RVALUE(crawlerTypes_, crawlerTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrawlerTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCrawlerTypesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<CrawlerType>> crawlerTypes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
