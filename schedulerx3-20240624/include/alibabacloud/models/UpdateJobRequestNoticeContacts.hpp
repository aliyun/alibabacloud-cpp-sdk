// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBREQUESTNOTICECONTACTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBREQUESTNOTICECONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateJobRequestNoticeContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRequestNoticeContacts& obj) { 
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRequestNoticeContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateJobRequestNoticeContacts() = default ;
    UpdateJobRequestNoticeContacts(const UpdateJobRequestNoticeContacts &) = default ;
    UpdateJobRequestNoticeContacts(UpdateJobRequestNoticeContacts &&) = default ;
    UpdateJobRequestNoticeContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRequestNoticeContacts() = default ;
    UpdateJobRequestNoticeContacts& operator=(const UpdateJobRequestNoticeContacts &) = default ;
    UpdateJobRequestNoticeContacts& operator=(UpdateJobRequestNoticeContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactType_ == nullptr
        && return this->name_ == nullptr; };
    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline int32_t contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, 0) };
    inline UpdateJobRequestNoticeContacts& setContactType(int32_t contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateJobRequestNoticeContacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int32_t> contactType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
