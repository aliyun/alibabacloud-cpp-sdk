// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteBackupFileResponseBodyDeletedBaksetIds.hpp>
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
    virtual bool empty() const override { return this->deletedBaksetIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // deletedBaksetIds Field Functions 
    bool hasDeletedBaksetIds() const { return this->deletedBaksetIds_ != nullptr;};
    void deleteDeletedBaksetIds() { this->deletedBaksetIds_ = nullptr;};
    inline const DeleteBackupFileResponseBodyDeletedBaksetIds & deletedBaksetIds() const { DARABONBA_PTR_GET_CONST(deletedBaksetIds_, DeleteBackupFileResponseBodyDeletedBaksetIds) };
    inline DeleteBackupFileResponseBodyDeletedBaksetIds deletedBaksetIds() { DARABONBA_PTR_GET(deletedBaksetIds_, DeleteBackupFileResponseBodyDeletedBaksetIds) };
    inline DeleteBackupFileResponseBody& setDeletedBaksetIds(const DeleteBackupFileResponseBodyDeletedBaksetIds & deletedBaksetIds) { DARABONBA_PTR_SET_VALUE(deletedBaksetIds_, deletedBaksetIds) };
    inline DeleteBackupFileResponseBody& setDeletedBaksetIds(DeleteBackupFileResponseBodyDeletedBaksetIds && deletedBaksetIds) { DARABONBA_PTR_SET_RVALUE(deletedBaksetIds_, deletedBaksetIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteBackupFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the IDs of deleted backup sets.
    std::shared_ptr<DeleteBackupFileResponseBodyDeletedBaksetIds> deletedBaksetIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
