// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class CancelActiveOperationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelActiveOperationTasksResponseBody() = default ;
    CancelActiveOperationTasksResponseBody(const CancelActiveOperationTasksResponseBody &) = default ;
    CancelActiveOperationTasksResponseBody(CancelActiveOperationTasksResponseBody &&) = default ;
    CancelActiveOperationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelActiveOperationTasksResponseBody() = default ;
    CancelActiveOperationTasksResponseBody& operator=(const CancelActiveOperationTasksResponseBody &) = default ;
    CancelActiveOperationTasksResponseBody& operator=(CancelActiveOperationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr
        && this->requestId_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline CancelActiveOperationTasksResponseBody& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelActiveOperationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> ids_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
