// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTERESOURCEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTERESOURCEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ExecuteResourceExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    ExecuteResourceExportTaskRequest() = default ;
    ExecuteResourceExportTaskRequest(const ExecuteResourceExportTaskRequest &) = default ;
    ExecuteResourceExportTaskRequest(ExecuteResourceExportTaskRequest &&) = default ;
    ExecuteResourceExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteResourceExportTaskRequest() = default ;
    ExecuteResourceExportTaskRequest& operator=(const ExecuteResourceExportTaskRequest &) = default ;
    ExecuteResourceExportTaskRequest& operator=(ExecuteResourceExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ExecuteResourceExportTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
