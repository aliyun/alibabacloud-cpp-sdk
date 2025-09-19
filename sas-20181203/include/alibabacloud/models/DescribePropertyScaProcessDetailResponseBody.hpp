// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAPROCESSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAPROCESSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyScaProcessDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyScaProcessDetailResponseBodyPropertys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScaProcessDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaProcessDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaProcessDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyScaProcessDetailResponseBody() = default ;
    DescribePropertyScaProcessDetailResponseBody(const DescribePropertyScaProcessDetailResponseBody &) = default ;
    DescribePropertyScaProcessDetailResponseBody(DescribePropertyScaProcessDetailResponseBody &&) = default ;
    DescribePropertyScaProcessDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaProcessDetailResponseBody() = default ;
    DescribePropertyScaProcessDetailResponseBody& operator=(const DescribePropertyScaProcessDetailResponseBody &) = default ;
    DescribePropertyScaProcessDetailResponseBody& operator=(DescribePropertyScaProcessDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->propertys_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyScaProcessDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyScaProcessDetailResponseBodyPageInfo) };
    inline DescribePropertyScaProcessDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyScaProcessDetailResponseBodyPageInfo) };
    inline DescribePropertyScaProcessDetailResponseBody& setPageInfo(const DescribePropertyScaProcessDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyScaProcessDetailResponseBody& setPageInfo(DescribePropertyScaProcessDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyScaProcessDetailResponseBodyPropertys> & propertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyScaProcessDetailResponseBodyPropertys>) };
    inline vector<DescribePropertyScaProcessDetailResponseBodyPropertys> propertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyScaProcessDetailResponseBodyPropertys>) };
    inline DescribePropertyScaProcessDetailResponseBody& setPropertys(const vector<DescribePropertyScaProcessDetailResponseBodyPropertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyScaProcessDetailResponseBody& setPropertys(vector<DescribePropertyScaProcessDetailResponseBodyPropertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyScaProcessDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyScaProcessDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // The processes collected by the asset fingerprints feature.
    std::shared_ptr<vector<DescribePropertyScaProcessDetailResponseBodyPropertys>> propertys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
