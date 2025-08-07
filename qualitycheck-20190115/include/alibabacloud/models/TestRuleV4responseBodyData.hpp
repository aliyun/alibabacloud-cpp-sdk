// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TestRuleV4ResponseBodyDataHitRuleReviewInfoList.hpp>
#include <alibabacloud/models/TestRuleV4ResponseBodyDataHitTaskFlowList.hpp>
#include <alibabacloud/models/TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
      DARABONBA_PTR_TO_JSON(HitTaskFlowList, hitTaskFlowList_);
      DARABONBA_PTR_TO_JSON(UnhitRuleReviewInfoList, unhitRuleReviewInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
      DARABONBA_PTR_FROM_JSON(HitTaskFlowList, hitTaskFlowList_);
      DARABONBA_PTR_FROM_JSON(UnhitRuleReviewInfoList, unhitRuleReviewInfoList_);
    };
    TestRuleV4ResponseBodyData() = default ;
    TestRuleV4ResponseBodyData(const TestRuleV4ResponseBodyData &) = default ;
    TestRuleV4ResponseBodyData(TestRuleV4ResponseBodyData &&) = default ;
    TestRuleV4ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyData() = default ;
    TestRuleV4ResponseBodyData& operator=(const TestRuleV4ResponseBodyData &) = default ;
    TestRuleV4ResponseBodyData& operator=(TestRuleV4ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitRuleReviewInfoList_ != nullptr
        && this->hitTaskFlowList_ != nullptr && this->unhitRuleReviewInfoList_ != nullptr; };
    // hitRuleReviewInfoList Field Functions 
    bool hasHitRuleReviewInfoList() const { return this->hitRuleReviewInfoList_ != nullptr;};
    void deleteHitRuleReviewInfoList() { this->hitRuleReviewInfoList_ = nullptr;};
    inline const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoList> & hitRuleReviewInfoList() const { DARABONBA_PTR_GET_CONST(hitRuleReviewInfoList_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoList>) };
    inline vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoList> hitRuleReviewInfoList() { DARABONBA_PTR_GET(hitRuleReviewInfoList_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoList>) };
    inline TestRuleV4ResponseBodyData& setHitRuleReviewInfoList(const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoList> & hitRuleReviewInfoList) { DARABONBA_PTR_SET_VALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };
    inline TestRuleV4ResponseBodyData& setHitRuleReviewInfoList(vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoList> && hitRuleReviewInfoList) { DARABONBA_PTR_SET_RVALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };


    // hitTaskFlowList Field Functions 
    bool hasHitTaskFlowList() const { return this->hitTaskFlowList_ != nullptr;};
    void deleteHitTaskFlowList() { this->hitTaskFlowList_ = nullptr;};
    inline const vector<Models::TestRuleV4ResponseBodyDataHitTaskFlowList> & hitTaskFlowList() const { DARABONBA_PTR_GET_CONST(hitTaskFlowList_, vector<Models::TestRuleV4ResponseBodyDataHitTaskFlowList>) };
    inline vector<Models::TestRuleV4ResponseBodyDataHitTaskFlowList> hitTaskFlowList() { DARABONBA_PTR_GET(hitTaskFlowList_, vector<Models::TestRuleV4ResponseBodyDataHitTaskFlowList>) };
    inline TestRuleV4ResponseBodyData& setHitTaskFlowList(const vector<Models::TestRuleV4ResponseBodyDataHitTaskFlowList> & hitTaskFlowList) { DARABONBA_PTR_SET_VALUE(hitTaskFlowList_, hitTaskFlowList) };
    inline TestRuleV4ResponseBodyData& setHitTaskFlowList(vector<Models::TestRuleV4ResponseBodyDataHitTaskFlowList> && hitTaskFlowList) { DARABONBA_PTR_SET_RVALUE(hitTaskFlowList_, hitTaskFlowList) };


    // unhitRuleReviewInfoList Field Functions 
    bool hasUnhitRuleReviewInfoList() const { return this->unhitRuleReviewInfoList_ != nullptr;};
    void deleteUnhitRuleReviewInfoList() { this->unhitRuleReviewInfoList_ = nullptr;};
    inline const vector<Models::TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList> & unhitRuleReviewInfoList() const { DARABONBA_PTR_GET_CONST(unhitRuleReviewInfoList_, vector<Models::TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList>) };
    inline vector<Models::TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList> unhitRuleReviewInfoList() { DARABONBA_PTR_GET(unhitRuleReviewInfoList_, vector<Models::TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList>) };
    inline TestRuleV4ResponseBodyData& setUnhitRuleReviewInfoList(const vector<Models::TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList> & unhitRuleReviewInfoList) { DARABONBA_PTR_SET_VALUE(unhitRuleReviewInfoList_, unhitRuleReviewInfoList) };
    inline TestRuleV4ResponseBodyData& setUnhitRuleReviewInfoList(vector<Models::TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList> && unhitRuleReviewInfoList) { DARABONBA_PTR_SET_RVALUE(unhitRuleReviewInfoList_, unhitRuleReviewInfoList) };


  protected:
    std::shared_ptr<vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoList>> hitRuleReviewInfoList_ = nullptr;
    std::shared_ptr<vector<Models::TestRuleV4ResponseBodyDataHitTaskFlowList>> hitTaskFlowList_ = nullptr;
    std::shared_ptr<vector<Models::TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList>> unhitRuleReviewInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
