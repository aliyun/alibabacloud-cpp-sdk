// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASESSIONSTATCLIENTSTATSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASESSIONSTATCLIENTSTATSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DataSessionStatClientStatsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSessionStatClientStatsValue& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DataSessionStatClientStatsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DataSessionStatClientStatsValue() = default ;
    DataSessionStatClientStatsValue(const DataSessionStatClientStatsValue &) = default ;
    DataSessionStatClientStatsValue(DataSessionStatClientStatsValue &&) = default ;
    DataSessionStatClientStatsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSessionStatClientStatsValue() = default ;
    DataSessionStatClientStatsValue& operator=(const DataSessionStatClientStatsValue &) = default ;
    DataSessionStatClientStatsValue& operator=(DataSessionStatClientStatsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeCount_ == nullptr
        && return this->totalCount_ == nullptr; };
    // activeCount Field Functions 
    bool hasActiveCount() const { return this->activeCount_ != nullptr;};
    void deleteActiveCount() { this->activeCount_ = nullptr;};
    inline int64_t activeCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
    inline DataSessionStatClientStatsValue& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DataSessionStatClientStatsValue& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of clients whose IP addresses are active.
    std::shared_ptr<int64_t> activeCount_ = nullptr;
    // The total number of IP addresses of clients.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
