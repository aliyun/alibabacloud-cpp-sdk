// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetShareRelationship.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(MountAccessReadWriteRoleIdList, mountAccessReadWriteRoleIdList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(SharingConfig, sharingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(MountAccessReadWriteRoleIdList, mountAccessReadWriteRoleIdList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(SharingConfig, sharingConfig_);
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
    class SharingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SharedTo, sharedTo_);
      };
      friend void from_json(const Darabonba::Json& j, SharingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SharedTo, sharedTo_);
      };
      SharingConfig() = default ;
      SharingConfig(const SharingConfig &) = default ;
      SharingConfig(SharingConfig &&) = default ;
      SharingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharingConfig() = default ;
      SharingConfig& operator=(const SharingConfig &) = default ;
      SharingConfig& operator=(SharingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sharedTo_ == nullptr; };
      // sharedTo Field Functions 
      bool hasSharedTo() const { return this->sharedTo_ != nullptr;};
      void deleteSharedTo() { this->sharedTo_ = nullptr;};
      inline const vector<DatasetShareRelationship> & getSharedTo() const { DARABONBA_PTR_GET_CONST(sharedTo_, vector<DatasetShareRelationship>) };
      inline vector<DatasetShareRelationship> getSharedTo() { DARABONBA_PTR_GET(sharedTo_, vector<DatasetShareRelationship>) };
      inline SharingConfig& setSharedTo(const vector<DatasetShareRelationship> & sharedTo) { DARABONBA_PTR_SET_VALUE(sharedTo_, sharedTo) };
      inline SharingConfig& setSharedTo(vector<DatasetShareRelationship> && sharedTo) { DARABONBA_PTR_SET_RVALUE(sharedTo_, sharedTo) };


    protected:
      shared_ptr<vector<DatasetShareRelationship>> sharedTo_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->edition_ == nullptr && this->mountAccessReadWriteRoleIdList_ == nullptr && this->name_ == nullptr && this->options_ == nullptr && this->sharingConfig_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDatasetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline UpdateDatasetRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // mountAccessReadWriteRoleIdList Field Functions 
    bool hasMountAccessReadWriteRoleIdList() const { return this->mountAccessReadWriteRoleIdList_ != nullptr;};
    void deleteMountAccessReadWriteRoleIdList() { this->mountAccessReadWriteRoleIdList_ = nullptr;};
    inline const vector<string> & getMountAccessReadWriteRoleIdList() const { DARABONBA_PTR_GET_CONST(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline vector<string> getMountAccessReadWriteRoleIdList() { DARABONBA_PTR_GET(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline UpdateDatasetRequest& setMountAccessReadWriteRoleIdList(const vector<string> & mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_VALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };
    inline UpdateDatasetRequest& setMountAccessReadWriteRoleIdList(vector<string> && mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_RVALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDatasetRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateDatasetRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // sharingConfig Field Functions 
    bool hasSharingConfig() const { return this->sharingConfig_ != nullptr;};
    void deleteSharingConfig() { this->sharingConfig_ = nullptr;};
    inline const UpdateDatasetRequest::SharingConfig & getSharingConfig() const { DARABONBA_PTR_GET_CONST(sharingConfig_, UpdateDatasetRequest::SharingConfig) };
    inline UpdateDatasetRequest::SharingConfig getSharingConfig() { DARABONBA_PTR_GET(sharingConfig_, UpdateDatasetRequest::SharingConfig) };
    inline UpdateDatasetRequest& setSharingConfig(const UpdateDatasetRequest::SharingConfig & sharingConfig) { DARABONBA_PTR_SET_VALUE(sharingConfig_, sharingConfig) };
    inline UpdateDatasetRequest& setSharingConfig(UpdateDatasetRequest::SharingConfig && sharingConfig) { DARABONBA_PTR_SET_RVALUE(sharingConfig_, sharingConfig) };


  protected:
    // The description of the dataset.
    shared_ptr<string> description_ {};
    shared_ptr<string> edition_ {};
    // The list of role names in the workspace that have read and write permissions on the mounted database. The names starting with PAI are basic role names, and the names starting with role- are custom role names. If the list contains asterisks (\\*), all roles have read and write permissions.
    // 
    // *   If you set the value to ["PAI.AlgoOperator", "role-hiuwpd01ncrokkgp21"], the account of the specified role is granted the read and write permissions.
    // *   If you set the value to ["\\*"], all accounts are granted the read and write permissions.
    // *   If you set the value to [], only the creator of the dataset has the read and write permissions.
    shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ {};
    // The dataset name. You can call [ListDatasets](https://help.aliyun.com/document_detail/457222.html) to obtain the dataset name.
    shared_ptr<string> name_ {};
    // The extended field, which is a JSON string. When you use the dataset in Deep Learning Containers (DLC), you can set mountPath to specify the default mount path of the dataset.
    shared_ptr<string> options_ {};
    shared_ptr<UpdateDatasetRequest::SharingConfig> sharingConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
