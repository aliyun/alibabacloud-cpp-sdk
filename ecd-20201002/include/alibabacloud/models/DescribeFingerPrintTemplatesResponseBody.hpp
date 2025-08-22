// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFINGERPRINTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFINGERPRINTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeFingerPrintTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFingerPrintTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FingerPrintTemplates, fingerPrintTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFingerPrintTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FingerPrintTemplates, fingerPrintTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFingerPrintTemplatesResponseBody() = default ;
    DescribeFingerPrintTemplatesResponseBody(const DescribeFingerPrintTemplatesResponseBody &) = default ;
    DescribeFingerPrintTemplatesResponseBody(DescribeFingerPrintTemplatesResponseBody &&) = default ;
    DescribeFingerPrintTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFingerPrintTemplatesResponseBody() = default ;
    DescribeFingerPrintTemplatesResponseBody& operator=(const DescribeFingerPrintTemplatesResponseBody &) = default ;
    DescribeFingerPrintTemplatesResponseBody& operator=(DescribeFingerPrintTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fingerPrintTemplates_ != nullptr
        && this->requestId_ != nullptr; };
    // fingerPrintTemplates Field Functions 
    bool hasFingerPrintTemplates() const { return this->fingerPrintTemplates_ != nullptr;};
    void deleteFingerPrintTemplates() { this->fingerPrintTemplates_ = nullptr;};
    inline const vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates> & fingerPrintTemplates() const { DARABONBA_PTR_GET_CONST(fingerPrintTemplates_, vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates>) };
    inline vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates> fingerPrintTemplates() { DARABONBA_PTR_GET(fingerPrintTemplates_, vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates>) };
    inline DescribeFingerPrintTemplatesResponseBody& setFingerPrintTemplates(const vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates> & fingerPrintTemplates) { DARABONBA_PTR_SET_VALUE(fingerPrintTemplates_, fingerPrintTemplates) };
    inline DescribeFingerPrintTemplatesResponseBody& setFingerPrintTemplates(vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates> && fingerPrintTemplates) { DARABONBA_PTR_SET_RVALUE(fingerPrintTemplates_, fingerPrintTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFingerPrintTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The fingerprint templates.
    std::shared_ptr<vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates>> fingerPrintTemplates_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
