// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELGROUPDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELGROUPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelGroupDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelGroupDTO& obj) { 
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(modelCount, modelCount_);
      DARABONBA_PTR_TO_JSON(modelList, modelList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelGroupDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(modelCount, modelCount_);
      DARABONBA_PTR_FROM_JSON(modelList, modelList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelGroupDTO() = default ;
    ModelGroupDTO(const ModelGroupDTO &) = default ;
    ModelGroupDTO(ModelGroupDTO &&) = default ;
    ModelGroupDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelGroupDTO() = default ;
    ModelGroupDTO& operator=(const ModelGroupDTO &) = default ;
    ModelGroupDTO& operator=(ModelGroupDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->groupId_ == nullptr && this->modelCount_ == nullptr && this->modelList_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ModelGroupDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ModelGroupDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModelGroupDTO& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modelCount Field Functions 
    bool hasModelCount() const { return this->modelCount_ != nullptr;};
    void deleteModelCount() { this->modelCount_ = nullptr;};
    inline int32_t getModelCount() const { DARABONBA_PTR_GET_DEFAULT(modelCount_, 0) };
    inline ModelGroupDTO& setModelCount(int32_t modelCount) { DARABONBA_PTR_SET_VALUE(modelCount_, modelCount) };


    // modelList Field Functions 
    bool hasModelList() const { return this->modelList_ != nullptr;};
    void deleteModelList() { this->modelList_ = nullptr;};
    inline const vector<int64_t> & getModelList() const { DARABONBA_PTR_GET_CONST(modelList_, vector<int64_t>) };
    inline vector<int64_t> getModelList() { DARABONBA_PTR_GET(modelList_, vector<int64_t>) };
    inline ModelGroupDTO& setModelList(const vector<int64_t> & modelList) { DARABONBA_PTR_SET_VALUE(modelList_, modelList) };
    inline ModelGroupDTO& setModelList(vector<int64_t> && modelList) { DARABONBA_PTR_SET_RVALUE(modelList_, modelList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelGroupDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelGroupDTO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int32_t> modelCount_ {};
    shared_ptr<vector<int64_t>> modelList_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
