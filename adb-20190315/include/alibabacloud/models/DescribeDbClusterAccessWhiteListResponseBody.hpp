// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterAccessWhiteListResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterAccessWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAccessWhiteListResponseBody() = default ;
    DescribeDBClusterAccessWhiteListResponseBody(const DescribeDBClusterAccessWhiteListResponseBody &) = default ;
    DescribeDBClusterAccessWhiteListResponseBody(DescribeDBClusterAccessWhiteListResponseBody &&) = default ;
    DescribeDBClusterAccessWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhiteListResponseBody() = default ;
    DescribeDBClusterAccessWhiteListResponseBody& operator=(const DescribeDBClusterAccessWhiteListResponseBody &) = default ;
    DescribeDBClusterAccessWhiteListResponseBody& operator=(DescribeDBClusterAccessWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBClusterAccessWhiteListResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClusterAccessWhiteListResponseBodyItems) };
    inline DescribeDBClusterAccessWhiteListResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeDBClusterAccessWhiteListResponseBodyItems) };
    inline DescribeDBClusterAccessWhiteListResponseBody& setItems(const DescribeDBClusterAccessWhiteListResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterAccessWhiteListResponseBody& setItems(DescribeDBClusterAccessWhiteListResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAccessWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried IP address whitelists.
    std::shared_ptr<DescribeDBClusterAccessWhiteListResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
