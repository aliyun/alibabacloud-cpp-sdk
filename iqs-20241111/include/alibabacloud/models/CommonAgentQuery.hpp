// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONAGENTQUERY_HPP_
#define ALIBABACLOUD_MODELS_COMMONAGENTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class CommonAgentQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonAgentQuery& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(querySceneEnumCode, querySceneEnumCode_);
      DARABONBA_PTR_TO_JSON(searchModel, searchModel_);
    };
    friend void from_json(const Darabonba::Json& j, CommonAgentQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(querySceneEnumCode, querySceneEnumCode_);
      DARABONBA_PTR_FROM_JSON(searchModel, searchModel_);
    };
    CommonAgentQuery() = default ;
    CommonAgentQuery(const CommonAgentQuery &) = default ;
    CommonAgentQuery(CommonAgentQuery &&) = default ;
    CommonAgentQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonAgentQuery() = default ;
    CommonAgentQuery& operator=(const CommonAgentQuery &) = default ;
    CommonAgentQuery& operator=(CommonAgentQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && this->query_ == nullptr && this->querySceneEnumCode_ == nullptr && this->searchModel_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline CommonAgentQuery& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline CommonAgentQuery& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // querySceneEnumCode Field Functions 
    bool hasQuerySceneEnumCode() const { return this->querySceneEnumCode_ != nullptr;};
    void deleteQuerySceneEnumCode() { this->querySceneEnumCode_ = nullptr;};
    inline string getQuerySceneEnumCode() const { DARABONBA_PTR_GET_DEFAULT(querySceneEnumCode_, "") };
    inline CommonAgentQuery& setQuerySceneEnumCode(string querySceneEnumCode) { DARABONBA_PTR_SET_VALUE(querySceneEnumCode_, querySceneEnumCode) };


    // searchModel Field Functions 
    bool hasSearchModel() const { return this->searchModel_ != nullptr;};
    void deleteSearchModel() { this->searchModel_ = nullptr;};
    inline string getSearchModel() const { DARABONBA_PTR_GET_DEFAULT(searchModel_, "") };
    inline CommonAgentQuery& setSearchModel(string searchModel) { DARABONBA_PTR_SET_VALUE(searchModel_, searchModel) };


  protected:
    shared_ptr<int32_t> limit_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> querySceneEnumCode_ {};
    shared_ptr<string> searchModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
