// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDNADBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDNADBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateDNADBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDNADBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBRegion, DBRegion_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDNADBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBRegion, DBRegion_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
    };
    CreateDNADBRequest() = default ;
    CreateDNADBRequest(const CreateDNADBRequest &) = default ;
    CreateDNADBRequest(CreateDNADBRequest &&) = default ;
    CreateDNADBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDNADBRequest() = default ;
    CreateDNADBRequest& operator=(const CreateDNADBRequest &) = default ;
    CreateDNADBRequest& operator=(CreateDNADBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->DBDescription_ != nullptr && this->DBName_ != nullptr && this->DBRegion_ != nullptr && this->DBType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDNADBRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBDescription Field Functions 
    bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
    void deleteDBDescription() { this->DBDescription_ = nullptr;};
    inline string DBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
    inline CreateDNADBRequest& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateDNADBRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBRegion Field Functions 
    bool hasDBRegion() const { return this->DBRegion_ != nullptr;};
    void deleteDBRegion() { this->DBRegion_ = nullptr;};
    inline string DBRegion() const { DARABONBA_PTR_GET_DEFAULT(DBRegion_, "") };
    inline CreateDNADBRequest& setDBRegion(string DBRegion) { DARABONBA_PTR_SET_VALUE(DBRegion_, DBRegion) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline CreateDNADBRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBRegion_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
