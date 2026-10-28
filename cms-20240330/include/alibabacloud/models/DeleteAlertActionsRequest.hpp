// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTACTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTACTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertActionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertActionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertActionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
    };
    DeleteAlertActionsRequest() = default ;
    DeleteAlertActionsRequest(const DeleteAlertActionsRequest &) = default ;
    DeleteAlertActionsRequest(DeleteAlertActionsRequest &&) = default ;
    DeleteAlertActionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertActionsRequest() = default ;
    DeleteAlertActionsRequest& operator=(const DeleteAlertActionsRequest &) = default ;
    DeleteAlertActionsRequest& operator=(DeleteAlertActionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionIds_ == nullptr; };
    // alertActionIds Field Functions 
    bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
    void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
    inline const vector<string> & getAlertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
    inline vector<string> getAlertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
    inline DeleteAlertActionsRequest& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
    inline DeleteAlertActionsRequest& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


  protected:
    // The unique identifiers of the alert action integrations to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> alertActionIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
