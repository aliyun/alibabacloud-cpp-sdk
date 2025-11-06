// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class BatchFuzzyMatchDomainSensitiveWordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchFuzzyMatchDomainSensitiveWordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveWordMatchResultList, sensitiveWordMatchResultList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchFuzzyMatchDomainSensitiveWordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveWordMatchResultList, sensitiveWordMatchResultList_);
    };
    BatchFuzzyMatchDomainSensitiveWordResponseBody() = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBody(const BatchFuzzyMatchDomainSensitiveWordResponseBody &) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBody(BatchFuzzyMatchDomainSensitiveWordResponseBody &&) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBody() = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBody& operator=(const BatchFuzzyMatchDomainSensitiveWordResponseBody &) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBody& operator=(BatchFuzzyMatchDomainSensitiveWordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sensitiveWordMatchResultList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveWordMatchResultList Field Functions 
    bool hasSensitiveWordMatchResultList() const { return this->sensitiveWordMatchResultList_ != nullptr;};
    void deleteSensitiveWordMatchResultList() { this->sensitiveWordMatchResultList_ = nullptr;};
    inline const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList & sensitiveWordMatchResultList() const { DARABONBA_PTR_GET_CONST(sensitiveWordMatchResultList_, BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList sensitiveWordMatchResultList() { DARABONBA_PTR_GET(sensitiveWordMatchResultList_, BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBody& setSensitiveWordMatchResultList(const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList & sensitiveWordMatchResultList) { DARABONBA_PTR_SET_VALUE(sensitiveWordMatchResultList_, sensitiveWordMatchResultList) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBody& setSensitiveWordMatchResultList(BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList && sensitiveWordMatchResultList) { DARABONBA_PTR_SET_RVALUE(sensitiveWordMatchResultList_, sensitiveWordMatchResultList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList> sensitiveWordMatchResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
