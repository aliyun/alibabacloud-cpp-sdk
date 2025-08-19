// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEVERIFYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEVERIFYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteFaceVerifyResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceVerifyResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(DeleteAfterQuery, deleteAfterQuery_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceVerifyResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(DeleteAfterQuery, deleteAfterQuery_);
    };
    DeleteFaceVerifyResultRequest() = default ;
    DeleteFaceVerifyResultRequest(const DeleteFaceVerifyResultRequest &) = default ;
    DeleteFaceVerifyResultRequest(DeleteFaceVerifyResultRequest &&) = default ;
    DeleteFaceVerifyResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceVerifyResultRequest() = default ;
    DeleteFaceVerifyResultRequest& operator=(const DeleteFaceVerifyResultRequest &) = default ;
    DeleteFaceVerifyResultRequest& operator=(DeleteFaceVerifyResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr
        && this->deleteAfterQuery_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DeleteFaceVerifyResultRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // deleteAfterQuery Field Functions 
    bool hasDeleteAfterQuery() const { return this->deleteAfterQuery_ != nullptr;};
    void deleteDeleteAfterQuery() { this->deleteAfterQuery_ = nullptr;};
    inline string deleteAfterQuery() const { DARABONBA_PTR_GET_DEFAULT(deleteAfterQuery_, "") };
    inline DeleteFaceVerifyResultRequest& setDeleteAfterQuery(string deleteAfterQuery) { DARABONBA_PTR_SET_VALUE(deleteAfterQuery_, deleteAfterQuery) };


  protected:
    // Unique identifier for real-person authentication.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Whether deletion depends on having already obtained relevant data from the corresponding authentication process.
    // 
    // - Y: Required. To successfully delete the related data, you must have obtained the processing result through the DescribeFaceVerify interface.
    // - N: Not required (default). For pure server-side API integration, you can directly pass N.
    std::shared_ptr<string> deleteAfterQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
