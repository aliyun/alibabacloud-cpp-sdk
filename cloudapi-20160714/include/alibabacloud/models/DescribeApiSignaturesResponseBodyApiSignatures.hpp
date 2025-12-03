// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISIGNATURESRESPONSEBODYAPISIGNATURES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISIGNATURESRESPONSEBODYAPISIGNATURES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiSignaturesResponseBodyApiSignatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiSignaturesResponseBodyApiSignatures& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSignatureItem, apiSignatureItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiSignaturesResponseBodyApiSignatures& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSignatureItem, apiSignatureItem_);
    };
    DescribeApiSignaturesResponseBodyApiSignatures() = default ;
    DescribeApiSignaturesResponseBodyApiSignatures(const DescribeApiSignaturesResponseBodyApiSignatures &) = default ;
    DescribeApiSignaturesResponseBodyApiSignatures(DescribeApiSignaturesResponseBodyApiSignatures &&) = default ;
    DescribeApiSignaturesResponseBodyApiSignatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiSignaturesResponseBodyApiSignatures() = default ;
    DescribeApiSignaturesResponseBodyApiSignatures& operator=(const DescribeApiSignaturesResponseBodyApiSignatures &) = default ;
    DescribeApiSignaturesResponseBodyApiSignatures& operator=(DescribeApiSignaturesResponseBodyApiSignatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSignatureItem_ == nullptr; };
    // apiSignatureItem Field Functions 
    bool hasApiSignatureItem() const { return this->apiSignatureItem_ != nullptr;};
    void deleteApiSignatureItem() { this->apiSignatureItem_ = nullptr;};
    inline const vector<Models::DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem> & apiSignatureItem() const { DARABONBA_PTR_GET_CONST(apiSignatureItem_, vector<Models::DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem>) };
    inline vector<Models::DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem> apiSignatureItem() { DARABONBA_PTR_GET(apiSignatureItem_, vector<Models::DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem>) };
    inline DescribeApiSignaturesResponseBodyApiSignatures& setApiSignatureItem(const vector<Models::DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem> & apiSignatureItem) { DARABONBA_PTR_SET_VALUE(apiSignatureItem_, apiSignatureItem) };
    inline DescribeApiSignaturesResponseBodyApiSignatures& setApiSignatureItem(vector<Models::DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem> && apiSignatureItem) { DARABONBA_PTR_SET_RVALUE(apiSignatureItem_, apiSignatureItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem>> apiSignatureItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
