// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterSpaceSummaryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterSpaceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSpaceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSpaceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterSpaceSummaryResponseBody() = default ;
    DescribeDBClusterSpaceSummaryResponseBody(const DescribeDBClusterSpaceSummaryResponseBody &) = default ;
    DescribeDBClusterSpaceSummaryResponseBody(DescribeDBClusterSpaceSummaryResponseBody &&) = default ;
    DescribeDBClusterSpaceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterSpaceSummaryResponseBody() = default ;
    DescribeDBClusterSpaceSummaryResponseBody& operator=(const DescribeDBClusterSpaceSummaryResponseBody &) = default ;
    DescribeDBClusterSpaceSummaryResponseBody& operator=(DescribeDBClusterSpaceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBClusterSpaceSummaryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBClusterSpaceSummaryResponseBodyData) };
    inline DescribeDBClusterSpaceSummaryResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDBClusterSpaceSummaryResponseBodyData) };
    inline DescribeDBClusterSpaceSummaryResponseBody& setData(const DescribeDBClusterSpaceSummaryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBClusterSpaceSummaryResponseBody& setData(DescribeDBClusterSpaceSummaryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterSpaceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried storage overview information.
    std::shared_ptr<DescribeDBClusterSpaceSummaryResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
