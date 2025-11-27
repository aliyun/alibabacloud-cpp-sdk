// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODYDBPROXYCERTLISTITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODYDBPROXYCERTLISTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDbProxyInstanceSslResponseBodyDbProxyCertListItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDbProxyInstanceSslResponseBodyDbProxyCertListItems& obj) { 
      DARABONBA_PTR_TO_JSON(DbProxyCertListItems, dbProxyCertListItems_);
    };
    friend void from_json(const Darabonba::Json& j, GetDbProxyInstanceSslResponseBodyDbProxyCertListItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DbProxyCertListItems, dbProxyCertListItems_);
    };
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItems() = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItems(const GetDbProxyInstanceSslResponseBodyDbProxyCertListItems &) = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItems(GetDbProxyInstanceSslResponseBodyDbProxyCertListItems &&) = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDbProxyInstanceSslResponseBodyDbProxyCertListItems() = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItems& operator=(const GetDbProxyInstanceSslResponseBodyDbProxyCertListItems &) = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItems& operator=(GetDbProxyInstanceSslResponseBodyDbProxyCertListItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbProxyCertListItems_ == nullptr; };
    // dbProxyCertListItems Field Functions 
    bool hasDbProxyCertListItems() const { return this->dbProxyCertListItems_ != nullptr;};
    void deleteDbProxyCertListItems() { this->dbProxyCertListItems_ = nullptr;};
    inline const vector<Models::GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems> & dbProxyCertListItems() const { DARABONBA_PTR_GET_CONST(dbProxyCertListItems_, vector<Models::GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems>) };
    inline vector<Models::GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems> dbProxyCertListItems() { DARABONBA_PTR_GET(dbProxyCertListItems_, vector<Models::GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems>) };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItems& setDbProxyCertListItems(const vector<Models::GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems> & dbProxyCertListItems) { DARABONBA_PTR_SET_VALUE(dbProxyCertListItems_, dbProxyCertListItems) };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItems& setDbProxyCertListItems(vector<Models::GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems> && dbProxyCertListItems) { DARABONBA_PTR_SET_RVALUE(dbProxyCertListItems_, dbProxyCertListItems) };


  protected:
    std::shared_ptr<vector<Models::GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems>> dbProxyCertListItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
