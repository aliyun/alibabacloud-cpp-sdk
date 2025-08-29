// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATAPRIVILEGETRANSFERRESULTENTRIES_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATAPRIVILEGETRANSFERRESULTENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(PrivilegeDisplayName, privilegeDisplayName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(PrivilegeDisplayName, privilegeDisplayName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries() = default ;
    GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries(const GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries &) = default ;
    GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries(GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries &&) = default ;
    GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries() = default ;
    GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries& operator=(const GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries &) = default ;
    GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries& operator=(GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errMsg_ != nullptr
        && this->privilegeDisplayName_ != nullptr && this->status_ != nullptr; };
    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // privilegeDisplayName Field Functions 
    bool hasPrivilegeDisplayName() const { return this->privilegeDisplayName_ != nullptr;};
    void deletePrivilegeDisplayName() { this->privilegeDisplayName_ = nullptr;};
    inline string privilegeDisplayName() const { DARABONBA_PTR_GET_DEFAULT(privilegeDisplayName_, "") };
    inline GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries& setPrivilegeDisplayName(string privilegeDisplayName) { DARABONBA_PTR_SET_VALUE(privilegeDisplayName_, privilegeDisplayName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> privilegeDisplayName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
