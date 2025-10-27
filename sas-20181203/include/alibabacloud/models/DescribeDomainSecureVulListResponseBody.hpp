// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREVULLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSecureVulListResponseBodyVulList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainSecureVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulList, vulList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulList, vulList_);
    };
    DescribeDomainSecureVulListResponseBody() = default ;
    DescribeDomainSecureVulListResponseBody(const DescribeDomainSecureVulListResponseBody &) = default ;
    DescribeDomainSecureVulListResponseBody(DescribeDomainSecureVulListResponseBody &&) = default ;
    DescribeDomainSecureVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureVulListResponseBody() = default ;
    DescribeDomainSecureVulListResponseBody& operator=(const DescribeDomainSecureVulListResponseBody &) = default ;
    DescribeDomainSecureVulListResponseBody& operator=(DescribeDomainSecureVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->vulList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecureVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDomainSecureVulListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulList Field Functions 
    bool hasVulList() const { return this->vulList_ != nullptr;};
    void deleteVulList() { this->vulList_ = nullptr;};
    inline const vector<DescribeDomainSecureVulListResponseBodyVulList> & vulList() const { DARABONBA_PTR_GET_CONST(vulList_, vector<DescribeDomainSecureVulListResponseBodyVulList>) };
    inline vector<DescribeDomainSecureVulListResponseBodyVulList> vulList() { DARABONBA_PTR_GET(vulList_, vector<DescribeDomainSecureVulListResponseBodyVulList>) };
    inline DescribeDomainSecureVulListResponseBody& setVulList(const vector<DescribeDomainSecureVulListResponseBodyVulList> & vulList) { DARABONBA_PTR_SET_VALUE(vulList_, vulList) };
    inline DescribeDomainSecureVulListResponseBody& setVulList(vector<DescribeDomainSecureVulListResponseBodyVulList> && vulList) { DARABONBA_PTR_SET_RVALUE(vulList_, vulList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of vulnerabilities returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The domain name-related vulnerabilities.
    std::shared_ptr<vector<DescribeDomainSecureVulListResponseBodyVulList>> vulList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
