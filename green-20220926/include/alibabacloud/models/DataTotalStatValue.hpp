// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATATOTALSTATVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATATOTALSTATVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DataTotalStatValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataTotalStatValue& obj) { 
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(Share, share_);
    };
    friend void from_json(const Darabonba::Json& j, DataTotalStatValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(Share, share_);
    };
    DataTotalStatValue() = default ;
    DataTotalStatValue(const DataTotalStatValue &) = default ;
    DataTotalStatValue(DataTotalStatValue &&) = default ;
    DataTotalStatValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataTotalStatValue() = default ;
    DataTotalStatValue& operator=(const DataTotalStatValue &) = default ;
    DataTotalStatValue& operator=(DataTotalStatValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->total_ == nullptr
        && this->share_ == nullptr; };
    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DataTotalStatValue& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // share Field Functions 
    bool hasShare() const { return this->share_ != nullptr;};
    void deleteShare() { this->share_ = nullptr;};
    inline string getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, "") };
    inline DataTotalStatValue& setShare(string share) { DARABONBA_PTR_SET_VALUE(share_, share) };


  protected:
    // The total count.
    shared_ptr<int64_t> total_ {};
    // The proportion.
    shared_ptr<string> share_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
