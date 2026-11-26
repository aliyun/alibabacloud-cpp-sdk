// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDEVICEBELONGIDENTIFIERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDEVICEBELONGIDENTIFIERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class AddDeviceBelongIdentifiersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDeviceBelongIdentifiersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifiers, identifiers_);
    };
    friend void from_json(const Darabonba::Json& j, AddDeviceBelongIdentifiersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifiers, identifiers_);
    };
    AddDeviceBelongIdentifiersRequest() = default ;
    AddDeviceBelongIdentifiersRequest(const AddDeviceBelongIdentifiersRequest &) = default ;
    AddDeviceBelongIdentifiersRequest(AddDeviceBelongIdentifiersRequest &&) = default ;
    AddDeviceBelongIdentifiersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDeviceBelongIdentifiersRequest() = default ;
    AddDeviceBelongIdentifiersRequest& operator=(const AddDeviceBelongIdentifiersRequest &) = default ;
    AddDeviceBelongIdentifiersRequest& operator=(AddDeviceBelongIdentifiersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Identifiers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Identifiers& obj) { 
        DARABONBA_PTR_TO_JSON(IdentifierType, identifierType_);
        DARABONBA_PTR_TO_JSON(IdentifierValue, identifierValue_);
      };
      friend void from_json(const Darabonba::Json& j, Identifiers& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentifierType, identifierType_);
        DARABONBA_PTR_FROM_JSON(IdentifierValue, identifierValue_);
      };
      Identifiers() = default ;
      Identifiers(const Identifiers &) = default ;
      Identifiers(Identifiers &&) = default ;
      Identifiers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Identifiers() = default ;
      Identifiers& operator=(const Identifiers &) = default ;
      Identifiers& operator=(Identifiers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->identifierType_ == nullptr
        && this->identifierValue_ == nullptr; };
      // identifierType Field Functions 
      bool hasIdentifierType() const { return this->identifierType_ != nullptr;};
      void deleteIdentifierType() { this->identifierType_ = nullptr;};
      inline string getIdentifierType() const { DARABONBA_PTR_GET_DEFAULT(identifierType_, "") };
      inline Identifiers& setIdentifierType(string identifierType) { DARABONBA_PTR_SET_VALUE(identifierType_, identifierType) };


      // identifierValue Field Functions 
      bool hasIdentifierValue() const { return this->identifierValue_ != nullptr;};
      void deleteIdentifierValue() { this->identifierValue_ = nullptr;};
      inline string getIdentifierValue() const { DARABONBA_PTR_GET_DEFAULT(identifierValue_, "") };
      inline Identifiers& setIdentifierValue(string identifierValue) { DARABONBA_PTR_SET_VALUE(identifierValue_, identifierValue) };


    protected:
      // The identifier type. MAC indicates a network interface controller (NIC) MAC address, SystemSN indicates a system serial number, and BIOSSN indicates a BIOS serial number.
      shared_ptr<string> identifierType_ {};
      // The identifier value. A MAC address must be a 6-byte address. A system serial number accepts 1 to 64 characters, and a BIOS serial number accepts 1 to 128 characters. MAC addresses are converted to the lowercase colon-separated format when stored, while system serial numbers and BIOS serial numbers retain their original values.
      shared_ptr<string> identifierValue_ {};
    };

    virtual bool empty() const override { return this->identifiers_ == nullptr; };
    // identifiers Field Functions 
    bool hasIdentifiers() const { return this->identifiers_ != nullptr;};
    void deleteIdentifiers() { this->identifiers_ = nullptr;};
    inline const vector<AddDeviceBelongIdentifiersRequest::Identifiers> & getIdentifiers() const { DARABONBA_PTR_GET_CONST(identifiers_, vector<AddDeviceBelongIdentifiersRequest::Identifiers>) };
    inline vector<AddDeviceBelongIdentifiersRequest::Identifiers> getIdentifiers() { DARABONBA_PTR_GET(identifiers_, vector<AddDeviceBelongIdentifiersRequest::Identifiers>) };
    inline AddDeviceBelongIdentifiersRequest& setIdentifiers(const vector<AddDeviceBelongIdentifiersRequest::Identifiers> & identifiers) { DARABONBA_PTR_SET_VALUE(identifiers_, identifiers) };
    inline AddDeviceBelongIdentifiersRequest& setIdentifiers(vector<AddDeviceBelongIdentifiersRequest::Identifiers> && identifiers) { DARABONBA_PTR_SET_RVALUE(identifiers_, identifiers) };


  protected:
    // The list of device ownership identifiers to add. Each batch supports 1 to 1,000 items. Each item must include IdentifierType and IdentifierValue.
    // 
    // This parameter is required.
    shared_ptr<vector<AddDeviceBelongIdentifiersRequest::Identifiers>> identifiers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
