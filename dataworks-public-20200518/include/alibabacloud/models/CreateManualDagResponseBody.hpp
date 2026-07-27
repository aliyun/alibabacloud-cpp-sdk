// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMANUALDAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMANUALDAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateManualDagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateManualDagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateManualDagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateManualDagResponseBody() = default ;
    CreateManualDagResponseBody(const CreateManualDagResponseBody &) = default ;
    CreateManualDagResponseBody(CreateManualDagResponseBody &&) = default ;
    CreateManualDagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateManualDagResponseBody() = default ;
    CreateManualDagResponseBody& operator=(const CreateManualDagResponseBody &) = default ;
    CreateManualDagResponseBody& operator=(CreateManualDagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && this->requestId_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline CreateManualDagResponseBody& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateManualDagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID of the DAG generated when the manual workflow runs. You can use this DagId together with the relevant API to query the details and status of the internal node instances of this manual workflow run.
    shared_ptr<int64_t> dagId_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
