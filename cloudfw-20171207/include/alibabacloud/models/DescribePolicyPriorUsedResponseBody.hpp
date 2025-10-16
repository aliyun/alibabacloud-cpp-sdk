// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYPRIORUSEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYPRIORUSEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePolicyPriorUsedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyPriorUsedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyPriorUsedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    DescribePolicyPriorUsedResponseBody() = default ;
    DescribePolicyPriorUsedResponseBody(const DescribePolicyPriorUsedResponseBody &) = default ;
    DescribePolicyPriorUsedResponseBody(DescribePolicyPriorUsedResponseBody &&) = default ;
    DescribePolicyPriorUsedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyPriorUsedResponseBody() = default ;
    DescribePolicyPriorUsedResponseBody& operator=(const DescribePolicyPriorUsedResponseBody &) = default ;
    DescribePolicyPriorUsedResponseBody& operator=(DescribePolicyPriorUsedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->requestId_ == nullptr && return this->start_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline DescribePolicyPriorUsedResponseBody& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolicyPriorUsedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline DescribePolicyPriorUsedResponseBody& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The lowest priority of existing access control policies.
    // 
    // >  The value -1 indicates the lowest priority.
    std::shared_ptr<int32_t> end_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The highest priority of existing access control policies.
    // 
    // >  The value 0 indicates the highest priority.
    std::shared_ptr<int32_t> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
