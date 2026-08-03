// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADVANCEDQUERYHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADVANCEDQUERYHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class CreateAdvancedQueryHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAdvancedQueryHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(QuerySql, querySql_);
      DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAdvancedQueryHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(QuerySql, querySql_);
      DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
    };
    CreateAdvancedQueryHistoryRequest() = default ;
    CreateAdvancedQueryHistoryRequest(const CreateAdvancedQueryHistoryRequest &) = default ;
    CreateAdvancedQueryHistoryRequest(CreateAdvancedQueryHistoryRequest &&) = default ;
    CreateAdvancedQueryHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAdvancedQueryHistoryRequest() = default ;
    CreateAdvancedQueryHistoryRequest& operator=(const CreateAdvancedQueryHistoryRequest &) = default ;
    CreateAdvancedQueryHistoryRequest& operator=(CreateAdvancedQueryHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->querySql_ == nullptr && this->simpleQuery_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAdvancedQueryHistoryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // querySql Field Functions 
    bool hasQuerySql() const { return this->querySql_ != nullptr;};
    void deleteQuerySql() { this->querySql_ = nullptr;};
    inline string getQuerySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
    inline CreateAdvancedQueryHistoryRequest& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


    // simpleQuery Field Functions 
    bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
    void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
    inline bool getSimpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
    inline CreateAdvancedQueryHistoryRequest& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


  protected:
    shared_ptr<bool> dryRun_ {};
    // The conditional statement.
    // 
    // You can edit the conditional statement based on the [SQL syntax for advanced event queries](https://help.aliyun.com/document_detail/2557373.html).
    shared_ptr<string> querySql_ {};
    // Specifies whether to enable the simple query mode.
    // 
    // This parameter is required.
    shared_ptr<bool> simpleQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
