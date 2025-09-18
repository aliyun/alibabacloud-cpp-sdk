// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLABELTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLABELTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLabelTablesResponseBodyLabelTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListLabelTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLabelTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LabelTables, labelTables_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLabelTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelTables, labelTables_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLabelTablesResponseBody() = default ;
    ListLabelTablesResponseBody(const ListLabelTablesResponseBody &) = default ;
    ListLabelTablesResponseBody(ListLabelTablesResponseBody &&) = default ;
    ListLabelTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLabelTablesResponseBody() = default ;
    ListLabelTablesResponseBody& operator=(const ListLabelTablesResponseBody &) = default ;
    ListLabelTablesResponseBody& operator=(ListLabelTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelTables_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // labelTables Field Functions 
    bool hasLabelTables() const { return this->labelTables_ != nullptr;};
    void deleteLabelTables() { this->labelTables_ = nullptr;};
    inline const vector<ListLabelTablesResponseBodyLabelTables> & labelTables() const { DARABONBA_PTR_GET_CONST(labelTables_, vector<ListLabelTablesResponseBodyLabelTables>) };
    inline vector<ListLabelTablesResponseBodyLabelTables> labelTables() { DARABONBA_PTR_GET(labelTables_, vector<ListLabelTablesResponseBodyLabelTables>) };
    inline ListLabelTablesResponseBody& setLabelTables(const vector<ListLabelTablesResponseBodyLabelTables> & labelTables) { DARABONBA_PTR_SET_VALUE(labelTables_, labelTables) };
    inline ListLabelTablesResponseBody& setLabelTables(vector<ListLabelTablesResponseBodyLabelTables> && labelTables) { DARABONBA_PTR_SET_RVALUE(labelTables_, labelTables) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLabelTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLabelTablesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListLabelTablesResponseBodyLabelTables>> labelTables_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
