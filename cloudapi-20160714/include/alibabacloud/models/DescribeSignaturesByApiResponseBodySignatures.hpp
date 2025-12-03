// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODYSIGNATURES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODYSIGNATURES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSignaturesByApiResponseBodySignaturesSignatureItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesByApiResponseBodySignatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesByApiResponseBodySignatures& obj) { 
      DARABONBA_PTR_TO_JSON(SignatureItem, signatureItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesByApiResponseBodySignatures& obj) { 
      DARABONBA_PTR_FROM_JSON(SignatureItem, signatureItem_);
    };
    DescribeSignaturesByApiResponseBodySignatures() = default ;
    DescribeSignaturesByApiResponseBodySignatures(const DescribeSignaturesByApiResponseBodySignatures &) = default ;
    DescribeSignaturesByApiResponseBodySignatures(DescribeSignaturesByApiResponseBodySignatures &&) = default ;
    DescribeSignaturesByApiResponseBodySignatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesByApiResponseBodySignatures() = default ;
    DescribeSignaturesByApiResponseBodySignatures& operator=(const DescribeSignaturesByApiResponseBodySignatures &) = default ;
    DescribeSignaturesByApiResponseBodySignatures& operator=(DescribeSignaturesByApiResponseBodySignatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->signatureItem_ == nullptr; };
    // signatureItem Field Functions 
    bool hasSignatureItem() const { return this->signatureItem_ != nullptr;};
    void deleteSignatureItem() { this->signatureItem_ = nullptr;};
    inline const vector<Models::DescribeSignaturesByApiResponseBodySignaturesSignatureItem> & signatureItem() const { DARABONBA_PTR_GET_CONST(signatureItem_, vector<Models::DescribeSignaturesByApiResponseBodySignaturesSignatureItem>) };
    inline vector<Models::DescribeSignaturesByApiResponseBodySignaturesSignatureItem> signatureItem() { DARABONBA_PTR_GET(signatureItem_, vector<Models::DescribeSignaturesByApiResponseBodySignaturesSignatureItem>) };
    inline DescribeSignaturesByApiResponseBodySignatures& setSignatureItem(const vector<Models::DescribeSignaturesByApiResponseBodySignaturesSignatureItem> & signatureItem) { DARABONBA_PTR_SET_VALUE(signatureItem_, signatureItem) };
    inline DescribeSignaturesByApiResponseBodySignatures& setSignatureItem(vector<Models::DescribeSignaturesByApiResponseBodySignaturesSignatureItem> && signatureItem) { DARABONBA_PTR_SET_RVALUE(signatureItem_, signatureItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeSignaturesByApiResponseBodySignaturesSignatureItem>> signatureItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
