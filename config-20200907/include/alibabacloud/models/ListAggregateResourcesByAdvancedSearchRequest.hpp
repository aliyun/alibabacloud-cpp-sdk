// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourcesByAdvancedSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourcesByAdvancedSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourcesByAdvancedSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    ListAggregateResourcesByAdvancedSearchRequest() = default ;
    ListAggregateResourcesByAdvancedSearchRequest(const ListAggregateResourcesByAdvancedSearchRequest &) = default ;
    ListAggregateResourcesByAdvancedSearchRequest(ListAggregateResourcesByAdvancedSearchRequest &&) = default ;
    ListAggregateResourcesByAdvancedSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourcesByAdvancedSearchRequest() = default ;
    ListAggregateResourcesByAdvancedSearchRequest& operator=(const ListAggregateResourcesByAdvancedSearchRequest &) = default ;
    ListAggregateResourcesByAdvancedSearchRequest& operator=(ListAggregateResourcesByAdvancedSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->sql_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateResourcesByAdvancedSearchRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ListAggregateResourcesByAdvancedSearchRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The ID of the account group.
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The SQL query statement.
    // 
    // This parameter is required.
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
