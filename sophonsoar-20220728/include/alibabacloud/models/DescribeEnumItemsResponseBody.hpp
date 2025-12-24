// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENUMITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENUMITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnumItemsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeEnumItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnumItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnumItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnumItemsResponseBody() = default ;
    DescribeEnumItemsResponseBody(const DescribeEnumItemsResponseBody &) = default ;
    DescribeEnumItemsResponseBody(DescribeEnumItemsResponseBody &&) = default ;
    DescribeEnumItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnumItemsResponseBody() = default ;
    DescribeEnumItemsResponseBody& operator=(const DescribeEnumItemsResponseBody &) = default ;
    DescribeEnumItemsResponseBody& operator=(DescribeEnumItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeEnumItemsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeEnumItemsResponseBodyData>) };
    inline vector<DescribeEnumItemsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeEnumItemsResponseBodyData>) };
    inline DescribeEnumItemsResponseBody& setData(const vector<DescribeEnumItemsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEnumItemsResponseBody& setData(vector<DescribeEnumItemsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnumItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the enumeration item.
    std::shared_ptr<vector<DescribeEnumItemsResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
