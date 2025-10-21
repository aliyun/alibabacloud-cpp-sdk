// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Folder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class CreateFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateFolderRequest() = default ;
    CreateFolderRequest(const CreateFolderRequest &) = default ;
    CreateFolderRequest(CreateFolderRequest &&) = default ;
    CreateFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFolderRequest() = default ;
    CreateFolderRequest& operator=(const CreateFolderRequest &) = default ;
    CreateFolderRequest& operator=(CreateFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Folder & body() const { DARABONBA_PTR_GET_CONST(body_, Folder) };
    inline Folder body() { DARABONBA_PTR_GET(body_, Folder) };
    inline CreateFolderRequest& setBody(const Folder & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateFolderRequest& setBody(Folder && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<Folder> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
