// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstancesAsCsvResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesAsCsvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesAsCsvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesAsCsvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstancesAsCsvResponseBody() = default ;
    DescribeDBInstancesAsCsvResponseBody(const DescribeDBInstancesAsCsvResponseBody &) = default ;
    DescribeDBInstancesAsCsvResponseBody(DescribeDBInstancesAsCsvResponseBody &&) = default ;
    DescribeDBInstancesAsCsvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesAsCsvResponseBody() = default ;
    DescribeDBInstancesAsCsvResponseBody& operator=(const DescribeDBInstancesAsCsvResponseBody &) = default ;
    DescribeDBInstancesAsCsvResponseBody& operator=(DescribeDBInstancesAsCsvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancesAsCsvResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancesAsCsvResponseBodyItems) };
    inline DescribeDBInstancesAsCsvResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeDBInstancesAsCsvResponseBodyItems) };
    inline DescribeDBInstancesAsCsvResponseBody& setItems(const DescribeDBInstancesAsCsvResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesAsCsvResponseBody& setItems(DescribeDBInstancesAsCsvResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesAsCsvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the fields in **DBInstanceAttribute**.
    std::shared_ptr<DescribeDBInstancesAsCsvResponseBodyItems> items_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
