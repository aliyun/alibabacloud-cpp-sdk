// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteBackupFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeletedBaksetIds, deletedBaksetIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletedBaksetIds, deletedBaksetIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteBackupFileResponseBody() = default ;
    DeleteBackupFileResponseBody(const DeleteBackupFileResponseBody &) = default ;
    DeleteBackupFileResponseBody(DeleteBackupFileResponseBody &&) = default ;
    DeleteBackupFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupFileResponseBody() = default ;
    DeleteBackupFileResponseBody& operator=(const DeleteBackupFileResponseBody &) = default ;
    DeleteBackupFileResponseBody& operator=(DeleteBackupFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeletedBaksetIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeletedBaksetIds& obj) { 
        DARABONBA_PTR_TO_JSON(DeletedBaksetIds, deletedBaksetIds_);
      };
      friend void from_json(const Darabonba::Json& j, DeletedBaksetIds& obj) { 
        DARABONBA_PTR_FROM_JSON(DeletedBaksetIds, deletedBaksetIds_);
      };
      DeletedBaksetIds() = default ;
      DeletedBaksetIds(const DeletedBaksetIds &) = default ;
      DeletedBaksetIds(DeletedBaksetIds &&) = default ;
      DeletedBaksetIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeletedBaksetIds() = default ;
      DeletedBaksetIds& operator=(const DeletedBaksetIds &) = default ;
      DeletedBaksetIds& operator=(DeletedBaksetIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deletedBaksetIds_ == nullptr; };
      // deletedBaksetIds Field Functions 
      bool hasDeletedBaksetIds() const { return this->deletedBaksetIds_ != nullptr;};
      void deleteDeletedBaksetIds() { this->deletedBaksetIds_ = nullptr;};
      inline const vector<int32_t> & getDeletedBaksetIds() const { DARABONBA_PTR_GET_CONST(deletedBaksetIds_, vector<int32_t>) };
      inline vector<int32_t> getDeletedBaksetIds() { DARABONBA_PTR_GET(deletedBaksetIds_, vector<int32_t>) };
      inline DeletedBaksetIds& setDeletedBaksetIds(const vector<int32_t> & deletedBaksetIds) { DARABONBA_PTR_SET_VALUE(deletedBaksetIds_, deletedBaksetIds) };
      inline DeletedBaksetIds& setDeletedBaksetIds(vector<int32_t> && deletedBaksetIds) { DARABONBA_PTR_SET_RVALUE(deletedBaksetIds_, deletedBaksetIds) };


    protected:
      shared_ptr<vector<int32_t>> deletedBaksetIds_ {};
    };

    virtual bool empty() const override { return this->deletedBaksetIds_ == nullptr
        && this->requestId_ == nullptr; };
    // deletedBaksetIds Field Functions 
    bool hasDeletedBaksetIds() const { return this->deletedBaksetIds_ != nullptr;};
    void deleteDeletedBaksetIds() { this->deletedBaksetIds_ = nullptr;};
    inline const DeleteBackupFileResponseBody::DeletedBaksetIds & getDeletedBaksetIds() const { DARABONBA_PTR_GET_CONST(deletedBaksetIds_, DeleteBackupFileResponseBody::DeletedBaksetIds) };
    inline DeleteBackupFileResponseBody::DeletedBaksetIds getDeletedBaksetIds() { DARABONBA_PTR_GET(deletedBaksetIds_, DeleteBackupFileResponseBody::DeletedBaksetIds) };
    inline DeleteBackupFileResponseBody& setDeletedBaksetIds(const DeleteBackupFileResponseBody::DeletedBaksetIds & deletedBaksetIds) { DARABONBA_PTR_SET_VALUE(deletedBaksetIds_, deletedBaksetIds) };
    inline DeleteBackupFileResponseBody& setDeletedBaksetIds(DeleteBackupFileResponseBody::DeletedBaksetIds && deletedBaksetIds) { DARABONBA_PTR_SET_RVALUE(deletedBaksetIds_, deletedBaksetIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteBackupFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the IDs of deleted backup sets.
    shared_ptr<DeleteBackupFileResponseBody::DeletedBaksetIds> deletedBaksetIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
