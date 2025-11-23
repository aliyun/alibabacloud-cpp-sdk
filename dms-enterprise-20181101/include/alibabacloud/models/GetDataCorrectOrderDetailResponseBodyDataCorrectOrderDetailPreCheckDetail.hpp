// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILPRECHECKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILPRECHECKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail& obj) { 
      DARABONBA_PTR_TO_JSON(TaskCheckDO, taskCheckDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskCheckDO, taskCheckDO_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskCheckDO_ == nullptr; };
    // taskCheckDO Field Functions 
    bool hasTaskCheckDO() const { return this->taskCheckDO_ != nullptr;};
    void deleteTaskCheckDO() { this->taskCheckDO_ = nullptr;};
    inline const vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO> & taskCheckDO() const { DARABONBA_PTR_GET_CONST(taskCheckDO_, vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO>) };
    inline vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO> taskCheckDO() { DARABONBA_PTR_GET(taskCheckDO_, vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO>) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail& setTaskCheckDO(const vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO> & taskCheckDO) { DARABONBA_PTR_SET_VALUE(taskCheckDO_, taskCheckDO) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail& setTaskCheckDO(vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO> && taskCheckDO) { DARABONBA_PTR_SET_RVALUE(taskCheckDO_, taskCheckDO) };


  protected:
    std::shared_ptr<vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO>> taskCheckDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
