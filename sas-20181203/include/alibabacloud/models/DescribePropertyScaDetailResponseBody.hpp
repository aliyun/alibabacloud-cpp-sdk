// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyScaDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyScaDetailResponseBodyPropertys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScaDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyScaDetailResponseBody() = default ;
    DescribePropertyScaDetailResponseBody(const DescribePropertyScaDetailResponseBody &) = default ;
    DescribePropertyScaDetailResponseBody(DescribePropertyScaDetailResponseBody &&) = default ;
    DescribePropertyScaDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaDetailResponseBody() = default ;
    DescribePropertyScaDetailResponseBody& operator=(const DescribePropertyScaDetailResponseBody &) = default ;
    DescribePropertyScaDetailResponseBody& operator=(DescribePropertyScaDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->propertys_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyScaDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyScaDetailResponseBodyPageInfo) };
    inline DescribePropertyScaDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyScaDetailResponseBodyPageInfo) };
    inline DescribePropertyScaDetailResponseBody& setPageInfo(const DescribePropertyScaDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyScaDetailResponseBody& setPageInfo(DescribePropertyScaDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyScaDetailResponseBodyPropertys> & propertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyScaDetailResponseBodyPropertys>) };
    inline vector<DescribePropertyScaDetailResponseBodyPropertys> propertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyScaDetailResponseBodyPropertys>) };
    inline DescribePropertyScaDetailResponseBody& setPropertys(const vector<DescribePropertyScaDetailResponseBodyPropertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyScaDetailResponseBody& setPropertys(vector<DescribePropertyScaDetailResponseBodyPropertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyScaDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyScaDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // The details about the asset fingerprints returned.
    std::shared_ptr<vector<DescribePropertyScaDetailResponseBodyPropertys>> propertys_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
