// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATETARGETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATETARGETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class OperateTargetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateTargetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchIdList, switchIdList_);
    };
    friend void from_json(const Darabonba::Json& j, OperateTargetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchIdList, switchIdList_);
    };
    OperateTargetConfigRequest() = default ;
    OperateTargetConfigRequest(const OperateTargetConfigRequest &) = default ;
    OperateTargetConfigRequest(OperateTargetConfigRequest &&) = default ;
    OperateTargetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateTargetConfigRequest() = default ;
    OperateTargetConfigRequest& operator=(const OperateTargetConfigRequest &) = default ;
    OperateTargetConfigRequest& operator=(OperateTargetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->selectionKey_ == nullptr
        && this->status_ == nullptr && this->switchIdList_ == nullptr; };
    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string getSelectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline OperateTargetConfigRequest& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OperateTargetConfigRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchIdList Field Functions 
    bool hasSwitchIdList() const { return this->switchIdList_ != nullptr;};
    void deleteSwitchIdList() { this->switchIdList_ = nullptr;};
    inline const vector<string> & getSwitchIdList() const { DARABONBA_PTR_GET_CONST(switchIdList_, vector<string>) };
    inline vector<string> getSwitchIdList() { DARABONBA_PTR_GET(switchIdList_, vector<string>) };
    inline OperateTargetConfigRequest& setSwitchIdList(const vector<string> & switchIdList) { DARABONBA_PTR_SET_VALUE(switchIdList_, switchIdList) };
    inline OperateTargetConfigRequest& setSwitchIdList(vector<string> && switchIdList) { DARABONBA_PTR_SET_RVALUE(switchIdList_, switchIdList) };


  protected:
    // The key of the rule switch configuration associated with the policy. It must be the same as the key used in the ListSystemConfigRules query.
    // 
    // This parameter is required.
    shared_ptr<string> selectionKey_ {};
    // The status of the rule switch. Valid values:
    // - **add**: Enabled.
    // - **del**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
    // The list of system rule switch identifiers whose status is to be updated. The elements are obtained from the SwitchId returned by ListSystemConfigRules. A maximum of 100 items are supported. The backend updates the items one by one based on the list. The request is rejected if the list is not provided.
    shared_ptr<vector<string>> switchIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
