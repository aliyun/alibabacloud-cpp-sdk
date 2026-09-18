// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class EnableConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, EnableConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    EnableConnectorRequest() = default ;
    EnableConnectorRequest(const EnableConnectorRequest &) = default ;
    EnableConnectorRequest(EnableConnectorRequest &&) = default ;
    EnableConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableConnectorRequest() = default ;
    EnableConnectorRequest& operator=(const EnableConnectorRequest &) = default ;
    EnableConnectorRequest& operator=(EnableConnectorRequest &&) = default ;
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
      // The Connector configuration JSON string. Set site to global or cn. apiKey is required. serviceAccountKeys must contain at least one named service account key. organizationId is optional.
      // 
      // This parameter is required.
      shared_ptr<string> metadata_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EnableConnectorRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, EnableConnectorRequest::Body) };
    inline EnableConnectorRequest::Body getBody() { DARABONBA_PTR_GET(body_, EnableConnectorRequest::Body) };
    inline EnableConnectorRequest& setBody(const EnableConnectorRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EnableConnectorRequest& setBody(EnableConnectorRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The enable request body.
    // 
    // This parameter is required.
    shared_ptr<EnableConnectorRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
