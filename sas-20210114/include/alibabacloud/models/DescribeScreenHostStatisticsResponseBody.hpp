// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENHOSTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENHOSTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeScreenHostStatisticsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenHostStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenHostStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenHostStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeScreenHostStatisticsResponseBody() = default ;
    DescribeScreenHostStatisticsResponseBody(const DescribeScreenHostStatisticsResponseBody &) = default ;
    DescribeScreenHostStatisticsResponseBody(DescribeScreenHostStatisticsResponseBody &&) = default ;
    DescribeScreenHostStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenHostStatisticsResponseBody() = default ;
    DescribeScreenHostStatisticsResponseBody& operator=(const DescribeScreenHostStatisticsResponseBody &) = default ;
    DescribeScreenHostStatisticsResponseBody& operator=(DescribeScreenHostStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeScreenHostStatisticsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeScreenHostStatisticsResponseBodyData) };
    inline DescribeScreenHostStatisticsResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeScreenHostStatisticsResponseBodyData) };
    inline DescribeScreenHostStatisticsResponseBody& setData(const DescribeScreenHostStatisticsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeScreenHostStatisticsResponseBody& setData(DescribeScreenHostStatisticsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenHostStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeScreenHostStatisticsResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
