// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAIDBClusterTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIDBClusterTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIDBClusterTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAIDBClusterTaskResponseBody() = default ;
    DeleteAIDBClusterTaskResponseBody(const DeleteAIDBClusterTaskResponseBody &) = default ;
    DeleteAIDBClusterTaskResponseBody(DeleteAIDBClusterTaskResponseBody &&) = default ;
    DeleteAIDBClusterTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIDBClusterTaskResponseBody() = default ;
    DeleteAIDBClusterTaskResponseBody& operator=(const DeleteAIDBClusterTaskResponseBody &) = default ;
    DeleteAIDBClusterTaskResponseBody& operator=(DeleteAIDBClusterTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->relativeDBClusterId_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteAIDBClusterTaskResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // relativeDBClusterId Field Functions 
    bool hasRelativeDBClusterId() const { return this->relativeDBClusterId_ != nullptr;};
    void deleteRelativeDBClusterId() { this->relativeDBClusterId_ = nullptr;};
    inline string getRelativeDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDBClusterId_, "") };
    inline DeleteAIDBClusterTaskResponseBody& setRelativeDBClusterId(string relativeDBClusterId) { DARABONBA_PTR_SET_VALUE(relativeDBClusterId_, relativeDBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAIDBClusterTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> relativeDBClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
