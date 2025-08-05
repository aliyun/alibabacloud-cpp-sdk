// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceIPArrayListResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceIPArrayListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIPArrayListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIPArrayListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceIPArrayListResponseBody() = default ;
    DescribeDBInstanceIPArrayListResponseBody(const DescribeDBInstanceIPArrayListResponseBody &) = default ;
    DescribeDBInstanceIPArrayListResponseBody(DescribeDBInstanceIPArrayListResponseBody &&) = default ;
    DescribeDBInstanceIPArrayListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIPArrayListResponseBody() = default ;
    DescribeDBInstanceIPArrayListResponseBody& operator=(const DescribeDBInstanceIPArrayListResponseBody &) = default ;
    DescribeDBInstanceIPArrayListResponseBody& operator=(DescribeDBInstanceIPArrayListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->requestId_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstanceIPArrayListResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstanceIPArrayListResponseBodyItems) };
    inline DescribeDBInstanceIPArrayListResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeDBInstanceIPArrayListResponseBodyItems) };
    inline DescribeDBInstanceIPArrayListResponseBody& setItems(const DescribeDBInstanceIPArrayListResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceIPArrayListResponseBody& setItems(DescribeDBInstanceIPArrayListResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceIPArrayListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried IP address whitelists.
    std::shared_ptr<DescribeDBInstanceIPArrayListResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
