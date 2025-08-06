// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSSERVICEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKMSSERVICEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKMSServiceKeyResponseBodyKmsKeyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetKMSServiceKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKMSServiceKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsKeyInfoList, kmsKeyInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKMSServiceKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsKeyInfoList, kmsKeyInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetKMSServiceKeyResponseBody() = default ;
    GetKMSServiceKeyResponseBody(const GetKMSServiceKeyResponseBody &) = default ;
    GetKMSServiceKeyResponseBody(GetKMSServiceKeyResponseBody &&) = default ;
    GetKMSServiceKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKMSServiceKeyResponseBody() = default ;
    GetKMSServiceKeyResponseBody& operator=(const GetKMSServiceKeyResponseBody &) = default ;
    GetKMSServiceKeyResponseBody& operator=(GetKMSServiceKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kmsKeyInfoList_ != nullptr
        && this->requestId_ != nullptr; };
    // kmsKeyInfoList Field Functions 
    bool hasKmsKeyInfoList() const { return this->kmsKeyInfoList_ != nullptr;};
    void deleteKmsKeyInfoList() { this->kmsKeyInfoList_ = nullptr;};
    inline const vector<GetKMSServiceKeyResponseBodyKmsKeyInfoList> & kmsKeyInfoList() const { DARABONBA_PTR_GET_CONST(kmsKeyInfoList_, vector<GetKMSServiceKeyResponseBodyKmsKeyInfoList>) };
    inline vector<GetKMSServiceKeyResponseBodyKmsKeyInfoList> kmsKeyInfoList() { DARABONBA_PTR_GET(kmsKeyInfoList_, vector<GetKMSServiceKeyResponseBodyKmsKeyInfoList>) };
    inline GetKMSServiceKeyResponseBody& setKmsKeyInfoList(const vector<GetKMSServiceKeyResponseBodyKmsKeyInfoList> & kmsKeyInfoList) { DARABONBA_PTR_SET_VALUE(kmsKeyInfoList_, kmsKeyInfoList) };
    inline GetKMSServiceKeyResponseBody& setKmsKeyInfoList(vector<GetKMSServiceKeyResponseBodyKmsKeyInfoList> && kmsKeyInfoList) { DARABONBA_PTR_SET_RVALUE(kmsKeyInfoList_, kmsKeyInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKMSServiceKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetKMSServiceKeyResponseBodyKmsKeyInfoList>> kmsKeyInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
