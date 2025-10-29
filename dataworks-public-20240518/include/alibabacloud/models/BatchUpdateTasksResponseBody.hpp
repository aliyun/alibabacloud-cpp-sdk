// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SuccessInfoValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchUpdateTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessInfo, successInfo_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessInfo, successInfo_);
    };
    BatchUpdateTasksResponseBody() = default ;
    BatchUpdateTasksResponseBody(const BatchUpdateTasksResponseBody &) = default ;
    BatchUpdateTasksResponseBody(BatchUpdateTasksResponseBody &&) = default ;
    BatchUpdateTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateTasksResponseBody() = default ;
    BatchUpdateTasksResponseBody& operator=(const BatchUpdateTasksResponseBody &) = default ;
    BatchUpdateTasksResponseBody& operator=(BatchUpdateTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->successInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchUpdateTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successInfo Field Functions 
    bool hasSuccessInfo() const { return this->successInfo_ != nullptr;};
    void deleteSuccessInfo() { this->successInfo_ = nullptr;};
    inline const map<string, SuccessInfoValue> & successInfo() const { DARABONBA_PTR_GET_CONST(successInfo_, map<string, SuccessInfoValue>) };
    inline map<string, SuccessInfoValue> successInfo() { DARABONBA_PTR_GET(successInfo_, map<string, SuccessInfoValue>) };
    inline BatchUpdateTasksResponseBody& setSuccessInfo(const map<string, SuccessInfoValue> & successInfo) { DARABONBA_PTR_SET_VALUE(successInfo_, successInfo) };
    inline BatchUpdateTasksResponseBody& setSuccessInfo(map<string, SuccessInfoValue> && successInfo) { DARABONBA_PTR_SET_RVALUE(successInfo_, successInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the batch operation, which is in the MAP structure. The task ID serves as a key, and the result serves as a value.
    std::shared_ptr<map<string, SuccessInfoValue>> successInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
