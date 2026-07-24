// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SqlFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class CreateSqlFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateSqlFileRequest() = default ;
    CreateSqlFileRequest(const CreateSqlFileRequest &) = default ;
    CreateSqlFileRequest(CreateSqlFileRequest &&) = default ;
    CreateSqlFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlFileRequest() = default ;
    CreateSqlFileRequest& operator=(const CreateSqlFileRequest &) = default ;
    CreateSqlFileRequest& operator=(CreateSqlFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SqlFile & getBody() const { DARABONBA_PTR_GET_CONST(body_, SqlFile) };
    inline SqlFile getBody() { DARABONBA_PTR_GET(body_, SqlFile) };
    inline CreateSqlFileRequest& setBody(const SqlFile & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSqlFileRequest& setBody(SqlFile && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body, which contains the SQL file content and related metadata to be created.
    shared_ptr<SqlFile> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
