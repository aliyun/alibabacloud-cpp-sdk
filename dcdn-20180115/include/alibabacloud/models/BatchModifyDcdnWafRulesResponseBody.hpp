// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHMODIFYDCDNWAFRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHMODIFYDCDNWAFRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchModifyDcdnWafRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchModifyDcdnWafRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchModifyDcdnWafRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchModifyDcdnWafRulesResponseBody() = default ;
    BatchModifyDcdnWafRulesResponseBody(const BatchModifyDcdnWafRulesResponseBody &) = default ;
    BatchModifyDcdnWafRulesResponseBody(BatchModifyDcdnWafRulesResponseBody &&) = default ;
    BatchModifyDcdnWafRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchModifyDcdnWafRulesResponseBody() = default ;
    BatchModifyDcdnWafRulesResponseBody& operator=(const BatchModifyDcdnWafRulesResponseBody &) = default ;
    BatchModifyDcdnWafRulesResponseBody& operator=(BatchModifyDcdnWafRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchModifyDcdnWafRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
