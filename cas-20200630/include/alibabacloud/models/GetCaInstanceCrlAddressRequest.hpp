// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAINSTANCECRLADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCAINSTANCECRLADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class GetCaInstanceCrlAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaInstanceCrlAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaIdentifier, caIdentifier_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaInstanceCrlAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaIdentifier, caIdentifier_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetCaInstanceCrlAddressRequest() = default ;
    GetCaInstanceCrlAddressRequest(const GetCaInstanceCrlAddressRequest &) = default ;
    GetCaInstanceCrlAddressRequest(GetCaInstanceCrlAddressRequest &&) = default ;
    GetCaInstanceCrlAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaInstanceCrlAddressRequest() = default ;
    GetCaInstanceCrlAddressRequest& operator=(const GetCaInstanceCrlAddressRequest &) = default ;
    GetCaInstanceCrlAddressRequest& operator=(GetCaInstanceCrlAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caIdentifier_ == nullptr
        && this->uuid_ == nullptr; };
    // caIdentifier Field Functions 
    bool hasCaIdentifier() const { return this->caIdentifier_ != nullptr;};
    void deleteCaIdentifier() { this->caIdentifier_ = nullptr;};
    inline string getCaIdentifier() const { DARABONBA_PTR_GET_DEFAULT(caIdentifier_, "") };
    inline GetCaInstanceCrlAddressRequest& setCaIdentifier(string caIdentifier) { DARABONBA_PTR_SET_VALUE(caIdentifier_, caIdentifier) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetCaInstanceCrlAddressRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The identifier of the CA certificate.
    shared_ptr<string> caIdentifier_ {};
    // The ID of the zone where the CAS instance resides.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
