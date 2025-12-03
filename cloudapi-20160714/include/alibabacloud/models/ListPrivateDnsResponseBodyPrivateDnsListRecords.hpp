// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEDNSRESPONSEBODYPRIVATEDNSLISTRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEDNSRESPONSEBODYPRIVATEDNSLISTRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ListPrivateDNSResponseBodyPrivateDNSListRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateDNSResponseBodyPrivateDNSListRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Record, record_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateDNSResponseBodyPrivateDNSListRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Record, record_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ListPrivateDNSResponseBodyPrivateDNSListRecords() = default ;
    ListPrivateDNSResponseBodyPrivateDNSListRecords(const ListPrivateDNSResponseBodyPrivateDNSListRecords &) = default ;
    ListPrivateDNSResponseBodyPrivateDNSListRecords(ListPrivateDNSResponseBodyPrivateDNSListRecords &&) = default ;
    ListPrivateDNSResponseBodyPrivateDNSListRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateDNSResponseBodyPrivateDNSListRecords() = default ;
    ListPrivateDNSResponseBodyPrivateDNSListRecords& operator=(const ListPrivateDNSResponseBodyPrivateDNSListRecords &) = default ;
    ListPrivateDNSResponseBodyPrivateDNSListRecords& operator=(ListPrivateDNSResponseBodyPrivateDNSListRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->record_ == nullptr
        && return this->weight_ == nullptr; };
    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline string record() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
    inline ListPrivateDNSResponseBodyPrivateDNSListRecords& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ListPrivateDNSResponseBodyPrivateDNSListRecords& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The resolution record.
    std::shared_ptr<string> record_ = nullptr;
    // The weight of the record.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
