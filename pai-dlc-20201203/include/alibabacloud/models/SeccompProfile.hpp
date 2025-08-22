// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SECCOMPPROFILE_HPP_
#define ALIBABACLOUD_MODELS_SECCOMPPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SeccompProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SeccompProfile& obj) { 
      DARABONBA_PTR_TO_JSON(LocalhostProfile, localhostProfile_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SeccompProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalhostProfile, localhostProfile_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SeccompProfile() = default ;
    SeccompProfile(const SeccompProfile &) = default ;
    SeccompProfile(SeccompProfile &&) = default ;
    SeccompProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SeccompProfile() = default ;
    SeccompProfile& operator=(const SeccompProfile &) = default ;
    SeccompProfile& operator=(SeccompProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->localhostProfile_ != nullptr
        && this->type_ != nullptr; };
    // localhostProfile Field Functions 
    bool hasLocalhostProfile() const { return this->localhostProfile_ != nullptr;};
    void deleteLocalhostProfile() { this->localhostProfile_ = nullptr;};
    inline string localhostProfile() const { DARABONBA_PTR_GET_DEFAULT(localhostProfile_, "") };
    inline SeccompProfile& setLocalhostProfile(string localhostProfile) { DARABONBA_PTR_SET_VALUE(localhostProfile_, localhostProfile) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SeccompProfile& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> localhostProfile_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
