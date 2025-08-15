// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVERIFYRESULTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEVERIFYRESULTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeleteVerifyResultResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVerifyResultResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVerifyResultResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    DeleteVerifyResultResponseBodyResult() = default ;
    DeleteVerifyResultResponseBodyResult(const DeleteVerifyResultResponseBodyResult &) = default ;
    DeleteVerifyResultResponseBodyResult(DeleteVerifyResultResponseBodyResult &&) = default ;
    DeleteVerifyResultResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVerifyResultResponseBodyResult() = default ;
    DeleteVerifyResultResponseBodyResult& operator=(const DeleteVerifyResultResponseBodyResult &) = default ;
    DeleteVerifyResultResponseBodyResult& operator=(DeleteVerifyResultResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteResult_ != nullptr
        && this->transactionId_ != nullptr; };
    // deleteResult Field Functions 
    bool hasDeleteResult() const { return this->deleteResult_ != nullptr;};
    void deleteDeleteResult() { this->deleteResult_ = nullptr;};
    inline string deleteResult() const { DARABONBA_PTR_GET_DEFAULT(deleteResult_, "") };
    inline DeleteVerifyResultResponseBodyResult& setDeleteResult(string deleteResult) { DARABONBA_PTR_SET_VALUE(deleteResult_, deleteResult) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline DeleteVerifyResultResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Deletion result. Y indicates successful deletion, N indicates failed deletion
    std::shared_ptr<string> deleteResult_ = nullptr;
    // Unique identifier of the authentication request
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
