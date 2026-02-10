// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTWARNINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTWARNINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExportWarningResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportWarningResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportWarningResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportWarningResponseBody() = default ;
    ExportWarningResponseBody(const ExportWarningResponseBody &) = default ;
    ExportWarningResponseBody(ExportWarningResponseBody &&) = default ;
    ExportWarningResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportWarningResponseBody() = default ;
    ExportWarningResponseBody& operator=(const ExportWarningResponseBody &) = default ;
    ExportWarningResponseBody& operator=(ExportWarningResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->id_ == nullptr && this->requestId_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ExportWarningResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportWarningResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportWarningResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the file that contains exported baseline check results.
    shared_ptr<string> fileName_ {};
    // The ID of the task to export baseline check results.
    // 
    // > You can call use the value of this parameter to call the [DescribeHcExportInfo](~~DescribeHcExportInfo~~) operation to query the export progress.
    shared_ptr<int64_t> id_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
