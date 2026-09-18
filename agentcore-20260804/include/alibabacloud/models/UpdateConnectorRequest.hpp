// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateConnectorRequest() = default ;
    UpdateConnectorRequest(const UpdateConnectorRequest &) = default ;
    UpdateConnectorRequest(UpdateConnectorRequest &&) = default ;
    UpdateConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectorRequest() = default ;
    UpdateConnectorRequest& operator=(const UpdateConnectorRequest &) = default ;
    UpdateConnectorRequest& operator=(UpdateConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metadata_ == nullptr; };
      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
      inline Body& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    protected:
      // The Connector configuration JSON string. The site value must match the value specified when the Connector was enabled. The organizationId value, if provided, must match the value specified when the Connector was enabled. If apiKey is omitted, the original value is retained. If serviceAccountKeys is provided, it represents the complete updated key collection.
      // 
      // This parameter is required.
      shared_ptr<string> metadata_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateConnectorRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateConnectorRequest::Body) };
    inline UpdateConnectorRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateConnectorRequest::Body) };
    inline UpdateConnectorRequest& setBody(const UpdateConnectorRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateConnectorRequest& setBody(UpdateConnectorRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The update request body.
    // 
    // This parameter is required.
    shared_ptr<UpdateConnectorRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
