// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyUserDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyUserDetailResponseBodyPropertys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUserDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUserDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyUserDetailResponseBody() = default ;
    DescribePropertyUserDetailResponseBody(const DescribePropertyUserDetailResponseBody &) = default ;
    DescribePropertyUserDetailResponseBody(DescribePropertyUserDetailResponseBody &&) = default ;
    DescribePropertyUserDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUserDetailResponseBody() = default ;
    DescribePropertyUserDetailResponseBody& operator=(const DescribePropertyUserDetailResponseBody &) = default ;
    DescribePropertyUserDetailResponseBody& operator=(DescribePropertyUserDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->propertys_ == nullptr && return this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyUserDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyUserDetailResponseBodyPageInfo) };
    inline DescribePropertyUserDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyUserDetailResponseBodyPageInfo) };
    inline DescribePropertyUserDetailResponseBody& setPageInfo(const DescribePropertyUserDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyUserDetailResponseBody& setPageInfo(DescribePropertyUserDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyUserDetailResponseBodyPropertys> & propertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyUserDetailResponseBodyPropertys>) };
    inline vector<DescribePropertyUserDetailResponseBodyPropertys> propertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyUserDetailResponseBodyPropertys>) };
    inline DescribePropertyUserDetailResponseBody& setPropertys(const vector<DescribePropertyUserDetailResponseBodyPropertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyUserDetailResponseBody& setPropertys(vector<DescribePropertyUserDetailResponseBodyPropertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyUserDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyUserDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // The details of asset fingerprints for the account.
    std::shared_ptr<vector<DescribePropertyUserDetailResponseBodyPropertys>> propertys_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
