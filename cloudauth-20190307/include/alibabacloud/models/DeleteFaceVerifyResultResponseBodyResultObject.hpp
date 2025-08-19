// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEVERIFYRESULTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEVERIFYRESULTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteFaceVerifyResultResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceVerifyResultResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceVerifyResultResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
    };
    DeleteFaceVerifyResultResponseBodyResultObject() = default ;
    DeleteFaceVerifyResultResponseBodyResultObject(const DeleteFaceVerifyResultResponseBodyResultObject &) = default ;
    DeleteFaceVerifyResultResponseBodyResultObject(DeleteFaceVerifyResultResponseBodyResultObject &&) = default ;
    DeleteFaceVerifyResultResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceVerifyResultResponseBodyResultObject() = default ;
    DeleteFaceVerifyResultResponseBodyResultObject& operator=(const DeleteFaceVerifyResultResponseBodyResultObject &) = default ;
    DeleteFaceVerifyResultResponseBodyResultObject& operator=(DeleteFaceVerifyResultResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr
        && this->deleteResult_ != nullptr && this->failReason_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DeleteFaceVerifyResultResponseBodyResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // deleteResult Field Functions 
    bool hasDeleteResult() const { return this->deleteResult_ != nullptr;};
    void deleteDeleteResult() { this->deleteResult_ = nullptr;};
    inline string deleteResult() const { DARABONBA_PTR_GET_DEFAULT(deleteResult_, "") };
    inline DeleteFaceVerifyResultResponseBodyResultObject& setDeleteResult(string deleteResult) { DARABONBA_PTR_SET_VALUE(deleteResult_, deleteResult) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline DeleteFaceVerifyResultResponseBodyResultObject& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


  protected:
    // Unique identifier for real-person authentication.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Deletion result. Possible values are as follows:
    // 
    // - Y: Deletion successful.
    // - N: Deletion failed.
    std::shared_ptr<string> deleteResult_ = nullptr;
    // Reason for deletion failure
    // 
    // - NOT_DELETE_REPEATEDLY: Cannot be deleted repeatedly
    // - NEED_QUERY_VERIFY_RESULT: Need to query the verification result first, then delete
    std::shared_ptr<string> failReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
