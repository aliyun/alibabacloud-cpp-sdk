// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPermissionApplyOrdersResponseBodyApplyOrders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListPermissionApplyOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionApplyOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyOrders, applyOrders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionApplyOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyOrders, applyOrders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPermissionApplyOrdersResponseBody() = default ;
    ListPermissionApplyOrdersResponseBody(const ListPermissionApplyOrdersResponseBody &) = default ;
    ListPermissionApplyOrdersResponseBody(ListPermissionApplyOrdersResponseBody &&) = default ;
    ListPermissionApplyOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionApplyOrdersResponseBody() = default ;
    ListPermissionApplyOrdersResponseBody& operator=(const ListPermissionApplyOrdersResponseBody &) = default ;
    ListPermissionApplyOrdersResponseBody& operator=(ListPermissionApplyOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyOrders_ != nullptr
        && this->requestId_ != nullptr; };
    // applyOrders Field Functions 
    bool hasApplyOrders() const { return this->applyOrders_ != nullptr;};
    void deleteApplyOrders() { this->applyOrders_ = nullptr;};
    inline const ListPermissionApplyOrdersResponseBodyApplyOrders & applyOrders() const { DARABONBA_PTR_GET_CONST(applyOrders_, ListPermissionApplyOrdersResponseBodyApplyOrders) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrders applyOrders() { DARABONBA_PTR_GET(applyOrders_, ListPermissionApplyOrdersResponseBodyApplyOrders) };
    inline ListPermissionApplyOrdersResponseBody& setApplyOrders(const ListPermissionApplyOrdersResponseBodyApplyOrders & applyOrders) { DARABONBA_PTR_SET_VALUE(applyOrders_, applyOrders) };
    inline ListPermissionApplyOrdersResponseBody& setApplyOrders(ListPermissionApplyOrdersResponseBodyApplyOrders && applyOrders) { DARABONBA_PTR_SET_RVALUE(applyOrders_, applyOrders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPermissionApplyOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query results returned by page.
    std::shared_ptr<ListPermissionApplyOrdersResponseBodyApplyOrders> applyOrders_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
