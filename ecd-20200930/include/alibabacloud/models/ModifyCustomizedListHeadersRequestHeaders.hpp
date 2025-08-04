// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEDLISTHEADERSREQUESTHEADERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEDLISTHEADERSREQUESTHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCustomizedListHeadersRequestHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomizedListHeadersRequestHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayType, displayType_);
      DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomizedListHeadersRequestHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayType, displayType_);
      DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
    };
    ModifyCustomizedListHeadersRequestHeaders() = default ;
    ModifyCustomizedListHeadersRequestHeaders(const ModifyCustomizedListHeadersRequestHeaders &) = default ;
    ModifyCustomizedListHeadersRequestHeaders(ModifyCustomizedListHeadersRequestHeaders &&) = default ;
    ModifyCustomizedListHeadersRequestHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomizedListHeadersRequestHeaders() = default ;
    ModifyCustomizedListHeadersRequestHeaders& operator=(const ModifyCustomizedListHeadersRequestHeaders &) = default ;
    ModifyCustomizedListHeadersRequestHeaders& operator=(ModifyCustomizedListHeadersRequestHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayType_ != nullptr
        && this->headerKey_ != nullptr; };
    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string displayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline ModifyCustomizedListHeadersRequestHeaders& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // headerKey Field Functions 
    bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
    void deleteHeaderKey() { this->headerKey_ = nullptr;};
    inline string headerKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
    inline ModifyCustomizedListHeadersRequestHeaders& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


  protected:
    // The display type of the header.
    // 
    // > For the desktop_id_name and office_site_id_name head keys, set the value of this parameter to required. For other header keys, set the value of this parameter to display or hide based on your requirements.
    std::shared_ptr<string> displayType_ = nullptr;
    // The key of the header.
    // 
    // > All header keys of the list must be specified.
    // 
    // Valid values:
    // 
    // *   desktop_id_name: the IDs and names of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   system_data_disk: the system disks and data disks of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   office_site_type: the office network types of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   create_time: the time when the cloud computers are created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ip: the IP addresses of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   spec_system_protocol: the instance types, OSs, and protocol types of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   monitor: the monitoring information of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   assigned_users: the number of end users that are assigned to the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   encryption: indicates whether the cloud computers are encrypted.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   office_site_id_name: the IDs and names of the office networks.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   pay_type: the billing methods of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   tag: the tags that are attached to the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   hostname: the hostnames of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   status: the statuses of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   current_user: the current end users of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> headerKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
