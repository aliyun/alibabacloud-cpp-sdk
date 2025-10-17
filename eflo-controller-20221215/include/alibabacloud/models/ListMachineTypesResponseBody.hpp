// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMachineTypesResponseBodyMachineTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMachineTypesResponseBody() = default ;
    ListMachineTypesResponseBody(const ListMachineTypesResponseBody &) = default ;
    ListMachineTypesResponseBody(ListMachineTypesResponseBody &&) = default ;
    ListMachineTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineTypesResponseBody() = default ;
    ListMachineTypesResponseBody& operator=(const ListMachineTypesResponseBody &) = default ;
    ListMachineTypesResponseBody& operator=(ListMachineTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineTypes_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline const vector<ListMachineTypesResponseBodyMachineTypes> & machineTypes() const { DARABONBA_PTR_GET_CONST(machineTypes_, vector<ListMachineTypesResponseBodyMachineTypes>) };
    inline vector<ListMachineTypesResponseBodyMachineTypes> machineTypes() { DARABONBA_PTR_GET(machineTypes_, vector<ListMachineTypesResponseBodyMachineTypes>) };
    inline ListMachineTypesResponseBody& setMachineTypes(const vector<ListMachineTypesResponseBodyMachineTypes> & machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };
    inline ListMachineTypesResponseBody& setMachineTypes(vector<ListMachineTypesResponseBodyMachineTypes> && machineTypes) { DARABONBA_PTR_SET_RVALUE(machineTypes_, machineTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMachineTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMachineTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance types.
    std::shared_ptr<vector<ListMachineTypesResponseBodyMachineTypes>> machineTypes_ = nullptr;
    // The token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
