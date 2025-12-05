// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceQuotaInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceQuotaInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_TO_JSON(KmsInstanceQuotaInfos, kmsInstanceQuotaInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceQuotaInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(KmsInstanceQuotaInfos, kmsInstanceQuotaInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetKmsInstanceQuotaInfosResponseBody() = default ;
    GetKmsInstanceQuotaInfosResponseBody(const GetKmsInstanceQuotaInfosResponseBody &) = default ;
    GetKmsInstanceQuotaInfosResponseBody(GetKmsInstanceQuotaInfosResponseBody &&) = default ;
    GetKmsInstanceQuotaInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceQuotaInfosResponseBody() = default ;
    GetKmsInstanceQuotaInfosResponseBody& operator=(const GetKmsInstanceQuotaInfosResponseBody &) = default ;
    GetKmsInstanceQuotaInfosResponseBody& operator=(GetKmsInstanceQuotaInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstanceId_ == nullptr
        && return this->kmsInstanceQuotaInfos_ == nullptr && return this->requestId_ == nullptr; };
    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string kmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline GetKmsInstanceQuotaInfosResponseBody& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


    // kmsInstanceQuotaInfos Field Functions 
    bool hasKmsInstanceQuotaInfos() const { return this->kmsInstanceQuotaInfos_ != nullptr;};
    void deleteKmsInstanceQuotaInfos() { this->kmsInstanceQuotaInfos_ = nullptr;};
    inline const vector<GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos> & kmsInstanceQuotaInfos() const { DARABONBA_PTR_GET_CONST(kmsInstanceQuotaInfos_, vector<GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos>) };
    inline vector<GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos> kmsInstanceQuotaInfos() { DARABONBA_PTR_GET(kmsInstanceQuotaInfos_, vector<GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos>) };
    inline GetKmsInstanceQuotaInfosResponseBody& setKmsInstanceQuotaInfos(const vector<GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos> & kmsInstanceQuotaInfos) { DARABONBA_PTR_SET_VALUE(kmsInstanceQuotaInfos_, kmsInstanceQuotaInfos) };
    inline GetKmsInstanceQuotaInfosResponseBody& setKmsInstanceQuotaInfos(vector<GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos> && kmsInstanceQuotaInfos) { DARABONBA_PTR_SET_RVALUE(kmsInstanceQuotaInfos_, kmsInstanceQuotaInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKmsInstanceQuotaInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> kmsInstanceId_ = nullptr;
    std::shared_ptr<vector<GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos>> kmsInstanceQuotaInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
