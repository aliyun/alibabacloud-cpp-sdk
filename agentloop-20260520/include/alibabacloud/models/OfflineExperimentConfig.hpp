// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEEXPERIMENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEEXPERIMENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class OfflineExperimentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineExperimentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineExperimentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    OfflineExperimentConfig() = default ;
    OfflineExperimentConfig(const OfflineExperimentConfig &) = default ;
    OfflineExperimentConfig(OfflineExperimentConfig &&) = default ;
    OfflineExperimentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineExperimentConfig() = default ;
    OfflineExperimentConfig& operator=(const OfflineExperimentConfig &) = default ;
    OfflineExperimentConfig& operator=(OfflineExperimentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline OfflineExperimentConfig& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline OfflineExperimentConfig& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OfflineExperimentConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> desc_ {};
    shared_ptr<string> label_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
