// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyPortDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyPortDetailResponseBodyPropertys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyPortDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyPortDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyPortDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyPortDetailResponseBody() = default ;
    DescribePropertyPortDetailResponseBody(const DescribePropertyPortDetailResponseBody &) = default ;
    DescribePropertyPortDetailResponseBody(DescribePropertyPortDetailResponseBody &&) = default ;
    DescribePropertyPortDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyPortDetailResponseBody() = default ;
    DescribePropertyPortDetailResponseBody& operator=(const DescribePropertyPortDetailResponseBody &) = default ;
    DescribePropertyPortDetailResponseBody& operator=(DescribePropertyPortDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->propertys_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyPortDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyPortDetailResponseBodyPageInfo) };
    inline DescribePropertyPortDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyPortDetailResponseBodyPageInfo) };
    inline DescribePropertyPortDetailResponseBody& setPageInfo(const DescribePropertyPortDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyPortDetailResponseBody& setPageInfo(DescribePropertyPortDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyPortDetailResponseBodyPropertys> & propertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyPortDetailResponseBodyPropertys>) };
    inline vector<DescribePropertyPortDetailResponseBodyPropertys> propertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyPortDetailResponseBodyPropertys>) };
    inline DescribePropertyPortDetailResponseBody& setPropertys(const vector<DescribePropertyPortDetailResponseBodyPropertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyPortDetailResponseBody& setPropertys(vector<DescribePropertyPortDetailResponseBodyPropertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyPortDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyPortDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // The fingerprints of the ports.
    std::shared_ptr<vector<DescribePropertyPortDetailResponseBodyPropertys>> propertys_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
