// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteAppLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedLicenseItemIdList, failedLicenseItemIdList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedLicenseItemIdList, failedLicenseItemIdList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAppLicenseResponseBody() = default ;
    DeleteAppLicenseResponseBody(const DeleteAppLicenseResponseBody &) = default ;
    DeleteAppLicenseResponseBody(DeleteAppLicenseResponseBody &&) = default ;
    DeleteAppLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppLicenseResponseBody() = default ;
    DeleteAppLicenseResponseBody& operator=(const DeleteAppLicenseResponseBody &) = default ;
    DeleteAppLicenseResponseBody& operator=(DeleteAppLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedLicenseItemIdList_ != nullptr
        && this->requestId_ != nullptr; };
    // failedLicenseItemIdList Field Functions 
    bool hasFailedLicenseItemIdList() const { return this->failedLicenseItemIdList_ != nullptr;};
    void deleteFailedLicenseItemIdList() { this->failedLicenseItemIdList_ = nullptr;};
    inline const vector<string> & failedLicenseItemIdList() const { DARABONBA_PTR_GET_CONST(failedLicenseItemIdList_, vector<string>) };
    inline vector<string> failedLicenseItemIdList() { DARABONBA_PTR_GET(failedLicenseItemIdList_, vector<string>) };
    inline DeleteAppLicenseResponseBody& setFailedLicenseItemIdList(const vector<string> & failedLicenseItemIdList) { DARABONBA_PTR_SET_VALUE(failedLicenseItemIdList_, failedLicenseItemIdList) };
    inline DeleteAppLicenseResponseBody& setFailedLicenseItemIdList(vector<string> && failedLicenseItemIdList) { DARABONBA_PTR_SET_RVALUE(failedLicenseItemIdList_, failedLicenseItemIdList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAppLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> failedLicenseItemIdList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
