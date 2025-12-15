// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLSOFTWARESREQUESTADDITIONALPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_INSTALLSOFTWARESREQUESTADDITIONALPACKAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class InstallSoftwaresRequestAdditionalPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallSoftwaresRequestAdditionalPackages& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, InstallSoftwaresRequestAdditionalPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    InstallSoftwaresRequestAdditionalPackages() = default ;
    InstallSoftwaresRequestAdditionalPackages(const InstallSoftwaresRequestAdditionalPackages &) = default ;
    InstallSoftwaresRequestAdditionalPackages(InstallSoftwaresRequestAdditionalPackages &&) = default ;
    InstallSoftwaresRequestAdditionalPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallSoftwaresRequestAdditionalPackages() = default ;
    InstallSoftwaresRequestAdditionalPackages& operator=(const InstallSoftwaresRequestAdditionalPackages &) = default ;
    InstallSoftwaresRequestAdditionalPackages& operator=(InstallSoftwaresRequestAdditionalPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->version_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InstallSoftwaresRequestAdditionalPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline InstallSoftwaresRequestAdditionalPackages& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The software name.
    std::shared_ptr<string> name_ = nullptr;
    // The software version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
