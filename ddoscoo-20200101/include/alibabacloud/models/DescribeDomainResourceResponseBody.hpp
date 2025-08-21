// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainResourceResponseBodyWebRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebRules, webRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebRules, webRules_);
    };
    DescribeDomainResourceResponseBody() = default ;
    DescribeDomainResourceResponseBody(const DescribeDomainResourceResponseBody &) = default ;
    DescribeDomainResourceResponseBody(DescribeDomainResourceResponseBody &&) = default ;
    DescribeDomainResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResourceResponseBody() = default ;
    DescribeDomainResourceResponseBody& operator=(const DescribeDomainResourceResponseBody &) = default ;
    DescribeDomainResourceResponseBody& operator=(DescribeDomainResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->webRules_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainResourceResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webRules Field Functions 
    bool hasWebRules() const { return this->webRules_ != nullptr;};
    void deleteWebRules() { this->webRules_ = nullptr;};
    inline const vector<DescribeDomainResourceResponseBodyWebRules> & webRules() const { DARABONBA_PTR_GET_CONST(webRules_, vector<DescribeDomainResourceResponseBodyWebRules>) };
    inline vector<DescribeDomainResourceResponseBodyWebRules> webRules() { DARABONBA_PTR_GET(webRules_, vector<DescribeDomainResourceResponseBodyWebRules>) };
    inline DescribeDomainResourceResponseBody& setWebRules(const vector<DescribeDomainResourceResponseBodyWebRules> & webRules) { DARABONBA_PTR_SET_VALUE(webRules_, webRules) };
    inline DescribeDomainResourceResponseBody& setWebRules(vector<DescribeDomainResourceResponseBodyWebRules> && webRules) { DARABONBA_PTR_SET_RVALUE(webRules_, webRules) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of forwarding rules.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The configurations of the forwarding rule.
    std::shared_ptr<vector<DescribeDomainResourceResponseBodyWebRules>> webRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
