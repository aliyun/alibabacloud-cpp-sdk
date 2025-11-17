// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatasourcesResponseBodyDatasources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datasources, datasources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datasources, datasources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasourcesResponseBody() = default ;
    ListDatasourcesResponseBody(const ListDatasourcesResponseBody &) = default ;
    ListDatasourcesResponseBody(ListDatasourcesResponseBody &&) = default ;
    ListDatasourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourcesResponseBody() = default ;
    ListDatasourcesResponseBody& operator=(const ListDatasourcesResponseBody &) = default ;
    ListDatasourcesResponseBody& operator=(ListDatasourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasources_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // datasources Field Functions 
    bool hasDatasources() const { return this->datasources_ != nullptr;};
    void deleteDatasources() { this->datasources_ = nullptr;};
    inline const vector<ListDatasourcesResponseBodyDatasources> & datasources() const { DARABONBA_PTR_GET_CONST(datasources_, vector<ListDatasourcesResponseBodyDatasources>) };
    inline vector<ListDatasourcesResponseBodyDatasources> datasources() { DARABONBA_PTR_GET(datasources_, vector<ListDatasourcesResponseBodyDatasources>) };
    inline ListDatasourcesResponseBody& setDatasources(const vector<ListDatasourcesResponseBodyDatasources> & datasources) { DARABONBA_PTR_SET_VALUE(datasources_, datasources) };
    inline ListDatasourcesResponseBody& setDatasources(vector<ListDatasourcesResponseBodyDatasources> && datasources) { DARABONBA_PTR_SET_RVALUE(datasources_, datasources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatasourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListDatasourcesResponseBodyDatasources>> datasources_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
