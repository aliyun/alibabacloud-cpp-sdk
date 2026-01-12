// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERDSTOCLICKHOUSEDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERDSTOCLICKHOUSEDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CreateRDSToClickhouseDbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRDSToClickhouseDbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RepeatedDbs, repeatedDbs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRDSToClickhouseDbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RepeatedDbs, repeatedDbs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateRDSToClickhouseDbResponseBody() = default ;
    CreateRDSToClickhouseDbResponseBody(const CreateRDSToClickhouseDbResponseBody &) = default ;
    CreateRDSToClickhouseDbResponseBody(CreateRDSToClickhouseDbResponseBody &&) = default ;
    CreateRDSToClickhouseDbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRDSToClickhouseDbResponseBody() = default ;
    CreateRDSToClickhouseDbResponseBody& operator=(const CreateRDSToClickhouseDbResponseBody &) = default ;
    CreateRDSToClickhouseDbResponseBody& operator=(CreateRDSToClickhouseDbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->repeatedDbs_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreateRDSToClickhouseDbResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // repeatedDbs Field Functions 
    bool hasRepeatedDbs() const { return this->repeatedDbs_ != nullptr;};
    void deleteRepeatedDbs() { this->repeatedDbs_ = nullptr;};
    inline const vector<string> & getRepeatedDbs() const { DARABONBA_PTR_GET_CONST(repeatedDbs_, vector<string>) };
    inline vector<string> getRepeatedDbs() { DARABONBA_PTR_GET(repeatedDbs_, vector<string>) };
    inline CreateRDSToClickhouseDbResponseBody& setRepeatedDbs(const vector<string> & repeatedDbs) { DARABONBA_PTR_SET_VALUE(repeatedDbs_, repeatedDbs) };
    inline CreateRDSToClickhouseDbResponseBody& setRepeatedDbs(vector<string> && repeatedDbs) { DARABONBA_PTR_SET_RVALUE(repeatedDbs_, repeatedDbs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRDSToClickhouseDbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline CreateRDSToClickhouseDbResponseBody& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // If the value of the **Status** parameter is -1, the cause of the creation failure is returned.
    shared_ptr<string> errorMsg_ {};
    // Duplicate tables in the synchronization task.
    shared_ptr<vector<string>> repeatedDbs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the synchronization task was created. Valid values:
    // 
    // *   **1**: Created.
    // *   **0**: Creation failed. The tables in the synchronization task are duplicate. The duplicate tables are returned for the **RepeatedDbs** parameter.
    // *   **-1**: Creation failed. The cause why the creation failed is returned for the **ErrorMsg** parameter.
    shared_ptr<int64_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
