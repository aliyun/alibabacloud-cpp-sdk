// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEAMOUNTRESPONSEBODYINSTANCECOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEAMOUNTRESPONSEBODYINSTANCECOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInstanceAmountResponseBodyInstanceCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAmountResponseBodyInstanceCounts& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Date, date_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAmountResponseBodyInstanceCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
    };
    ListInstanceAmountResponseBodyInstanceCounts() = default ;
    ListInstanceAmountResponseBodyInstanceCounts(const ListInstanceAmountResponseBodyInstanceCounts &) = default ;
    ListInstanceAmountResponseBodyInstanceCounts(ListInstanceAmountResponseBodyInstanceCounts &&) = default ;
    ListInstanceAmountResponseBodyInstanceCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAmountResponseBodyInstanceCounts() = default ;
    ListInstanceAmountResponseBodyInstanceCounts& operator=(const ListInstanceAmountResponseBodyInstanceCounts &) = default ;
    ListInstanceAmountResponseBodyInstanceCounts& operator=(ListInstanceAmountResponseBodyInstanceCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->date_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListInstanceAmountResponseBodyInstanceCounts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline int64_t date() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
    inline ListInstanceAmountResponseBodyInstanceCounts& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


  protected:
    // The number of auto triggered node instances.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The data timestamp at which the number of auto triggered node instances was obtained. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> date_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
