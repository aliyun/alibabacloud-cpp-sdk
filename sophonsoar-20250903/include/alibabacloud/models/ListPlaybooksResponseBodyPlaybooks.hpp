// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYBOOKSRESPONSEBODYPLAYBOOKS_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYBOOKSRESPONSEBODYPLAYBOOKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldInputConfig.hpp>
#include <alibabacloud/models/FieldOutputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListPlaybooksResponseBodyPlaybooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaybooksResponseBodyPlaybooks& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_TO_JSON(PlaybookExtension, playbookExtension_);
      DARABONBA_PTR_TO_JSON(PlaybookInputConfigs, playbookInputConfigs_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
      DARABONBA_PTR_TO_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_TO_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_TO_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaybooksResponseBodyPlaybooks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_FROM_JSON(PlaybookExtension, playbookExtension_);
      DARABONBA_PTR_FROM_JSON(PlaybookInputConfigs, playbookInputConfigs_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
      DARABONBA_PTR_FROM_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_FROM_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_FROM_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListPlaybooksResponseBodyPlaybooks() = default ;
    ListPlaybooksResponseBodyPlaybooks(const ListPlaybooksResponseBodyPlaybooks &) = default ;
    ListPlaybooksResponseBodyPlaybooks(ListPlaybooksResponseBodyPlaybooks &&) = default ;
    ListPlaybooksResponseBodyPlaybooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaybooksResponseBodyPlaybooks() = default ;
    ListPlaybooksResponseBodyPlaybooks& operator=(const ListPlaybooksResponseBodyPlaybooks &) = default ;
    ListPlaybooksResponseBodyPlaybooks& operator=(ListPlaybooksResponseBodyPlaybooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->playbookDescription_ == nullptr && return this->playbookExtension_ == nullptr && return this->playbookInputConfigs_ == nullptr && return this->playbookName_ == nullptr && return this->playbookOutputConfigs_ == nullptr
        && return this->playbookParamType_ == nullptr && return this->playbookStatus_ == nullptr && return this->playbookType_ == nullptr && return this->playbookUuid_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListPlaybooksResponseBodyPlaybooks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // playbookDescription Field Functions 
    bool hasPlaybookDescription() const { return this->playbookDescription_ != nullptr;};
    void deletePlaybookDescription() { this->playbookDescription_ = nullptr;};
    inline string playbookDescription() const { DARABONBA_PTR_GET_DEFAULT(playbookDescription_, "") };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookDescription(string playbookDescription) { DARABONBA_PTR_SET_VALUE(playbookDescription_, playbookDescription) };


    // playbookExtension Field Functions 
    bool hasPlaybookExtension() const { return this->playbookExtension_ != nullptr;};
    void deletePlaybookExtension() { this->playbookExtension_ = nullptr;};
    inline string playbookExtension() const { DARABONBA_PTR_GET_DEFAULT(playbookExtension_, "") };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookExtension(string playbookExtension) { DARABONBA_PTR_SET_VALUE(playbookExtension_, playbookExtension) };


    // playbookInputConfigs Field Functions 
    bool hasPlaybookInputConfigs() const { return this->playbookInputConfigs_ != nullptr;};
    void deletePlaybookInputConfigs() { this->playbookInputConfigs_ = nullptr;};
    inline const vector<Models::FieldInputConfig> & playbookInputConfigs() const { DARABONBA_PTR_GET_CONST(playbookInputConfigs_, vector<Models::FieldInputConfig>) };
    inline vector<Models::FieldInputConfig> playbookInputConfigs() { DARABONBA_PTR_GET(playbookInputConfigs_, vector<Models::FieldInputConfig>) };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookInputConfigs(const vector<Models::FieldInputConfig> & playbookInputConfigs) { DARABONBA_PTR_SET_VALUE(playbookInputConfigs_, playbookInputConfigs) };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookInputConfigs(vector<Models::FieldInputConfig> && playbookInputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookInputConfigs_, playbookInputConfigs) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string playbookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookOutputConfigs Field Functions 
    bool hasPlaybookOutputConfigs() const { return this->playbookOutputConfigs_ != nullptr;};
    void deletePlaybookOutputConfigs() { this->playbookOutputConfigs_ = nullptr;};
    inline const vector<Models::FieldOutputConfig> & playbookOutputConfigs() const { DARABONBA_PTR_GET_CONST(playbookOutputConfigs_, vector<Models::FieldOutputConfig>) };
    inline vector<Models::FieldOutputConfig> playbookOutputConfigs() { DARABONBA_PTR_GET(playbookOutputConfigs_, vector<Models::FieldOutputConfig>) };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookOutputConfigs(const vector<Models::FieldOutputConfig> & playbookOutputConfigs) { DARABONBA_PTR_SET_VALUE(playbookOutputConfigs_, playbookOutputConfigs) };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookOutputConfigs(vector<Models::FieldOutputConfig> && playbookOutputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookOutputConfigs_, playbookOutputConfigs) };


    // playbookParamType Field Functions 
    bool hasPlaybookParamType() const { return this->playbookParamType_ != nullptr;};
    void deletePlaybookParamType() { this->playbookParamType_ = nullptr;};
    inline string playbookParamType() const { DARABONBA_PTR_GET_DEFAULT(playbookParamType_, "") };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookParamType(string playbookParamType) { DARABONBA_PTR_SET_VALUE(playbookParamType_, playbookParamType) };


    // playbookStatus Field Functions 
    bool hasPlaybookStatus() const { return this->playbookStatus_ != nullptr;};
    void deletePlaybookStatus() { this->playbookStatus_ = nullptr;};
    inline int32_t playbookStatus() const { DARABONBA_PTR_GET_DEFAULT(playbookStatus_, 0) };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookStatus(int32_t playbookStatus) { DARABONBA_PTR_SET_VALUE(playbookStatus_, playbookStatus) };


    // playbookType Field Functions 
    bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
    void deletePlaybookType() { this->playbookType_ = nullptr;};
    inline string playbookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ListPlaybooksResponseBodyPlaybooks& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListPlaybooksResponseBodyPlaybooks& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Creation time (in milliseconds).
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Description of the playbook.
    std::shared_ptr<string> playbookDescription_ = nullptr;
    // Extended information of the playbook.
    std::shared_ptr<string> playbookExtension_ = nullptr;
    // List of input parameter configurations for the playbook.
    std::shared_ptr<vector<Models::FieldInputConfig>> playbookInputConfigs_ = nullptr;
    // Name of the playbook.
    std::shared_ptr<string> playbookName_ = nullptr;
    // List of output parameter configurations for the playbook.
    std::shared_ptr<vector<Models::FieldOutputConfig>> playbookOutputConfigs_ = nullptr;
    // The parameter type of the playbook, with values as follows:
    // 
    // - **template-ip**: IP entity.
    // - **template-file**: File entity.
    // - **template-process**: Process entity.
    // - **template-host**: Host entity.
    // - **template-domain**: Domain entity.
    // - **template-container**: Container entity.
    // - **template-incident**: Security incident.
    // - **template-alert**: Security alert.
    // - **custom**: Custom.
    std::shared_ptr<string> playbookParamType_ = nullptr;
    // The publication status of the playbook, with values as follows:
    // 
    // - **0**: Unpublished.
    // - **1**: Published.
    std::shared_ptr<int32_t> playbookStatus_ = nullptr;
    // Type of the playbook, with values as follows:
    // 
    // - **preset**: Predefined playbook.
    // - **user**: Custom playbook.
    // - **component**: Security response component.
    std::shared_ptr<string> playbookType_ = nullptr;
    // UUID of the playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // Update time (in milliseconds).
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
