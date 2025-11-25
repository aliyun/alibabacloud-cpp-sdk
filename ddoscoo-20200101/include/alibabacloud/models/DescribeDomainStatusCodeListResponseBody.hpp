// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATUSCODELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATUSCODELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainStatusCodeListResponseBodyStatusCodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainStatusCodeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatusCodeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCodeList, statusCodeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatusCodeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCodeList, statusCodeList_);
    };
    DescribeDomainStatusCodeListResponseBody() = default ;
    DescribeDomainStatusCodeListResponseBody(const DescribeDomainStatusCodeListResponseBody &) = default ;
    DescribeDomainStatusCodeListResponseBody(DescribeDomainStatusCodeListResponseBody &&) = default ;
    DescribeDomainStatusCodeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatusCodeListResponseBody() = default ;
    DescribeDomainStatusCodeListResponseBody& operator=(const DescribeDomainStatusCodeListResponseBody &) = default ;
    DescribeDomainStatusCodeListResponseBody& operator=(DescribeDomainStatusCodeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->statusCodeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainStatusCodeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCodeList Field Functions 
    bool hasStatusCodeList() const { return this->statusCodeList_ != nullptr;};
    void deleteStatusCodeList() { this->statusCodeList_ = nullptr;};
    inline const vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList> & statusCodeList() const { DARABONBA_PTR_GET_CONST(statusCodeList_, vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList>) };
    inline vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList> statusCodeList() { DARABONBA_PTR_GET(statusCodeList_, vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList>) };
    inline DescribeDomainStatusCodeListResponseBody& setStatusCodeList(const vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList> & statusCodeList) { DARABONBA_PTR_SET_VALUE(statusCodeList_, statusCodeList) };
    inline DescribeDomainStatusCodeListResponseBody& setStatusCodeList(vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList> && statusCodeList) { DARABONBA_PTR_SET_RVALUE(statusCodeList_, statusCodeList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics on response status codes.
    std::shared_ptr<vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList>> statusCodeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
