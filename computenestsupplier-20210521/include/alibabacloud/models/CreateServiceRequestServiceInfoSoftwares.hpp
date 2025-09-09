// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEREQUESTSERVICEINFOSOFTWARES_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEREQUESTSERVICEINFOSOFTWARES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceRequestServiceInfoSoftwares : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceRequestServiceInfoSoftwares& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceRequestServiceInfoSoftwares& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateServiceRequestServiceInfoSoftwares() = default ;
    CreateServiceRequestServiceInfoSoftwares(const CreateServiceRequestServiceInfoSoftwares &) = default ;
    CreateServiceRequestServiceInfoSoftwares(CreateServiceRequestServiceInfoSoftwares &&) = default ;
    CreateServiceRequestServiceInfoSoftwares(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceRequestServiceInfoSoftwares() = default ;
    CreateServiceRequestServiceInfoSoftwares& operator=(const CreateServiceRequestServiceInfoSoftwares &) = default ;
    CreateServiceRequestServiceInfoSoftwares& operator=(CreateServiceRequestServiceInfoSoftwares &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->version_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateServiceRequestServiceInfoSoftwares& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateServiceRequestServiceInfoSoftwares& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the software.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the software.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
