// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODYDATACHANNELLEVELINFOLEVELONEOWNER_HPP_
#define ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODYDATACHANNELLEVELINFOLEVELONEOWNER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
    };
    friend void from_json(const Darabonba::Json& j, FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
    };
    FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner() = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner(const FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner &) = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner(FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner &&) = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner() = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner& operator=(const FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner &) = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner& operator=(FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerEmpIdOrTelephone_ != nullptr
        && this->ownerName_ != nullptr && this->ownerNickName_ != nullptr; };
    // ownerEmpIdOrTelephone Field Functions 
    bool hasOwnerEmpIdOrTelephone() const { return this->ownerEmpIdOrTelephone_ != nullptr;};
    void deleteOwnerEmpIdOrTelephone() { this->ownerEmpIdOrTelephone_ = nullptr;};
    inline string ownerEmpIdOrTelephone() const { DARABONBA_PTR_GET_DEFAULT(ownerEmpIdOrTelephone_, "") };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner& setOwnerEmpIdOrTelephone(string ownerEmpIdOrTelephone) { DARABONBA_PTR_SET_VALUE(ownerEmpIdOrTelephone_, ownerEmpIdOrTelephone) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerNickName Field Functions 
    bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
    void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
    inline string ownerNickName() const { DARABONBA_PTR_GET_DEFAULT(ownerNickName_, "") };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner& setOwnerNickName(string ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };


  protected:
    std::shared_ptr<string> ownerEmpIdOrTelephone_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerNickName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
