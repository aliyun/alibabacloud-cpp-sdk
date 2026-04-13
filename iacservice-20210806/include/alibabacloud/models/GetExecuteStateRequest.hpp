// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTESTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTESTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetExecuteStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecuteStateRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetExecuteStateRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetExecuteStateRequest() = default ;
    GetExecuteStateRequest(const GetExecuteStateRequest &) = default ;
    GetExecuteStateRequest(GetExecuteStateRequest &&) = default ;
    GetExecuteStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecuteStateRequest() = default ;
    GetExecuteStateRequest& operator=(const GetExecuteStateRequest &) = default ;
    GetExecuteStateRequest& operator=(GetExecuteStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
