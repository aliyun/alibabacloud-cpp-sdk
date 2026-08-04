// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGSERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGSERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class UpdateAgServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateAgServiceStatusRequest() = default ;
    UpdateAgServiceStatusRequest(const UpdateAgServiceStatusRequest &) = default ;
    UpdateAgServiceStatusRequest(UpdateAgServiceStatusRequest &&) = default ;
    UpdateAgServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgServiceStatusRequest() = default ;
    UpdateAgServiceStatusRequest& operator=(const UpdateAgServiceStatusRequest &) = default ;
    UpdateAgServiceStatusRequest& operator=(UpdateAgServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agAccountType_ == nullptr
        && this->mpk_ == nullptr && this->status_ == nullptr; };
    // agAccountType Field Functions 
    bool hasAgAccountType() const { return this->agAccountType_ != nullptr;};
    void deleteAgAccountType() { this->agAccountType_ = nullptr;};
    inline string getAgAccountType() const { DARABONBA_PTR_GET_DEFAULT(agAccountType_, "") };
    inline UpdateAgServiceStatusRequest& setAgAccountType(string agAccountType) { DARABONBA_PTR_SET_VALUE(agAccountType_, agAccountType) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline UpdateAgServiceStatusRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAgServiceStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> agAccountType_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
