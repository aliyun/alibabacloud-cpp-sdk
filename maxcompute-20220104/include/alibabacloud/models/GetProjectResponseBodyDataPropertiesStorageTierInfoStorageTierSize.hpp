// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESSTORAGETIERINFOSTORAGETIERSIZE_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESSTORAGETIERINFOSTORAGETIERSIZE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize& obj) { 
      DARABONBA_PTR_TO_JSON(longTermSize, longTermSize_);
      DARABONBA_PTR_TO_JSON(lowFrequencySize, lowFrequencySize_);
      DARABONBA_PTR_TO_JSON(standardSize, standardSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize& obj) { 
      DARABONBA_PTR_FROM_JSON(longTermSize, longTermSize_);
      DARABONBA_PTR_FROM_JSON(lowFrequencySize, lowFrequencySize_);
      DARABONBA_PTR_FROM_JSON(standardSize, standardSize_);
    };
    GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize() = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize(const GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize &) = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize(GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize &&) = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize() = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize& operator=(const GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize &) = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize& operator=(GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->longTermSize_ != nullptr
        && this->lowFrequencySize_ != nullptr && this->standardSize_ != nullptr; };
    // longTermSize Field Functions 
    bool hasLongTermSize() const { return this->longTermSize_ != nullptr;};
    void deleteLongTermSize() { this->longTermSize_ = nullptr;};
    inline int64_t longTermSize() const { DARABONBA_PTR_GET_DEFAULT(longTermSize_, 0L) };
    inline GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize& setLongTermSize(int64_t longTermSize) { DARABONBA_PTR_SET_VALUE(longTermSize_, longTermSize) };


    // lowFrequencySize Field Functions 
    bool hasLowFrequencySize() const { return this->lowFrequencySize_ != nullptr;};
    void deleteLowFrequencySize() { this->lowFrequencySize_ = nullptr;};
    inline int64_t lowFrequencySize() const { DARABONBA_PTR_GET_DEFAULT(lowFrequencySize_, 0L) };
    inline GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize& setLowFrequencySize(int64_t lowFrequencySize) { DARABONBA_PTR_SET_VALUE(lowFrequencySize_, lowFrequencySize) };


    // standardSize Field Functions 
    bool hasStandardSize() const { return this->standardSize_ != nullptr;};
    void deleteStandardSize() { this->standardSize_ = nullptr;};
    inline int64_t standardSize() const { DARABONBA_PTR_GET_DEFAULT(standardSize_, 0L) };
    inline GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize& setStandardSize(int64_t standardSize) { DARABONBA_PTR_SET_VALUE(standardSize_, standardSize) };


  protected:
    // The storage usage at the long-term storage tier.
    std::shared_ptr<int64_t> longTermSize_ = nullptr;
    // The storage usage at the Infrequent Access (IA) layer.
    std::shared_ptr<int64_t> lowFrequencySize_ = nullptr;
    // The storage usage at the standard storage tier.
    std::shared_ptr<int64_t> standardSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
