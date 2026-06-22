// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILEPROTECTBINDMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILEPROTECTBINDMACHINEREQUEST_HPP_
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
  class AddFileProtectBindMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFileProtectBindMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertUuids, alertUuids_);
      DARABONBA_PTR_TO_JSON(BlockUuids, blockUuids_);
      DARABONBA_PTR_TO_JSON(NoneUuids, noneUuids_);
    };
    friend void from_json(const Darabonba::Json& j, AddFileProtectBindMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertUuids, alertUuids_);
      DARABONBA_PTR_FROM_JSON(BlockUuids, blockUuids_);
      DARABONBA_PTR_FROM_JSON(NoneUuids, noneUuids_);
    };
    AddFileProtectBindMachineRequest() = default ;
    AddFileProtectBindMachineRequest(const AddFileProtectBindMachineRequest &) = default ;
    AddFileProtectBindMachineRequest(AddFileProtectBindMachineRequest &&) = default ;
    AddFileProtectBindMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFileProtectBindMachineRequest() = default ;
    AddFileProtectBindMachineRequest& operator=(const AddFileProtectBindMachineRequest &) = default ;
    AddFileProtectBindMachineRequest& operator=(AddFileProtectBindMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertUuids_ == nullptr
        && this->blockUuids_ == nullptr && this->noneUuids_ == nullptr; };
    // alertUuids Field Functions 
    bool hasAlertUuids() const { return this->alertUuids_ != nullptr;};
    void deleteAlertUuids() { this->alertUuids_ = nullptr;};
    inline const vector<string> & getAlertUuids() const { DARABONBA_PTR_GET_CONST(alertUuids_, vector<string>) };
    inline vector<string> getAlertUuids() { DARABONBA_PTR_GET(alertUuids_, vector<string>) };
    inline AddFileProtectBindMachineRequest& setAlertUuids(const vector<string> & alertUuids) { DARABONBA_PTR_SET_VALUE(alertUuids_, alertUuids) };
    inline AddFileProtectBindMachineRequest& setAlertUuids(vector<string> && alertUuids) { DARABONBA_PTR_SET_RVALUE(alertUuids_, alertUuids) };


    // blockUuids Field Functions 
    bool hasBlockUuids() const { return this->blockUuids_ != nullptr;};
    void deleteBlockUuids() { this->blockUuids_ = nullptr;};
    inline const vector<string> & getBlockUuids() const { DARABONBA_PTR_GET_CONST(blockUuids_, vector<string>) };
    inline vector<string> getBlockUuids() { DARABONBA_PTR_GET(blockUuids_, vector<string>) };
    inline AddFileProtectBindMachineRequest& setBlockUuids(const vector<string> & blockUuids) { DARABONBA_PTR_SET_VALUE(blockUuids_, blockUuids) };
    inline AddFileProtectBindMachineRequest& setBlockUuids(vector<string> && blockUuids) { DARABONBA_PTR_SET_RVALUE(blockUuids_, blockUuids) };


    // noneUuids Field Functions 
    bool hasNoneUuids() const { return this->noneUuids_ != nullptr;};
    void deleteNoneUuids() { this->noneUuids_ = nullptr;};
    inline const vector<string> & getNoneUuids() const { DARABONBA_PTR_GET_CONST(noneUuids_, vector<string>) };
    inline vector<string> getNoneUuids() { DARABONBA_PTR_GET(noneUuids_, vector<string>) };
    inline AddFileProtectBindMachineRequest& setNoneUuids(const vector<string> & noneUuids) { DARABONBA_PTR_SET_VALUE(noneUuids_, noneUuids) };
    inline AddFileProtectBindMachineRequest& setNoneUuids(vector<string> && noneUuids) { DARABONBA_PTR_SET_RVALUE(noneUuids_, noneUuids) };


  protected:
    // The list of servers for which the alert protection level is enabled.
    shared_ptr<vector<string>> alertUuids_ {};
    // The list of servers for which tamper-proofing is enabled.
    shared_ptr<vector<string>> blockUuids_ {};
    // The list of servers for which file protection is disabled.
    shared_ptr<vector<string>> noneUuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
