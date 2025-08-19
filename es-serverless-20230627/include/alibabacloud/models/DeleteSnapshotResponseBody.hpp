// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class DeleteSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DeleteSnapshotResponseBody() = default ;
    DeleteSnapshotResponseBody(const DeleteSnapshotResponseBody &) = default ;
    DeleteSnapshotResponseBody(DeleteSnapshotResponseBody &&) = default ;
    DeleteSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotResponseBody() = default ;
    DeleteSnapshotResponseBody& operator=(const DeleteSnapshotResponseBody &) = default ;
    DeleteSnapshotResponseBody& operator=(DeleteSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline DeleteSnapshotResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
