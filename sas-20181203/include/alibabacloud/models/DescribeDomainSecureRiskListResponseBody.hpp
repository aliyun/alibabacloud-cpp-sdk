// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURERISKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURERISKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSecureRiskListResponseBodyRiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainSecureRiskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureRiskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NoSslCount, noSslCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(RiskList, riskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureRiskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NoSslCount, noSslCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
    };
    DescribeDomainSecureRiskListResponseBody() = default ;
    DescribeDomainSecureRiskListResponseBody(const DescribeDomainSecureRiskListResponseBody &) = default ;
    DescribeDomainSecureRiskListResponseBody(DescribeDomainSecureRiskListResponseBody &&) = default ;
    DescribeDomainSecureRiskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureRiskListResponseBody() = default ;
    DescribeDomainSecureRiskListResponseBody& operator=(const DescribeDomainSecureRiskListResponseBody &) = default ;
    DescribeDomainSecureRiskListResponseBody& operator=(DescribeDomainSecureRiskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->noSslCount_ != nullptr
        && this->requestId_ != nullptr && this->riskCount_ != nullptr && this->riskList_ != nullptr; };
    // noSslCount Field Functions 
    bool hasNoSslCount() const { return this->noSslCount_ != nullptr;};
    void deleteNoSslCount() { this->noSslCount_ = nullptr;};
    inline int32_t noSslCount() const { DARABONBA_PTR_GET_DEFAULT(noSslCount_, 0) };
    inline DescribeDomainSecureRiskListResponseBody& setNoSslCount(int32_t noSslCount) { DARABONBA_PTR_SET_VALUE(noSslCount_, noSslCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecureRiskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int32_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
    inline DescribeDomainSecureRiskListResponseBody& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // riskList Field Functions 
    bool hasRiskList() const { return this->riskList_ != nullptr;};
    void deleteRiskList() { this->riskList_ = nullptr;};
    inline const vector<DescribeDomainSecureRiskListResponseBodyRiskList> & riskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<DescribeDomainSecureRiskListResponseBodyRiskList>) };
    inline vector<DescribeDomainSecureRiskListResponseBodyRiskList> riskList() { DARABONBA_PTR_GET(riskList_, vector<DescribeDomainSecureRiskListResponseBodyRiskList>) };
    inline DescribeDomainSecureRiskListResponseBody& setRiskList(const vector<DescribeDomainSecureRiskListResponseBodyRiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
    inline DescribeDomainSecureRiskListResponseBody& setRiskList(vector<DescribeDomainSecureRiskListResponseBodyRiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


  protected:
    // The number of the websites for which no certificates are installed.
    std::shared_ptr<int32_t> noSslCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of risks.
    std::shared_ptr<int32_t> riskCount_ = nullptr;
    // The risks.
    std::shared_ptr<vector<DescribeDomainSecureRiskListResponseBodyRiskList>> riskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
