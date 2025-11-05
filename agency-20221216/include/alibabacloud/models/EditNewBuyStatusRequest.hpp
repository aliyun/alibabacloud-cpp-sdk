// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITNEWBUYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITNEWBUYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class EditNewBuyStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditNewBuyStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewBuyStatus, newBuyStatus_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, EditNewBuyStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewBuyStatus, newBuyStatus_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    EditNewBuyStatusRequest() = default ;
    EditNewBuyStatusRequest(const EditNewBuyStatusRequest &) = default ;
    EditNewBuyStatusRequest(EditNewBuyStatusRequest &&) = default ;
    EditNewBuyStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditNewBuyStatusRequest() = default ;
    EditNewBuyStatusRequest& operator=(const EditNewBuyStatusRequest &) = default ;
    EditNewBuyStatusRequest& operator=(EditNewBuyStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newBuyStatus_ == nullptr
        && return this->uid_ == nullptr; };
    // newBuyStatus Field Functions 
    bool hasNewBuyStatus() const { return this->newBuyStatus_ != nullptr;};
    void deleteNewBuyStatus() { this->newBuyStatus_ = nullptr;};
    inline string newBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(newBuyStatus_, "") };
    inline EditNewBuyStatusRequest& setNewBuyStatus(string newBuyStatus) { DARABONBA_PTR_SET_VALUE(newBuyStatus_, newBuyStatus) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline EditNewBuyStatusRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // New Purchase Status</br>
    // 
    // - cancelBan: Cancel the restriction for New Purchase request</br>
    // 
    // - ban: ban the New Purchase request</br>
    std::shared_ptr<string> newBuyStatus_ = nullptr;
    // Customer UID
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
