// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEADDRESSBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEADDRESSBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteAddressBookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAddressBookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAddressBookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DeleteAddressBookRequest() = default ;
    DeleteAddressBookRequest(const DeleteAddressBookRequest &) = default ;
    DeleteAddressBookRequest(DeleteAddressBookRequest &&) = default ;
    DeleteAddressBookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAddressBookRequest() = default ;
    DeleteAddressBookRequest& operator=(const DeleteAddressBookRequest &) = default ;
    DeleteAddressBookRequest& operator=(DeleteAddressBookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupUuid_ == nullptr
        && return this->lang_ == nullptr && return this->sourceIp_ == nullptr; };
    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string groupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline DeleteAddressBookRequest& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteAddressBookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DeleteAddressBookRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the address book.
    // 
    // To delete the address book, you must provide the ID of the address book. You can call the DescribeAddressBook operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupUuid_ = nullptr;
    // The natural language of the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
