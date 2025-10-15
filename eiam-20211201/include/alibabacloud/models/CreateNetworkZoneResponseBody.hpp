// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateNetworkZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkZoneId, networkZoneId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkZoneId, networkZoneId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkZoneResponseBody() = default ;
    CreateNetworkZoneResponseBody(const CreateNetworkZoneResponseBody &) = default ;
    CreateNetworkZoneResponseBody(CreateNetworkZoneResponseBody &&) = default ;
    CreateNetworkZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkZoneResponseBody() = default ;
    CreateNetworkZoneResponseBody& operator=(const CreateNetworkZoneResponseBody &) = default ;
    CreateNetworkZoneResponseBody& operator=(CreateNetworkZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkZoneId_ == nullptr
        && return this->requestId_ == nullptr; };
    // networkZoneId Field Functions 
    bool hasNetworkZoneId() const { return this->networkZoneId_ != nullptr;};
    void deleteNetworkZoneId() { this->networkZoneId_ = nullptr;};
    inline string networkZoneId() const { DARABONBA_PTR_GET_DEFAULT(networkZoneId_, "") };
    inline CreateNetworkZoneResponseBody& setNetworkZoneId(string networkZoneId) { DARABONBA_PTR_SET_VALUE(networkZoneId_, networkZoneId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> networkZoneId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
