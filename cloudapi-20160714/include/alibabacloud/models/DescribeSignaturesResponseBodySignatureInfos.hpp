// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESRESPONSEBODYSIGNATUREINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESRESPONSEBODYSIGNATUREINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSignaturesResponseBodySignatureInfosSignatureInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesResponseBodySignatureInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesResponseBodySignatureInfos& obj) { 
      DARABONBA_PTR_TO_JSON(SignatureInfo, signatureInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesResponseBodySignatureInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(SignatureInfo, signatureInfo_);
    };
    DescribeSignaturesResponseBodySignatureInfos() = default ;
    DescribeSignaturesResponseBodySignatureInfos(const DescribeSignaturesResponseBodySignatureInfos &) = default ;
    DescribeSignaturesResponseBodySignatureInfos(DescribeSignaturesResponseBodySignatureInfos &&) = default ;
    DescribeSignaturesResponseBodySignatureInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesResponseBodySignatureInfos() = default ;
    DescribeSignaturesResponseBodySignatureInfos& operator=(const DescribeSignaturesResponseBodySignatureInfos &) = default ;
    DescribeSignaturesResponseBodySignatureInfos& operator=(DescribeSignaturesResponseBodySignatureInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->signatureInfo_ == nullptr; };
    // signatureInfo Field Functions 
    bool hasSignatureInfo() const { return this->signatureInfo_ != nullptr;};
    void deleteSignatureInfo() { this->signatureInfo_ = nullptr;};
    inline const vector<Models::DescribeSignaturesResponseBodySignatureInfosSignatureInfo> & signatureInfo() const { DARABONBA_PTR_GET_CONST(signatureInfo_, vector<Models::DescribeSignaturesResponseBodySignatureInfosSignatureInfo>) };
    inline vector<Models::DescribeSignaturesResponseBodySignatureInfosSignatureInfo> signatureInfo() { DARABONBA_PTR_GET(signatureInfo_, vector<Models::DescribeSignaturesResponseBodySignatureInfosSignatureInfo>) };
    inline DescribeSignaturesResponseBodySignatureInfos& setSignatureInfo(const vector<Models::DescribeSignaturesResponseBodySignatureInfosSignatureInfo> & signatureInfo) { DARABONBA_PTR_SET_VALUE(signatureInfo_, signatureInfo) };
    inline DescribeSignaturesResponseBodySignatureInfos& setSignatureInfo(vector<Models::DescribeSignaturesResponseBodySignatureInfosSignatureInfo> && signatureInfo) { DARABONBA_PTR_SET_RVALUE(signatureInfo_, signatureInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeSignaturesResponseBodySignatureInfosSignatureInfo>> signatureInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
