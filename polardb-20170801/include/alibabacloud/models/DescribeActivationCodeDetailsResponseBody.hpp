// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONCODEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONCODEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeActivationCodeDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActivationCodeDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateAt, activateAt_);
      DARABONBA_PTR_TO_JSON(CertContentB64, certContentB64_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemIdentifier, systemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActivationCodeDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateAt, activateAt_);
      DARABONBA_PTR_FROM_JSON(CertContentB64, certContentB64_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemIdentifier, systemIdentifier_);
    };
    DescribeActivationCodeDetailsResponseBody() = default ;
    DescribeActivationCodeDetailsResponseBody(const DescribeActivationCodeDetailsResponseBody &) = default ;
    DescribeActivationCodeDetailsResponseBody(DescribeActivationCodeDetailsResponseBody &&) = default ;
    DescribeActivationCodeDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActivationCodeDetailsResponseBody() = default ;
    DescribeActivationCodeDetailsResponseBody& operator=(const DescribeActivationCodeDetailsResponseBody &) = default ;
    DescribeActivationCodeDetailsResponseBody& operator=(DescribeActivationCodeDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activateAt_ == nullptr
        && this->certContentB64_ == nullptr && this->description_ == nullptr && this->expireAt_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->macAddress_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->systemIdentifier_ == nullptr; };
    // activateAt Field Functions 
    bool hasActivateAt() const { return this->activateAt_ != nullptr;};
    void deleteActivateAt() { this->activateAt_ = nullptr;};
    inline string getActivateAt() const { DARABONBA_PTR_GET_DEFAULT(activateAt_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setActivateAt(string activateAt) { DARABONBA_PTR_SET_VALUE(activateAt_, activateAt) };


    // certContentB64 Field Functions 
    bool hasCertContentB64() const { return this->certContentB64_ != nullptr;};
    void deleteCertContentB64() { this->certContentB64_ = nullptr;};
    inline string getCertContentB64() const { DARABONBA_PTR_GET_DEFAULT(certContentB64_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setCertContentB64(string certContentB64) { DARABONBA_PTR_SET_VALUE(certContentB64_, certContentB64) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeActivationCodeDetailsResponseBody& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemIdentifier Field Functions 
    bool hasSystemIdentifier() const { return this->systemIdentifier_ != nullptr;};
    void deleteSystemIdentifier() { this->systemIdentifier_ = nullptr;};
    inline string getSystemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(systemIdentifier_, "") };
    inline DescribeActivationCodeDetailsResponseBody& setSystemIdentifier(string systemIdentifier) { DARABONBA_PTR_SET_VALUE(systemIdentifier_, systemIdentifier) };


  protected:
    // The time when the activation code takes effect.
    shared_ptr<string> activateAt_ {};
    // The activation code in the base64 format. The activation code is decoded and stored into a file named license.lic. PolarDB can access and read the license.lic file upon startup to validate the license or perform related operations.
    shared_ptr<string> certContentB64_ {};
    // The description of the activation code.
    shared_ptr<string> description_ {};
    // The time when the activation code expires.
    shared_ptr<string> expireAt_ {};
    // The time when the activation code was created.
    shared_ptr<string> gmtCreated_ {};
    // The time when the activation code was last updated.
    shared_ptr<string> gmtModified_ {};
    // The ID of the activation code.
    shared_ptr<int32_t> id_ {};
    // The MAC address.
    shared_ptr<string> macAddress_ {};
    // The name of the activation code.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The system identifier of the database.
    shared_ptr<string> systemIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
