// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESQLFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESQLFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeleteSqlFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSqlFileRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteSqlFileRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteSqlFileRequest() = default ;
    DeleteSqlFileRequest(const DeleteSqlFileRequest &) = default ;
    DeleteSqlFileRequest(DeleteSqlFileRequest &&) = default ;
    DeleteSqlFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSqlFileRequest() = default ;
    DeleteSqlFileRequest& operator=(const DeleteSqlFileRequest &) = default ;
    DeleteSqlFileRequest& operator=(DeleteSqlFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
