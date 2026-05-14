// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateExternalDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(defaultUserMapping, defaultUserMapping_);
      DARABONBA_PTR_TO_JSON(externalConfig, externalConfig_);
      DARABONBA_PTR_TO_JSON(metastoreType, metastoreType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(defaultUserMapping, defaultUserMapping_);
      DARABONBA_PTR_FROM_JSON(externalConfig, externalConfig_);
      DARABONBA_PTR_FROM_JSON(metastoreType, metastoreType_);
    };
    CreateExternalDatabaseRequest() = default ;
    CreateExternalDatabaseRequest(const CreateExternalDatabaseRequest &) = default ;
    CreateExternalDatabaseRequest(CreateExternalDatabaseRequest &&) = default ;
    CreateExternalDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalDatabaseRequest() = default ;
    CreateExternalDatabaseRequest& operator=(const CreateExternalDatabaseRequest &) = default ;
    CreateExternalDatabaseRequest& operator=(CreateExternalDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExternalConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExternalConfig& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ExternalConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      ExternalConfig() = default ;
      ExternalConfig(const ExternalConfig &) = default ;
      ExternalConfig(ExternalConfig &&) = default ;
      ExternalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExternalConfig() = default ;
      ExternalConfig& operator=(const ExternalConfig &) = default ;
      ExternalConfig& operator=(ExternalConfig &&) = default ;
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
      inline ExternalConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ExternalConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->databaseName_ == nullptr && this->defaultUserMapping_ == nullptr && this->externalConfig_ == nullptr && this->metastoreType_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateExternalDatabaseRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CreateExternalDatabaseRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // defaultUserMapping Field Functions 
    bool hasDefaultUserMapping() const { return this->defaultUserMapping_ != nullptr;};
    void deleteDefaultUserMapping() { this->defaultUserMapping_ = nullptr;};
    inline string getDefaultUserMapping() const { DARABONBA_PTR_GET_DEFAULT(defaultUserMapping_, "") };
    inline CreateExternalDatabaseRequest& setDefaultUserMapping(string defaultUserMapping) { DARABONBA_PTR_SET_VALUE(defaultUserMapping_, defaultUserMapping) };


    // externalConfig Field Functions 
    bool hasExternalConfig() const { return this->externalConfig_ != nullptr;};
    void deleteExternalConfig() { this->externalConfig_ = nullptr;};
    inline const vector<CreateExternalDatabaseRequest::ExternalConfig> & getExternalConfig() const { DARABONBA_PTR_GET_CONST(externalConfig_, vector<CreateExternalDatabaseRequest::ExternalConfig>) };
    inline vector<CreateExternalDatabaseRequest::ExternalConfig> getExternalConfig() { DARABONBA_PTR_GET(externalConfig_, vector<CreateExternalDatabaseRequest::ExternalConfig>) };
    inline CreateExternalDatabaseRequest& setExternalConfig(const vector<CreateExternalDatabaseRequest::ExternalConfig> & externalConfig) { DARABONBA_PTR_SET_VALUE(externalConfig_, externalConfig) };
    inline CreateExternalDatabaseRequest& setExternalConfig(vector<CreateExternalDatabaseRequest::ExternalConfig> && externalConfig) { DARABONBA_PTR_SET_RVALUE(externalConfig_, externalConfig) };


    // metastoreType Field Functions 
    bool hasMetastoreType() const { return this->metastoreType_ != nullptr;};
    void deleteMetastoreType() { this->metastoreType_ = nullptr;};
    inline string getMetastoreType() const { DARABONBA_PTR_GET_DEFAULT(metastoreType_, "") };
    inline CreateExternalDatabaseRequest& setMetastoreType(string metastoreType) { DARABONBA_PTR_SET_VALUE(metastoreType_, metastoreType) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<string> databaseName_ {};
    shared_ptr<string> defaultUserMapping_ {};
    shared_ptr<vector<CreateExternalDatabaseRequest::ExternalConfig>> externalConfig_ {};
    shared_ptr<string> metastoreType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
