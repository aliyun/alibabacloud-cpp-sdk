// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/IndexKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(renames, renames_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(renames, renames_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateDatasetRequest() = default ;
    UpdateDatasetRequest(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest(UpdateDatasetRequest &&) = default ;
    UpdateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequest() = default ;
    UpdateDatasetRequest& operator=(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest& operator=(UpdateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Renames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Renames& obj) { 
        DARABONBA_PTR_TO_JSON(newName, newName_);
        DARABONBA_PTR_TO_JSON(oldName, oldName_);
      };
      friend void from_json(const Darabonba::Json& j, Renames& obj) { 
        DARABONBA_PTR_FROM_JSON(newName, newName_);
        DARABONBA_PTR_FROM_JSON(oldName, oldName_);
      };
      Renames() = default ;
      Renames(const Renames &) = default ;
      Renames(Renames &&) = default ;
      Renames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Renames() = default ;
      Renames& operator=(const Renames &) = default ;
      Renames& operator=(Renames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->newName_ == nullptr
        && this->oldName_ == nullptr; };
      // newName Field Functions 
      bool hasNewName() const { return this->newName_ != nullptr;};
      void deleteNewName() { this->newName_ = nullptr;};
      inline string getNewName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
      inline Renames& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


      // oldName Field Functions 
      bool hasOldName() const { return this->oldName_ != nullptr;};
      void deleteOldName() { this->oldName_ = nullptr;};
      inline string getOldName() const { DARABONBA_PTR_GET_DEFAULT(oldName_, "") };
      inline Renames& setOldName(string oldName) { DARABONBA_PTR_SET_VALUE(oldName_, oldName) };


    protected:
      // The new field name.
      shared_ptr<string> newName_ {};
      // The original field name.
      shared_ptr<string> oldName_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->renames_ == nullptr && this->schema_ == nullptr && this->clientToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDatasetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // renames Field Functions 
    bool hasRenames() const { return this->renames_ != nullptr;};
    void deleteRenames() { this->renames_ = nullptr;};
    inline const vector<UpdateDatasetRequest::Renames> & getRenames() const { DARABONBA_PTR_GET_CONST(renames_, vector<UpdateDatasetRequest::Renames>) };
    inline vector<UpdateDatasetRequest::Renames> getRenames() { DARABONBA_PTR_GET(renames_, vector<UpdateDatasetRequest::Renames>) };
    inline UpdateDatasetRequest& setRenames(const vector<UpdateDatasetRequest::Renames> & renames) { DARABONBA_PTR_SET_VALUE(renames_, renames) };
    inline UpdateDatasetRequest& setRenames(vector<UpdateDatasetRequest::Renames> && renames) { DARABONBA_PTR_SET_RVALUE(renames_, renames) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const map<string, IndexKey> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, map<string, IndexKey>) };
    inline map<string, IndexKey> getSchema() { DARABONBA_PTR_GET(schema_, map<string, IndexKey>) };
    inline UpdateDatasetRequest& setSchema(const map<string, IndexKey> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline UpdateDatasetRequest& setSchema(map<string, IndexKey> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateDatasetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The description of the dataset.
    shared_ptr<string> description_ {};
    // The field renames for the dataset.
    shared_ptr<vector<UpdateDatasetRequest::Renames>> renames_ {};
    // The table schema of the dataset.
    shared_ptr<map<string, IndexKey>> schema_ {};
    // The idempotency token. A unique string generated by the client to ensure that the update operation is idempotent.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
