// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODYMACHINE_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODYMACHINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAuthSummaryResponseBodyMachine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthSummaryResponseBodyMachine& obj) { 
      DARABONBA_PTR_TO_JSON(BindCoreCount, bindCoreCount_);
      DARABONBA_PTR_TO_JSON(BindEcsCount, bindEcsCount_);
      DARABONBA_PTR_TO_JSON(PostPaidBindCoreCount, postPaidBindCoreCount_);
      DARABONBA_PTR_TO_JSON(PostPaidBindEcsCount, postPaidBindEcsCount_);
      DARABONBA_PTR_TO_JSON(RiskCoreCount, riskCoreCount_);
      DARABONBA_PTR_TO_JSON(RiskEcsCount, riskEcsCount_);
      DARABONBA_PTR_TO_JSON(TotalCoreCount, totalCoreCount_);
      DARABONBA_PTR_TO_JSON(TotalEcsCount, totalEcsCount_);
      DARABONBA_PTR_TO_JSON(UnBindCoreCount, unBindCoreCount_);
      DARABONBA_PTR_TO_JSON(UnBindEcsCount, unBindEcsCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthSummaryResponseBodyMachine& obj) { 
      DARABONBA_PTR_FROM_JSON(BindCoreCount, bindCoreCount_);
      DARABONBA_PTR_FROM_JSON(BindEcsCount, bindEcsCount_);
      DARABONBA_PTR_FROM_JSON(PostPaidBindCoreCount, postPaidBindCoreCount_);
      DARABONBA_PTR_FROM_JSON(PostPaidBindEcsCount, postPaidBindEcsCount_);
      DARABONBA_PTR_FROM_JSON(RiskCoreCount, riskCoreCount_);
      DARABONBA_PTR_FROM_JSON(RiskEcsCount, riskEcsCount_);
      DARABONBA_PTR_FROM_JSON(TotalCoreCount, totalCoreCount_);
      DARABONBA_PTR_FROM_JSON(TotalEcsCount, totalEcsCount_);
      DARABONBA_PTR_FROM_JSON(UnBindCoreCount, unBindCoreCount_);
      DARABONBA_PTR_FROM_JSON(UnBindEcsCount, unBindEcsCount_);
    };
    GetAuthSummaryResponseBodyMachine() = default ;
    GetAuthSummaryResponseBodyMachine(const GetAuthSummaryResponseBodyMachine &) = default ;
    GetAuthSummaryResponseBodyMachine(GetAuthSummaryResponseBodyMachine &&) = default ;
    GetAuthSummaryResponseBodyMachine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthSummaryResponseBodyMachine() = default ;
    GetAuthSummaryResponseBodyMachine& operator=(const GetAuthSummaryResponseBodyMachine &) = default ;
    GetAuthSummaryResponseBodyMachine& operator=(GetAuthSummaryResponseBodyMachine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindCoreCount_ == nullptr
        && return this->bindEcsCount_ == nullptr && return this->postPaidBindCoreCount_ == nullptr && return this->postPaidBindEcsCount_ == nullptr && return this->riskCoreCount_ == nullptr && return this->riskEcsCount_ == nullptr
        && return this->totalCoreCount_ == nullptr && return this->totalEcsCount_ == nullptr && return this->unBindCoreCount_ == nullptr && return this->unBindEcsCount_ == nullptr; };
    // bindCoreCount Field Functions 
    bool hasBindCoreCount() const { return this->bindCoreCount_ != nullptr;};
    void deleteBindCoreCount() { this->bindCoreCount_ = nullptr;};
    inline int32_t bindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(bindCoreCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setBindCoreCount(int32_t bindCoreCount) { DARABONBA_PTR_SET_VALUE(bindCoreCount_, bindCoreCount) };


    // bindEcsCount Field Functions 
    bool hasBindEcsCount() const { return this->bindEcsCount_ != nullptr;};
    void deleteBindEcsCount() { this->bindEcsCount_ = nullptr;};
    inline int32_t bindEcsCount() const { DARABONBA_PTR_GET_DEFAULT(bindEcsCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setBindEcsCount(int32_t bindEcsCount) { DARABONBA_PTR_SET_VALUE(bindEcsCount_, bindEcsCount) };


    // postPaidBindCoreCount Field Functions 
    bool hasPostPaidBindCoreCount() const { return this->postPaidBindCoreCount_ != nullptr;};
    void deletePostPaidBindCoreCount() { this->postPaidBindCoreCount_ = nullptr;};
    inline int32_t postPaidBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(postPaidBindCoreCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setPostPaidBindCoreCount(int32_t postPaidBindCoreCount) { DARABONBA_PTR_SET_VALUE(postPaidBindCoreCount_, postPaidBindCoreCount) };


    // postPaidBindEcsCount Field Functions 
    bool hasPostPaidBindEcsCount() const { return this->postPaidBindEcsCount_ != nullptr;};
    void deletePostPaidBindEcsCount() { this->postPaidBindEcsCount_ = nullptr;};
    inline int32_t postPaidBindEcsCount() const { DARABONBA_PTR_GET_DEFAULT(postPaidBindEcsCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setPostPaidBindEcsCount(int32_t postPaidBindEcsCount) { DARABONBA_PTR_SET_VALUE(postPaidBindEcsCount_, postPaidBindEcsCount) };


    // riskCoreCount Field Functions 
    bool hasRiskCoreCount() const { return this->riskCoreCount_ != nullptr;};
    void deleteRiskCoreCount() { this->riskCoreCount_ = nullptr;};
    inline int32_t riskCoreCount() const { DARABONBA_PTR_GET_DEFAULT(riskCoreCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setRiskCoreCount(int32_t riskCoreCount) { DARABONBA_PTR_SET_VALUE(riskCoreCount_, riskCoreCount) };


    // riskEcsCount Field Functions 
    bool hasRiskEcsCount() const { return this->riskEcsCount_ != nullptr;};
    void deleteRiskEcsCount() { this->riskEcsCount_ = nullptr;};
    inline int32_t riskEcsCount() const { DARABONBA_PTR_GET_DEFAULT(riskEcsCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setRiskEcsCount(int32_t riskEcsCount) { DARABONBA_PTR_SET_VALUE(riskEcsCount_, riskEcsCount) };


    // totalCoreCount Field Functions 
    bool hasTotalCoreCount() const { return this->totalCoreCount_ != nullptr;};
    void deleteTotalCoreCount() { this->totalCoreCount_ = nullptr;};
    inline int32_t totalCoreCount() const { DARABONBA_PTR_GET_DEFAULT(totalCoreCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setTotalCoreCount(int32_t totalCoreCount) { DARABONBA_PTR_SET_VALUE(totalCoreCount_, totalCoreCount) };


    // totalEcsCount Field Functions 
    bool hasTotalEcsCount() const { return this->totalEcsCount_ != nullptr;};
    void deleteTotalEcsCount() { this->totalEcsCount_ = nullptr;};
    inline int32_t totalEcsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEcsCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setTotalEcsCount(int32_t totalEcsCount) { DARABONBA_PTR_SET_VALUE(totalEcsCount_, totalEcsCount) };


    // unBindCoreCount Field Functions 
    bool hasUnBindCoreCount() const { return this->unBindCoreCount_ != nullptr;};
    void deleteUnBindCoreCount() { this->unBindCoreCount_ = nullptr;};
    inline int32_t unBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(unBindCoreCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setUnBindCoreCount(int32_t unBindCoreCount) { DARABONBA_PTR_SET_VALUE(unBindCoreCount_, unBindCoreCount) };


    // unBindEcsCount Field Functions 
    bool hasUnBindEcsCount() const { return this->unBindEcsCount_ != nullptr;};
    void deleteUnBindEcsCount() { this->unBindEcsCount_ = nullptr;};
    inline int32_t unBindEcsCount() const { DARABONBA_PTR_GET_DEFAULT(unBindEcsCount_, 0) };
    inline GetAuthSummaryResponseBodyMachine& setUnBindEcsCount(int32_t unBindEcsCount) { DARABONBA_PTR_SET_VALUE(unBindEcsCount_, unBindEcsCount) };


  protected:
    // The number of cores of the assets that are bound to Security Center.
    std::shared_ptr<int32_t> bindCoreCount_ = nullptr;
    // The number of the assets that are bound to Security Center.
    std::shared_ptr<int32_t> bindEcsCount_ = nullptr;
    // Bind the number of cores for postpaid authorization assets.
    std::shared_ptr<int32_t> postPaidBindCoreCount_ = nullptr;
    // The number of assets bound to the postpaid authorization.
    std::shared_ptr<int32_t> postPaidBindEcsCount_ = nullptr;
    // The number of cores of the assets that are at risk.
    std::shared_ptr<int32_t> riskCoreCount_ = nullptr;
    // The number of the assets that are at risk.
    std::shared_ptr<int32_t> riskEcsCount_ = nullptr;
    // The total number of asset cores.
    std::shared_ptr<int32_t> totalCoreCount_ = nullptr;
    // The total number of assets.
    std::shared_ptr<int32_t> totalEcsCount_ = nullptr;
    // The number of cores of unbound assets.
    std::shared_ptr<int32_t> unBindCoreCount_ = nullptr;
    // The number of unbound assets.
    std::shared_ptr<int32_t> unBindEcsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
