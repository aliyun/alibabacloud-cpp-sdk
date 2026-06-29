// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAGENTICSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAGENTICSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyAgenticSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAgenticSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgenticSpaceId, agenticSpaceId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAgenticSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgenticSpaceId, agenticSpaceId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    ModifyAgenticSpaceRequest() = default ;
    ModifyAgenticSpaceRequest(const ModifyAgenticSpaceRequest &) = default ;
    ModifyAgenticSpaceRequest(ModifyAgenticSpaceRequest &&) = default ;
    ModifyAgenticSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAgenticSpaceRequest() = default ;
    ModifyAgenticSpaceRequest& operator=(const ModifyAgenticSpaceRequest &) = default ;
    ModifyAgenticSpaceRequest& operator=(ModifyAgenticSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agenticSpaceId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr; };
    // agenticSpaceId Field Functions 
    bool hasAgenticSpaceId() const { return this->agenticSpaceId_ != nullptr;};
    void deleteAgenticSpaceId() { this->agenticSpaceId_ = nullptr;};
    inline string getAgenticSpaceId() const { DARABONBA_PTR_GET_DEFAULT(agenticSpaceId_, "") };
    inline ModifyAgenticSpaceRequest& setAgenticSpaceId(string agenticSpaceId) { DARABONBA_PTR_SET_VALUE(agenticSpaceId_, agenticSpaceId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAgenticSpaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAgenticSpaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyAgenticSpaceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyAgenticSpaceRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // This parameter is required.
    shared_ptr<string> agenticSpaceId_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
