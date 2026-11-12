// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteContactGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteContactGroupsResponseBody() = default ;
    DeleteContactGroupsResponseBody(const DeleteContactGroupsResponseBody &) = default ;
    DeleteContactGroupsResponseBody(DeleteContactGroupsResponseBody &&) = default ;
    DeleteContactGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactGroupsResponseBody() = default ;
    DeleteContactGroupsResponseBody& operator=(const DeleteContactGroupsResponseBody &) = default ;
    DeleteContactGroupsResponseBody& operator=(DeleteContactGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletedCount_ == nullptr
        && this->requestId_ == nullptr; };
    // deletedCount Field Functions 
    bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
    void deleteDeletedCount() { this->deletedCount_ = nullptr;};
    inline int32_t getDeletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0) };
    inline DeleteContactGroupsResponseBody& setDeletedCount(int32_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteContactGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The actual number of deleted records.
    shared_ptr<int32_t> deletedCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
