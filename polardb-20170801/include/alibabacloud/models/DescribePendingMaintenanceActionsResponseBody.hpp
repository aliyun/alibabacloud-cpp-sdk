// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePendingMaintenanceActionsResponseBodyTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePendingMaintenanceActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePendingMaintenanceActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePendingMaintenanceActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    DescribePendingMaintenanceActionsResponseBody() = default ;
    DescribePendingMaintenanceActionsResponseBody(const DescribePendingMaintenanceActionsResponseBody &) = default ;
    DescribePendingMaintenanceActionsResponseBody(DescribePendingMaintenanceActionsResponseBody &&) = default ;
    DescribePendingMaintenanceActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePendingMaintenanceActionsResponseBody() = default ;
    DescribePendingMaintenanceActionsResponseBody& operator=(const DescribePendingMaintenanceActionsResponseBody &) = default ;
    DescribePendingMaintenanceActionsResponseBody& operator=(DescribePendingMaintenanceActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->typeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePendingMaintenanceActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<DescribePendingMaintenanceActionsResponseBodyTypeList> & typeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<DescribePendingMaintenanceActionsResponseBodyTypeList>) };
    inline vector<DescribePendingMaintenanceActionsResponseBodyTypeList> typeList() { DARABONBA_PTR_GET(typeList_, vector<DescribePendingMaintenanceActionsResponseBodyTypeList>) };
    inline DescribePendingMaintenanceActionsResponseBody& setTypeList(const vector<DescribePendingMaintenanceActionsResponseBodyTypeList> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline DescribePendingMaintenanceActionsResponseBody& setTypeList(vector<DescribePendingMaintenanceActionsResponseBodyTypeList> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of pending events.
    std::shared_ptr<vector<DescribePendingMaintenanceActionsResponseBodyTypeList>> typeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
