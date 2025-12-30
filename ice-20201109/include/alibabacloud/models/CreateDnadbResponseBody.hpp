// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDNADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDNADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateDNADBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDNADBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInfo, DBInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDNADBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInfo, DBInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDNADBResponseBody() = default ;
    CreateDNADBResponseBody(const CreateDNADBResponseBody &) = default ;
    CreateDNADBResponseBody(CreateDNADBResponseBody &&) = default ;
    CreateDNADBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDNADBResponseBody() = default ;
    CreateDNADBResponseBody& operator=(const CreateDNADBResponseBody &) = default ;
    CreateDNADBResponseBody& operator=(CreateDNADBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DBId, DBId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DBInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DBId, DBId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DBInfo() = default ;
      DBInfo(const DBInfo &) = default ;
      DBInfo(DBInfo &&) = default ;
      DBInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInfo() = default ;
      DBInfo& operator=(const DBInfo &) = default ;
      DBInfo& operator=(DBInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBId_ == nullptr
        && this->description_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
      // DBId Field Functions 
      bool hasDBId() const { return this->DBId_ != nullptr;};
      void deleteDBId() { this->DBId_ = nullptr;};
      inline string getDBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
      inline DBInfo& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DBInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline DBInfo& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DBInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DBInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the media fingerprint library. We recommend that you save this ID for subsequent calls of other operations.
      shared_ptr<string> DBId_ {};
      // The description of the media fingerprint library.
      shared_ptr<string> description_ {};
      // The model of the media fingerprint library.
      shared_ptr<string> model_ {};
      // The name of the media fingerprint library.
      shared_ptr<string> name_ {};
      // The state of the media fingerprint library. After a media fingerprint library is created, it enters the offline state. After the media fingerprint library is processed at the backend, it enters the active state.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->DBInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // DBInfo Field Functions 
    bool hasDBInfo() const { return this->DBInfo_ != nullptr;};
    void deleteDBInfo() { this->DBInfo_ = nullptr;};
    inline const CreateDNADBResponseBody::DBInfo & getDBInfo() const { DARABONBA_PTR_GET_CONST(DBInfo_, CreateDNADBResponseBody::DBInfo) };
    inline CreateDNADBResponseBody::DBInfo getDBInfo() { DARABONBA_PTR_GET(DBInfo_, CreateDNADBResponseBody::DBInfo) };
    inline CreateDNADBResponseBody& setDBInfo(const CreateDNADBResponseBody::DBInfo & dBInfo) { DARABONBA_PTR_SET_VALUE(DBInfo_, dBInfo) };
    inline CreateDNADBResponseBody& setDBInfo(CreateDNADBResponseBody::DBInfo && dBInfo) { DARABONBA_PTR_SET_RVALUE(DBInfo_, dBInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDNADBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media fingerprint library.
    shared_ptr<CreateDNADBResponseBody::DBInfo> DBInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
