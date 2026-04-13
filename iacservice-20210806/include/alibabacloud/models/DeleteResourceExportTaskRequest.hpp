// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DeleteResourceExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceExportTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceExportTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteResourceExportTaskRequest() = default ;
    DeleteResourceExportTaskRequest(const DeleteResourceExportTaskRequest &) = default ;
    DeleteResourceExportTaskRequest(DeleteResourceExportTaskRequest &&) = default ;
    DeleteResourceExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceExportTaskRequest() = default ;
    DeleteResourceExportTaskRequest& operator=(const DeleteResourceExportTaskRequest &) = default ;
    DeleteResourceExportTaskRequest& operator=(DeleteResourceExportTaskRequest &&) = default ;
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
