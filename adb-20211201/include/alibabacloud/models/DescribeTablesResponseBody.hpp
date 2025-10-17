// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTablesResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTablesResponseBody() = default ;
    DescribeTablesResponseBody(const DescribeTablesResponseBody &) = default ;
    DescribeTablesResponseBody(DescribeTablesResponseBody &&) = default ;
    DescribeTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablesResponseBody() = default ;
    DescribeTablesResponseBody& operator=(const DescribeTablesResponseBody &) = default ;
    DescribeTablesResponseBody& operator=(DescribeTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeTablesResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeTablesResponseBodyItems) };
    inline DescribeTablesResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeTablesResponseBodyItems) };
    inline DescribeTablesResponseBody& setItems(const DescribeTablesResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTablesResponseBody& setItems(DescribeTablesResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried tables.
    std::shared_ptr<DescribeTablesResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
