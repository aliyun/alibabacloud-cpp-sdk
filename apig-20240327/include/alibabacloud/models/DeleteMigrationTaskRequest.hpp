// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMIGRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMIGRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteMigrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMigrationTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteMigrationTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteMigrationTaskRequest() = default ;
    DeleteMigrationTaskRequest(const DeleteMigrationTaskRequest &) = default ;
    DeleteMigrationTaskRequest(DeleteMigrationTaskRequest &&) = default ;
    DeleteMigrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMigrationTaskRequest() = default ;
    DeleteMigrationTaskRequest& operator=(const DeleteMigrationTaskRequest &) = default ;
    DeleteMigrationTaskRequest& operator=(DeleteMigrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
