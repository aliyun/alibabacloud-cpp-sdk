// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeContainerStatisticsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerStatisticsResponseBody() = default ;
    DescribeContainerStatisticsResponseBody(const DescribeContainerStatisticsResponseBody &) = default ;
    DescribeContainerStatisticsResponseBody(DescribeContainerStatisticsResponseBody &&) = default ;
    DescribeContainerStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerStatisticsResponseBody() = default ;
    DescribeContainerStatisticsResponseBody& operator=(const DescribeContainerStatisticsResponseBody &) = default ;
    DescribeContainerStatisticsResponseBody& operator=(DescribeContainerStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeContainerStatisticsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeContainerStatisticsResponseBodyData) };
    inline DescribeContainerStatisticsResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeContainerStatisticsResponseBodyData) };
    inline DescribeContainerStatisticsResponseBody& setData(const DescribeContainerStatisticsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeContainerStatisticsResponseBody& setData(DescribeContainerStatisticsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert statistics of container assets.
    std::shared_ptr<DescribeContainerStatisticsResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
