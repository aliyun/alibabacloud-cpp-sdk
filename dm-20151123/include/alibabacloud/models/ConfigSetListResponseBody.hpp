// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigSets, configSets_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigSets, configSets_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ConfigSetListResponseBody() = default ;
    ConfigSetListResponseBody(const ConfigSetListResponseBody &) = default ;
    ConfigSetListResponseBody(ConfigSetListResponseBody &&) = default ;
    ConfigSetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetListResponseBody() = default ;
    ConfigSetListResponseBody& operator=(const ConfigSetListResponseBody &) = default ;
    ConfigSetListResponseBody& operator=(ConfigSetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigSets& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FromAddresses, fromAddresses_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IpPool, ipPool_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FromAddresses, fromAddresses_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IpPool, ipPool_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      ConfigSets() = default ;
      ConfigSets(const ConfigSets &) = default ;
      ConfigSets(ConfigSets &&) = default ;
      ConfigSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigSets() = default ;
      ConfigSets& operator=(const ConfigSets &) = default ;
      ConfigSets& operator=(ConfigSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpPool& obj) { 
          DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
        };
        friend void from_json(const Darabonba::Json& j, IpPool& obj) { 
          DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
        };
        IpPool() = default ;
        IpPool(const IpPool &) = default ;
        IpPool(IpPool &&) = default ;
        IpPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpPool() = default ;
        IpPool& operator=(const IpPool &) = default ;
        IpPool& operator=(IpPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipPoolId_ == nullptr
        && this->ipPoolName_ == nullptr; };
        // ipPoolId Field Functions 
        bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
        void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
        inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
        inline IpPool& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


        // ipPoolName Field Functions 
        bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
        void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
        inline string getIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
        inline IpPool& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


      protected:
        shared_ptr<string> ipPoolId_ {};
        shared_ptr<string> ipPoolName_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->fromAddresses_ == nullptr && this->id_ == nullptr && this->ipPool_ == nullptr && this->name_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ConfigSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fromAddresses Field Functions 
      bool hasFromAddresses() const { return this->fromAddresses_ != nullptr;};
      void deleteFromAddresses() { this->fromAddresses_ = nullptr;};
      inline const vector<string> & getFromAddresses() const { DARABONBA_PTR_GET_CONST(fromAddresses_, vector<string>) };
      inline vector<string> getFromAddresses() { DARABONBA_PTR_GET(fromAddresses_, vector<string>) };
      inline ConfigSets& setFromAddresses(const vector<string> & fromAddresses) { DARABONBA_PTR_SET_VALUE(fromAddresses_, fromAddresses) };
      inline ConfigSets& setFromAddresses(vector<string> && fromAddresses) { DARABONBA_PTR_SET_RVALUE(fromAddresses_, fromAddresses) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ConfigSets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ipPool Field Functions 
      bool hasIpPool() const { return this->ipPool_ != nullptr;};
      void deleteIpPool() { this->ipPool_ = nullptr;};
      inline const ConfigSets::IpPool & getIpPool() const { DARABONBA_PTR_GET_CONST(ipPool_, ConfigSets::IpPool) };
      inline ConfigSets::IpPool getIpPool() { DARABONBA_PTR_GET(ipPool_, ConfigSets::IpPool) };
      inline ConfigSets& setIpPool(const ConfigSets::IpPool & ipPool) { DARABONBA_PTR_SET_VALUE(ipPool_, ipPool) };
      inline ConfigSets& setIpPool(ConfigSets::IpPool && ipPool) { DARABONBA_PTR_SET_RVALUE(ipPool_, ipPool) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConfigSets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<vector<string>> fromAddresses_ {};
      shared_ptr<string> id_ {};
      shared_ptr<ConfigSets::IpPool> ipPool_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->configSets_ == nullptr
        && this->currentPage_ == nullptr && this->hasMore_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // configSets Field Functions 
    bool hasConfigSets() const { return this->configSets_ != nullptr;};
    void deleteConfigSets() { this->configSets_ = nullptr;};
    inline const vector<ConfigSetListResponseBody::ConfigSets> & getConfigSets() const { DARABONBA_PTR_GET_CONST(configSets_, vector<ConfigSetListResponseBody::ConfigSets>) };
    inline vector<ConfigSetListResponseBody::ConfigSets> getConfigSets() { DARABONBA_PTR_GET(configSets_, vector<ConfigSetListResponseBody::ConfigSets>) };
    inline ConfigSetListResponseBody& setConfigSets(const vector<ConfigSetListResponseBody::ConfigSets> & configSets) { DARABONBA_PTR_SET_VALUE(configSets_, configSets) };
    inline ConfigSetListResponseBody& setConfigSets(vector<ConfigSetListResponseBody::ConfigSets> && configSets) { DARABONBA_PTR_SET_RVALUE(configSets_, configSets) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ConfigSetListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ConfigSetListResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ConfigSetListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfigSetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ConfigSetListResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    shared_ptr<vector<ConfigSetListResponseBody::ConfigSets>> configSets_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<bool> hasMore_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
