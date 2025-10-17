// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMachineNetworkInfoResponseBodyMachineNetworkInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineNetworkInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineNetworkInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineNetworkInfo, machineNetworkInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineNetworkInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineNetworkInfo, machineNetworkInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMachineNetworkInfoResponseBody() = default ;
    ListMachineNetworkInfoResponseBody(const ListMachineNetworkInfoResponseBody &) = default ;
    ListMachineNetworkInfoResponseBody(ListMachineNetworkInfoResponseBody &&) = default ;
    ListMachineNetworkInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineNetworkInfoResponseBody() = default ;
    ListMachineNetworkInfoResponseBody& operator=(const ListMachineNetworkInfoResponseBody &) = default ;
    ListMachineNetworkInfoResponseBody& operator=(ListMachineNetworkInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineNetworkInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // machineNetworkInfo Field Functions 
    bool hasMachineNetworkInfo() const { return this->machineNetworkInfo_ != nullptr;};
    void deleteMachineNetworkInfo() { this->machineNetworkInfo_ = nullptr;};
    inline const vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo> & machineNetworkInfo() const { DARABONBA_PTR_GET_CONST(machineNetworkInfo_, vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo>) };
    inline vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo> machineNetworkInfo() { DARABONBA_PTR_GET(machineNetworkInfo_, vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo>) };
    inline ListMachineNetworkInfoResponseBody& setMachineNetworkInfo(const vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo> & machineNetworkInfo) { DARABONBA_PTR_SET_VALUE(machineNetworkInfo_, machineNetworkInfo) };
    inline ListMachineNetworkInfoResponseBody& setMachineNetworkInfo(vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo> && machineNetworkInfo) { DARABONBA_PTR_SET_RVALUE(machineNetworkInfo_, machineNetworkInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMachineNetworkInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // machine network infomation
    std::shared_ptr<vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo>> machineNetworkInfo_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
