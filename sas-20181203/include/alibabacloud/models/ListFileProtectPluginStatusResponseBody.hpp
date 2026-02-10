// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTPLUGINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTPLUGINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectPluginStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileProtectPluginStatusResponseBody() = default ;
    ListFileProtectPluginStatusResponseBody(const ListFileProtectPluginStatusResponseBody &) = default ;
    ListFileProtectPluginStatusResponseBody(ListFileProtectPluginStatusResponseBody &&) = default ;
    ListFileProtectPluginStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectPluginStatusResponseBody() = default ;
    ListFileProtectPluginStatusResponseBody& operator=(const ListFileProtectPluginStatusResponseBody &) = default ;
    ListFileProtectPluginStatusResponseBody& operator=(ListFileProtectPluginStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_TO_JSON(InstallCode, installCode_);
        DARABONBA_PTR_TO_JSON(InstallMessage, installMessage_);
        DARABONBA_PTR_TO_JSON(Installed, installed_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(SupportFile, supportFile_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_FROM_JSON(InstallCode, installCode_);
        DARABONBA_PTR_FROM_JSON(InstallMessage, installMessage_);
        DARABONBA_PTR_FROM_JSON(Installed, installed_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(SupportFile, supportFile_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientVersion_ == nullptr
        && this->installCode_ == nullptr && this->installMessage_ == nullptr && this->installed_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->online_ == nullptr && this->platform_ == nullptr && this->supportFile_ == nullptr && this->uuid_ == nullptr; };
      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline Data& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // installCode Field Functions 
      bool hasInstallCode() const { return this->installCode_ != nullptr;};
      void deleteInstallCode() { this->installCode_ = nullptr;};
      inline string getInstallCode() const { DARABONBA_PTR_GET_DEFAULT(installCode_, "") };
      inline Data& setInstallCode(string installCode) { DARABONBA_PTR_SET_VALUE(installCode_, installCode) };


      // installMessage Field Functions 
      bool hasInstallMessage() const { return this->installMessage_ != nullptr;};
      void deleteInstallMessage() { this->installMessage_ = nullptr;};
      inline string getInstallMessage() const { DARABONBA_PTR_GET_DEFAULT(installMessage_, "") };
      inline Data& setInstallMessage(string installMessage) { DARABONBA_PTR_SET_VALUE(installMessage_, installMessage) };


      // installed Field Functions 
      bool hasInstalled() const { return this->installed_ != nullptr;};
      void deleteInstalled() { this->installed_ = nullptr;};
      inline bool getInstalled() const { DARABONBA_PTR_GET_DEFAULT(installed_, false) };
      inline Data& setInstalled(bool installed) { DARABONBA_PTR_SET_VALUE(installed_, installed) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Data& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline Data& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // supportFile Field Functions 
      bool hasSupportFile() const { return this->supportFile_ != nullptr;};
      void deleteSupportFile() { this->supportFile_ = nullptr;};
      inline bool getSupportFile() const { DARABONBA_PTR_GET_DEFAULT(supportFile_, false) };
      inline Data& setSupportFile(bool supportFile) { DARABONBA_PTR_SET_VALUE(supportFile_, supportFile) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The version of the Security Center agent.
      shared_ptr<string> clientVersion_ {};
      // The returned code after you install the Security Center agent. Valid values:
      // 
      // 1.  0: The installation is successful.
      // 2.  \\-2: The kernel does not support the installation.
      shared_ptr<string> installCode_ {};
      // The returned message after you install the Security Center agent.
      shared_ptr<string> installMessage_ {};
      // Indicates whether the Security Center agent is installed.
      shared_ptr<bool> installed_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address that is associated with the instance.
      shared_ptr<string> internetIp_ {};
      // The private IP address that is associated with the instance.
      shared_ptr<string> intranetIp_ {};
      // Indicates whether the Security Center agent is online. Valid value:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> online_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **windows**: Windows
      // *   **linux**: Linux
      shared_ptr<string> platform_ {};
      // Indicates whether the core file monitoring file is supported.
      shared_ptr<bool> supportFile_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListFileProtectPluginStatusResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListFileProtectPluginStatusResponseBody::Data>) };
    inline vector<ListFileProtectPluginStatusResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListFileProtectPluginStatusResponseBody::Data>) };
    inline ListFileProtectPluginStatusResponseBody& setData(const vector<ListFileProtectPluginStatusResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFileProtectPluginStatusResponseBody& setData(vector<ListFileProtectPluginStatusResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListFileProtectPluginStatusResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListFileProtectPluginStatusResponseBody::PageInfo) };
    inline ListFileProtectPluginStatusResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListFileProtectPluginStatusResponseBody::PageInfo) };
    inline ListFileProtectPluginStatusResponseBody& setPageInfo(const ListFileProtectPluginStatusResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListFileProtectPluginStatusResponseBody& setPageInfo(ListFileProtectPluginStatusResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileProtectPluginStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned if the call is successful.
    shared_ptr<vector<ListFileProtectPluginStatusResponseBody::Data>> data_ {};
    // The pagination information.
    shared_ptr<ListFileProtectPluginStatusResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
