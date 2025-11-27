// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYENDPOINTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYENDPOINTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyResponseBodyDbProxyEndpointItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBodyDbProxyEndpointItems& obj) { 
      DARABONBA_PTR_TO_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBodyDbProxyEndpointItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
    };
    DescribeDBProxyResponseBodyDbProxyEndpointItems() = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItems(const DescribeDBProxyResponseBodyDbProxyEndpointItems &) = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItems(DescribeDBProxyResponseBodyDbProxyEndpointItems &&) = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBodyDbProxyEndpointItems() = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItems& operator=(const DescribeDBProxyResponseBodyDbProxyEndpointItems &) = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItems& operator=(DescribeDBProxyResponseBodyDbProxyEndpointItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbProxyEndpointItems_ == nullptr; };
    // dbProxyEndpointItems Field Functions 
    bool hasDbProxyEndpointItems() const { return this->dbProxyEndpointItems_ != nullptr;};
    void deleteDbProxyEndpointItems() { this->dbProxyEndpointItems_ = nullptr;};
    inline const vector<Models::DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems> & dbProxyEndpointItems() const { DARABONBA_PTR_GET_CONST(dbProxyEndpointItems_, vector<Models::DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems>) };
    inline vector<Models::DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems> dbProxyEndpointItems() { DARABONBA_PTR_GET(dbProxyEndpointItems_, vector<Models::DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems>) };
    inline DescribeDBProxyResponseBodyDbProxyEndpointItems& setDbProxyEndpointItems(const vector<Models::DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems> & dbProxyEndpointItems) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };
    inline DescribeDBProxyResponseBodyDbProxyEndpointItems& setDbProxyEndpointItems(vector<Models::DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems> && dbProxyEndpointItems) { DARABONBA_PTR_SET_RVALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems>> dbProxyEndpointItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
