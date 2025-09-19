// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVENDORLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVENDORLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVendorListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVendorListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VendorNameList, vendorNameList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVendorListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VendorNameList, vendorNameList_);
    };
    DescribeVendorListResponseBody() = default ;
    DescribeVendorListResponseBody(const DescribeVendorListResponseBody &) = default ;
    DescribeVendorListResponseBody(DescribeVendorListResponseBody &&) = default ;
    DescribeVendorListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVendorListResponseBody() = default ;
    DescribeVendorListResponseBody& operator=(const DescribeVendorListResponseBody &) = default ;
    DescribeVendorListResponseBody& operator=(DescribeVendorListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vendorNameList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVendorListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorNameList Field Functions 
    bool hasVendorNameList() const { return this->vendorNameList_ != nullptr;};
    void deleteVendorNameList() { this->vendorNameList_ = nullptr;};
    inline const vector<string> & vendorNameList() const { DARABONBA_PTR_GET_CONST(vendorNameList_, vector<string>) };
    inline vector<string> vendorNameList() { DARABONBA_PTR_GET(vendorNameList_, vector<string>) };
    inline DescribeVendorListResponseBody& setVendorNameList(const vector<string> & vendorNameList) { DARABONBA_PTR_SET_VALUE(vendorNameList_, vendorNameList) };
    inline DescribeVendorListResponseBody& setVendorNameList(vector<string> && vendorNameList) { DARABONBA_PTR_SET_RVALUE(vendorNameList_, vendorNameList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the service providers.
    std::shared_ptr<vector<string>> vendorNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
