// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LibrarySchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateLibrarySchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibrarySchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibrarySchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateLibrarySchemaRequest() = default ;
    CreateLibrarySchemaRequest(const CreateLibrarySchemaRequest &) = default ;
    CreateLibrarySchemaRequest(CreateLibrarySchemaRequest &&) = default ;
    CreateLibrarySchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibrarySchemaRequest() = default ;
    CreateLibrarySchemaRequest& operator=(const CreateLibrarySchemaRequest &) = default ;
    CreateLibrarySchemaRequest& operator=(CreateLibrarySchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const LibrarySchema & getBody() const { DARABONBA_PTR_GET_CONST(body_, LibrarySchema) };
    inline LibrarySchema getBody() { DARABONBA_PTR_GET(body_, LibrarySchema) };
    inline CreateLibrarySchemaRequest& setBody(const LibrarySchema & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateLibrarySchemaRequest& setBody(LibrarySchema && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<LibrarySchema> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
