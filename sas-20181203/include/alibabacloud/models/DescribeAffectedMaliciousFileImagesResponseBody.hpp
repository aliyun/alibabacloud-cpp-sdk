// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse.hpp>
#include <alibabacloud/models/DescribeAffectedMaliciousFileImagesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAffectedMaliciousFileImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAffectedMaliciousFileImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedMaliciousFileImagesResponse, affectedMaliciousFileImagesResponse_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAffectedMaliciousFileImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedMaliciousFileImagesResponse, affectedMaliciousFileImagesResponse_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAffectedMaliciousFileImagesResponseBody() = default ;
    DescribeAffectedMaliciousFileImagesResponseBody(const DescribeAffectedMaliciousFileImagesResponseBody &) = default ;
    DescribeAffectedMaliciousFileImagesResponseBody(DescribeAffectedMaliciousFileImagesResponseBody &&) = default ;
    DescribeAffectedMaliciousFileImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAffectedMaliciousFileImagesResponseBody() = default ;
    DescribeAffectedMaliciousFileImagesResponseBody& operator=(const DescribeAffectedMaliciousFileImagesResponseBody &) = default ;
    DescribeAffectedMaliciousFileImagesResponseBody& operator=(DescribeAffectedMaliciousFileImagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->affectedMaliciousFileImagesResponse_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // affectedMaliciousFileImagesResponse Field Functions 
    bool hasAffectedMaliciousFileImagesResponse() const { return this->affectedMaliciousFileImagesResponse_ != nullptr;};
    void deleteAffectedMaliciousFileImagesResponse() { this->affectedMaliciousFileImagesResponse_ = nullptr;};
    inline const vector<DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse> & affectedMaliciousFileImagesResponse() const { DARABONBA_PTR_GET_CONST(affectedMaliciousFileImagesResponse_, vector<DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse>) };
    inline vector<DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse> affectedMaliciousFileImagesResponse() { DARABONBA_PTR_GET(affectedMaliciousFileImagesResponse_, vector<DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse>) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setAffectedMaliciousFileImagesResponse(const vector<DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse> & affectedMaliciousFileImagesResponse) { DARABONBA_PTR_SET_VALUE(affectedMaliciousFileImagesResponse_, affectedMaliciousFileImagesResponse) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setAffectedMaliciousFileImagesResponse(vector<DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse> && affectedMaliciousFileImagesResponse) { DARABONBA_PTR_SET_RVALUE(affectedMaliciousFileImagesResponse_, affectedMaliciousFileImagesResponse) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAffectedMaliciousFileImagesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAffectedMaliciousFileImagesResponseBodyPageInfo) };
    inline DescribeAffectedMaliciousFileImagesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAffectedMaliciousFileImagesResponseBodyPageInfo) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setPageInfo(const DescribeAffectedMaliciousFileImagesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setPageInfo(DescribeAffectedMaliciousFileImagesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the images that have malicious image samples.
    std::shared_ptr<vector<DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse>> affectedMaliciousFileImagesResponse_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeAffectedMaliciousFileImagesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
