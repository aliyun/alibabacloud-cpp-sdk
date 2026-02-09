// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENVIRONMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENVIRONMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResourceStatistic.hpp>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <alibabacloud/models/SubDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetEnvironmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetEnvironmentResponseBody() = default ;
    GetEnvironmentResponseBody(const GetEnvironmentResponseBody &) = default ;
    GetEnvironmentResponseBody(GetEnvironmentResponseBody &&) = default ;
    GetEnvironmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnvironmentResponseBody() = default ;
    GetEnvironmentResponseBody& operator=(const GetEnvironmentResponseBody &) = default ;
    GetEnvironmentResponseBody& operator=(GetEnvironmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(default, default_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(statisticsInfo, statisticsInfo_);
        DARABONBA_PTR_TO_JSON(subDomainInfos, subDomainInfos_);
        DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(default, default_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(statisticsInfo, statisticsInfo_);
        DARABONBA_PTR_FROM_JSON(subDomainInfos, subDomainInfos_);
        DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
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
      class StatisticsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatisticsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(resourceStatistics, resourceStatistics_);
          DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, StatisticsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(resourceStatistics, resourceStatistics_);
          DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        };
        StatisticsInfo() = default ;
        StatisticsInfo(const StatisticsInfo &) = default ;
        StatisticsInfo(StatisticsInfo &&) = default ;
        StatisticsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatisticsInfo() = default ;
        StatisticsInfo& operator=(const StatisticsInfo &) = default ;
        StatisticsInfo& operator=(StatisticsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceStatistics_ == nullptr
        && this->totalCount_ == nullptr; };
        // resourceStatistics Field Functions 
        bool hasResourceStatistics() const { return this->resourceStatistics_ != nullptr;};
        void deleteResourceStatistics() { this->resourceStatistics_ = nullptr;};
        inline const vector<ResourceStatistic> & getResourceStatistics() const { DARABONBA_PTR_GET_CONST(resourceStatistics_, vector<ResourceStatistic>) };
        inline vector<ResourceStatistic> getResourceStatistics() { DARABONBA_PTR_GET(resourceStatistics_, vector<ResourceStatistic>) };
        inline StatisticsInfo& setResourceStatistics(const vector<ResourceStatistic> & resourceStatistics) { DARABONBA_PTR_SET_VALUE(resourceStatistics_, resourceStatistics) };
        inline StatisticsInfo& setResourceStatistics(vector<ResourceStatistic> && resourceStatistics) { DARABONBA_PTR_SET_RVALUE(resourceStatistics_, resourceStatistics) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline StatisticsInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // 4
        shared_ptr<vector<ResourceStatistic>> resourceStatistics_ {};
        // The total number of entries.
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->createTimestamp_ == nullptr && this->default_ == nullptr && this->description_ == nullptr && this->environmentId_ == nullptr && this->gatewayInfo_ == nullptr
        && this->name_ == nullptr && this->resourceGroupId_ == nullptr && this->statisticsInfo_ == nullptr && this->subDomainInfos_ == nullptr && this->updateTimestamp_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Data& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Data& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline Data& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // gatewayInfo Field Functions 
      bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
      void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
      inline const GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
      inline GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
      inline Data& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
      inline Data& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // statisticsInfo Field Functions 
      bool hasStatisticsInfo() const { return this->statisticsInfo_ != nullptr;};
      void deleteStatisticsInfo() { this->statisticsInfo_ = nullptr;};
      inline const Data::StatisticsInfo & getStatisticsInfo() const { DARABONBA_PTR_GET_CONST(statisticsInfo_, Data::StatisticsInfo) };
      inline Data::StatisticsInfo getStatisticsInfo() { DARABONBA_PTR_GET(statisticsInfo_, Data::StatisticsInfo) };
      inline Data& setStatisticsInfo(const Data::StatisticsInfo & statisticsInfo) { DARABONBA_PTR_SET_VALUE(statisticsInfo_, statisticsInfo) };
      inline Data& setStatisticsInfo(Data::StatisticsInfo && statisticsInfo) { DARABONBA_PTR_SET_RVALUE(statisticsInfo_, statisticsInfo) };


      // subDomainInfos Field Functions 
      bool hasSubDomainInfos() const { return this->subDomainInfos_ != nullptr;};
      void deleteSubDomainInfos() { this->subDomainInfos_ = nullptr;};
      inline const vector<SubDomainInfo> & getSubDomainInfos() const { DARABONBA_PTR_GET_CONST(subDomainInfos_, vector<SubDomainInfo>) };
      inline vector<SubDomainInfo> getSubDomainInfos() { DARABONBA_PTR_GET(subDomainInfos_, vector<SubDomainInfo>) };
      inline Data& setSubDomainInfos(const vector<SubDomainInfo> & subDomainInfos) { DARABONBA_PTR_SET_VALUE(subDomainInfos_, subDomainInfos) };
      inline Data& setSubDomainInfos(vector<SubDomainInfo> && subDomainInfos) { DARABONBA_PTR_SET_RVALUE(subDomainInfos_, subDomainInfos) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Data& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    protected:
      // Test environment
      shared_ptr<string> alias_ {};
      // The update timestamp.
      shared_ptr<int64_t> createTimestamp_ {};
      // The creation timestamp.
      shared_ptr<bool> default_ {};
      // Testing environment for xx project of xxx
      shared_ptr<string> description_ {};
      // The environment name.
      shared_ptr<string> environmentId_ {};
      // The subdomains.
      shared_ptr<GatewayInfo> gatewayInfo_ {};
      // The environment alias.
      shared_ptr<string> name_ {};
      // rg-aekzzzntl5njbpi
      shared_ptr<string> resourceGroupId_ {};
      // The information about online resources.
      shared_ptr<Data::StatisticsInfo> statisticsInfo_ {};
      // The subdomain information.
      shared_ptr<vector<SubDomainInfo>> subDomainInfos_ {};
      // The resource group ID.
      shared_ptr<int64_t> updateTimestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEnvironmentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEnvironmentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEnvironmentResponseBody::Data) };
    inline GetEnvironmentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEnvironmentResponseBody::Data) };
    inline GetEnvironmentResponseBody& setData(const GetEnvironmentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEnvironmentResponseBody& setData(GetEnvironmentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEnvironmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEnvironmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response message returned.
    shared_ptr<string> code_ {};
    // The environment ID.
    shared_ptr<GetEnvironmentResponseBody::Data> data_ {};
    // The response data.
    shared_ptr<string> message_ {};
    // The status code returned.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
