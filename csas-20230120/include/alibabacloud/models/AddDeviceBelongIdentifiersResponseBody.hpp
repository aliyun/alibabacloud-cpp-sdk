// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDEVICEBELONGIDENTIFIERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDEVICEBELONGIDENTIFIERSRESPONSEBODY_HPP_
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
  class AddDeviceBelongIdentifiersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDeviceBelongIdentifiersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifierIds, identifierIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDeviceBelongIdentifiersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifierIds, identifierIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddDeviceBelongIdentifiersResponseBody() = default ;
    AddDeviceBelongIdentifiersResponseBody(const AddDeviceBelongIdentifiersResponseBody &) = default ;
    AddDeviceBelongIdentifiersResponseBody(AddDeviceBelongIdentifiersResponseBody &&) = default ;
    AddDeviceBelongIdentifiersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDeviceBelongIdentifiersResponseBody() = default ;
    AddDeviceBelongIdentifiersResponseBody& operator=(const AddDeviceBelongIdentifiersResponseBody &) = default ;
    AddDeviceBelongIdentifiersResponseBody& operator=(AddDeviceBelongIdentifiersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifierIds_ == nullptr
        && this->requestId_ == nullptr; };
    // identifierIds Field Functions 
    bool hasIdentifierIds() const { return this->identifierIds_ != nullptr;};
    void deleteIdentifierIds() { this->identifierIds_ = nullptr;};
    inline const vector<string> & getIdentifierIds() const { DARABONBA_PTR_GET_CONST(identifierIds_, vector<string>) };
    inline vector<string> getIdentifierIds() { DARABONBA_PTR_GET(identifierIds_, vector<string>) };
    inline AddDeviceBelongIdentifiersResponseBody& setIdentifierIds(const vector<string> & identifierIds) { DARABONBA_PTR_SET_VALUE(identifierIds_, identifierIds) };
    inline AddDeviceBelongIdentifiersResponseBody& setIdentifierIds(vector<string> && identifierIds) { DARABONBA_PTR_SET_RVALUE(identifierIds_, identifierIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDeviceBelongIdentifiersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the records actually added in the batch, returned in the input order of the added items. Skipped duplicates are not included in the array. An empty list is returned if no records are added in the batch.
    shared_ptr<vector<string>> identifierIds_ {};
    // The request ID. You can use this ID to locate the API call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
