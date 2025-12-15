// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSharedStoragesResponseBodySharedStorages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSharedStoragesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedStoragesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedStoragesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSharedStoragesResponseBody() = default ;
    ListSharedStoragesResponseBody(const ListSharedStoragesResponseBody &) = default ;
    ListSharedStoragesResponseBody(ListSharedStoragesResponseBody &&) = default ;
    ListSharedStoragesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedStoragesResponseBody() = default ;
    ListSharedStoragesResponseBody& operator=(const ListSharedStoragesResponseBody &) = default ;
    ListSharedStoragesResponseBody& operator=(ListSharedStoragesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sharedStorages_ == nullptr && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSharedStoragesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedStorages Field Functions 
    bool hasSharedStorages() const { return this->sharedStorages_ != nullptr;};
    void deleteSharedStorages() { this->sharedStorages_ = nullptr;};
    inline const vector<ListSharedStoragesResponseBodySharedStorages> & sharedStorages() const { DARABONBA_PTR_GET_CONST(sharedStorages_, vector<ListSharedStoragesResponseBodySharedStorages>) };
    inline vector<ListSharedStoragesResponseBodySharedStorages> sharedStorages() { DARABONBA_PTR_GET(sharedStorages_, vector<ListSharedStoragesResponseBodySharedStorages>) };
    inline ListSharedStoragesResponseBody& setSharedStorages(const vector<ListSharedStoragesResponseBodySharedStorages> & sharedStorages) { DARABONBA_PTR_SET_VALUE(sharedStorages_, sharedStorages) };
    inline ListSharedStoragesResponseBody& setSharedStorages(vector<ListSharedStoragesResponseBodySharedStorages> && sharedStorages) { DARABONBA_PTR_SET_RVALUE(sharedStorages_, sharedStorages) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListSharedStoragesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the attached shared storage.
    std::shared_ptr<vector<ListSharedStoragesResponseBodySharedStorages>> sharedStorages_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
