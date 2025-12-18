// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSRESPONSEBODYOPERATECOMPLIANCEPACKSRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSRESPONSEBODYOPERATECOMPLIANCEPACKSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCompliancePacks, operateCompliancePacks_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCompliancePacks, operateCompliancePacks_);
    };
    DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult() = default ;
    DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult(const DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult &) = default ;
    DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult(DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult &&) = default ;
    DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult() = default ;
    DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult& operator=(const DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult &) = default ;
    DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult& operator=(DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateCompliancePacks_ == nullptr; };
    // operateCompliancePacks Field Functions 
    bool hasOperateCompliancePacks() const { return this->operateCompliancePacks_ != nullptr;};
    void deleteOperateCompliancePacks() { this->operateCompliancePacks_ = nullptr;};
    inline const vector<Models::DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> & operateCompliancePacks() const { DARABONBA_PTR_GET_CONST(operateCompliancePacks_, vector<Models::DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>) };
    inline vector<Models::DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> operateCompliancePacks() { DARABONBA_PTR_GET(operateCompliancePacks_, vector<Models::DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>) };
    inline DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult& setOperateCompliancePacks(const vector<Models::DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> & operateCompliancePacks) { DARABONBA_PTR_SET_VALUE(operateCompliancePacks_, operateCompliancePacks) };
    inline DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult& setOperateCompliancePacks(vector<Models::DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> && operateCompliancePacks) { DARABONBA_PTR_SET_RVALUE(operateCompliancePacks_, operateCompliancePacks) };


  protected:
    // An array that contains the deleted compliance packages.
    std::shared_ptr<vector<Models::DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>> operateCompliancePacks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
