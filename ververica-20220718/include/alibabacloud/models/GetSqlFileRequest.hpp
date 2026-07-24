// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetSqlFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlFileRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetSqlFileRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetSqlFileRequest() = default ;
    GetSqlFileRequest(const GetSqlFileRequest &) = default ;
    GetSqlFileRequest(GetSqlFileRequest &&) = default ;
    GetSqlFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlFileRequest() = default ;
    GetSqlFileRequest& operator=(const GetSqlFileRequest &) = default ;
    GetSqlFileRequest& operator=(GetSqlFileRequest &&) = default ;
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
