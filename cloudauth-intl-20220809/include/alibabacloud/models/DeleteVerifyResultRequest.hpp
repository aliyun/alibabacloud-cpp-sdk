// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVERIFYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVERIFYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeleteVerifyResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVerifyResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteAfterQuery, deleteAfterQuery_);
      DARABONBA_PTR_TO_JSON(DeleteType, deleteType_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVerifyResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteAfterQuery, deleteAfterQuery_);
      DARABONBA_PTR_FROM_JSON(DeleteType, deleteType_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    DeleteVerifyResultRequest() = default ;
    DeleteVerifyResultRequest(const DeleteVerifyResultRequest &) = default ;
    DeleteVerifyResultRequest(DeleteVerifyResultRequest &&) = default ;
    DeleteVerifyResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVerifyResultRequest() = default ;
    DeleteVerifyResultRequest& operator=(const DeleteVerifyResultRequest &) = default ;
    DeleteVerifyResultRequest& operator=(DeleteVerifyResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteAfterQuery_ == nullptr
        && return this->deleteType_ == nullptr && return this->transactionId_ == nullptr; };
    // deleteAfterQuery Field Functions 
    bool hasDeleteAfterQuery() const { return this->deleteAfterQuery_ != nullptr;};
    void deleteDeleteAfterQuery() { this->deleteAfterQuery_ = nullptr;};
    inline string deleteAfterQuery() const { DARABONBA_PTR_GET_DEFAULT(deleteAfterQuery_, "") };
    inline DeleteVerifyResultRequest& setDeleteAfterQuery(string deleteAfterQuery) { DARABONBA_PTR_SET_VALUE(deleteAfterQuery_, deleteAfterQuery) };


    // deleteType Field Functions 
    bool hasDeleteType() const { return this->deleteType_ != nullptr;};
    void deleteDeleteType() { this->deleteType_ = nullptr;};
    inline string deleteType() const { DARABONBA_PTR_GET_DEFAULT(deleteType_, "") };
    inline DeleteVerifyResultRequest& setDeleteType(string deleteType) { DARABONBA_PTR_SET_VALUE(deleteType_, deleteType) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline DeleteVerifyResultRequest& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Whether to depend on the query interface when deleting data
    std::shared_ptr<string> deleteAfterQuery_ = nullptr;
    // Type of data to be deleted
    std::shared_ptr<string> deleteType_ = nullptr;
    // Unique identifier of the authentication request
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
