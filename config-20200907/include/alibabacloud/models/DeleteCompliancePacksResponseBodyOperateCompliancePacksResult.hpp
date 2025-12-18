// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMPLIANCEPACKSRESPONSEBODYOPERATECOMPLIANCEPACKSRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMPLIANCEPACKSRESPONSEBODYOPERATECOMPLIANCEPACKSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteCompliancePacksResponseBodyOperateCompliancePacksResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCompliancePacksResponseBodyOperateCompliancePacksResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCompliancePacks, operateCompliancePacks_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCompliancePacksResponseBodyOperateCompliancePacksResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCompliancePacks, operateCompliancePacks_);
    };
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResult() = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResult(const DeleteCompliancePacksResponseBodyOperateCompliancePacksResult &) = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResult(DeleteCompliancePacksResponseBodyOperateCompliancePacksResult &&) = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCompliancePacksResponseBodyOperateCompliancePacksResult() = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResult& operator=(const DeleteCompliancePacksResponseBodyOperateCompliancePacksResult &) = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResult& operator=(DeleteCompliancePacksResponseBodyOperateCompliancePacksResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateCompliancePacks_ == nullptr; };
    // operateCompliancePacks Field Functions 
    bool hasOperateCompliancePacks() const { return this->operateCompliancePacks_ != nullptr;};
    void deleteOperateCompliancePacks() { this->operateCompliancePacks_ = nullptr;};
    inline const vector<Models::DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> & operateCompliancePacks() const { DARABONBA_PTR_GET_CONST(operateCompliancePacks_, vector<Models::DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>) };
    inline vector<Models::DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> operateCompliancePacks() { DARABONBA_PTR_GET(operateCompliancePacks_, vector<Models::DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>) };
    inline DeleteCompliancePacksResponseBodyOperateCompliancePacksResult& setOperateCompliancePacks(const vector<Models::DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> & operateCompliancePacks) { DARABONBA_PTR_SET_VALUE(operateCompliancePacks_, operateCompliancePacks) };
    inline DeleteCompliancePacksResponseBodyOperateCompliancePacksResult& setOperateCompliancePacks(vector<Models::DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> && operateCompliancePacks) { DARABONBA_PTR_SET_RVALUE(operateCompliancePacks_, operateCompliancePacks) };


  protected:
    // An array that contains compliance packages that are deleted.
    std::shared_ptr<vector<Models::DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>> operateCompliancePacks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
