// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWCOMPONENTCRDSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWCOMPONENTCRDSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewComponentCrdSchemaCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PreviewComponentCrdSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewComponentCrdSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewComponentCrdSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PreviewComponentCrdSchemaRequest() = default ;
    PreviewComponentCrdSchemaRequest(const PreviewComponentCrdSchemaRequest &) = default ;
    PreviewComponentCrdSchemaRequest(PreviewComponentCrdSchemaRequest &&) = default ;
    PreviewComponentCrdSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewComponentCrdSchemaRequest() = default ;
    PreviewComponentCrdSchemaRequest& operator=(const PreviewComponentCrdSchemaRequest &) = default ;
    PreviewComponentCrdSchemaRequest& operator=(PreviewComponentCrdSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PreviewComponentCrdSchemaCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PreviewComponentCrdSchemaCmd) };
    inline PreviewComponentCrdSchemaCmd getBody() { DARABONBA_PTR_GET(body_, PreviewComponentCrdSchemaCmd) };
    inline PreviewComponentCrdSchemaRequest& setBody(const PreviewComponentCrdSchemaCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PreviewComponentCrdSchemaRequest& setBody(PreviewComponentCrdSchemaCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PreviewComponentCrdSchemaCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
