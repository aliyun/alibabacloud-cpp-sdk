// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODYDIGITALEMPLOYEES_HPP_
#define ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODYDIGITALEMPLOYEES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDigitalEmployeesResponseBodyDigitalEmployees : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDigitalEmployeesResponseBodyDigitalEmployees& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(knowledges, knowledges_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDigitalEmployeesResponseBodyDigitalEmployees& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(knowledges, knowledges_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListDigitalEmployeesResponseBodyDigitalEmployees() = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployees(const ListDigitalEmployeesResponseBodyDigitalEmployees &) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployees(ListDigitalEmployeesResponseBodyDigitalEmployees &&) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployees(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDigitalEmployeesResponseBodyDigitalEmployees() = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployees& operator=(const ListDigitalEmployeesResponseBodyDigitalEmployees &) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployees& operator=(ListDigitalEmployeesResponseBodyDigitalEmployees &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->defaultRule_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->knowledges_ == nullptr && return this->name_ == nullptr
        && return this->roleArn_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline string defaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setDefaultRule(string defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // knowledges Field Functions 
    bool hasKnowledges() const { return this->knowledges_ != nullptr;};
    void deleteKnowledges() { this->knowledges_ = nullptr;};
    inline const Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges & knowledges() const { DARABONBA_PTR_GET_CONST(knowledges_, Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges) };
    inline Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges knowledges() { DARABONBA_PTR_GET(knowledges_, Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges) };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setKnowledges(const Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges & knowledges) { DARABONBA_PTR_SET_VALUE(knowledges_, knowledges) };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setKnowledges(Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges && knowledges) { DARABONBA_PTR_SET_RVALUE(knowledges_, knowledges) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployees& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> defaultRule_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges> knowledges_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
