// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSCONFIGURATIONREQUEST_HPP_
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
  class CreateAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationName, accessConfigurationName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(RelayState, relayState_);
      DARABONBA_PTR_TO_JSON(SessionDuration, sessionDuration_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationName, accessConfigurationName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(RelayState, relayState_);
      DARABONBA_PTR_FROM_JSON(SessionDuration, sessionDuration_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateAccessConfigurationRequest() = default ;
    CreateAccessConfigurationRequest(const CreateAccessConfigurationRequest &) = default ;
    CreateAccessConfigurationRequest(CreateAccessConfigurationRequest &&) = default ;
    CreateAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessConfigurationRequest() = default ;
    CreateAccessConfigurationRequest& operator=(const CreateAccessConfigurationRequest &) = default ;
    CreateAccessConfigurationRequest& operator=(CreateAccessConfigurationRequest &&) = default ;
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

    virtual bool empty() const override { return this->accessConfigurationName_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->relayState_ == nullptr && this->sessionDuration_ == nullptr && this->tags_ == nullptr; };
    // accessConfigurationName Field Functions 
    bool hasAccessConfigurationName() const { return this->accessConfigurationName_ != nullptr;};
    void deleteAccessConfigurationName() { this->accessConfigurationName_ = nullptr;};
    inline string getAccessConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationName_, "") };
    inline CreateAccessConfigurationRequest& setAccessConfigurationName(string accessConfigurationName) { DARABONBA_PTR_SET_VALUE(accessConfigurationName_, accessConfigurationName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAccessConfigurationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // relayState Field Functions 
    bool hasRelayState() const { return this->relayState_ != nullptr;};
    void deleteRelayState() { this->relayState_ = nullptr;};
    inline string getRelayState() const { DARABONBA_PTR_GET_DEFAULT(relayState_, "") };
    inline CreateAccessConfigurationRequest& setRelayState(string relayState) { DARABONBA_PTR_SET_VALUE(relayState_, relayState) };


    // sessionDuration Field Functions 
    bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
    void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
    inline int32_t getSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, 0) };
    inline CreateAccessConfigurationRequest& setSessionDuration(int32_t sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateAccessConfigurationRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateAccessConfigurationRequest::Tags>) };
    inline vector<CreateAccessConfigurationRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateAccessConfigurationRequest::Tags>) };
    inline CreateAccessConfigurationRequest& setTags(const vector<CreateAccessConfigurationRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateAccessConfigurationRequest& setTags(vector<CreateAccessConfigurationRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The name of the access configuration.
    // 
    // Format: contains letters, digits, or hyphens (-).
    // 
    // Length: up to 32 characters.
    shared_ptr<string> accessConfigurationName_ {};
    // The description of the access configuration.
    // 
    // Length: up to 1024 characters.
    shared_ptr<string> description_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The initial access page.
    // 
    // The page address that a CloudSSO user initially accesses when using the access configuration to access an account in a resource directory.
    // 
    // The page must be an Alibaba Cloud Management Console page. Default value: empty, which indicates that the user is redirected to the homepage of the Alibaba Cloud Management Console.
    shared_ptr<string> relayState_ {};
    // The session duration.
    // 
    // The maximum duration of a session when a CloudSSO user uses the access configuration to access an account in a resource directory.
    // 
    // Unit: seconds.
    // 
    // Valid values: 900 to 43200 (15 minutes to 12 hours).
    // 
    // Default value: 3600 (1 hour).
    shared_ptr<int32_t> sessionDuration_ {};
    // The list of tags.
    shared_ptr<vector<CreateAccessConfigurationRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
