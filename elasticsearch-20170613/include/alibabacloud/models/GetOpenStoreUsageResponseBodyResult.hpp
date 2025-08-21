// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENSTOREUSAGERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETOPENSTOREUSAGERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetOpenStoreUsageResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenStoreUsageResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(currentUsage, currentUsage_);
      DARABONBA_PTR_TO_JSON(lastDayUsage, lastDayUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenStoreUsageResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(currentUsage, currentUsage_);
      DARABONBA_PTR_FROM_JSON(lastDayUsage, lastDayUsage_);
    };
    GetOpenStoreUsageResponseBodyResult() = default ;
    GetOpenStoreUsageResponseBodyResult(const GetOpenStoreUsageResponseBodyResult &) = default ;
    GetOpenStoreUsageResponseBodyResult(GetOpenStoreUsageResponseBodyResult &&) = default ;
    GetOpenStoreUsageResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenStoreUsageResponseBodyResult() = default ;
    GetOpenStoreUsageResponseBodyResult& operator=(const GetOpenStoreUsageResponseBodyResult &) = default ;
    GetOpenStoreUsageResponseBodyResult& operator=(GetOpenStoreUsageResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentUsage_ != nullptr
        && this->lastDayUsage_ != nullptr; };
    // currentUsage Field Functions 
    bool hasCurrentUsage() const { return this->currentUsage_ != nullptr;};
    void deleteCurrentUsage() { this->currentUsage_ = nullptr;};
    inline int64_t currentUsage() const { DARABONBA_PTR_GET_DEFAULT(currentUsage_, 0L) };
    inline GetOpenStoreUsageResponseBodyResult& setCurrentUsage(int64_t currentUsage) { DARABONBA_PTR_SET_VALUE(currentUsage_, currentUsage) };


    // lastDayUsage Field Functions 
    bool hasLastDayUsage() const { return this->lastDayUsage_ != nullptr;};
    void deleteLastDayUsage() { this->lastDayUsage_ = nullptr;};
    inline int64_t lastDayUsage() const { DARABONBA_PTR_GET_DEFAULT(lastDayUsage_, 0L) };
    inline GetOpenStoreUsageResponseBodyResult& setLastDayUsage(int64_t lastDayUsage) { DARABONBA_PTR_SET_VALUE(lastDayUsage_, lastDayUsage) };


  protected:
    // The current OpenStore storage capacity (estimated value based on actual indexes). Unit: Byte.
    std::shared_ptr<int64_t> currentUsage_ = nullptr;
    // The storage capacity of OpenStore yesterday. Unit: bytes.
    std::shared_ptr<int64_t> lastDayUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
