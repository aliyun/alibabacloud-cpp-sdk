// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOPAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOPAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePopApiResponseBodyOpenApiMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePopApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePopApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(OpenApiMetaList, openApiMetaList_);
      DARABONBA_PTR_TO_JSON(PopCode, popCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePopApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(OpenApiMetaList, openApiMetaList_);
      DARABONBA_PTR_FROM_JSON(PopCode, popCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribePopApiResponseBody() = default ;
    DescribePopApiResponseBody(const DescribePopApiResponseBody &) = default ;
    DescribePopApiResponseBody(DescribePopApiResponseBody &&) = default ;
    DescribePopApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePopApiResponseBody() = default ;
    DescribePopApiResponseBody& operator=(const DescribePopApiResponseBody &) = default ;
    DescribePopApiResponseBody& operator=(DescribePopApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->openApiMetaList_ == nullptr && return this->popCode_ == nullptr && return this->requestId_ == nullptr && return this->version_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribePopApiResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // openApiMetaList Field Functions 
    bool hasOpenApiMetaList() const { return this->openApiMetaList_ != nullptr;};
    void deleteOpenApiMetaList() { this->openApiMetaList_ = nullptr;};
    inline const vector<DescribePopApiResponseBodyOpenApiMetaList> & openApiMetaList() const { DARABONBA_PTR_GET_CONST(openApiMetaList_, vector<DescribePopApiResponseBodyOpenApiMetaList>) };
    inline vector<DescribePopApiResponseBodyOpenApiMetaList> openApiMetaList() { DARABONBA_PTR_GET(openApiMetaList_, vector<DescribePopApiResponseBodyOpenApiMetaList>) };
    inline DescribePopApiResponseBody& setOpenApiMetaList(const vector<DescribePopApiResponseBodyOpenApiMetaList> & openApiMetaList) { DARABONBA_PTR_SET_VALUE(openApiMetaList_, openApiMetaList) };
    inline DescribePopApiResponseBody& setOpenApiMetaList(vector<DescribePopApiResponseBodyOpenApiMetaList> && openApiMetaList) { DARABONBA_PTR_SET_RVALUE(openApiMetaList_, openApiMetaList) };


    // popCode Field Functions 
    bool hasPopCode() const { return this->popCode_ != nullptr;};
    void deletePopCode() { this->popCode_ = nullptr;};
    inline string popCode() const { DARABONBA_PTR_GET_DEFAULT(popCode_, "") };
    inline DescribePopApiResponseBody& setPopCode(string popCode) { DARABONBA_PTR_SET_VALUE(popCode_, popCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePopApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribePopApiResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The information about the API.
    std::shared_ptr<vector<DescribePopApiResponseBodyOpenApiMetaList>> openApiMetaList_ = nullptr;
    // The POP code of the Alibaba Cloud service.
    std::shared_ptr<string> popCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The version of the API.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
