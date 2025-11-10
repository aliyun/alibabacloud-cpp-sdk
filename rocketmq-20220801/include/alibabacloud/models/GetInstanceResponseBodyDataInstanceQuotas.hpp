// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAINSTANCEQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAINSTANCEQUOTAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataInstanceQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataInstanceQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(freeCount, freeCount_);
      DARABONBA_PTR_TO_JSON(quotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(usedCount, usedCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataInstanceQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(freeCount, freeCount_);
      DARABONBA_PTR_FROM_JSON(quotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(usedCount, usedCount_);
    };
    GetInstanceResponseBodyDataInstanceQuotas() = default ;
    GetInstanceResponseBodyDataInstanceQuotas(const GetInstanceResponseBodyDataInstanceQuotas &) = default ;
    GetInstanceResponseBodyDataInstanceQuotas(GetInstanceResponseBodyDataInstanceQuotas &&) = default ;
    GetInstanceResponseBodyDataInstanceQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataInstanceQuotas() = default ;
    GetInstanceResponseBodyDataInstanceQuotas& operator=(const GetInstanceResponseBodyDataInstanceQuotas &) = default ;
    GetInstanceResponseBodyDataInstanceQuotas& operator=(GetInstanceResponseBodyDataInstanceQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->freeCount_ == nullptr
        && return this->quotaName_ == nullptr && return this->totalCount_ == nullptr && return this->usedCount_ == nullptr; };
    // freeCount Field Functions 
    bool hasFreeCount() const { return this->freeCount_ != nullptr;};
    void deleteFreeCount() { this->freeCount_ = nullptr;};
    inline double freeCount() const { DARABONBA_PTR_GET_DEFAULT(freeCount_, 0.0) };
    inline GetInstanceResponseBodyDataInstanceQuotas& setFreeCount(double freeCount) { DARABONBA_PTR_SET_VALUE(freeCount_, freeCount) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline GetInstanceResponseBodyDataInstanceQuotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline double totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0.0) };
    inline GetInstanceResponseBodyDataInstanceQuotas& setTotalCount(double totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline double usedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0.0) };
    inline GetInstanceResponseBodyDataInstanceQuotas& setUsedCount(double usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


  protected:
    // The number of topics that are free of charge on the instance.
    std::shared_ptr<double> freeCount_ = nullptr;
    // The quota name.
    // 
    // Valid value:
    // 
    // *   TOPIC_COUNT: the number of topics that can be created on the instance
    std::shared_ptr<string> quotaName_ = nullptr;
    // The total number of topics on the instance.
    std::shared_ptr<double> totalCount_ = nullptr;
    // The number of used topics on the instance.
    std::shared_ptr<double> usedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
