// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListParamsResponseBodyParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListParamsResponseBody() = default ;
    ListParamsResponseBody(const ListParamsResponseBody &) = default ;
    ListParamsResponseBody(ListParamsResponseBody &&) = default ;
    ListParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListParamsResponseBody() = default ;
    ListParamsResponseBody& operator=(const ListParamsResponseBody &) = default ;
    ListParamsResponseBody& operator=(ListParamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->params_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<ListParamsResponseBodyParams> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<ListParamsResponseBodyParams>) };
    inline vector<ListParamsResponseBodyParams> params() { DARABONBA_PTR_GET(params_, vector<ListParamsResponseBodyParams>) };
    inline ListParamsResponseBody& setParams(const vector<ListParamsResponseBodyParams> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListParamsResponseBody& setParams(vector<ListParamsResponseBodyParams> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListParamsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListParamsResponseBodyParams>> params_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
