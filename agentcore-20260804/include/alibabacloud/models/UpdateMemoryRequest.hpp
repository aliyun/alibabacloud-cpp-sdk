// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMemoryRequest() = default ;
    UpdateMemoryRequest(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest(UpdateMemoryRequest &&) = default ;
    UpdateMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryRequest() = default ;
    UpdateMemoryRequest& operator=(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest& operator=(UpdateMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(text, text_);
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
      virtual bool empty() const override { return this->metadata_ == nullptr
        && this->text_ == nullptr; };
      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
      inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
      inline Body& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Body& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Body& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      // The updated string key-value metadata. You must provide at least one of Metadata or Text. A maximum of 16 keys are allowed. Each key can be up to 64 characters in length, and each value can be up to 1,024 characters in length.
      shared_ptr<map<string, string>> metadata_ {};
      // The updated memory text. You must provide at least one of Text or Metadata. The text cannot exceed 32,000 UTF-8 bytes.
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateMemoryRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateMemoryRequest::Body) };
    inline UpdateMemoryRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateMemoryRequest::Body) };
    inline UpdateMemoryRequest& setBody(const UpdateMemoryRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMemoryRequest& setBody(UpdateMemoryRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request to update a memory.
    // 
    // This parameter is required.
    shared_ptr<UpdateMemoryRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
