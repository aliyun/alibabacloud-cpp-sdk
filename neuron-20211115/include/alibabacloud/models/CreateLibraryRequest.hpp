// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LibraryCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateLibraryRequest() = default ;
    CreateLibraryRequest(const CreateLibraryRequest &) = default ;
    CreateLibraryRequest(CreateLibraryRequest &&) = default ;
    CreateLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibraryRequest() = default ;
    CreateLibraryRequest& operator=(const CreateLibraryRequest &) = default ;
    CreateLibraryRequest& operator=(CreateLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const LibraryCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, LibraryCreateCmd) };
    inline LibraryCreateCmd getBody() { DARABONBA_PTR_GET(body_, LibraryCreateCmd) };
    inline CreateLibraryRequest& setBody(const LibraryCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateLibraryRequest& setBody(LibraryCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<LibraryCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
