// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPRODUCTFIELDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPRODUCTFIELDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudProductFieldStatisticsResponseBodyGroupedFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudProductFieldStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudProductFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudProductFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudProductFieldStatisticsResponseBody() = default ;
    DescribeCloudProductFieldStatisticsResponseBody(const DescribeCloudProductFieldStatisticsResponseBody &) = default ;
    DescribeCloudProductFieldStatisticsResponseBody(DescribeCloudProductFieldStatisticsResponseBody &&) = default ;
    DescribeCloudProductFieldStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudProductFieldStatisticsResponseBody() = default ;
    DescribeCloudProductFieldStatisticsResponseBody& operator=(const DescribeCloudProductFieldStatisticsResponseBody &) = default ;
    DescribeCloudProductFieldStatisticsResponseBody& operator=(DescribeCloudProductFieldStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupedFields_ != nullptr
        && this->requestId_ != nullptr; };
    // groupedFields Field Functions 
    bool hasGroupedFields() const { return this->groupedFields_ != nullptr;};
    void deleteGroupedFields() { this->groupedFields_ = nullptr;};
    inline const DescribeCloudProductFieldStatisticsResponseBodyGroupedFields & groupedFields() const { DARABONBA_PTR_GET_CONST(groupedFields_, DescribeCloudProductFieldStatisticsResponseBodyGroupedFields) };
    inline DescribeCloudProductFieldStatisticsResponseBodyGroupedFields groupedFields() { DARABONBA_PTR_GET(groupedFields_, DescribeCloudProductFieldStatisticsResponseBodyGroupedFields) };
    inline DescribeCloudProductFieldStatisticsResponseBody& setGroupedFields(const DescribeCloudProductFieldStatisticsResponseBodyGroupedFields & groupedFields) { DARABONBA_PTR_SET_VALUE(groupedFields_, groupedFields) };
    inline DescribeCloudProductFieldStatisticsResponseBody& setGroupedFields(DescribeCloudProductFieldStatisticsResponseBodyGroupedFields && groupedFields) { DARABONBA_PTR_SET_RVALUE(groupedFields_, groupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudProductFieldStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of cloud services that are protected by Security Center.
    std::shared_ptr<DescribeCloudProductFieldStatisticsResponseBodyGroupedFields> groupedFields_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
