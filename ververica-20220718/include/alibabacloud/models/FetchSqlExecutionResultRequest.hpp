// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHSQLEXECUTIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHSQLEXECUTIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class FetchSqlExecutionResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchSqlExecutionResultRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, FetchSqlExecutionResultRequest& obj) { 
      (void)j; (void)obj; 
    };
    FetchSqlExecutionResultRequest() = default ;
    FetchSqlExecutionResultRequest(const FetchSqlExecutionResultRequest &) = default ;
    FetchSqlExecutionResultRequest(FetchSqlExecutionResultRequest &&) = default ;
    FetchSqlExecutionResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchSqlExecutionResultRequest() = default ;
    FetchSqlExecutionResultRequest& operator=(const FetchSqlExecutionResultRequest &) = default ;
    FetchSqlExecutionResultRequest& operator=(FetchSqlExecutionResultRequest &&) = default ;
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
