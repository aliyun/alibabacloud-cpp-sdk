// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetTaskRequest() = default ;
    GetTaskRequest(const GetTaskRequest &) = default ;
    GetTaskRequest(GetTaskRequest &&) = default ;
    GetTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskRequest() = default ;
    GetTaskRequest& operator=(const GetTaskRequest &) = default ;
    GetTaskRequest& operator=(GetTaskRequest &&) = default ;
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
