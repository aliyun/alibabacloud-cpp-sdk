// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERFIELDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERFIELDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerFieldStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerGroupedFields, containerGroupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerGroupedFields, containerGroupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerFieldStatisticsResponseBody() = default ;
    DescribeContainerFieldStatisticsResponseBody(const DescribeContainerFieldStatisticsResponseBody &) = default ;
    DescribeContainerFieldStatisticsResponseBody(DescribeContainerFieldStatisticsResponseBody &&) = default ;
    DescribeContainerFieldStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerFieldStatisticsResponseBody() = default ;
    DescribeContainerFieldStatisticsResponseBody& operator=(const DescribeContainerFieldStatisticsResponseBody &) = default ;
    DescribeContainerFieldStatisticsResponseBody& operator=(DescribeContainerFieldStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerGroupedFields_ != nullptr
        && this->requestId_ != nullptr; };
    // containerGroupedFields Field Functions 
    bool hasContainerGroupedFields() const { return this->containerGroupedFields_ != nullptr;};
    void deleteContainerGroupedFields() { this->containerGroupedFields_ = nullptr;};
    inline const DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields & containerGroupedFields() const { DARABONBA_PTR_GET_CONST(containerGroupedFields_, DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields containerGroupedFields() { DARABONBA_PTR_GET(containerGroupedFields_, DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields) };
    inline DescribeContainerFieldStatisticsResponseBody& setContainerGroupedFields(const DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields & containerGroupedFields) { DARABONBA_PTR_SET_VALUE(containerGroupedFields_, containerGroupedFields) };
    inline DescribeContainerFieldStatisticsResponseBody& setContainerGroupedFields(DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields && containerGroupedFields) { DARABONBA_PTR_SET_RVALUE(containerGroupedFields_, containerGroupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerFieldStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistical information about containers.
    std::shared_ptr<DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields> containerGroupedFields_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
