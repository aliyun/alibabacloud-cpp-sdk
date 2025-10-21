// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIEFDEPLOYMENTTARGET_HPP_
#define ALIBABACLOUD_MODELS_BRIEFDEPLOYMENTTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class BriefDeploymentTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BriefDeploymentTarget& obj) { 
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, BriefDeploymentTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    BriefDeploymentTarget() = default ;
    BriefDeploymentTarget(const BriefDeploymentTarget &) = default ;
    BriefDeploymentTarget(BriefDeploymentTarget &&) = default ;
    BriefDeploymentTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BriefDeploymentTarget() = default ;
    BriefDeploymentTarget& operator=(const BriefDeploymentTarget &) = default ;
    BriefDeploymentTarget& operator=(BriefDeploymentTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->name_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline BriefDeploymentTarget& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BriefDeploymentTarget& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
