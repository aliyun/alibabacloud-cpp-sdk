// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVULWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVULWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteVulWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVulWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVulWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    DeleteVulWhitelistRequest() = default ;
    DeleteVulWhitelistRequest(const DeleteVulWhitelistRequest &) = default ;
    DeleteVulWhitelistRequest(DeleteVulWhitelistRequest &&) = default ;
    DeleteVulWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVulWhitelistRequest() = default ;
    DeleteVulWhitelistRequest& operator=(const DeleteVulWhitelistRequest &) = default ;
    DeleteVulWhitelistRequest& operator=(DeleteVulWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->whitelist_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteVulWhitelistRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string getWhitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline DeleteVulWhitelistRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The ID of the whitelist.
    // 
    // >  To delete a vulnerability whitelist, you must provide the ID of the whitelist. You can call the [DescribeVulWhitelist](~~DescribeVulWhitelist~~) operation to query the IDs of whitelists.
    shared_ptr<string> id_ {};
    // The information about the whitelist. The value is a JSON string that contains the following fields:
    // 
    // *   **Name**: the name of the vulnerability.
    // 
    // *   **Type**: the type of the vulnerability. Valid values:
    // 
    //     *   **cve**: Linux software vulnerability
    //     *   **sys**: Windows system vulnerability
    //     *   **cms**: Web-CMS vulnerability
    //     *   **app**: application vulnerability
    //     *   **emg**: urgent vulnerability
    // 
    // *   **AliasName**: the alias of the vulnerability.
    shared_ptr<string> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
