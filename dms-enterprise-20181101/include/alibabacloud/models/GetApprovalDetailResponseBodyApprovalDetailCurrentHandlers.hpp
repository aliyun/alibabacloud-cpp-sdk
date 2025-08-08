// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILCURRENTHANDLERS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILCURRENTHANDLERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentHandler, currentHandler_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentHandler, currentHandler_);
    };
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers() = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers(const GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers(GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers &&) = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers() = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers& operator=(const GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers& operator=(GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentHandler_ != nullptr; };
    // currentHandler Field Functions 
    bool hasCurrentHandler() const { return this->currentHandler_ != nullptr;};
    void deleteCurrentHandler() { this->currentHandler_ = nullptr;};
    inline const vector<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler> & currentHandler() const { DARABONBA_PTR_GET_CONST(currentHandler_, vector<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler>) };
    inline vector<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler> currentHandler() { DARABONBA_PTR_GET(currentHandler_, vector<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler>) };
    inline GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers& setCurrentHandler(const vector<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler> & currentHandler) { DARABONBA_PTR_SET_VALUE(currentHandler_, currentHandler) };
    inline GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers& setCurrentHandler(vector<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler> && currentHandler) { DARABONBA_PTR_SET_RVALUE(currentHandler_, currentHandler) };


  protected:
    std::shared_ptr<vector<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler>> currentHandler_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
