// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIGHISTORYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIGHISTORYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enableAdbRecord, enableAdbRecord_);
      DARABONBA_PTR_TO_JSON(enableRecord, enableRecord_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(storeCode, storeCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enableAdbRecord, enableAdbRecord_);
      DARABONBA_PTR_FROM_JSON(enableRecord, enableRecord_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(storeCode, storeCode_);
    };
    GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig(const GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig(GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig &&) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& operator=(const GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& operator=(GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableAdbRecord_ != nullptr
        && this->enableRecord_ != nullptr && this->instanceId_ != nullptr && this->region_ != nullptr && this->storeCode_ != nullptr; };
    // enableAdbRecord Field Functions 
    bool hasEnableAdbRecord() const { return this->enableAdbRecord_ != nullptr;};
    void deleteEnableAdbRecord() { this->enableAdbRecord_ = nullptr;};
    inline bool enableAdbRecord() const { DARABONBA_PTR_GET_DEFAULT(enableAdbRecord_, false) };
    inline GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& setEnableAdbRecord(bool enableAdbRecord) { DARABONBA_PTR_SET_VALUE(enableAdbRecord_, enableAdbRecord) };


    // enableRecord Field Functions 
    bool hasEnableRecord() const { return this->enableRecord_ != nullptr;};
    void deleteEnableRecord() { this->enableRecord_ = nullptr;};
    inline bool enableRecord() const { DARABONBA_PTR_GET_DEFAULT(enableRecord_, false) };
    inline GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& setEnableRecord(bool enableRecord) { DARABONBA_PTR_SET_VALUE(enableRecord_, enableRecord) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // storeCode Field Functions 
    bool hasStoreCode() const { return this->storeCode_ != nullptr;};
    void deleteStoreCode() { this->storeCode_ = nullptr;};
    inline string storeCode() const { DARABONBA_PTR_GET_DEFAULT(storeCode_, "") };
    inline GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig& setStoreCode(string storeCode) { DARABONBA_PTR_SET_VALUE(storeCode_, storeCode) };


  protected:
    std::shared_ptr<bool> enableAdbRecord_ = nullptr;
    std::shared_ptr<bool> enableRecord_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> storeCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
