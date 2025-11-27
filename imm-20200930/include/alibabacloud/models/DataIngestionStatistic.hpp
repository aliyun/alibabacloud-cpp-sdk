// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAINGESTIONSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DATAINGESTIONSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DataIngestionStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataIngestionStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(SkipFiles, skipFiles_);
      DARABONBA_PTR_TO_JSON(SubmitFailure, submitFailure_);
      DARABONBA_PTR_TO_JSON(SubmitSuccess, submitSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, DataIngestionStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(SkipFiles, skipFiles_);
      DARABONBA_PTR_FROM_JSON(SubmitFailure, submitFailure_);
      DARABONBA_PTR_FROM_JSON(SubmitSuccess, submitSuccess_);
    };
    DataIngestionStatistic() = default ;
    DataIngestionStatistic(const DataIngestionStatistic &) = default ;
    DataIngestionStatistic(DataIngestionStatistic &&) = default ;
    DataIngestionStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataIngestionStatistic() = default ;
    DataIngestionStatistic& operator=(const DataIngestionStatistic &) = default ;
    DataIngestionStatistic& operator=(DataIngestionStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skipFiles_ == nullptr
        && return this->submitFailure_ == nullptr && return this->submitSuccess_ == nullptr; };
    // skipFiles Field Functions 
    bool hasSkipFiles() const { return this->skipFiles_ != nullptr;};
    void deleteSkipFiles() { this->skipFiles_ = nullptr;};
    inline int64_t skipFiles() const { DARABONBA_PTR_GET_DEFAULT(skipFiles_, 0L) };
    inline DataIngestionStatistic& setSkipFiles(int64_t skipFiles) { DARABONBA_PTR_SET_VALUE(skipFiles_, skipFiles) };


    // submitFailure Field Functions 
    bool hasSubmitFailure() const { return this->submitFailure_ != nullptr;};
    void deleteSubmitFailure() { this->submitFailure_ = nullptr;};
    inline int64_t submitFailure() const { DARABONBA_PTR_GET_DEFAULT(submitFailure_, 0L) };
    inline DataIngestionStatistic& setSubmitFailure(int64_t submitFailure) { DARABONBA_PTR_SET_VALUE(submitFailure_, submitFailure) };


    // submitSuccess Field Functions 
    bool hasSubmitSuccess() const { return this->submitSuccess_ != nullptr;};
    void deleteSubmitSuccess() { this->submitSuccess_ = nullptr;};
    inline int64_t submitSuccess() const { DARABONBA_PTR_GET_DEFAULT(submitSuccess_, 0L) };
    inline DataIngestionStatistic& setSubmitSuccess(int64_t submitSuccess) { DARABONBA_PTR_SET_VALUE(submitSuccess_, submitSuccess) };


  protected:
    std::shared_ptr<int64_t> skipFiles_ = nullptr;
    std::shared_ptr<int64_t> submitFailure_ = nullptr;
    std::shared_ptr<int64_t> submitSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
