// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchDescribeCdnIpInfoResponseBodyIpInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchDescribeCdnIpInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDescribeCdnIpInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpInfoList, ipInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDescribeCdnIpInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpInfoList, ipInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchDescribeCdnIpInfoResponseBody() = default ;
    BatchDescribeCdnIpInfoResponseBody(const BatchDescribeCdnIpInfoResponseBody &) = default ;
    BatchDescribeCdnIpInfoResponseBody(BatchDescribeCdnIpInfoResponseBody &&) = default ;
    BatchDescribeCdnIpInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDescribeCdnIpInfoResponseBody() = default ;
    BatchDescribeCdnIpInfoResponseBody& operator=(const BatchDescribeCdnIpInfoResponseBody &) = default ;
    BatchDescribeCdnIpInfoResponseBody& operator=(BatchDescribeCdnIpInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipInfoList_ != nullptr
        && this->requestId_ != nullptr; };
    // ipInfoList Field Functions 
    bool hasIpInfoList() const { return this->ipInfoList_ != nullptr;};
    void deleteIpInfoList() { this->ipInfoList_ = nullptr;};
    inline const vector<BatchDescribeCdnIpInfoResponseBodyIpInfoList> & ipInfoList() const { DARABONBA_PTR_GET_CONST(ipInfoList_, vector<BatchDescribeCdnIpInfoResponseBodyIpInfoList>) };
    inline vector<BatchDescribeCdnIpInfoResponseBodyIpInfoList> ipInfoList() { DARABONBA_PTR_GET(ipInfoList_, vector<BatchDescribeCdnIpInfoResponseBodyIpInfoList>) };
    inline BatchDescribeCdnIpInfoResponseBody& setIpInfoList(const vector<BatchDescribeCdnIpInfoResponseBodyIpInfoList> & ipInfoList) { DARABONBA_PTR_SET_VALUE(ipInfoList_, ipInfoList) };
    inline BatchDescribeCdnIpInfoResponseBody& setIpInfoList(vector<BatchDescribeCdnIpInfoResponseBodyIpInfoList> && ipInfoList) { DARABONBA_PTR_SET_RVALUE(ipInfoList_, ipInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDescribeCdnIpInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results about IP addresses returned.
    std::shared_ptr<vector<BatchDescribeCdnIpInfoResponseBodyIpInfoList>> ipInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
