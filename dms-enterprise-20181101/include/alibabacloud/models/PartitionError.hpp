// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITIONERROR_HPP_
#define ALIBABACLOUD_MODELS_PARTITIONERROR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PartitionError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PartitionError& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, PartitionError& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    PartitionError() = default ;
    PartitionError(const PartitionError &) = default ;
    PartitionError(PartitionError &&) = default ;
    PartitionError(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PartitionError() = default ;
    PartitionError& operator=(const PartitionError &) = default ;
    PartitionError& operator=(PartitionError &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorDetail_ == nullptr
        && return this->values_ == nullptr; };
    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline string errorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
    inline PartitionError& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline PartitionError& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline PartitionError& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> errorDetail_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
