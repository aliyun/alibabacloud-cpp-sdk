// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDynamicRoutesResponseBodyDynamicRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDynamicRoutesResponseBody() = default ;
    ListDynamicRoutesResponseBody(const ListDynamicRoutesResponseBody &) = default ;
    ListDynamicRoutesResponseBody(ListDynamicRoutesResponseBody &&) = default ;
    ListDynamicRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicRoutesResponseBody() = default ;
    ListDynamicRoutesResponseBody& operator=(const ListDynamicRoutesResponseBody &) = default ;
    ListDynamicRoutesResponseBody& operator=(ListDynamicRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicRoutes_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr; };
    // dynamicRoutes Field Functions 
    bool hasDynamicRoutes() const { return this->dynamicRoutes_ != nullptr;};
    void deleteDynamicRoutes() { this->dynamicRoutes_ = nullptr;};
    inline const vector<ListDynamicRoutesResponseBodyDynamicRoutes> & dynamicRoutes() const { DARABONBA_PTR_GET_CONST(dynamicRoutes_, vector<ListDynamicRoutesResponseBodyDynamicRoutes>) };
    inline vector<ListDynamicRoutesResponseBodyDynamicRoutes> dynamicRoutes() { DARABONBA_PTR_GET(dynamicRoutes_, vector<ListDynamicRoutesResponseBodyDynamicRoutes>) };
    inline ListDynamicRoutesResponseBody& setDynamicRoutes(const vector<ListDynamicRoutesResponseBodyDynamicRoutes> & dynamicRoutes) { DARABONBA_PTR_SET_VALUE(dynamicRoutes_, dynamicRoutes) };
    inline ListDynamicRoutesResponseBody& setDynamicRoutes(vector<ListDynamicRoutesResponseBodyDynamicRoutes> && dynamicRoutes) { DARABONBA_PTR_SET_RVALUE(dynamicRoutes_, dynamicRoutes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDynamicRoutesResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<ListDynamicRoutesResponseBodyDynamicRoutes>> dynamicRoutes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
