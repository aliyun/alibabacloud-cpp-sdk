// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTableDetailResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeTableDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgSize, avgSize_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgSize, avgSize_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTableDetailResponseBody() = default ;
    DescribeTableDetailResponseBody(const DescribeTableDetailResponseBody &) = default ;
    DescribeTableDetailResponseBody(DescribeTableDetailResponseBody &&) = default ;
    DescribeTableDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableDetailResponseBody() = default ;
    DescribeTableDetailResponseBody& operator=(const DescribeTableDetailResponseBody &) = default ;
    DescribeTableDetailResponseBody& operator=(DescribeTableDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgSize_ != nullptr
        && this->items_ != nullptr && this->requestId_ != nullptr; };
    // avgSize Field Functions 
    bool hasAvgSize() const { return this->avgSize_ != nullptr;};
    void deleteAvgSize() { this->avgSize_ = nullptr;};
    inline int64_t avgSize() const { DARABONBA_PTR_GET_DEFAULT(avgSize_, 0L) };
    inline DescribeTableDetailResponseBody& setAvgSize(int64_t avgSize) { DARABONBA_PTR_SET_VALUE(avgSize_, avgSize) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeTableDetailResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeTableDetailResponseBodyItems) };
    inline DescribeTableDetailResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeTableDetailResponseBodyItems) };
    inline DescribeTableDetailResponseBody& setItems(const DescribeTableDetailResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTableDetailResponseBody& setItems(DescribeTableDetailResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTableDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The average number of rows in partitions.
    std::shared_ptr<int64_t> avgSize_ = nullptr;
    // The list of partitions.
    std::shared_ptr<DescribeTableDetailResponseBodyItems> items_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
