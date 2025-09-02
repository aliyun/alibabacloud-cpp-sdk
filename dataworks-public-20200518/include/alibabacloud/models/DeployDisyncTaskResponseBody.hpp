// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployDISyncTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeployDISyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployDISyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeployDISyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeployDISyncTaskResponseBody() = default ;
    DeployDISyncTaskResponseBody(const DeployDISyncTaskResponseBody &) = default ;
    DeployDISyncTaskResponseBody(DeployDISyncTaskResponseBody &&) = default ;
    DeployDISyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployDISyncTaskResponseBody() = default ;
    DeployDISyncTaskResponseBody& operator=(const DeployDISyncTaskResponseBody &) = default ;
    DeployDISyncTaskResponseBody& operator=(DeployDISyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeployDISyncTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeployDISyncTaskResponseBodyData) };
    inline DeployDISyncTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, DeployDISyncTaskResponseBodyData) };
    inline DeployDISyncTaskResponseBody& setData(const DeployDISyncTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeployDISyncTaskResponseBody& setData(DeployDISyncTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeployDISyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeployDISyncTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the real-time synchronization node or data synchronization solution is deployed. Valid values:
    // 
    // *   success: The real-time synchronization node or data synchronization solution is deployed.
    // *   fail: The real-time synchronization node or data synchronization solution fails to be deployed.
    std::shared_ptr<DeployDISyncTaskResponseBodyData> data_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the request. You can query logs and troubleshoot issues based on the ID.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
