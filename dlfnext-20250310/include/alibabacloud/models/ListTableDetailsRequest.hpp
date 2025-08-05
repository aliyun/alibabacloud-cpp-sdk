// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLEDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListTableDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(tableNamePattern, tableNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(tableNamePattern, tableNamePattern_);
    };
    ListTableDetailsRequest() = default ;
    ListTableDetailsRequest(const ListTableDetailsRequest &) = default ;
    ListTableDetailsRequest(ListTableDetailsRequest &&) = default ;
    ListTableDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableDetailsRequest() = default ;
    ListTableDetailsRequest& operator=(const ListTableDetailsRequest &) = default ;
    ListTableDetailsRequest& operator=(ListTableDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->pageToken_ != nullptr && this->tableNamePattern_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTableDetailsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListTableDetailsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // tableNamePattern Field Functions 
    bool hasTableNamePattern() const { return this->tableNamePattern_ != nullptr;};
    void deleteTableNamePattern() { this->tableNamePattern_ = nullptr;};
    inline string tableNamePattern() const { DARABONBA_PTR_GET_DEFAULT(tableNamePattern_, "") };
    inline ListTableDetailsRequest& setTableNamePattern(string tableNamePattern) { DARABONBA_PTR_SET_VALUE(tableNamePattern_, tableNamePattern) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
    std::shared_ptr<string> tableNamePattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
