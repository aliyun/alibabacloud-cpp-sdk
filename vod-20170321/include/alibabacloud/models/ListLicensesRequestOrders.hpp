// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSESREQUESTORDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSESREQUESTORDERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLicensesRequestOrders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicensesRequestOrders& obj) { 
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderDirection, orderDirection_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicensesRequestOrders& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderDirection, orderDirection_);
    };
    ListLicensesRequestOrders() = default ;
    ListLicensesRequestOrders(const ListLicensesRequestOrders &) = default ;
    ListLicensesRequestOrders(ListLicensesRequestOrders &&) = default ;
    ListLicensesRequestOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicensesRequestOrders() = default ;
    ListLicensesRequestOrders& operator=(const ListLicensesRequestOrders &) = default ;
    ListLicensesRequestOrders& operator=(ListLicensesRequestOrders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderBy_ != nullptr
        && this->orderDirection_ != nullptr; };
    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListLicensesRequestOrders& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string orderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListLicensesRequestOrders& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


  protected:
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<string> orderDirection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
