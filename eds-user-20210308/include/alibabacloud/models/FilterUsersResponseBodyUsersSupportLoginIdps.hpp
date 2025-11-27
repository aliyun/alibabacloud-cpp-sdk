// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSSUPPORTLOGINIDPS_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSSUPPORTLOGINIDPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersResponseBodyUsersSupportLoginIdps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBodyUsersSupportLoginIdps& obj) { 
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(IdpName, idpName_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBodyUsersSupportLoginIdps& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(IdpName, idpName_);
    };
    FilterUsersResponseBodyUsersSupportLoginIdps() = default ;
    FilterUsersResponseBodyUsersSupportLoginIdps(const FilterUsersResponseBodyUsersSupportLoginIdps &) = default ;
    FilterUsersResponseBodyUsersSupportLoginIdps(FilterUsersResponseBodyUsersSupportLoginIdps &&) = default ;
    FilterUsersResponseBodyUsersSupportLoginIdps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBodyUsersSupportLoginIdps() = default ;
    FilterUsersResponseBodyUsersSupportLoginIdps& operator=(const FilterUsersResponseBodyUsersSupportLoginIdps &) = default ;
    FilterUsersResponseBodyUsersSupportLoginIdps& operator=(FilterUsersResponseBodyUsersSupportLoginIdps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idpId_ == nullptr
        && return this->idpName_ == nullptr; };
    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline string idpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
    inline FilterUsersResponseBodyUsersSupportLoginIdps& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // idpName Field Functions 
    bool hasIdpName() const { return this->idpName_ != nullptr;};
    void deleteIdpName() { this->idpName_ = nullptr;};
    inline string idpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
    inline FilterUsersResponseBodyUsersSupportLoginIdps& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


  protected:
    // The enterprise identity provider ID.
    std::shared_ptr<string> idpId_ = nullptr;
    // The enterprise identity provider name.
    std::shared_ptr<string> idpName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
