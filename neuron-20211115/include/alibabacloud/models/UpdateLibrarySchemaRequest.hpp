// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIBRARYSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIBRARYSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LibrarySchemaUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateLibrarySchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLibrarySchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLibrarySchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateLibrarySchemaRequest() = default ;
    UpdateLibrarySchemaRequest(const UpdateLibrarySchemaRequest &) = default ;
    UpdateLibrarySchemaRequest(UpdateLibrarySchemaRequest &&) = default ;
    UpdateLibrarySchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLibrarySchemaRequest() = default ;
    UpdateLibrarySchemaRequest& operator=(const UpdateLibrarySchemaRequest &) = default ;
    UpdateLibrarySchemaRequest& operator=(UpdateLibrarySchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const LibrarySchemaUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, LibrarySchemaUpdateCmd) };
    inline LibrarySchemaUpdateCmd getBody() { DARABONBA_PTR_GET(body_, LibrarySchemaUpdateCmd) };
    inline UpdateLibrarySchemaRequest& setBody(const LibrarySchemaUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateLibrarySchemaRequest& setBody(LibrarySchemaUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<LibrarySchemaUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
