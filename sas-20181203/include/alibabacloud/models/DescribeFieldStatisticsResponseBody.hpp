// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFieldStatisticsResponseBodyGroupedFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFieldStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFieldStatisticsResponseBody() = default ;
    DescribeFieldStatisticsResponseBody(const DescribeFieldStatisticsResponseBody &) = default ;
    DescribeFieldStatisticsResponseBody(DescribeFieldStatisticsResponseBody &&) = default ;
    DescribeFieldStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFieldStatisticsResponseBody() = default ;
    DescribeFieldStatisticsResponseBody& operator=(const DescribeFieldStatisticsResponseBody &) = default ;
    DescribeFieldStatisticsResponseBody& operator=(DescribeFieldStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupedFields_ == nullptr
        && return this->requestId_ == nullptr; };
    // groupedFields Field Functions 
    bool hasGroupedFields() const { return this->groupedFields_ != nullptr;};
    void deleteGroupedFields() { this->groupedFields_ = nullptr;};
    inline const DescribeFieldStatisticsResponseBodyGroupedFields & groupedFields() const { DARABONBA_PTR_GET_CONST(groupedFields_, DescribeFieldStatisticsResponseBodyGroupedFields) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields groupedFields() { DARABONBA_PTR_GET(groupedFields_, DescribeFieldStatisticsResponseBodyGroupedFields) };
    inline DescribeFieldStatisticsResponseBody& setGroupedFields(const DescribeFieldStatisticsResponseBodyGroupedFields & groupedFields) { DARABONBA_PTR_SET_VALUE(groupedFields_, groupedFields) };
    inline DescribeFieldStatisticsResponseBody& setGroupedFields(DescribeFieldStatisticsResponseBodyGroupedFields && groupedFields) { DARABONBA_PTR_SET_RVALUE(groupedFields_, groupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFieldStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about servers that are returned.
    std::shared_ptr<DescribeFieldStatisticsResponseBodyGroupedFields> groupedFields_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
