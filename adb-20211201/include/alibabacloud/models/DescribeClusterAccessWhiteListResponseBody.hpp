// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterAccessWhiteListResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterAccessWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterAccessWhiteListResponseBody() = default ;
    DescribeClusterAccessWhiteListResponseBody(const DescribeClusterAccessWhiteListResponseBody &) = default ;
    DescribeClusterAccessWhiteListResponseBody(DescribeClusterAccessWhiteListResponseBody &&) = default ;
    DescribeClusterAccessWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAccessWhiteListResponseBody() = default ;
    DescribeClusterAccessWhiteListResponseBody& operator=(const DescribeClusterAccessWhiteListResponseBody &) = default ;
    DescribeClusterAccessWhiteListResponseBody& operator=(DescribeClusterAccessWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeClusterAccessWhiteListResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeClusterAccessWhiteListResponseBodyItems) };
    inline DescribeClusterAccessWhiteListResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeClusterAccessWhiteListResponseBodyItems) };
    inline DescribeClusterAccessWhiteListResponseBody& setItems(const DescribeClusterAccessWhiteListResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeClusterAccessWhiteListResponseBody& setItems(DescribeClusterAccessWhiteListResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterAccessWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried IP address whitelists.
    std::shared_ptr<DescribeClusterAccessWhiteListResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
