// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAnalysisExportTaskResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateAnalysisExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnalysisExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnalysisExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    CreateAnalysisExportTaskResponseBody() = default ;
    CreateAnalysisExportTaskResponseBody(const CreateAnalysisExportTaskResponseBody &) = default ;
    CreateAnalysisExportTaskResponseBody(CreateAnalysisExportTaskResponseBody &&) = default ;
    CreateAnalysisExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnalysisExportTaskResponseBody() = default ;
    CreateAnalysisExportTaskResponseBody& operator=(const CreateAnalysisExportTaskResponseBody &) = default ;
    CreateAnalysisExportTaskResponseBody& operator=(CreateAnalysisExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAnalysisExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CreateAnalysisExportTaskResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CreateAnalysisExportTaskResponseBodyResultObject) };
    inline CreateAnalysisExportTaskResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, CreateAnalysisExportTaskResponseBodyResultObject) };
    inline CreateAnalysisExportTaskResponseBody& setResultObject(const CreateAnalysisExportTaskResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CreateAnalysisExportTaskResponseBody& setResultObject(CreateAnalysisExportTaskResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned object
    std::shared_ptr<CreateAnalysisExportTaskResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
