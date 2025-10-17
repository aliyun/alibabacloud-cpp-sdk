// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODYAUTOPROVISIONINGGROUPHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODYAUTOPROVISIONINGGROUPHISTORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupHistory, autoProvisioningGroupHistory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupHistory, autoProvisioningGroupHistory_);
    };
    DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories(const DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories(DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories &&) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories& operator=(const DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories& operator=(DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoProvisioningGroupHistory_ == nullptr; };
    // autoProvisioningGroupHistory Field Functions 
    bool hasAutoProvisioningGroupHistory() const { return this->autoProvisioningGroupHistory_ != nullptr;};
    void deleteAutoProvisioningGroupHistory() { this->autoProvisioningGroupHistory_ = nullptr;};
    inline const vector<Models::DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory> & autoProvisioningGroupHistory() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupHistory_, vector<Models::DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory>) };
    inline vector<Models::DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory> autoProvisioningGroupHistory() { DARABONBA_PTR_GET(autoProvisioningGroupHistory_, vector<Models::DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory>) };
    inline DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories& setAutoProvisioningGroupHistory(const vector<Models::DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory> & autoProvisioningGroupHistory) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupHistory_, autoProvisioningGroupHistory) };
    inline DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories& setAutoProvisioningGroupHistory(vector<Models::DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory> && autoProvisioningGroupHistory) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupHistory_, autoProvisioningGroupHistory) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory>> autoProvisioningGroupHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
