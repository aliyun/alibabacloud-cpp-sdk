// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DeleteProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProjectRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteProjectRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteProjectRequest() = default ;
    DeleteProjectRequest(const DeleteProjectRequest &) = default ;
    DeleteProjectRequest(DeleteProjectRequest &&) = default ;
    DeleteProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProjectRequest() = default ;
    DeleteProjectRequest& operator=(const DeleteProjectRequest &) = default ;
    DeleteProjectRequest& operator=(DeleteProjectRequest &&) = default ;
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
