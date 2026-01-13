// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENGINECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENGINECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListEngineConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEngineConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEngineConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEngineConfigsResponseBody() = default ;
    ListEngineConfigsResponseBody(const ListEngineConfigsResponseBody &) = default ;
    ListEngineConfigsResponseBody(ListEngineConfigsResponseBody &&) = default ;
    ListEngineConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEngineConfigsResponseBody() = default ;
    ListEngineConfigsResponseBody& operator=(const ListEngineConfigsResponseBody &) = default ;
    ListEngineConfigsResponseBody& operator=(ListEngineConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EngineConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EngineConfigId, engineConfigId_);
        DARABONBA_PTR_TO_JSON(Environment, environment_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(GmtReleasedTime, gmtReleasedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, EngineConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EngineConfigId, engineConfigId_);
        DARABONBA_PTR_FROM_JSON(Environment, environment_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(GmtReleasedTime, gmtReleasedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      EngineConfigs() = default ;
      EngineConfigs(const EngineConfigs &) = default ;
      EngineConfigs(EngineConfigs &&) = default ;
      EngineConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineConfigs() = default ;
      EngineConfigs& operator=(const EngineConfigs &) = default ;
      EngineConfigs& operator=(EngineConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configValue_ == nullptr
        && this->description_ == nullptr && this->engineConfigId_ == nullptr && this->environment_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->gmtReleasedTime_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
      // configValue Field Functions 
      bool hasConfigValue() const { return this->configValue_ != nullptr;};
      void deleteConfigValue() { this->configValue_ = nullptr;};
      inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
      inline EngineConfigs& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EngineConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // engineConfigId Field Functions 
      bool hasEngineConfigId() const { return this->engineConfigId_ != nullptr;};
      void deleteEngineConfigId() { this->engineConfigId_ = nullptr;};
      inline string getEngineConfigId() const { DARABONBA_PTR_GET_DEFAULT(engineConfigId_, "") };
      inline EngineConfigs& setEngineConfigId(string engineConfigId) { DARABONBA_PTR_SET_VALUE(engineConfigId_, engineConfigId) };


      // environment Field Functions 
      bool hasEnvironment() const { return this->environment_ != nullptr;};
      void deleteEnvironment() { this->environment_ = nullptr;};
      inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
      inline EngineConfigs& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline EngineConfigs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline EngineConfigs& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // gmtReleasedTime Field Functions 
      bool hasGmtReleasedTime() const { return this->gmtReleasedTime_ != nullptr;};
      void deleteGmtReleasedTime() { this->gmtReleasedTime_ = nullptr;};
      inline string getGmtReleasedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtReleasedTime_, "") };
      inline EngineConfigs& setGmtReleasedTime(string gmtReleasedTime) { DARABONBA_PTR_SET_VALUE(gmtReleasedTime_, gmtReleasedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EngineConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EngineConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline EngineConfigs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> configValue_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> engineConfigId_ {};
      shared_ptr<string> environment_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> gmtReleasedTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->engineConfigs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // engineConfigs Field Functions 
    bool hasEngineConfigs() const { return this->engineConfigs_ != nullptr;};
    void deleteEngineConfigs() { this->engineConfigs_ = nullptr;};
    inline const vector<ListEngineConfigsResponseBody::EngineConfigs> & getEngineConfigs() const { DARABONBA_PTR_GET_CONST(engineConfigs_, vector<ListEngineConfigsResponseBody::EngineConfigs>) };
    inline vector<ListEngineConfigsResponseBody::EngineConfigs> getEngineConfigs() { DARABONBA_PTR_GET(engineConfigs_, vector<ListEngineConfigsResponseBody::EngineConfigs>) };
    inline ListEngineConfigsResponseBody& setEngineConfigs(const vector<ListEngineConfigsResponseBody::EngineConfigs> & engineConfigs) { DARABONBA_PTR_SET_VALUE(engineConfigs_, engineConfigs) };
    inline ListEngineConfigsResponseBody& setEngineConfigs(vector<ListEngineConfigsResponseBody::EngineConfigs> && engineConfigs) { DARABONBA_PTR_SET_RVALUE(engineConfigs_, engineConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEngineConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEngineConfigsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListEngineConfigsResponseBody::EngineConfigs>> engineConfigs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
