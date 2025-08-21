// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEcsInstancesResponseBodyResultCollectors.hpp>
#include <alibabacloud/models/ListEcsInstancesResponseBodyResultIpAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEcsInstancesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(cloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_TO_JSON(collectors, collectors_);
      DARABONBA_PTR_TO_JSON(ecsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(ecsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_TO_JSON(ipAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(osType, osType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_FROM_JSON(collectors, collectors_);
      DARABONBA_PTR_FROM_JSON(ecsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ecsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_FROM_JSON(ipAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(osType, osType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ListEcsInstancesResponseBodyResult() = default ;
    ListEcsInstancesResponseBodyResult(const ListEcsInstancesResponseBodyResult &) = default ;
    ListEcsInstancesResponseBodyResult(ListEcsInstancesResponseBodyResult &&) = default ;
    ListEcsInstancesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsInstancesResponseBodyResult() = default ;
    ListEcsInstancesResponseBodyResult& operator=(const ListEcsInstancesResponseBodyResult &) = default ;
    ListEcsInstancesResponseBodyResult& operator=(ListEcsInstancesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudAssistantStatus_ != nullptr
        && this->collectors_ != nullptr && this->ecsInstanceId_ != nullptr && this->ecsInstanceName_ != nullptr && this->ipAddress_ != nullptr && this->osType_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr; };
    // cloudAssistantStatus Field Functions 
    bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
    void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
    inline string cloudAssistantStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantStatus_, "") };
    inline ListEcsInstancesResponseBodyResult& setCloudAssistantStatus(string cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };


    // collectors Field Functions 
    bool hasCollectors() const { return this->collectors_ != nullptr;};
    void deleteCollectors() { this->collectors_ = nullptr;};
    inline const vector<Models::ListEcsInstancesResponseBodyResultCollectors> & collectors() const { DARABONBA_PTR_GET_CONST(collectors_, vector<Models::ListEcsInstancesResponseBodyResultCollectors>) };
    inline vector<Models::ListEcsInstancesResponseBodyResultCollectors> collectors() { DARABONBA_PTR_GET(collectors_, vector<Models::ListEcsInstancesResponseBodyResultCollectors>) };
    inline ListEcsInstancesResponseBodyResult& setCollectors(const vector<Models::ListEcsInstancesResponseBodyResultCollectors> & collectors) { DARABONBA_PTR_SET_VALUE(collectors_, collectors) };
    inline ListEcsInstancesResponseBodyResult& setCollectors(vector<Models::ListEcsInstancesResponseBodyResultCollectors> && collectors) { DARABONBA_PTR_SET_RVALUE(collectors_, collectors) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ListEcsInstancesResponseBodyResult& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsInstanceName Field Functions 
    bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
    void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
    inline string ecsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
    inline ListEcsInstancesResponseBodyResult& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline const vector<Models::ListEcsInstancesResponseBodyResultIpAddress> & ipAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<Models::ListEcsInstancesResponseBodyResultIpAddress>) };
    inline vector<Models::ListEcsInstancesResponseBodyResultIpAddress> ipAddress() { DARABONBA_PTR_GET(ipAddress_, vector<Models::ListEcsInstancesResponseBodyResultIpAddress>) };
    inline ListEcsInstancesResponseBodyResult& setIpAddress(const vector<Models::ListEcsInstancesResponseBodyResultIpAddress> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
    inline ListEcsInstancesResponseBodyResult& setIpAddress(vector<Models::ListEcsInstancesResponseBodyResultIpAddress> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListEcsInstancesResponseBodyResult& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEcsInstancesResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListEcsInstancesResponseBodyResult& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The name of the ECS instance.
    std::shared_ptr<string> cloudAssistantStatus_ = nullptr;
    // The ID of the collector instance.
    std::shared_ptr<vector<Models::ListEcsInstancesResponseBodyResultCollectors>> collectors_ = nullptr;
    // The tags of the ECS instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> ecsInstanceName_ = nullptr;
    // The type of the IP address that is used by the instance. Valid values:
    // 
    // *   public: public endpoint
    // *   private: private network address
    std::shared_ptr<vector<Models::ListEcsInstancesResponseBodyResultIpAddress>> ipAddress_ = nullptr;
    // The status of the ECS instance. Valid values:
    // 
    // *   running: The master instance is running
    // *   starting
    // *   stopping: The task is being stopped.
    // *   stopped: The node is stopped.
    std::shared_ptr<string> osType_ = nullptr;
    // The IP address of the ECS instance.
    std::shared_ptr<string> status_ = nullptr;
    // The operating system type of the ECS instance. Valid values:
    // 
    // *   windows:Windows operating system
    // *   linux:Linux operating system
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
