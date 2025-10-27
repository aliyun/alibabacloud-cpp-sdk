// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCloudAssetSummaryResponseBodyGroupedFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAssetSummaryResponseBody() = default ;
    GetCloudAssetSummaryResponseBody(const GetCloudAssetSummaryResponseBody &) = default ;
    GetCloudAssetSummaryResponseBody(GetCloudAssetSummaryResponseBody &&) = default ;
    GetCloudAssetSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryResponseBody() = default ;
    GetCloudAssetSummaryResponseBody& operator=(const GetCloudAssetSummaryResponseBody &) = default ;
    GetCloudAssetSummaryResponseBody& operator=(GetCloudAssetSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupedFields_ == nullptr
        && return this->requestId_ == nullptr; };
    // groupedFields Field Functions 
    bool hasGroupedFields() const { return this->groupedFields_ != nullptr;};
    void deleteGroupedFields() { this->groupedFields_ = nullptr;};
    inline const GetCloudAssetSummaryResponseBodyGroupedFields & groupedFields() const { DARABONBA_PTR_GET_CONST(groupedFields_, GetCloudAssetSummaryResponseBodyGroupedFields) };
    inline GetCloudAssetSummaryResponseBodyGroupedFields groupedFields() { DARABONBA_PTR_GET(groupedFields_, GetCloudAssetSummaryResponseBodyGroupedFields) };
    inline GetCloudAssetSummaryResponseBody& setGroupedFields(const GetCloudAssetSummaryResponseBodyGroupedFields & groupedFields) { DARABONBA_PTR_SET_VALUE(groupedFields_, groupedFields) };
    inline GetCloudAssetSummaryResponseBody& setGroupedFields(GetCloudAssetSummaryResponseBodyGroupedFields && groupedFields) { DARABONBA_PTR_SET_RVALUE(groupedFields_, groupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAssetSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The summary of cloud services.
    std::shared_ptr<GetCloudAssetSummaryResponseBodyGroupedFields> groupedFields_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
