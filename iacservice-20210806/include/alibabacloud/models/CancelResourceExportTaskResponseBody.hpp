// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELRESOURCEEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELRESOURCEEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CancelResourceExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CancelResourceExportTaskResponseBody() = default ;
    CancelResourceExportTaskResponseBody(const CancelResourceExportTaskResponseBody &) = default ;
    CancelResourceExportTaskResponseBody(CancelResourceExportTaskResponseBody &&) = default ;
    CancelResourceExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelResourceExportTaskResponseBody() = default ;
    CancelResourceExportTaskResponseBody& operator=(const CancelResourceExportTaskResponseBody &) = default ;
    CancelResourceExportTaskResponseBody& operator=(CancelResourceExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTaskId_ == nullptr
        && this->exportVersion_ == nullptr && this->requestId_ == nullptr; };
    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline CancelResourceExportTaskResponseBody& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string getExportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline CancelResourceExportTaskResponseBody& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelResourceExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> exportTaskId_ {};
    shared_ptr<string> exportVersion_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
