// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESBYADVANCEDSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESBYADVANCEDSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListResourcesByAdvancedSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesByAdvancedSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesByAdvancedSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    ListResourcesByAdvancedSearchRequest() = default ;
    ListResourcesByAdvancedSearchRequest(const ListResourcesByAdvancedSearchRequest &) = default ;
    ListResourcesByAdvancedSearchRequest(ListResourcesByAdvancedSearchRequest &&) = default ;
    ListResourcesByAdvancedSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesByAdvancedSearchRequest() = default ;
    ListResourcesByAdvancedSearchRequest& operator=(const ListResourcesByAdvancedSearchRequest &) = default ;
    ListResourcesByAdvancedSearchRequest& operator=(ListResourcesByAdvancedSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sql_ == nullptr; };
    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ListResourcesByAdvancedSearchRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The SQL query statement.
    // 
    // This parameter is required.
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
