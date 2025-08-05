// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLICYDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_POLICYDETAILINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PolicyDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PolicyDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(classId, classId_);
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, PolicyDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(classId, classId_);
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
    };
    PolicyDetailInfo() = default ;
    PolicyDetailInfo(const PolicyDetailInfo &) = default ;
    PolicyDetailInfo(PolicyDetailInfo &&) = default ;
    PolicyDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PolicyDetailInfo() = default ;
    PolicyDetailInfo& operator=(const PolicyDetailInfo &) = default ;
    PolicyDetailInfo& operator=(PolicyDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classId_ != nullptr
        && this->className_ != nullptr && this->config_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->policyId_ != nullptr; };
    // classId Field Functions 
    bool hasClassId() const { return this->classId_ != nullptr;};
    void deleteClassId() { this->classId_ = nullptr;};
    inline string classId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
    inline PolicyDetailInfo& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline PolicyDetailInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline PolicyDetailInfo& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PolicyDetailInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PolicyDetailInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline PolicyDetailInfo& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    std::shared_ptr<string> classId_ = nullptr;
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
