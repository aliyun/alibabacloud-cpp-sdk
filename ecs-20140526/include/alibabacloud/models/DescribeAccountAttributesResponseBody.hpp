// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountAttributesResponseBodyAccountAttributeItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAccountAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAttributeItems, accountAttributeItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAttributeItems, accountAttributeItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountAttributesResponseBody() = default ;
    DescribeAccountAttributesResponseBody(const DescribeAccountAttributesResponseBody &) = default ;
    DescribeAccountAttributesResponseBody(DescribeAccountAttributesResponseBody &&) = default ;
    DescribeAccountAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAttributesResponseBody() = default ;
    DescribeAccountAttributesResponseBody& operator=(const DescribeAccountAttributesResponseBody &) = default ;
    DescribeAccountAttributesResponseBody& operator=(DescribeAccountAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountAttributeItems_ != nullptr
        && this->requestId_ != nullptr; };
    // accountAttributeItems Field Functions 
    bool hasAccountAttributeItems() const { return this->accountAttributeItems_ != nullptr;};
    void deleteAccountAttributeItems() { this->accountAttributeItems_ = nullptr;};
    inline const DescribeAccountAttributesResponseBodyAccountAttributeItems & accountAttributeItems() const { DARABONBA_PTR_GET_CONST(accountAttributeItems_, DescribeAccountAttributesResponseBodyAccountAttributeItems) };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItems accountAttributeItems() { DARABONBA_PTR_GET(accountAttributeItems_, DescribeAccountAttributesResponseBodyAccountAttributeItems) };
    inline DescribeAccountAttributesResponseBody& setAccountAttributeItems(const DescribeAccountAttributesResponseBodyAccountAttributeItems & accountAttributeItems) { DARABONBA_PTR_SET_VALUE(accountAttributeItems_, accountAttributeItems) };
    inline DescribeAccountAttributesResponseBody& setAccountAttributeItems(DescribeAccountAttributesResponseBodyAccountAttributeItems && accountAttributeItems) { DARABONBA_PTR_SET_RVALUE(accountAttributeItems_, accountAttributeItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about account privileges in the specified region.
    std::shared_ptr<DescribeAccountAttributesResponseBodyAccountAttributeItems> accountAttributeItems_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
