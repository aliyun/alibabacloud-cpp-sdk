// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESQLFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESQLFILEREQUEST_HPP_
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
  class UpdateSqlFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSqlFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSqlFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSqlFileRequest() = default ;
    UpdateSqlFileRequest(const UpdateSqlFileRequest &) = default ;
    UpdateSqlFileRequest(UpdateSqlFileRequest &&) = default ;
    UpdateSqlFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSqlFileRequest() = default ;
    UpdateSqlFileRequest& operator=(const UpdateSqlFileRequest &) = default ;
    UpdateSqlFileRequest& operator=(UpdateSqlFileRequest &&) = default ;
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
    inline UpdateSqlFileRequest& setBody(const SqlFile & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSqlFileRequest& setBody(SqlFile && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The SQL script information to update.
    shared_ptr<SqlFile> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
