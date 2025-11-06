// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYENSASSOCIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYENSASSOCIATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryEnsAssociationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEnsAssociationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEnsAssociationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryEnsAssociationResponseBody() = default ;
    QueryEnsAssociationResponseBody(const QueryEnsAssociationResponseBody &) = default ;
    QueryEnsAssociationResponseBody(QueryEnsAssociationResponseBody &&) = default ;
    QueryEnsAssociationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEnsAssociationResponseBody() = default ;
    QueryEnsAssociationResponseBody& operator=(const QueryEnsAssociationResponseBody &) = default ;
    QueryEnsAssociationResponseBody& operator=(QueryEnsAssociationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->requestId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline QueryEnsAssociationResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEnsAssociationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
