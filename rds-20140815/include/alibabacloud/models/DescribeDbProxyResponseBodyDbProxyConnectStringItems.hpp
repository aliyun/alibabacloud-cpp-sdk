// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYCONNECTSTRINGITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYCONNECTSTRINGITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyResponseBodyDBProxyConnectStringItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBodyDBProxyConnectStringItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBodyDBProxyConnectStringItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
    };
    DescribeDBProxyResponseBodyDBProxyConnectStringItems() = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItems(const DescribeDBProxyResponseBodyDBProxyConnectStringItems &) = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItems(DescribeDBProxyResponseBodyDBProxyConnectStringItems &&) = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBodyDBProxyConnectStringItems() = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItems& operator=(const DescribeDBProxyResponseBodyDBProxyConnectStringItems &) = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItems& operator=(DescribeDBProxyResponseBodyDBProxyConnectStringItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyConnectStringItems_ == nullptr; };
    // DBProxyConnectStringItems Field Functions 
    bool hasDBProxyConnectStringItems() const { return this->DBProxyConnectStringItems_ != nullptr;};
    void deleteDBProxyConnectStringItems() { this->DBProxyConnectStringItems_ = nullptr;};
    inline const vector<Models::DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems> & DBProxyConnectStringItems() const { DARABONBA_PTR_GET_CONST(DBProxyConnectStringItems_, vector<Models::DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems>) };
    inline vector<Models::DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems> DBProxyConnectStringItems() { DARABONBA_PTR_GET(DBProxyConnectStringItems_, vector<Models::DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems>) };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItems& setDBProxyConnectStringItems(const vector<Models::DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems> & DBProxyConnectStringItems) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringItems_, DBProxyConnectStringItems) };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItems& setDBProxyConnectStringItems(vector<Models::DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems> && DBProxyConnectStringItems) { DARABONBA_PTR_SET_RVALUE(DBProxyConnectStringItems_, DBProxyConnectStringItems) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems>> DBProxyConnectStringItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
