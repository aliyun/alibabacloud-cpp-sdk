// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPREQUESTUSERMETA_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPREQUESTUSERMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class AuthorizeInstanceGroupRequestUserMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeInstanceGroupRequestUserMeta& obj) { 
      DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeInstanceGroupRequestUserMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AuthorizeInstanceGroupRequestUserMeta() = default ;
    AuthorizeInstanceGroupRequestUserMeta(const AuthorizeInstanceGroupRequestUserMeta &) = default ;
    AuthorizeInstanceGroupRequestUserMeta(AuthorizeInstanceGroupRequestUserMeta &&) = default ;
    AuthorizeInstanceGroupRequestUserMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeInstanceGroupRequestUserMeta() = default ;
    AuthorizeInstanceGroupRequestUserMeta& operator=(const AuthorizeInstanceGroupRequestUserMeta &) = default ;
    AuthorizeInstanceGroupRequestUserMeta& operator=(AuthorizeInstanceGroupRequestUserMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adDomain_ == nullptr
        && return this->type_ == nullptr; };
    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string adDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline AuthorizeInstanceGroupRequestUserMeta& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AuthorizeInstanceGroupRequestUserMeta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The AD domain name.
    std::shared_ptr<string> adDomain_ = nullptr;
    // The user type.
    // 
    // Valid values:
    // 
    // *   ad: Active Directory (AD) account
    // *   simple: convenience account
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
