// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLOCALENSASSOCIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLOCALENSASSOCIATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryLocalEnsAssociationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLocalEnsAssociationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLocalEnsAssociationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryLocalEnsAssociationResponseBody() = default ;
    QueryLocalEnsAssociationResponseBody(const QueryLocalEnsAssociationResponseBody &) = default ;
    QueryLocalEnsAssociationResponseBody(QueryLocalEnsAssociationResponseBody &&) = default ;
    QueryLocalEnsAssociationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLocalEnsAssociationResponseBody() = default ;
    QueryLocalEnsAssociationResponseBody& operator=(const QueryLocalEnsAssociationResponseBody &) = default ;
    QueryLocalEnsAssociationResponseBody& operator=(QueryLocalEnsAssociationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->requestId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline QueryLocalEnsAssociationResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLocalEnsAssociationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
