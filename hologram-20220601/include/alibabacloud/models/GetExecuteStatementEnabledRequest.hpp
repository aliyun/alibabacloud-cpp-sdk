// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTESTATEMENTENABLEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTESTATEMENTENABLEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetExecuteStatementEnabledRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecuteStatementEnabledRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetExecuteStatementEnabledRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetExecuteStatementEnabledRequest() = default ;
    GetExecuteStatementEnabledRequest(const GetExecuteStatementEnabledRequest &) = default ;
    GetExecuteStatementEnabledRequest(GetExecuteStatementEnabledRequest &&) = default ;
    GetExecuteStatementEnabledRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecuteStatementEnabledRequest() = default ;
    GetExecuteStatementEnabledRequest& operator=(const GetExecuteStatementEnabledRequest &) = default ;
    GetExecuteStatementEnabledRequest& operator=(GetExecuteStatementEnabledRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
