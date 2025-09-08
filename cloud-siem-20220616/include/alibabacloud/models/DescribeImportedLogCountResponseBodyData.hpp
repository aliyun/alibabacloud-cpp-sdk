// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeImportedLogCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportedLogCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImportedLogCount, importedLogCount_);
      DARABONBA_PTR_TO_JSON(TotalLogCount, totalLogCount_);
      DARABONBA_PTR_TO_JSON(UnImportedLogCount, unImportedLogCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportedLogCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportedLogCount, importedLogCount_);
      DARABONBA_PTR_FROM_JSON(TotalLogCount, totalLogCount_);
      DARABONBA_PTR_FROM_JSON(UnImportedLogCount, unImportedLogCount_);
    };
    DescribeImportedLogCountResponseBodyData() = default ;
    DescribeImportedLogCountResponseBodyData(const DescribeImportedLogCountResponseBodyData &) = default ;
    DescribeImportedLogCountResponseBodyData(DescribeImportedLogCountResponseBodyData &&) = default ;
    DescribeImportedLogCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportedLogCountResponseBodyData() = default ;
    DescribeImportedLogCountResponseBodyData& operator=(const DescribeImportedLogCountResponseBodyData &) = default ;
    DescribeImportedLogCountResponseBodyData& operator=(DescribeImportedLogCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->importedLogCount_ != nullptr
        && this->totalLogCount_ != nullptr && this->unImportedLogCount_ != nullptr; };
    // importedLogCount Field Functions 
    bool hasImportedLogCount() const { return this->importedLogCount_ != nullptr;};
    void deleteImportedLogCount() { this->importedLogCount_ = nullptr;};
    inline int32_t importedLogCount() const { DARABONBA_PTR_GET_DEFAULT(importedLogCount_, 0) };
    inline DescribeImportedLogCountResponseBodyData& setImportedLogCount(int32_t importedLogCount) { DARABONBA_PTR_SET_VALUE(importedLogCount_, importedLogCount) };


    // totalLogCount Field Functions 
    bool hasTotalLogCount() const { return this->totalLogCount_ != nullptr;};
    void deleteTotalLogCount() { this->totalLogCount_ = nullptr;};
    inline int32_t totalLogCount() const { DARABONBA_PTR_GET_DEFAULT(totalLogCount_, 0) };
    inline DescribeImportedLogCountResponseBodyData& setTotalLogCount(int32_t totalLogCount) { DARABONBA_PTR_SET_VALUE(totalLogCount_, totalLogCount) };


    // unImportedLogCount Field Functions 
    bool hasUnImportedLogCount() const { return this->unImportedLogCount_ != nullptr;};
    void deleteUnImportedLogCount() { this->unImportedLogCount_ = nullptr;};
    inline int32_t unImportedLogCount() const { DARABONBA_PTR_GET_DEFAULT(unImportedLogCount_, 0) };
    inline DescribeImportedLogCountResponseBodyData& setUnImportedLogCount(int32_t unImportedLogCount) { DARABONBA_PTR_SET_VALUE(unImportedLogCount_, unImportedLogCount) };


  protected:
    // The number of logs that are added.
    std::shared_ptr<int32_t> importedLogCount_ = nullptr;
    // The total number of logs.
    std::shared_ptr<int32_t> totalLogCount_ = nullptr;
    // The number of logs that are not added.
    std::shared_ptr<int32_t> unImportedLogCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
