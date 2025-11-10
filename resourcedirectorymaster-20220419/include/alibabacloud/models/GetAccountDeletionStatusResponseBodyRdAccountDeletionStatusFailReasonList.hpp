// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODYRDACCOUNTDELETIONSTATUSFAILREASONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODYRDACCOUNTDELETIONSTATUSFAILREASONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList() = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList(const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList &) = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList(GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList &&) = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList() = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList& operator=(const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList &) = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList& operator=(GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the check item.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the cloud service to which the check item belongs.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
