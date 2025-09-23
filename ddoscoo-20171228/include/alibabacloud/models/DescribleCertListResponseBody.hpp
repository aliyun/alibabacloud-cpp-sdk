// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLECERTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLECERTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribleCertListResponseBodyCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribleCertListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleCertListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleCertListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribleCertListResponseBody() = default ;
    DescribleCertListResponseBody(const DescribleCertListResponseBody &) = default ;
    DescribleCertListResponseBody(DescribleCertListResponseBody &&) = default ;
    DescribleCertListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleCertListResponseBody() = default ;
    DescribleCertListResponseBody& operator=(const DescribleCertListResponseBody &) = default ;
    DescribleCertListResponseBody& operator=(DescribleCertListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certList_ != nullptr
        && this->requestId_ != nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<DescribleCertListResponseBodyCertList> & certList() const { DARABONBA_PTR_GET_CONST(certList_, vector<DescribleCertListResponseBodyCertList>) };
    inline vector<DescribleCertListResponseBodyCertList> certList() { DARABONBA_PTR_GET(certList_, vector<DescribleCertListResponseBodyCertList>) };
    inline DescribleCertListResponseBody& setCertList(const vector<DescribleCertListResponseBodyCertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribleCertListResponseBody& setCertList(vector<DescribleCertListResponseBodyCertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribleCertListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribleCertListResponseBodyCertList>> certList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
