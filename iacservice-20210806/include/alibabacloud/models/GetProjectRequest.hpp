// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetProjectRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetProjectRequest() = default ;
    GetProjectRequest(const GetProjectRequest &) = default ;
    GetProjectRequest(GetProjectRequest &&) = default ;
    GetProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectRequest() = default ;
    GetProjectRequest& operator=(const GetProjectRequest &) = default ;
    GetProjectRequest& operator=(GetProjectRequest &&) = default ;
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
