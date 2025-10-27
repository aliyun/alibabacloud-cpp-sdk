// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaStrategyDetailNewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyDetailNewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyDetailNewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    GetOpaStrategyDetailNewRequest() = default ;
    GetOpaStrategyDetailNewRequest(const GetOpaStrategyDetailNewRequest &) = default ;
    GetOpaStrategyDetailNewRequest(GetOpaStrategyDetailNewRequest &&) = default ;
    GetOpaStrategyDetailNewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyDetailNewRequest() = default ;
    GetOpaStrategyDetailNewRequest& operator=(const GetOpaStrategyDetailNewRequest &) = default ;
    GetOpaStrategyDetailNewRequest& operator=(GetOpaStrategyDetailNewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyId_ == nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline GetOpaStrategyDetailNewRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The rule ID.
    // 
    // >  You can call the [ListOpaClusterStrategyNew](https://help.aliyun.com/document_detail/2623574.html) operation to query the rule ID.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
