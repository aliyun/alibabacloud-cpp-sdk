// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCINVOKEREVIEW_HPP_
#define ALIBABACLOUD_MODELS_PBCINVOKEREVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcInvokeReview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcInvokeReview& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(invokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(invokePbcId, invokePbcId_);
      DARABONBA_PTR_TO_JSON(invokePbcName, invokePbcName_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewer, reviewer_);
      DARABONBA_PTR_TO_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, PbcInvokeReview& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(invokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(invokePbcId, invokePbcId_);
      DARABONBA_PTR_FROM_JSON(invokePbcName, invokePbcName_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewer, reviewer_);
      DARABONBA_PTR_FROM_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    PbcInvokeReview() = default ;
    PbcInvokeReview(const PbcInvokeReview &) = default ;
    PbcInvokeReview(PbcInvokeReview &&) = default ;
    PbcInvokeReview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcInvokeReview() = default ;
    PbcInvokeReview& operator=(const PbcInvokeReview &) = default ;
    PbcInvokeReview& operator=(PbcInvokeReview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->invokeId_ == nullptr && this->invokePbcId_ == nullptr && this->invokePbcName_ == nullptr
        && this->pbcId_ == nullptr && this->pbcName_ == nullptr && this->requestId_ == nullptr && this->reviewer_ == nullptr && this->reviewerId_ == nullptr
        && this->status_ == nullptr && this->usage_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline PbcInvokeReview& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PbcInvokeReview& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcInvokeReview& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline int64_t getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, 0L) };
    inline PbcInvokeReview& setInvokeId(int64_t invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokePbcId Field Functions 
    bool hasInvokePbcId() const { return this->invokePbcId_ != nullptr;};
    void deleteInvokePbcId() { this->invokePbcId_ = nullptr;};
    inline int64_t getInvokePbcId() const { DARABONBA_PTR_GET_DEFAULT(invokePbcId_, 0L) };
    inline PbcInvokeReview& setInvokePbcId(int64_t invokePbcId) { DARABONBA_PTR_SET_VALUE(invokePbcId_, invokePbcId) };


    // invokePbcName Field Functions 
    bool hasInvokePbcName() const { return this->invokePbcName_ != nullptr;};
    void deleteInvokePbcName() { this->invokePbcName_ = nullptr;};
    inline string getInvokePbcName() const { DARABONBA_PTR_GET_DEFAULT(invokePbcName_, "") };
    inline PbcInvokeReview& setInvokePbcName(string invokePbcName) { DARABONBA_PTR_SET_VALUE(invokePbcName_, invokePbcName) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PbcInvokeReview& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline PbcInvokeReview& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcInvokeReview& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline PbcInvokeReview& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


    // reviewerId Field Functions 
    bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
    void deleteReviewerId() { this->reviewerId_ = nullptr;};
    inline string getReviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, "") };
    inline PbcInvokeReview& setReviewerId(string reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PbcInvokeReview& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline PbcInvokeReview& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<string> applicant_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> invokeId_ {};
    shared_ptr<int64_t> invokePbcId_ {};
    shared_ptr<string> invokePbcName_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> pbcName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> reviewer_ {};
    shared_ptr<string> reviewerId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
