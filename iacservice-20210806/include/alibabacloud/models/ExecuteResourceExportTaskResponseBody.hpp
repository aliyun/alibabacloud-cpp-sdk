// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTERESOURCEEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTERESOURCEEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ExecuteResourceExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ExecuteResourceExportTaskResponseBody() = default ;
    ExecuteResourceExportTaskResponseBody(const ExecuteResourceExportTaskResponseBody &) = default ;
    ExecuteResourceExportTaskResponseBody(ExecuteResourceExportTaskResponseBody &&) = default ;
    ExecuteResourceExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteResourceExportTaskResponseBody() = default ;
    ExecuteResourceExportTaskResponseBody& operator=(const ExecuteResourceExportTaskResponseBody &) = default ;
    ExecuteResourceExportTaskResponseBody& operator=(ExecuteResourceExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportTaskId_ != nullptr
        && this->exportVersion_ != nullptr && this->requestId_ != nullptr; };
    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string exportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline ExecuteResourceExportTaskResponseBody& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string exportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline ExecuteResourceExportTaskResponseBody& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteResourceExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> exportTaskId_ = nullptr;
    std::shared_ptr<string> exportVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
