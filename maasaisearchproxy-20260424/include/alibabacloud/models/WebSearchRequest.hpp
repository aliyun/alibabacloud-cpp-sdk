// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WEBSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasAISearchProxy20260424
{
namespace Models
{
  class WebSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(excludeDomain, excludeDomain_);
      DARABONBA_PTR_TO_JSON(includeDomain, includeDomain_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, WebSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(excludeDomain, excludeDomain_);
      DARABONBA_PTR_FROM_JSON(includeDomain, includeDomain_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    WebSearchRequest() = default ;
    WebSearchRequest(const WebSearchRequest &) = default ;
    WebSearchRequest(WebSearchRequest &&) = default ;
    WebSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebSearchRequest() = default ;
    WebSearchRequest& operator=(const WebSearchRequest &) = default ;
    WebSearchRequest& operator=(WebSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->excludeDomain_ == nullptr && this->includeDomain_ == nullptr && this->limit_ == nullptr && this->query_ == nullptr && this->region_ == nullptr
        && this->searchType_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline WebSearchRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // excludeDomain Field Functions 
    bool hasExcludeDomain() const { return this->excludeDomain_ != nullptr;};
    void deleteExcludeDomain() { this->excludeDomain_ = nullptr;};
    inline const vector<string> & getExcludeDomain() const { DARABONBA_PTR_GET_CONST(excludeDomain_, vector<string>) };
    inline vector<string> getExcludeDomain() { DARABONBA_PTR_GET(excludeDomain_, vector<string>) };
    inline WebSearchRequest& setExcludeDomain(const vector<string> & excludeDomain) { DARABONBA_PTR_SET_VALUE(excludeDomain_, excludeDomain) };
    inline WebSearchRequest& setExcludeDomain(vector<string> && excludeDomain) { DARABONBA_PTR_SET_RVALUE(excludeDomain_, excludeDomain) };


    // includeDomain Field Functions 
    bool hasIncludeDomain() const { return this->includeDomain_ != nullptr;};
    void deleteIncludeDomain() { this->includeDomain_ = nullptr;};
    inline const vector<string> & getIncludeDomain() const { DARABONBA_PTR_GET_CONST(includeDomain_, vector<string>) };
    inline vector<string> getIncludeDomain() { DARABONBA_PTR_GET(includeDomain_, vector<string>) };
    inline WebSearchRequest& setIncludeDomain(const vector<string> & includeDomain) { DARABONBA_PTR_SET_VALUE(includeDomain_, includeDomain) };
    inline WebSearchRequest& setIncludeDomain(vector<string> && includeDomain) { DARABONBA_PTR_SET_RVALUE(includeDomain_, includeDomain) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline WebSearchRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline WebSearchRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline WebSearchRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline WebSearchRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline WebSearchRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<vector<string>> excludeDomain_ {};
    shared_ptr<vector<string>> includeDomain_ {};
    shared_ptr<int32_t> limit_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> searchType_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasAISearchProxy20260424
#endif
