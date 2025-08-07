// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODYRENEWALRESULT_HPP_
#define ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODYRENEWALRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class RenewServiceInstanceResourcesResponseBodyRenewalResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewServiceInstanceResourcesResponseBodyRenewalResult& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, RenewServiceInstanceResourcesResponseBodyRenewalResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    RenewServiceInstanceResourcesResponseBodyRenewalResult() = default ;
    RenewServiceInstanceResourcesResponseBodyRenewalResult(const RenewServiceInstanceResourcesResponseBodyRenewalResult &) = default ;
    RenewServiceInstanceResourcesResponseBodyRenewalResult(RenewServiceInstanceResourcesResponseBodyRenewalResult &&) = default ;
    RenewServiceInstanceResourcesResponseBodyRenewalResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewServiceInstanceResourcesResponseBodyRenewalResult() = default ;
    RenewServiceInstanceResourcesResponseBodyRenewalResult& operator=(const RenewServiceInstanceResourcesResponseBodyRenewalResult &) = default ;
    RenewServiceInstanceResourcesResponseBodyRenewalResult& operator=(RenewServiceInstanceResourcesResponseBodyRenewalResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failed_ != nullptr
        && this->succeeded_ != nullptr && this->totalCount_ != nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int32_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
    inline RenewServiceInstanceResourcesResponseBodyRenewalResult& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // succeeded Field Functions 
    bool hasSucceeded() const { return this->succeeded_ != nullptr;};
    void deleteSucceeded() { this->succeeded_ = nullptr;};
    inline int32_t succeeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0) };
    inline RenewServiceInstanceResourcesResponseBodyRenewalResult& setSucceeded(int32_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline RenewServiceInstanceResourcesResponseBodyRenewalResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of failed renewals.
    std::shared_ptr<int32_t> failed_ = nullptr;
    // Number of successfully renewed resources.
    std::shared_ptr<int32_t> succeeded_ = nullptr;
    // Number of renewed resources.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
