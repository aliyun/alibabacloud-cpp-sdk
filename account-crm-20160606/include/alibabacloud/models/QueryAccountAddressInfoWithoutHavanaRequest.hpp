// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTADDRESSINFOWITHOUTHAVANAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTADDRESSINFOWITHOUTHAVANAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountAddressInfoWithoutHavanaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountAddressInfoWithoutHavanaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressVersion, addressVersion_);
      DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountAddressInfoWithoutHavanaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressVersion, addressVersion_);
      DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
    };
    QueryAccountAddressInfoWithoutHavanaRequest() = default ;
    QueryAccountAddressInfoWithoutHavanaRequest(const QueryAccountAddressInfoWithoutHavanaRequest &) = default ;
    QueryAccountAddressInfoWithoutHavanaRequest(QueryAccountAddressInfoWithoutHavanaRequest &&) = default ;
    QueryAccountAddressInfoWithoutHavanaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountAddressInfoWithoutHavanaRequest() = default ;
    QueryAccountAddressInfoWithoutHavanaRequest& operator=(const QueryAccountAddressInfoWithoutHavanaRequest &) = default ;
    QueryAccountAddressInfoWithoutHavanaRequest& operator=(QueryAccountAddressInfoWithoutHavanaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressVersion_ == nullptr
        && this->havanaId_ == nullptr && this->PK_ == nullptr; };
    // addressVersion Field Functions 
    bool hasAddressVersion() const { return this->addressVersion_ != nullptr;};
    void deleteAddressVersion() { this->addressVersion_ = nullptr;};
    inline string getAddressVersion() const { DARABONBA_PTR_GET_DEFAULT(addressVersion_, "") };
    inline QueryAccountAddressInfoWithoutHavanaRequest& setAddressVersion(string addressVersion) { DARABONBA_PTR_SET_VALUE(addressVersion_, addressVersion) };


    // havanaId Field Functions 
    bool hasHavanaId() const { return this->havanaId_ != nullptr;};
    void deleteHavanaId() { this->havanaId_ = nullptr;};
    inline string getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, "") };
    inline QueryAccountAddressInfoWithoutHavanaRequest& setHavanaId(string havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline QueryAccountAddressInfoWithoutHavanaRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


  protected:
    shared_ptr<string> addressVersion_ {};
    shared_ptr<string> havanaId_ {};
    shared_ptr<string> PK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
