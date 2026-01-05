// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPENDINGMAINTENANCEACTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPENDINGMAINTENANCEACTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyPendingMaintenanceActionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPendingMaintenanceActionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPendingMaintenanceActionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyPendingMaintenanceActionResponseBody() = default ;
    ModifyPendingMaintenanceActionResponseBody(const ModifyPendingMaintenanceActionResponseBody &) = default ;
    ModifyPendingMaintenanceActionResponseBody(ModifyPendingMaintenanceActionResponseBody &&) = default ;
    ModifyPendingMaintenanceActionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPendingMaintenanceActionResponseBody() = default ;
    ModifyPendingMaintenanceActionResponseBody& operator=(const ModifyPendingMaintenanceActionResponseBody &) = default ;
    ModifyPendingMaintenanceActionResponseBody& operator=(ModifyPendingMaintenanceActionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->requestId_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ModifyPendingMaintenanceActionResponseBody& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyPendingMaintenanceActionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the task.
    shared_ptr<string> ids_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
