// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class UpdateMcpServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(mcpServiceName, mcpServiceName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(mcpServiceName, mcpServiceName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateMcpServiceResponseBody() = default ;
    UpdateMcpServiceResponseBody(const UpdateMcpServiceResponseBody &) = default ;
    UpdateMcpServiceResponseBody(UpdateMcpServiceResponseBody &&) = default ;
    UpdateMcpServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpServiceResponseBody() = default ;
    UpdateMcpServiceResponseBody& operator=(const UpdateMcpServiceResponseBody &) = default ;
    UpdateMcpServiceResponseBody& operator=(UpdateMcpServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mcpServiceName_ == nullptr
        && this->requestId_ == nullptr; };
    // mcpServiceName Field Functions 
    bool hasMcpServiceName() const { return this->mcpServiceName_ != nullptr;};
    void deleteMcpServiceName() { this->mcpServiceName_ = nullptr;};
    inline string getMcpServiceName() const { DARABONBA_PTR_GET_DEFAULT(mcpServiceName_, "") };
    inline UpdateMcpServiceResponseBody& setMcpServiceName(string mcpServiceName) { DARABONBA_PTR_SET_VALUE(mcpServiceName_, mcpServiceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMcpServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> mcpServiceName_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
