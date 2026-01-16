// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETCANCELRELATIONFROMADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETCANCELRELATIONFROMADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetCancelRelationFromAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetCancelRelationFromAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromAddress, fromAddress_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetCancelRelationFromAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromAddress, fromAddress_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ConfigSetCancelRelationFromAddressRequest() = default ;
    ConfigSetCancelRelationFromAddressRequest(const ConfigSetCancelRelationFromAddressRequest &) = default ;
    ConfigSetCancelRelationFromAddressRequest(ConfigSetCancelRelationFromAddressRequest &&) = default ;
    ConfigSetCancelRelationFromAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetCancelRelationFromAddressRequest() = default ;
    ConfigSetCancelRelationFromAddressRequest& operator=(const ConfigSetCancelRelationFromAddressRequest &) = default ;
    ConfigSetCancelRelationFromAddressRequest& operator=(ConfigSetCancelRelationFromAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromAddress_ == nullptr
        && this->id_ == nullptr; };
    // fromAddress Field Functions 
    bool hasFromAddress() const { return this->fromAddress_ != nullptr;};
    void deleteFromAddress() { this->fromAddress_ = nullptr;};
    inline string getFromAddress() const { DARABONBA_PTR_GET_DEFAULT(fromAddress_, "") };
    inline ConfigSetCancelRelationFromAddressRequest& setFromAddress(string fromAddress) { DARABONBA_PTR_SET_VALUE(fromAddress_, fromAddress) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ConfigSetCancelRelationFromAddressRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> fromAddress_ {};
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
