// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLSTATEMENTCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLSTATEMENTCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSqlStatementContentsResponseBodySqlStatementContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListSqlStatementContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSqlStatementContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sqlStatementContents, sqlStatementContents_);
    };
    friend void from_json(const Darabonba::Json& j, ListSqlStatementContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sqlStatementContents, sqlStatementContents_);
    };
    ListSqlStatementContentsResponseBody() = default ;
    ListSqlStatementContentsResponseBody(const ListSqlStatementContentsResponseBody &) = default ;
    ListSqlStatementContentsResponseBody(ListSqlStatementContentsResponseBody &&) = default ;
    ListSqlStatementContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSqlStatementContentsResponseBody() = default ;
    ListSqlStatementContentsResponseBody& operator=(const ListSqlStatementContentsResponseBody &) = default ;
    ListSqlStatementContentsResponseBody& operator=(ListSqlStatementContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sqlStatementContents_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSqlStatementContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sqlStatementContents Field Functions 
    bool hasSqlStatementContents() const { return this->sqlStatementContents_ != nullptr;};
    void deleteSqlStatementContents() { this->sqlStatementContents_ = nullptr;};
    inline const ListSqlStatementContentsResponseBodySqlStatementContents & sqlStatementContents() const { DARABONBA_PTR_GET_CONST(sqlStatementContents_, ListSqlStatementContentsResponseBodySqlStatementContents) };
    inline ListSqlStatementContentsResponseBodySqlStatementContents sqlStatementContents() { DARABONBA_PTR_GET(sqlStatementContents_, ListSqlStatementContentsResponseBodySqlStatementContents) };
    inline ListSqlStatementContentsResponseBody& setSqlStatementContents(const ListSqlStatementContentsResponseBodySqlStatementContents & sqlStatementContents) { DARABONBA_PTR_SET_VALUE(sqlStatementContents_, sqlStatementContents) };
    inline ListSqlStatementContentsResponseBody& setSqlStatementContents(ListSqlStatementContentsResponseBodySqlStatementContents && sqlStatementContents) { DARABONBA_PTR_SET_RVALUE(sqlStatementContents_, sqlStatementContents) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListSqlStatementContentsResponseBodySqlStatementContents> sqlStatementContents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
