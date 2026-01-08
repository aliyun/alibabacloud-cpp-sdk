// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETSERVICENAMELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETSERVICENAMELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetServiceNameListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetServiceNameListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceNameList, serviceNameList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetServiceNameListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceNameList, serviceNameList_);
    };
    DescribeInternetServiceNameListResponseBody() = default ;
    DescribeInternetServiceNameListResponseBody(const DescribeInternetServiceNameListResponseBody &) = default ;
    DescribeInternetServiceNameListResponseBody(DescribeInternetServiceNameListResponseBody &&) = default ;
    DescribeInternetServiceNameListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetServiceNameListResponseBody() = default ;
    DescribeInternetServiceNameListResponseBody& operator=(const DescribeInternetServiceNameListResponseBody &) = default ;
    DescribeInternetServiceNameListResponseBody& operator=(DescribeInternetServiceNameListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceNameList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetServiceNameListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceNameList Field Functions 
    bool hasServiceNameList() const { return this->serviceNameList_ != nullptr;};
    void deleteServiceNameList() { this->serviceNameList_ = nullptr;};
    inline const vector<string> & getServiceNameList() const { DARABONBA_PTR_GET_CONST(serviceNameList_, vector<string>) };
    inline vector<string> getServiceNameList() { DARABONBA_PTR_GET(serviceNameList_, vector<string>) };
    inline DescribeInternetServiceNameListResponseBody& setServiceNameList(const vector<string> & serviceNameList) { DARABONBA_PTR_SET_VALUE(serviceNameList_, serviceNameList) };
    inline DescribeInternetServiceNameListResponseBody& setServiceNameList(vector<string> && serviceNameList) { DARABONBA_PTR_SET_RVALUE(serviceNameList_, serviceNameList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> serviceNameList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
