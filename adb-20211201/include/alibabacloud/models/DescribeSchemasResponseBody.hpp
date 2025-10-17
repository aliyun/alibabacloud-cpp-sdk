// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSchemasResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSchemasResponseBody() = default ;
    DescribeSchemasResponseBody(const DescribeSchemasResponseBody &) = default ;
    DescribeSchemasResponseBody(DescribeSchemasResponseBody &&) = default ;
    DescribeSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchemasResponseBody() = default ;
    DescribeSchemasResponseBody& operator=(const DescribeSchemasResponseBody &) = default ;
    DescribeSchemasResponseBody& operator=(DescribeSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSchemasResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeSchemasResponseBodyItems) };
    inline DescribeSchemasResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeSchemasResponseBodyItems) };
    inline DescribeSchemasResponseBody& setItems(const DescribeSchemasResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSchemasResponseBody& setItems(DescribeSchemasResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried databases.
    std::shared_ptr<DescribeSchemasResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
