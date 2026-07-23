// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTRECALLMANAGEMENTTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTRECALLMANAGEMENTTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ExportRecallManagementTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementJobId, recallManagementJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementJobId, recallManagementJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportRecallManagementTableResponseBody() = default ;
    ExportRecallManagementTableResponseBody(const ExportRecallManagementTableResponseBody &) = default ;
    ExportRecallManagementTableResponseBody(ExportRecallManagementTableResponseBody &&) = default ;
    ExportRecallManagementTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportRecallManagementTableResponseBody() = default ;
    ExportRecallManagementTableResponseBody& operator=(const ExportRecallManagementTableResponseBody &) = default ;
    ExportRecallManagementTableResponseBody& operator=(ExportRecallManagementTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recallManagementJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // recallManagementJobId Field Functions 
    bool hasRecallManagementJobId() const { return this->recallManagementJobId_ != nullptr;};
    void deleteRecallManagementJobId() { this->recallManagementJobId_ = nullptr;};
    inline string getRecallManagementJobId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementJobId_, "") };
    inline ExportRecallManagementTableResponseBody& setRecallManagementJobId(string recallManagementJobId) { DARABONBA_PTR_SET_VALUE(recallManagementJobId_, recallManagementJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportRecallManagementTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The export job ID. Use this ID to track the job\\"s status.
    shared_ptr<string> recallManagementJobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
