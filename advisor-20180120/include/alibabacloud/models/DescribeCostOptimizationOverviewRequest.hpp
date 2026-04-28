// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTOPTIMIZATIONOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTOPTIMIZATIONOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeCostOptimizationOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostOptimizationOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_TO_JSON(AssumeAliyunIdList, assumeAliyunIdList_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostOptimizationOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_FROM_JSON(AssumeAliyunIdList, assumeAliyunIdList_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeCostOptimizationOverviewRequest() = default ;
    DescribeCostOptimizationOverviewRequest(const DescribeCostOptimizationOverviewRequest &) = default ;
    DescribeCostOptimizationOverviewRequest(DescribeCostOptimizationOverviewRequest &&) = default ;
    DescribeCostOptimizationOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostOptimizationOverviewRequest() = default ;
    DescribeCostOptimizationOverviewRequest& operator=(const DescribeCostOptimizationOverviewRequest &) = default ;
    DescribeCostOptimizationOverviewRequest& operator=(DescribeCostOptimizationOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeAliyunId_ == nullptr
        && this->assumeAliyunIdList_ == nullptr && this->checkPlanId_ == nullptr && this->token_ == nullptr; };
    // assumeAliyunId Field Functions 
    bool hasAssumeAliyunId() const { return this->assumeAliyunId_ != nullptr;};
    void deleteAssumeAliyunId() { this->assumeAliyunId_ = nullptr;};
    inline int64_t getAssumeAliyunId() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunId_, 0L) };
    inline DescribeCostOptimizationOverviewRequest& setAssumeAliyunId(int64_t assumeAliyunId) { DARABONBA_PTR_SET_VALUE(assumeAliyunId_, assumeAliyunId) };


    // assumeAliyunIdList Field Functions 
    bool hasAssumeAliyunIdList() const { return this->assumeAliyunIdList_ != nullptr;};
    void deleteAssumeAliyunIdList() { this->assumeAliyunIdList_ = nullptr;};
    inline const vector<int64_t> & getAssumeAliyunIdList() const { DARABONBA_PTR_GET_CONST(assumeAliyunIdList_, vector<int64_t>) };
    inline vector<int64_t> getAssumeAliyunIdList() { DARABONBA_PTR_GET(assumeAliyunIdList_, vector<int64_t>) };
    inline DescribeCostOptimizationOverviewRequest& setAssumeAliyunIdList(const vector<int64_t> & assumeAliyunIdList) { DARABONBA_PTR_SET_VALUE(assumeAliyunIdList_, assumeAliyunIdList) };
    inline DescribeCostOptimizationOverviewRequest& setAssumeAliyunIdList(vector<int64_t> && assumeAliyunIdList) { DARABONBA_PTR_SET_RVALUE(assumeAliyunIdList_, assumeAliyunIdList) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline DescribeCostOptimizationOverviewRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeCostOptimizationOverviewRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<int64_t> assumeAliyunId_ {};
    shared_ptr<vector<int64_t>> assumeAliyunIdList_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
