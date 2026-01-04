// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNetworkInterfaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkInterfaceResponseBody() = default ;
    CreateNetworkInterfaceResponseBody(const CreateNetworkInterfaceResponseBody &) = default ;
    CreateNetworkInterfaceResponseBody(CreateNetworkInterfaceResponseBody &&) = default ;
    CreateNetworkInterfaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBody() = default ;
    CreateNetworkInterfaceResponseBody& operator=(const CreateNetworkInterfaceResponseBody &) = default ;
    CreateNetworkInterfaceResponseBody& operator=(CreateNetworkInterfaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceIds_ == nullptr
        && this->requestId_ == nullptr; };
    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & getNetworkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> getNetworkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline CreateNetworkInterfaceResponseBody& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline CreateNetworkInterfaceResponseBody& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkInterfaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of ENI IDs.
    shared_ptr<vector<string>> networkInterfaceIds_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
