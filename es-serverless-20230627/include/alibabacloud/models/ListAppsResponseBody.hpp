// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListAppsResponseBody() = default ;
    ListAppsResponseBody(const ListAppsResponseBody &) = default ;
    ListAppsResponseBody(ListAppsResponseBody &&) = default ;
    ListAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBody() = default ;
    ListAppsResponseBody& operator=(const ListAppsResponseBody &) = default ;
    ListAppsResponseBody& operator=(ListAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAppsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAppsResponseBodyResult>) };
    inline vector<ListAppsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListAppsResponseBodyResult>) };
    inline ListAppsResponseBody& setResult(const vector<ListAppsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAppsResponseBody& setResult(vector<ListAppsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAppsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListAppsResponseBodyResult>> result_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
