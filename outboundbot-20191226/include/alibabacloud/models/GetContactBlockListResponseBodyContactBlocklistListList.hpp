// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTBLOCKLISTRESPONSEBODYCONTACTBLOCKLISTLISTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTBLOCKLISTRESPONSEBODYCONTACTBLOCKLISTLISTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetContactBlockListResponseBodyContactBlocklistListList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactBlockListResponseBodyContactBlocklistListList& obj) { 
      DARABONBA_PTR_TO_JSON(ContactBlockListId, contactBlockListId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactBlockListResponseBodyContactBlocklistListList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactBlockListId, contactBlockListId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    GetContactBlockListResponseBodyContactBlocklistListList() = default ;
    GetContactBlockListResponseBodyContactBlocklistListList(const GetContactBlockListResponseBodyContactBlocklistListList &) = default ;
    GetContactBlockListResponseBodyContactBlocklistListList(GetContactBlockListResponseBodyContactBlocklistListList &&) = default ;
    GetContactBlockListResponseBodyContactBlocklistListList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactBlockListResponseBodyContactBlocklistListList() = default ;
    GetContactBlockListResponseBodyContactBlocklistListList& operator=(const GetContactBlockListResponseBodyContactBlocklistListList &) = default ;
    GetContactBlockListResponseBodyContactBlocklistListList& operator=(GetContactBlockListResponseBodyContactBlocklistListList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactBlockListId_ == nullptr
        && return this->creationTime_ == nullptr && return this->creator_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->operator_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->remark_ == nullptr; };
    // contactBlockListId Field Functions 
    bool hasContactBlockListId() const { return this->contactBlockListId_ != nullptr;};
    void deleteContactBlockListId() { this->contactBlockListId_ = nullptr;};
    inline string contactBlockListId() const { DARABONBA_PTR_GET_DEFAULT(contactBlockListId_, "") };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setContactBlockListId(string contactBlockListId) { DARABONBA_PTR_SET_VALUE(contactBlockListId_, contactBlockListId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetContactBlockListResponseBodyContactBlocklistListList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<string> contactBlockListId_ = nullptr;
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
