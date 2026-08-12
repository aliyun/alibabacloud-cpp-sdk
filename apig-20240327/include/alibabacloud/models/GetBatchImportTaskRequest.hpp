// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHIMPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHIMPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetBatchImportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchImportTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetBatchImportTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetBatchImportTaskRequest() = default ;
    GetBatchImportTaskRequest(const GetBatchImportTaskRequest &) = default ;
    GetBatchImportTaskRequest(GetBatchImportTaskRequest &&) = default ;
    GetBatchImportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchImportTaskRequest() = default ;
    GetBatchImportTaskRequest& operator=(const GetBatchImportTaskRequest &) = default ;
    GetBatchImportTaskRequest& operator=(GetBatchImportTaskRequest &&) = default ;
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
