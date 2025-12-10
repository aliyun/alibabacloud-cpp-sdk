// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITIONERROR_HPP_
#define ALIBABACLOUD_MODELS_PARTITIONERROR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ErrorDetail.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class PartitionError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PartitionError& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(PartitionValues, partitionValues_);
    };
    friend void from_json(const Darabonba::Json& j, PartitionError& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(PartitionValues, partitionValues_);
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
        && return this->partitionValues_ == nullptr; };
    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline const ErrorDetail & errorDetail() const { DARABONBA_PTR_GET_CONST(errorDetail_, ErrorDetail) };
    inline ErrorDetail errorDetail() { DARABONBA_PTR_GET(errorDetail_, ErrorDetail) };
    inline PartitionError& setErrorDetail(const ErrorDetail & errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };
    inline PartitionError& setErrorDetail(ErrorDetail && errorDetail) { DARABONBA_PTR_SET_RVALUE(errorDetail_, errorDetail) };


    // partitionValues Field Functions 
    bool hasPartitionValues() const { return this->partitionValues_ != nullptr;};
    void deletePartitionValues() { this->partitionValues_ = nullptr;};
    inline const vector<string> & partitionValues() const { DARABONBA_PTR_GET_CONST(partitionValues_, vector<string>) };
    inline vector<string> partitionValues() { DARABONBA_PTR_GET(partitionValues_, vector<string>) };
    inline PartitionError& setPartitionValues(const vector<string> & partitionValues) { DARABONBA_PTR_SET_VALUE(partitionValues_, partitionValues) };
    inline PartitionError& setPartitionValues(vector<string> && partitionValues) { DARABONBA_PTR_SET_RVALUE(partitionValues_, partitionValues) };


  protected:
    std::shared_ptr<ErrorDetail> errorDetail_ = nullptr;
    std::shared_ptr<vector<string>> partitionValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
