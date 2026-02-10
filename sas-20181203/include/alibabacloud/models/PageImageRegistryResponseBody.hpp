// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYRESPONSEBODY_HPP_
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
  class PageImageRegistryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PageImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PageImageRegistryResponseBody() = default ;
    PageImageRegistryResponseBody(const PageImageRegistryResponseBody &) = default ;
    PageImageRegistryResponseBody(PageImageRegistryResponseBody &&) = default ;
    PageImageRegistryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageImageRegistryResponseBody() = default ;
    PageImageRegistryResponseBody& operator=(const PageImageRegistryResponseBody &) = default ;
    PageImageRegistryResponseBody& operator=(PageImageRegistryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(BlackList, blackList_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_TO_JSON(JenkinsEnv, jenkinsEnv_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(PersistenceDay, persistenceDay_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegistryHostIp, registryHostIp_);
        DARABONBA_PTR_TO_JSON(RegistryName, registryName_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_FROM_JSON(JenkinsEnv, jenkinsEnv_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(PersistenceDay, persistenceDay_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegistryHostIp, registryHostIp_);
        DARABONBA_PTR_FROM_JSON(RegistryName, registryName_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(TransPerHour, transPerHour_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blackList_ == nullptr
        && this->domainName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->imageCount_ == nullptr
        && this->jenkinsEnv_ == nullptr && this->netType_ == nullptr && this->password_ == nullptr && this->persistenceDay_ == nullptr && this->protocolType_ == nullptr
        && this->regionId_ == nullptr && this->registryHostIp_ == nullptr && this->registryName_ == nullptr && this->registryType_ == nullptr && this->token_ == nullptr
        && this->transPerHour_ == nullptr && this->userName_ == nullptr && this->vpcId_ == nullptr && this->whiteList_ == nullptr; };
      // blackList Field Functions 
      bool hasBlackList() const { return this->blackList_ != nullptr;};
      void deleteBlackList() { this->blackList_ = nullptr;};
      inline string getBlackList() const { DARABONBA_PTR_GET_DEFAULT(blackList_, "") };
      inline List& setBlackList(string blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline List& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline List& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imageCount Field Functions 
      bool hasImageCount() const { return this->imageCount_ != nullptr;};
      void deleteImageCount() { this->imageCount_ = nullptr;};
      inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
      inline List& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


      // jenkinsEnv Field Functions 
      bool hasJenkinsEnv() const { return this->jenkinsEnv_ != nullptr;};
      void deleteJenkinsEnv() { this->jenkinsEnv_ = nullptr;};
      inline string getJenkinsEnv() const { DARABONBA_PTR_GET_DEFAULT(jenkinsEnv_, "") };
      inline List& setJenkinsEnv(string jenkinsEnv) { DARABONBA_PTR_SET_VALUE(jenkinsEnv_, jenkinsEnv) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline int32_t getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0) };
      inline List& setNetType(int32_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline List& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // persistenceDay Field Functions 
      bool hasPersistenceDay() const { return this->persistenceDay_ != nullptr;};
      void deletePersistenceDay() { this->persistenceDay_ = nullptr;};
      inline int32_t getPersistenceDay() const { DARABONBA_PTR_GET_DEFAULT(persistenceDay_, 0) };
      inline List& setPersistenceDay(int32_t persistenceDay) { DARABONBA_PTR_SET_VALUE(persistenceDay_, persistenceDay) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline int32_t getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0) };
      inline List& setProtocolType(int32_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline List& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // registryHostIp Field Functions 
      bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
      void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
      inline string getRegistryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
      inline List& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


      // registryName Field Functions 
      bool hasRegistryName() const { return this->registryName_ != nullptr;};
      void deleteRegistryName() { this->registryName_ = nullptr;};
      inline string getRegistryName() const { DARABONBA_PTR_GET_DEFAULT(registryName_, "") };
      inline List& setRegistryName(string registryName) { DARABONBA_PTR_SET_VALUE(registryName_, registryName) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline List& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline List& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // transPerHour Field Functions 
      bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
      void deleteTransPerHour() { this->transPerHour_ = nullptr;};
      inline int32_t getTransPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
      inline List& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline List& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline List& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
      inline List& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


    protected:
      // The IP address blacklist.
      shared_ptr<string> blackList_ {};
      // The domain name of the image repository.
      shared_ptr<string> domainName_ {};
      // The time when the image repository was created. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> gmtCreate_ {};
      // The time when the image repository was updated. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> gmtModified_ {};
      // The ID of the image repository.
      shared_ptr<int64_t> id_ {};
      // The number of images that are stored in the image repository.
      shared_ptr<int32_t> imageCount_ {};
      // The information about the Jenkins environment.
      shared_ptr<string> jenkinsEnv_ {};
      // The network type. Valid values:
      // 
      // *   **1**: Internet.
      // *   **2**: virtual private cloud (VPC).
      shared_ptr<int32_t> netType_ {};
      // The password.
      shared_ptr<string> password_ {};
      // The number of days for which assets are retained.
      shared_ptr<int32_t> persistenceDay_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **1**: HTTP.
      // *   **2**: HTTPS.
      shared_ptr<int32_t> protocolType_ {};
      // The region ID of the image repository.
      shared_ptr<string> regionId_ {};
      // The IP address of the image repository.
      shared_ptr<string> registryHostIp_ {};
      // The alias of the image repository.
      shared_ptr<string> registryName_ {};
      // The type of the image repository. Valid values:
      // 
      // *   **acr**: Container Registry.
      // *   **harbor**: Harbor.
      // *   **quay**: Quay.
      // *   **CI/CD**: Jenkins.
      shared_ptr<string> registryType_ {};
      // The authentication token of the user.
      shared_ptr<string> token_ {};
      // The number of scan tasks that are performed per hour.
      shared_ptr<int32_t> transPerHour_ {};
      // The username.
      shared_ptr<string> userName_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The IP address whitelist.
      shared_ptr<string> whiteList_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<PageImageRegistryResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<PageImageRegistryResponseBody::List>) };
    inline vector<PageImageRegistryResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<PageImageRegistryResponseBody::List>) };
    inline PageImageRegistryResponseBody& setList(const vector<PageImageRegistryResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline PageImageRegistryResponseBody& setList(vector<PageImageRegistryResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const PageImageRegistryResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, PageImageRegistryResponseBody::PageInfo) };
    inline PageImageRegistryResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, PageImageRegistryResponseBody::PageInfo) };
    inline PageImageRegistryResponseBody& setPageInfo(const PageImageRegistryResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline PageImageRegistryResponseBody& setPageInfo(PageImageRegistryResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PageImageRegistryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of image repositories.
    shared_ptr<vector<PageImageRegistryResponseBody::List>> list_ {};
    // The pagination information.
    shared_ptr<PageImageRegistryResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
