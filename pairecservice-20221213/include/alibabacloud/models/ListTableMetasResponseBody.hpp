// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLEMETASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLEMETASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTableMetasResponseBodyTableMetas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTableMetasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableMetasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TableMetas, tableMetas_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableMetasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TableMetas, tableMetas_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTableMetasResponseBody() = default ;
    ListTableMetasResponseBody(const ListTableMetasResponseBody &) = default ;
    ListTableMetasResponseBody(ListTableMetasResponseBody &&) = default ;
    ListTableMetasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableMetasResponseBody() = default ;
    ListTableMetasResponseBody& operator=(const ListTableMetasResponseBody &) = default ;
    ListTableMetasResponseBody& operator=(ListTableMetasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tableMetas_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTableMetasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tableMetas Field Functions 
    bool hasTableMetas() const { return this->tableMetas_ != nullptr;};
    void deleteTableMetas() { this->tableMetas_ = nullptr;};
    inline const vector<ListTableMetasResponseBodyTableMetas> & tableMetas() const { DARABONBA_PTR_GET_CONST(tableMetas_, vector<ListTableMetasResponseBodyTableMetas>) };
    inline vector<ListTableMetasResponseBodyTableMetas> tableMetas() { DARABONBA_PTR_GET(tableMetas_, vector<ListTableMetasResponseBodyTableMetas>) };
    inline ListTableMetasResponseBody& setTableMetas(const vector<ListTableMetasResponseBodyTableMetas> & tableMetas) { DARABONBA_PTR_SET_VALUE(tableMetas_, tableMetas) };
    inline ListTableMetasResponseBody& setTableMetas(vector<ListTableMetasResponseBodyTableMetas> && tableMetas) { DARABONBA_PTR_SET_RVALUE(tableMetas_, tableMetas) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTableMetasResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListTableMetasResponseBodyTableMetas>> tableMetas_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
