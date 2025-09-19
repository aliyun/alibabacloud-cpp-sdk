// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOPASTRATEGYNEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOPASTRATEGYNEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteOpaStrategyNewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOpaStrategyNewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOpaStrategyNewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
    };
    DeleteOpaStrategyNewRequest() = default ;
    DeleteOpaStrategyNewRequest(const DeleteOpaStrategyNewRequest &) = default ;
    DeleteOpaStrategyNewRequest(DeleteOpaStrategyNewRequest &&) = default ;
    DeleteOpaStrategyNewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOpaStrategyNewRequest() = default ;
    DeleteOpaStrategyNewRequest& operator=(const DeleteOpaStrategyNewRequest &) = default ;
    DeleteOpaStrategyNewRequest& operator=(DeleteOpaStrategyNewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->strategyIds_ != nullptr; };
    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline const vector<int64_t> & strategyIds() const { DARABONBA_PTR_GET_CONST(strategyIds_, vector<int64_t>) };
    inline vector<int64_t> strategyIds() { DARABONBA_PTR_GET(strategyIds_, vector<int64_t>) };
    inline DeleteOpaStrategyNewRequest& setStrategyIds(const vector<int64_t> & strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };
    inline DeleteOpaStrategyNewRequest& setStrategyIds(vector<int64_t> && strategyIds) { DARABONBA_PTR_SET_RVALUE(strategyIds_, strategyIds) };


  protected:
    // The IDs of rules.
    std::shared_ptr<vector<int64_t>> strategyIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
