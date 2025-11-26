// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTWHITELISTRESPONSEBODYCONTACTWHITELISTLISTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTWHITELISTRESPONSEBODYCONTACTWHITELISTLISTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetContactWhiteListResponseBodyContactWhitelistListList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactWhiteListResponseBodyContactWhitelistListList& obj) { 
      DARABONBA_PTR_TO_JSON(ContactWhiteListId, contactWhiteListId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactWhiteListResponseBodyContactWhitelistListList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactWhiteListId, contactWhiteListId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    GetContactWhiteListResponseBodyContactWhitelistListList() = default ;
    GetContactWhiteListResponseBodyContactWhitelistListList(const GetContactWhiteListResponseBodyContactWhitelistListList &) = default ;
    GetContactWhiteListResponseBodyContactWhitelistListList(GetContactWhiteListResponseBodyContactWhitelistListList &&) = default ;
    GetContactWhiteListResponseBodyContactWhitelistListList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactWhiteListResponseBodyContactWhitelistListList() = default ;
    GetContactWhiteListResponseBodyContactWhitelistListList& operator=(const GetContactWhiteListResponseBodyContactWhitelistListList &) = default ;
    GetContactWhiteListResponseBodyContactWhitelistListList& operator=(GetContactWhiteListResponseBodyContactWhitelistListList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactWhiteListId_ == nullptr
        && return this->creationTime_ == nullptr && return this->creator_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->operator_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->remark_ == nullptr; };
    // contactWhiteListId Field Functions 
    bool hasContactWhiteListId() const { return this->contactWhiteListId_ != nullptr;};
    void deleteContactWhiteListId() { this->contactWhiteListId_ = nullptr;};
    inline string contactWhiteListId() const { DARABONBA_PTR_GET_DEFAULT(contactWhiteListId_, "") };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setContactWhiteListId(string contactWhiteListId) { DARABONBA_PTR_SET_VALUE(contactWhiteListId_, contactWhiteListId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetContactWhiteListResponseBodyContactWhitelistListList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<string> contactWhiteListId_ = nullptr;
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
