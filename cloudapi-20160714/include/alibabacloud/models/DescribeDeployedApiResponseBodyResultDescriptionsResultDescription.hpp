// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYRESULTDESCRIPTIONSRESULTDESCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYRESULTDESCRIPTIONSRESULTDESCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyResultDescriptionsResultDescription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HasChild, hasChild_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Mandatory, mandatory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HasChild, hasChild_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Mandatory, mandatory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDeployedApiResponseBodyResultDescriptionsResultDescription() = default ;
    DescribeDeployedApiResponseBodyResultDescriptionsResultDescription(const DescribeDeployedApiResponseBodyResultDescriptionsResultDescription &) = default ;
    DescribeDeployedApiResponseBodyResultDescriptionsResultDescription(DescribeDeployedApiResponseBodyResultDescriptionsResultDescription &&) = default ;
    DescribeDeployedApiResponseBodyResultDescriptionsResultDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyResultDescriptionsResultDescription() = default ;
    DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& operator=(const DescribeDeployedApiResponseBodyResultDescriptionsResultDescription &) = default ;
    DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& operator=(DescribeDeployedApiResponseBodyResultDescriptionsResultDescription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->hasChild_ == nullptr && return this->id_ == nullptr && return this->key_ == nullptr && return this->mandatory_ == nullptr && return this->name_ == nullptr
        && return this->pid_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hasChild Field Functions 
    bool hasHasChild() const { return this->hasChild_ != nullptr;};
    void deleteHasChild() { this->hasChild_ = nullptr;};
    inline bool hasChild() const { DARABONBA_PTR_GET_DEFAULT(hasChild_, false) };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setHasChild(bool hasChild) { DARABONBA_PTR_SET_VALUE(hasChild_, hasChild) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // mandatory Field Functions 
    bool hasMandatory() const { return this->mandatory_ != nullptr;};
    void deleteMandatory() { this->mandatory_ = nullptr;};
    inline bool mandatory() const { DARABONBA_PTR_GET_DEFAULT(mandatory_, false) };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setMandatory(bool mandatory) { DARABONBA_PTR_SET_VALUE(mandatory_, mandatory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDeployedApiResponseBodyResultDescriptionsResultDescription& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether a subnode exists.
    std::shared_ptr<bool> hasChild_ = nullptr;
    // The ID of the result.
    std::shared_ptr<string> id_ = nullptr;
    // The primary key of the result.
    std::shared_ptr<string> key_ = nullptr;
    // Specifies whether the parameter is required.
    std::shared_ptr<bool> mandatory_ = nullptr;
    // The name of the result.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the parent node.
    std::shared_ptr<string> pid_ = nullptr;
    // The type of the result.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
