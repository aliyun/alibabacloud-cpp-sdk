// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVBRTOVPCONNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVBRTOVPCONNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AttachVbrToVpconnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVbrToVpconnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnection, virtualPhysicalConnection_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVbrToVpconnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnection, virtualPhysicalConnection_);
    };
    AttachVbrToVpconnResponseBody() = default ;
    AttachVbrToVpconnResponseBody(const AttachVbrToVpconnResponseBody &) = default ;
    AttachVbrToVpconnResponseBody(AttachVbrToVpconnResponseBody &&) = default ;
    AttachVbrToVpconnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVbrToVpconnResponseBody() = default ;
    AttachVbrToVpconnResponseBody& operator=(const AttachVbrToVpconnResponseBody &) = default ;
    AttachVbrToVpconnResponseBody& operator=(AttachVbrToVpconnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->virtualPhysicalConnection_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachVbrToVpconnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualPhysicalConnection Field Functions 
    bool hasVirtualPhysicalConnection() const { return this->virtualPhysicalConnection_ != nullptr;};
    void deleteVirtualPhysicalConnection() { this->virtualPhysicalConnection_ = nullptr;};
    inline string virtualPhysicalConnection() const { DARABONBA_PTR_GET_DEFAULT(virtualPhysicalConnection_, "") };
    inline AttachVbrToVpconnResponseBody& setVirtualPhysicalConnection(string virtualPhysicalConnection) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnection_, virtualPhysicalConnection) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the hosted connection.
    std::shared_ptr<string> virtualPhysicalConnection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
