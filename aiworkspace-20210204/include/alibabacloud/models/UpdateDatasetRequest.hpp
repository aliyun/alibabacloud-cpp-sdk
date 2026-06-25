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
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AccessibleRoleIdList, accessibleRoleIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(MountAccessReadWriteRoleIdList, mountAccessReadWriteRoleIdList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(SharingConfig, sharingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AccessibleRoleIdList, accessibleRoleIdList_);
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
      // The sharing relationships of the dataset.
      shared_ptr<vector<DatasetShareRelationship>> sharedTo_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->accessibleRoleIdList_ == nullptr && this->description_ == nullptr && this->edition_ == nullptr && this->mountAccessReadWriteRoleIdList_ == nullptr && this->name_ == nullptr
        && this->options_ == nullptr && this->sharingConfig_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateDatasetRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // accessibleRoleIdList Field Functions 
    bool hasAccessibleRoleIdList() const { return this->accessibleRoleIdList_ != nullptr;};
    void deleteAccessibleRoleIdList() { this->accessibleRoleIdList_ = nullptr;};
    inline const vector<string> & getAccessibleRoleIdList() const { DARABONBA_PTR_GET_CONST(accessibleRoleIdList_, vector<string>) };
    inline vector<string> getAccessibleRoleIdList() { DARABONBA_PTR_GET(accessibleRoleIdList_, vector<string>) };
    inline UpdateDatasetRequest& setAccessibleRoleIdList(const vector<string> & accessibleRoleIdList) { DARABONBA_PTR_SET_VALUE(accessibleRoleIdList_, accessibleRoleIdList) };
    inline UpdateDatasetRequest& setAccessibleRoleIdList(vector<string> && accessibleRoleIdList) { DARABONBA_PTR_SET_RVALUE(accessibleRoleIdList_, accessibleRoleIdList) };


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
    // The visibility of the dataset in the workspace. Valid values:
    // 
    // - `PRIVATE` (default): The dataset is visible only to its owner and administrators.
    // 
    // - `PUBLIC`: The dataset is visible to all users in the workspace.
    // 
    // - `ROLE_PUBLIC`: The dataset is visible to users in specific workspace roles. You must specify the roles in the `AccessibleRoleIdList` parameter. The dataset owner and administrators can always view the dataset.
    shared_ptr<string> accessibility_ {};
    // This parameter takes effect only when `Accessibility` is set to `ROLE_PUBLIC`. It specifies the list of workspace roles that can view the dataset. Role IDs that start with `PAI` are basic role IDs, and role IDs that start with `role-` are custom role IDs.
    shared_ptr<vector<string>> accessibleRoleIdList_ {};
    // The description of the dataset.
    shared_ptr<string> description_ {};
    // The dataset edition. You can upgrade a dataset from `BASIC` to `ADVANCED`.
    shared_ptr<string> edition_ {};
    // A list of workspace roles that have read and write permissions on the mounted dataset. Role IDs that start with `PAI` are basic role IDs, and role IDs that start with `role-` are custom role IDs. If the list contains an asterisk (`*`), all roles are granted read and write permissions.
    // 
    // - To specify roles: ["PAI.AlgoOperator", "role-hiuwpd01ncrokkgp21"]
    // 
    // - To specify all roles: ["\\*"]
    // 
    // - To specify only the dataset creator: []
    shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ {};
    // The dataset name. For information about how to obtain the dataset name, see [ListDatasets](https://help.aliyun.com/document_detail/457222.html).
    shared_ptr<string> name_ {};
    // An extended field in a JSON string format. When you use the dataset with Data Lake Compute (DLC), you can configure the `mountPath` field to specify the default mount path.
    shared_ptr<string> options_ {};
    // The sharing configuration of the dataset.
    shared_ptr<UpdateDatasetRequest::SharingConfig> sharingConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
