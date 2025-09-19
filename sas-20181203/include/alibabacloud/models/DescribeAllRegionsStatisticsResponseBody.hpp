// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLREGIONSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLREGIONSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAllRegionsStatisticsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllRegionsStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllRegionsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllRegionsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllRegionsStatisticsResponseBody() = default ;
    DescribeAllRegionsStatisticsResponseBody(const DescribeAllRegionsStatisticsResponseBody &) = default ;
    DescribeAllRegionsStatisticsResponseBody(DescribeAllRegionsStatisticsResponseBody &&) = default ;
    DescribeAllRegionsStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllRegionsStatisticsResponseBody() = default ;
    DescribeAllRegionsStatisticsResponseBody& operator=(const DescribeAllRegionsStatisticsResponseBody &) = default ;
    DescribeAllRegionsStatisticsResponseBody& operator=(DescribeAllRegionsStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAllRegionsStatisticsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeAllRegionsStatisticsResponseBodyData) };
    inline DescribeAllRegionsStatisticsResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeAllRegionsStatisticsResponseBodyData) };
    inline DescribeAllRegionsStatisticsResponseBody& setData(const DescribeAllRegionsStatisticsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAllRegionsStatisticsResponseBody& setData(DescribeAllRegionsStatisticsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllRegionsStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DescribeAllRegionsStatisticsResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
