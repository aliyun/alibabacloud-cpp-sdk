// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetInstanceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReissueCount, autoReissueCount_);
      DARABONBA_PTR_TO_JSON(CertificateCount, certificateCount_);
      DARABONBA_PTR_TO_JSON(InactiveCount, inactiveCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WillExpireCount, willExpireCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReissueCount, autoReissueCount_);
      DARABONBA_PTR_FROM_JSON(CertificateCount, certificateCount_);
      DARABONBA_PTR_FROM_JSON(InactiveCount, inactiveCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WillExpireCount, willExpireCount_);
    };
    GetInstanceSummaryResponseBody() = default ;
    GetInstanceSummaryResponseBody(const GetInstanceSummaryResponseBody &) = default ;
    GetInstanceSummaryResponseBody(GetInstanceSummaryResponseBody &&) = default ;
    GetInstanceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSummaryResponseBody() = default ;
    GetInstanceSummaryResponseBody& operator=(const GetInstanceSummaryResponseBody &) = default ;
    GetInstanceSummaryResponseBody& operator=(GetInstanceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoReissueCount_ == nullptr
        && this->certificateCount_ == nullptr && this->inactiveCount_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->willExpireCount_ == nullptr; };
    // autoReissueCount Field Functions 
    bool hasAutoReissueCount() const { return this->autoReissueCount_ != nullptr;};
    void deleteAutoReissueCount() { this->autoReissueCount_ = nullptr;};
    inline int32_t getAutoReissueCount() const { DARABONBA_PTR_GET_DEFAULT(autoReissueCount_, 0) };
    inline GetInstanceSummaryResponseBody& setAutoReissueCount(int32_t autoReissueCount) { DARABONBA_PTR_SET_VALUE(autoReissueCount_, autoReissueCount) };


    // certificateCount Field Functions 
    bool hasCertificateCount() const { return this->certificateCount_ != nullptr;};
    void deleteCertificateCount() { this->certificateCount_ = nullptr;};
    inline int32_t getCertificateCount() const { DARABONBA_PTR_GET_DEFAULT(certificateCount_, 0) };
    inline GetInstanceSummaryResponseBody& setCertificateCount(int32_t certificateCount) { DARABONBA_PTR_SET_VALUE(certificateCount_, certificateCount) };


    // inactiveCount Field Functions 
    bool hasInactiveCount() const { return this->inactiveCount_ != nullptr;};
    void deleteInactiveCount() { this->inactiveCount_ = nullptr;};
    inline int32_t getInactiveCount() const { DARABONBA_PTR_GET_DEFAULT(inactiveCount_, 0) };
    inline GetInstanceSummaryResponseBody& setInactiveCount(int32_t inactiveCount) { DARABONBA_PTR_SET_VALUE(inactiveCount_, inactiveCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetInstanceSummaryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // willExpireCount Field Functions 
    bool hasWillExpireCount() const { return this->willExpireCount_ != nullptr;};
    void deleteWillExpireCount() { this->willExpireCount_ = nullptr;};
    inline int32_t getWillExpireCount() const { DARABONBA_PTR_GET_DEFAULT(willExpireCount_, 0) };
    inline GetInstanceSummaryResponseBody& setWillExpireCount(int32_t willExpireCount) { DARABONBA_PTR_SET_VALUE(willExpireCount_, willExpireCount) };


  protected:
    shared_ptr<int32_t> autoReissueCount_ {};
    shared_ptr<int32_t> certificateCount_ {};
    shared_ptr<int32_t> inactiveCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> willExpireCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
