// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class CreateAccessConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfiguration, accessConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfiguration, accessConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccessConfigurationResponseBody() = default ;
    CreateAccessConfigurationResponseBody(const CreateAccessConfigurationResponseBody &) = default ;
    CreateAccessConfigurationResponseBody(CreateAccessConfigurationResponseBody &&) = default ;
    CreateAccessConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessConfigurationResponseBody() = default ;
    CreateAccessConfigurationResponseBody& operator=(const CreateAccessConfigurationResponseBody &) = default ;
    CreateAccessConfigurationResponseBody& operator=(CreateAccessConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RelayState, relayState_);
        DARABONBA_PTR_TO_JSON(SessionDuration, sessionDuration_);
        DARABONBA_PTR_TO_JSON(StatusNotifications, statusNotifications_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AccessConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RelayState, relayState_);
        DARABONBA_PTR_FROM_JSON(SessionDuration, sessionDuration_);
        DARABONBA_PTR_FROM_JSON(StatusNotifications, statusNotifications_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AccessConfiguration() = default ;
      AccessConfiguration(const AccessConfiguration &) = default ;
      AccessConfiguration(AccessConfiguration &&) = default ;
      AccessConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessConfiguration() = default ;
      AccessConfiguration& operator=(const AccessConfiguration &) = default ;
      AccessConfiguration& operator=(AccessConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->accessConfigurationName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->relayState_ == nullptr && this->sessionDuration_ == nullptr
        && this->statusNotifications_ == nullptr && this->tags_ == nullptr && this->updateTime_ == nullptr; };
      // accessConfigurationId Field Functions 
      bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
      void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
      inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
      inline AccessConfiguration& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


      // accessConfigurationName Field Functions 
      bool hasAccessConfigurationName() const { return this->accessConfigurationName_ != nullptr;};
      void deleteAccessConfigurationName() { this->accessConfigurationName_ = nullptr;};
      inline string getAccessConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationName_, "") };
      inline AccessConfiguration& setAccessConfigurationName(string accessConfigurationName) { DARABONBA_PTR_SET_VALUE(accessConfigurationName_, accessConfigurationName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessConfiguration& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AccessConfiguration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // relayState Field Functions 
      bool hasRelayState() const { return this->relayState_ != nullptr;};
      void deleteRelayState() { this->relayState_ = nullptr;};
      inline string getRelayState() const { DARABONBA_PTR_GET_DEFAULT(relayState_, "") };
      inline AccessConfiguration& setRelayState(string relayState) { DARABONBA_PTR_SET_VALUE(relayState_, relayState) };


      // sessionDuration Field Functions 
      bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
      void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
      inline int32_t getSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, 0) };
      inline AccessConfiguration& setSessionDuration(int32_t sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


      // statusNotifications Field Functions 
      bool hasStatusNotifications() const { return this->statusNotifications_ != nullptr;};
      void deleteStatusNotifications() { this->statusNotifications_ = nullptr;};
      inline const vector<string> & getStatusNotifications() const { DARABONBA_PTR_GET_CONST(statusNotifications_, vector<string>) };
      inline vector<string> getStatusNotifications() { DARABONBA_PTR_GET(statusNotifications_, vector<string>) };
      inline AccessConfiguration& setStatusNotifications(const vector<string> & statusNotifications) { DARABONBA_PTR_SET_VALUE(statusNotifications_, statusNotifications) };
      inline AccessConfiguration& setStatusNotifications(vector<string> && statusNotifications) { DARABONBA_PTR_SET_RVALUE(statusNotifications_, statusNotifications) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AccessConfiguration::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AccessConfiguration::Tags>) };
      inline vector<AccessConfiguration::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AccessConfiguration::Tags>) };
      inline AccessConfiguration& setTags(const vector<AccessConfiguration::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AccessConfiguration& setTags(vector<AccessConfiguration::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AccessConfiguration& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the access configuration.
      shared_ptr<string> accessConfigurationId_ {};
      // The name of the access configuration.
      shared_ptr<string> accessConfigurationName_ {};
      // The time when the access configuration was created.
      shared_ptr<string> createTime_ {};
      // The description of the access configuration.
      shared_ptr<string> description_ {};
      // The initial access page.
      // 
      // The page address that a CloudSSO user initially accesses when using the access configuration to access an account in a resource directory.
      shared_ptr<string> relayState_ {};
      // The session duration.
      // 
      // The maximum duration of a session when a CloudSSO user uses the access configuration to access an account in a resource directory.
      // 
      // Unit: seconds.
      shared_ptr<int32_t> sessionDuration_ {};
      // The status notification information.
      shared_ptr<vector<string>> statusNotifications_ {};
      // The list of tags.
      shared_ptr<vector<AccessConfiguration::Tags>> tags_ {};
      // The time when the access configuration was last modified.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->accessConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // accessConfiguration Field Functions 
    bool hasAccessConfiguration() const { return this->accessConfiguration_ != nullptr;};
    void deleteAccessConfiguration() { this->accessConfiguration_ = nullptr;};
    inline const CreateAccessConfigurationResponseBody::AccessConfiguration & getAccessConfiguration() const { DARABONBA_PTR_GET_CONST(accessConfiguration_, CreateAccessConfigurationResponseBody::AccessConfiguration) };
    inline CreateAccessConfigurationResponseBody::AccessConfiguration getAccessConfiguration() { DARABONBA_PTR_GET(accessConfiguration_, CreateAccessConfigurationResponseBody::AccessConfiguration) };
    inline CreateAccessConfigurationResponseBody& setAccessConfiguration(const CreateAccessConfigurationResponseBody::AccessConfiguration & accessConfiguration) { DARABONBA_PTR_SET_VALUE(accessConfiguration_, accessConfiguration) };
    inline CreateAccessConfigurationResponseBody& setAccessConfiguration(CreateAccessConfigurationResponseBody::AccessConfiguration && accessConfiguration) { DARABONBA_PTR_SET_RVALUE(accessConfiguration_, accessConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccessConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access configuration information.
    shared_ptr<CreateAccessConfigurationResponseBody::AccessConfiguration> accessConfiguration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
