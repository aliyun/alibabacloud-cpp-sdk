// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListMcpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customTag, customTag_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(officialTag, officialTag_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
      DARABONBA_PTR_TO_JSON(usageActive, usageActive_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customTag, customTag_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(officialTag, officialTag_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
      DARABONBA_PTR_FROM_JSON(usageActive, usageActive_);
    };
    ListMcpsRequest() = default ;
    ListMcpsRequest(const ListMcpsRequest &) = default ;
    ListMcpsRequest(ListMcpsRequest &&) = default ;
    ListMcpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpsRequest() = default ;
    ListMcpsRequest& operator=(const ListMcpsRequest &) = default ;
    ListMcpsRequest& operator=(ListMcpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customTag_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->officialTag_ == nullptr && this->searchType_ == nullptr
        && this->usageActive_ == nullptr; };
    // customTag Field Functions 
    bool hasCustomTag() const { return this->customTag_ != nullptr;};
    void deleteCustomTag() { this->customTag_ = nullptr;};
    inline string getCustomTag() const { DARABONBA_PTR_GET_DEFAULT(customTag_, "") };
    inline ListMcpsRequest& setCustomTag(string customTag) { DARABONBA_PTR_SET_VALUE(customTag_, customTag) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMcpsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMcpsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMcpsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officialTag Field Functions 
    bool hasOfficialTag() const { return this->officialTag_ != nullptr;};
    void deleteOfficialTag() { this->officialTag_ = nullptr;};
    inline string getOfficialTag() const { DARABONBA_PTR_GET_DEFAULT(officialTag_, "") };
    inline ListMcpsRequest& setOfficialTag(string officialTag) { DARABONBA_PTR_SET_VALUE(officialTag_, officialTag) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListMcpsRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // usageActive Field Functions 
    bool hasUsageActive() const { return this->usageActive_ != nullptr;};
    void deleteUsageActive() { this->usageActive_ = nullptr;};
    inline bool getUsageActive() const { DARABONBA_PTR_GET_DEFAULT(usageActive_, false) };
    inline ListMcpsRequest& setUsageActive(bool usageActive) { DARABONBA_PTR_SET_VALUE(usageActive_, usageActive) };


  protected:
    // Filters results by custom tag. The tag must be an exact match.
    shared_ptr<string> customTag_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The MCP service name or service ID. Used together with SearchType.
    shared_ptr<string> name_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // Filters results by official usage tag.
    shared_ptr<string> officialTag_ {};
    // The name matching method. Takes effect only when Name is specified. Valid values:
    // - accurate: exact match.
    // - blur: fuzzy match.
    // 
    // Default value: blur.
    shared_ptr<string> searchType_ {};
    // Specifies whether the service is still bound by the official template usage.
    shared_ptr<bool> usageActive_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
