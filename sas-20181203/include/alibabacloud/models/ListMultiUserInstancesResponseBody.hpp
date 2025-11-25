// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstance.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DaInstance, daInstance_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleInstanceList, saleInstanceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DaInstance, daInstance_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleInstanceList, saleInstanceList_);
    };
    ListMultiUserInstancesResponseBody() = default ;
    ListMultiUserInstancesResponseBody(const ListMultiUserInstancesResponseBody &) = default ;
    ListMultiUserInstancesResponseBody(ListMultiUserInstancesResponseBody &&) = default ;
    ListMultiUserInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesResponseBody() = default ;
    ListMultiUserInstancesResponseBody& operator=(const ListMultiUserInstancesResponseBody &) = default ;
    ListMultiUserInstancesResponseBody& operator=(ListMultiUserInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->daInstance_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr && return this->saleInstanceList_ == nullptr; };
    // daInstance Field Functions 
    bool hasDaInstance() const { return this->daInstance_ != nullptr;};
    void deleteDaInstance() { this->daInstance_ = nullptr;};
    inline const ListMultiUserInstancesResponseBodyDaInstance & daInstance() const { DARABONBA_PTR_GET_CONST(daInstance_, ListMultiUserInstancesResponseBodyDaInstance) };
    inline ListMultiUserInstancesResponseBodyDaInstance daInstance() { DARABONBA_PTR_GET(daInstance_, ListMultiUserInstancesResponseBodyDaInstance) };
    inline ListMultiUserInstancesResponseBody& setDaInstance(const ListMultiUserInstancesResponseBodyDaInstance & daInstance) { DARABONBA_PTR_SET_VALUE(daInstance_, daInstance) };
    inline ListMultiUserInstancesResponseBody& setDaInstance(ListMultiUserInstancesResponseBodyDaInstance && daInstance) { DARABONBA_PTR_SET_RVALUE(daInstance_, daInstance) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListMultiUserInstancesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListMultiUserInstancesResponseBodyPageInfo) };
    inline ListMultiUserInstancesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListMultiUserInstancesResponseBodyPageInfo) };
    inline ListMultiUserInstancesResponseBody& setPageInfo(const ListMultiUserInstancesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListMultiUserInstancesResponseBody& setPageInfo(ListMultiUserInstancesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiUserInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleInstanceList Field Functions 
    bool hasSaleInstanceList() const { return this->saleInstanceList_ != nullptr;};
    void deleteSaleInstanceList() { this->saleInstanceList_ = nullptr;};
    inline const vector<ListMultiUserInstancesResponseBodySaleInstanceList> & saleInstanceList() const { DARABONBA_PTR_GET_CONST(saleInstanceList_, vector<ListMultiUserInstancesResponseBodySaleInstanceList>) };
    inline vector<ListMultiUserInstancesResponseBodySaleInstanceList> saleInstanceList() { DARABONBA_PTR_GET(saleInstanceList_, vector<ListMultiUserInstancesResponseBodySaleInstanceList>) };
    inline ListMultiUserInstancesResponseBody& setSaleInstanceList(const vector<ListMultiUserInstancesResponseBodySaleInstanceList> & saleInstanceList) { DARABONBA_PTR_SET_VALUE(saleInstanceList_, saleInstanceList) };
    inline ListMultiUserInstancesResponseBody& setSaleInstanceList(vector<ListMultiUserInstancesResponseBodySaleInstanceList> && saleInstanceList) { DARABONBA_PTR_SET_RVALUE(saleInstanceList_, saleInstanceList) };


  protected:
    std::shared_ptr<ListMultiUserInstancesResponseBodyDaInstance> daInstance_ = nullptr;
    std::shared_ptr<ListMultiUserInstancesResponseBodyPageInfo> pageInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListMultiUserInstancesResponseBodySaleInstanceList>> saleInstanceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
