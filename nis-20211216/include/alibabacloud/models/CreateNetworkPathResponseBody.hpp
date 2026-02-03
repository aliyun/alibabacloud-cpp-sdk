// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateNetworkPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkPathResponseBody() = default ;
    CreateNetworkPathResponseBody(const CreateNetworkPathResponseBody &) = default ;
    CreateNetworkPathResponseBody(CreateNetworkPathResponseBody &&) = default ;
    CreateNetworkPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkPathResponseBody() = default ;
    CreateNetworkPathResponseBody& operator=(const CreateNetworkPathResponseBody &) = default ;
    CreateNetworkPathResponseBody& operator=(CreateNetworkPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkPathId_ == nullptr
        && this->requestId_ == nullptr; };
    // networkPathId Field Functions 
    bool hasNetworkPathId() const { return this->networkPathId_ != nullptr;};
    void deleteNetworkPathId() { this->networkPathId_ = nullptr;};
    inline string getNetworkPathId() const { DARABONBA_PTR_GET_DEFAULT(networkPathId_, "") };
    inline CreateNetworkPathResponseBody& setNetworkPathId(string networkPathId) { DARABONBA_PTR_SET_VALUE(networkPathId_, networkPathId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the network path.
    shared_ptr<string> networkPathId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
