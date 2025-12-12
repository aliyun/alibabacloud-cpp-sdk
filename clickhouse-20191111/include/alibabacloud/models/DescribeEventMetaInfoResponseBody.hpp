// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTMETAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTMETAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventMetaInfoResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeEventMetaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventMetaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventMetaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEventMetaInfoResponseBody() = default ;
    DescribeEventMetaInfoResponseBody(const DescribeEventMetaInfoResponseBody &) = default ;
    DescribeEventMetaInfoResponseBody(DescribeEventMetaInfoResponseBody &&) = default ;
    DescribeEventMetaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventMetaInfoResponseBody() = default ;
    DescribeEventMetaInfoResponseBody& operator=(const DescribeEventMetaInfoResponseBody &) = default ;
    DescribeEventMetaInfoResponseBody& operator=(DescribeEventMetaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeEventMetaInfoResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeEventMetaInfoResponseBodyItems>) };
    inline vector<DescribeEventMetaInfoResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeEventMetaInfoResponseBodyItems>) };
    inline DescribeEventMetaInfoResponseBody& setItems(const vector<DescribeEventMetaInfoResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeEventMetaInfoResponseBody& setItems(vector<DescribeEventMetaInfoResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventMetaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEventMetaInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeEventMetaInfoResponseBodyItems>> items_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
