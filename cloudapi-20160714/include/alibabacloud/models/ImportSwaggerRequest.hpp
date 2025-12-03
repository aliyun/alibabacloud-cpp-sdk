// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_ANY_TO_JSON(GlobalCondition, globalCondition_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_ANY_FROM_JSON(GlobalCondition, globalCondition_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ImportSwaggerRequest() = default ;
    ImportSwaggerRequest(const ImportSwaggerRequest &) = default ;
    ImportSwaggerRequest(ImportSwaggerRequest &&) = default ;
    ImportSwaggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerRequest() = default ;
    ImportSwaggerRequest& operator=(const ImportSwaggerRequest &) = default ;
    ImportSwaggerRequest& operator=(ImportSwaggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->dataFormat_ == nullptr && return this->dryRun_ == nullptr && return this->globalCondition_ == nullptr && return this->groupId_ == nullptr && return this->overwrite_ == nullptr
        && return this->securityToken_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ImportSwaggerRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline string dataFormat() const { DARABONBA_PTR_GET_DEFAULT(dataFormat_, "") };
    inline ImportSwaggerRequest& setDataFormat(string dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ImportSwaggerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // globalCondition Field Functions 
    bool hasGlobalCondition() const { return this->globalCondition_ != nullptr;};
    void deleteGlobalCondition() { this->globalCondition_ = nullptr;};
    inline     const Darabonba::Json & globalCondition() const { DARABONBA_GET(globalCondition_) };
    Darabonba::Json & globalCondition() { DARABONBA_GET(globalCondition_) };
    inline ImportSwaggerRequest& setGlobalCondition(const Darabonba::Json & globalCondition) { DARABONBA_SET_VALUE(globalCondition_, globalCondition) };
    inline ImportSwaggerRequest& setGlobalCondition(Darabonba::Json & globalCondition) { DARABONBA_SET_RVALUE(globalCondition_, globalCondition) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ImportSwaggerRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline ImportSwaggerRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ImportSwaggerRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The Swagger text content.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The Swagger text format:
    // 
    // *   json
    // *   yaml
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFormat_ = nullptr;
    // The pre-inspection.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The global conditions.
    Darabonba::Json globalCondition_ = nullptr;
    // The ID of the API group to which the Swagger is imported.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // Specifies whether to overwrite the existing API.
    // 
    // APIs with the same HTTP request type and backend request path are considered the same.
    // 
    // This parameter is required.
    std::shared_ptr<bool> overwrite_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
