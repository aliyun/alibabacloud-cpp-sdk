// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GlobalCondition, globalConditionShrink_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GlobalCondition, globalConditionShrink_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ImportSwaggerShrinkRequest() = default ;
    ImportSwaggerShrinkRequest(const ImportSwaggerShrinkRequest &) = default ;
    ImportSwaggerShrinkRequest(ImportSwaggerShrinkRequest &&) = default ;
    ImportSwaggerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerShrinkRequest() = default ;
    ImportSwaggerShrinkRequest& operator=(const ImportSwaggerShrinkRequest &) = default ;
    ImportSwaggerShrinkRequest& operator=(ImportSwaggerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->dataFormat_ == nullptr && this->dryRun_ == nullptr && this->globalConditionShrink_ == nullptr && this->groupId_ == nullptr && this->overwrite_ == nullptr
        && this->securityToken_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ImportSwaggerShrinkRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline string getDataFormat() const { DARABONBA_PTR_GET_DEFAULT(dataFormat_, "") };
    inline ImportSwaggerShrinkRequest& setDataFormat(string dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ImportSwaggerShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // globalConditionShrink Field Functions 
    bool hasGlobalConditionShrink() const { return this->globalConditionShrink_ != nullptr;};
    void deleteGlobalConditionShrink() { this->globalConditionShrink_ = nullptr;};
    inline string getGlobalConditionShrink() const { DARABONBA_PTR_GET_DEFAULT(globalConditionShrink_, "") };
    inline ImportSwaggerShrinkRequest& setGlobalConditionShrink(string globalConditionShrink) { DARABONBA_PTR_SET_VALUE(globalConditionShrink_, globalConditionShrink) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ImportSwaggerShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline ImportSwaggerShrinkRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ImportSwaggerShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The Swagger text content.
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // The Swagger text format:
    // 
    // *   json
    // *   yaml
    // 
    // This parameter is required.
    shared_ptr<string> dataFormat_ {};
    // The pre-inspection.
    shared_ptr<bool> dryRun_ {};
    // The global conditions.
    shared_ptr<string> globalConditionShrink_ {};
    // The ID of the API group to which the Swagger is imported.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // Specifies whether to overwrite the existing API.
    // 
    // APIs with the same HTTP request type and backend request path are considered the same.
    // 
    // This parameter is required.
    shared_ptr<bool> overwrite_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
