// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEDLISTHEADERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEDLISTHEADERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCustomizedListHeadersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomizedListHeadersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomizedListHeadersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyCustomizedListHeadersRequest() = default ;
    ModifyCustomizedListHeadersRequest(const ModifyCustomizedListHeadersRequest &) = default ;
    ModifyCustomizedListHeadersRequest(ModifyCustomizedListHeadersRequest &&) = default ;
    ModifyCustomizedListHeadersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomizedListHeadersRequest() = default ;
    ModifyCustomizedListHeadersRequest& operator=(const ModifyCustomizedListHeadersRequest &) = default ;
    ModifyCustomizedListHeadersRequest& operator=(ModifyCustomizedListHeadersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayType, displayType_);
        DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayType, displayType_);
        DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayType_ == nullptr
        && this->headerKey_ == nullptr; };
      // displayType Field Functions 
      bool hasDisplayType() const { return this->displayType_ != nullptr;};
      void deleteDisplayType() { this->displayType_ = nullptr;};
      inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
      inline Headers& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


      // headerKey Field Functions 
      bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
      void deleteHeaderKey() { this->headerKey_ = nullptr;};
      inline string getHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
      inline Headers& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


    protected:
      // The display type of the header.
      // 
      // > For the desktop_id_name and office_site_id_name head keys, set the value of this parameter to required. For other header keys, set the value of this parameter to display or hide based on your requirements.
      shared_ptr<string> displayType_ {};
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
      shared_ptr<string> headerKey_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->listType_ == nullptr && this->regionId_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<ModifyCustomizedListHeadersRequest::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<ModifyCustomizedListHeadersRequest::Headers>) };
    inline vector<ModifyCustomizedListHeadersRequest::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<ModifyCustomizedListHeadersRequest::Headers>) };
    inline ModifyCustomizedListHeadersRequest& setHeaders(const vector<ModifyCustomizedListHeadersRequest::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyCustomizedListHeadersRequest& setHeaders(vector<ModifyCustomizedListHeadersRequest::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline ModifyCustomizedListHeadersRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCustomizedListHeadersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The headers.
    shared_ptr<vector<ModifyCustomizedListHeadersRequest::Headers>> headers_ {};
    // The type of the list.
    // 
    // Valid values:
    // 
    // *   desktop: cloud computer
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> listType_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
