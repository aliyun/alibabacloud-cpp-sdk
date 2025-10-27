// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyProcDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyProcDetailResponseBodyPropertys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyProcDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyProcDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyProcDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyProcDetailResponseBody() = default ;
    DescribePropertyProcDetailResponseBody(const DescribePropertyProcDetailResponseBody &) = default ;
    DescribePropertyProcDetailResponseBody(DescribePropertyProcDetailResponseBody &&) = default ;
    DescribePropertyProcDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyProcDetailResponseBody() = default ;
    DescribePropertyProcDetailResponseBody& operator=(const DescribePropertyProcDetailResponseBody &) = default ;
    DescribePropertyProcDetailResponseBody& operator=(DescribePropertyProcDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->propertys_ == nullptr && return this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyProcDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyProcDetailResponseBodyPageInfo) };
    inline DescribePropertyProcDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyProcDetailResponseBodyPageInfo) };
    inline DescribePropertyProcDetailResponseBody& setPageInfo(const DescribePropertyProcDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyProcDetailResponseBody& setPageInfo(DescribePropertyProcDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyProcDetailResponseBodyPropertys> & propertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyProcDetailResponseBodyPropertys>) };
    inline vector<DescribePropertyProcDetailResponseBodyPropertys> propertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyProcDetailResponseBodyPropertys>) };
    inline DescribePropertyProcDetailResponseBody& setPropertys(const vector<DescribePropertyProcDetailResponseBodyPropertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyProcDetailResponseBody& setPropertys(vector<DescribePropertyProcDetailResponseBodyPropertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyProcDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyProcDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the fingerprints of the processes.
    std::shared_ptr<vector<DescribePropertyProcDetailResponseBodyPropertys>> propertys_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
