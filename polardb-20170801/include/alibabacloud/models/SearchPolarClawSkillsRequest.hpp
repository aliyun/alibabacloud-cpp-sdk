// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPOLARCLAWSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPOLARCLAWSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class SearchPolarClawSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPolarClawSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPolarClawSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    SearchPolarClawSkillsRequest() = default ;
    SearchPolarClawSkillsRequest(const SearchPolarClawSkillsRequest &) = default ;
    SearchPolarClawSkillsRequest(SearchPolarClawSkillsRequest &&) = default ;
    SearchPolarClawSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPolarClawSkillsRequest() = default ;
    SearchPolarClawSkillsRequest& operator=(const SearchPolarClawSkillsRequest &) = default ;
    SearchPolarClawSkillsRequest& operator=(SearchPolarClawSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->limit_ == nullptr && this->query_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SearchPolarClawSkillsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SearchPolarClawSkillsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchPolarClawSkillsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The maximum number of results to return. Valid values: 1 to 100.
    shared_ptr<int32_t> limit_ {};
    // The search keyword. If this parameter is not specified, popular or recommended results are returned.
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
