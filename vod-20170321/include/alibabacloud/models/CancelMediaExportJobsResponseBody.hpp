// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMEDIAEXPORTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELMEDIAEXPORTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CancelMediaExportJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMediaExportJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedJobIds, failedJobIds_);
      DARABONBA_PTR_TO_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMediaExportJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedJobIds, failedJobIds_);
      DARABONBA_PTR_FROM_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelMediaExportJobsResponseBody() = default ;
    CancelMediaExportJobsResponseBody(const CancelMediaExportJobsResponseBody &) = default ;
    CancelMediaExportJobsResponseBody(CancelMediaExportJobsResponseBody &&) = default ;
    CancelMediaExportJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMediaExportJobsResponseBody() = default ;
    CancelMediaExportJobsResponseBody& operator=(const CancelMediaExportJobsResponseBody &) = default ;
    CancelMediaExportJobsResponseBody& operator=(CancelMediaExportJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedJobIds_ != nullptr
        && this->nonExistJobIds_ != nullptr && this->requestId_ != nullptr; };
    // failedJobIds Field Functions 
    bool hasFailedJobIds() const { return this->failedJobIds_ != nullptr;};
    void deleteFailedJobIds() { this->failedJobIds_ = nullptr;};
    inline const vector<string> & failedJobIds() const { DARABONBA_PTR_GET_CONST(failedJobIds_, vector<string>) };
    inline vector<string> failedJobIds() { DARABONBA_PTR_GET(failedJobIds_, vector<string>) };
    inline CancelMediaExportJobsResponseBody& setFailedJobIds(const vector<string> & failedJobIds) { DARABONBA_PTR_SET_VALUE(failedJobIds_, failedJobIds) };
    inline CancelMediaExportJobsResponseBody& setFailedJobIds(vector<string> && failedJobIds) { DARABONBA_PTR_SET_RVALUE(failedJobIds_, failedJobIds) };


    // nonExistJobIds Field Functions 
    bool hasNonExistJobIds() const { return this->nonExistJobIds_ != nullptr;};
    void deleteNonExistJobIds() { this->nonExistJobIds_ = nullptr;};
    inline const vector<string> & nonExistJobIds() const { DARABONBA_PTR_GET_CONST(nonExistJobIds_, vector<string>) };
    inline vector<string> nonExistJobIds() { DARABONBA_PTR_GET(nonExistJobIds_, vector<string>) };
    inline CancelMediaExportJobsResponseBody& setNonExistJobIds(const vector<string> & nonExistJobIds) { DARABONBA_PTR_SET_VALUE(nonExistJobIds_, nonExistJobIds) };
    inline CancelMediaExportJobsResponseBody& setNonExistJobIds(vector<string> && nonExistJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistJobIds_, nonExistJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelMediaExportJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> failedJobIds_ = nullptr;
    std::shared_ptr<vector<string>> nonExistJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
