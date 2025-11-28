// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROADCASTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_BROADCASTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TemplateVariable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class BroadcastTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BroadcastTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, BroadcastTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    BroadcastTemplate() = default ;
    BroadcastTemplate(const BroadcastTemplate &) = default ;
    BroadcastTemplate(BroadcastTemplate &&) = default ;
    BroadcastTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BroadcastTemplate() = default ;
    BroadcastTemplate& operator=(const BroadcastTemplate &) = default ;
    BroadcastTemplate& operator=(BroadcastTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->id_ == nullptr && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->variables_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BroadcastTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BroadcastTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline BroadcastTemplate& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BroadcastTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<TemplateVariable> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<TemplateVariable>) };
    inline vector<TemplateVariable> variables() { DARABONBA_PTR_GET(variables_, vector<TemplateVariable>) };
    inline BroadcastTemplate& setVariables(const vector<TemplateVariable> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline BroadcastTemplate& setVariables(vector<TemplateVariable> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<TemplateVariable>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
