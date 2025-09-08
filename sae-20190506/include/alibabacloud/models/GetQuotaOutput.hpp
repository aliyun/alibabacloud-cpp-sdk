// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetQuotaOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaOutput& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(instanceLimit, instanceLimit_);
      DARABONBA_PTR_TO_JSON(instanceUsed, instanceUsed_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(instanceLimit, instanceLimit_);
      DARABONBA_PTR_FROM_JSON(instanceUsed, instanceUsed_);
    };
    GetQuotaOutput() = default ;
    GetQuotaOutput(const GetQuotaOutput &) = default ;
    GetQuotaOutput(GetQuotaOutput &&) = default ;
    GetQuotaOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaOutput() = default ;
    GetQuotaOutput& operator=(const GetQuotaOutput &) = default ;
    GetQuotaOutput& operator=(GetQuotaOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->instanceLimit_ != nullptr && this->instanceUsed_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // instanceLimit Field Functions 
    bool hasInstanceLimit() const { return this->instanceLimit_ != nullptr;};
    void deleteInstanceLimit() { this->instanceLimit_ = nullptr;};
    inline int64_t instanceLimit() const { DARABONBA_PTR_GET_DEFAULT(instanceLimit_, 0L) };
    inline GetQuotaOutput& setInstanceLimit(int64_t instanceLimit) { DARABONBA_PTR_SET_VALUE(instanceLimit_, instanceLimit) };


    // instanceUsed Field Functions 
    bool hasInstanceUsed() const { return this->instanceUsed_ != nullptr;};
    void deleteInstanceUsed() { this->instanceUsed_ = nullptr;};
    inline int64_t instanceUsed() const { DARABONBA_PTR_GET_DEFAULT(instanceUsed_, 0L) };
    inline GetQuotaOutput& setInstanceUsed(int64_t instanceUsed) { DARABONBA_PTR_SET_VALUE(instanceUsed_, instanceUsed) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> instanceLimit_ = nullptr;
    std::shared_ptr<int64_t> instanceUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
