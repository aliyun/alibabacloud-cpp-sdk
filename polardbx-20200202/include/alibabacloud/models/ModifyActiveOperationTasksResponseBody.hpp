// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyActiveOperationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyActiveOperationTasksResponseBody() = default ;
    ModifyActiveOperationTasksResponseBody(const ModifyActiveOperationTasksResponseBody &) = default ;
    ModifyActiveOperationTasksResponseBody(ModifyActiveOperationTasksResponseBody &&) = default ;
    ModifyActiveOperationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyActiveOperationTasksResponseBody() = default ;
    ModifyActiveOperationTasksResponseBody& operator=(const ModifyActiveOperationTasksResponseBody &) = default ;
    ModifyActiveOperationTasksResponseBody& operator=(ModifyActiveOperationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->requestId_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ModifyActiveOperationTasksResponseBody& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyActiveOperationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> ids_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
