// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeColumnsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeColumnsResponseBody() = default ;
    DescribeColumnsResponseBody(const DescribeColumnsResponseBody &) = default ;
    DescribeColumnsResponseBody(DescribeColumnsResponseBody &&) = default ;
    DescribeColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsResponseBody() = default ;
    DescribeColumnsResponseBody& operator=(const DescribeColumnsResponseBody &) = default ;
    DescribeColumnsResponseBody& operator=(DescribeColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeColumnsResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeColumnsResponseBodyItems) };
    inline DescribeColumnsResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeColumnsResponseBodyItems) };
    inline DescribeColumnsResponseBody& setItems(const DescribeColumnsResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeColumnsResponseBody& setItems(DescribeColumnsResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried columns.
    std::shared_ptr<DescribeColumnsResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
