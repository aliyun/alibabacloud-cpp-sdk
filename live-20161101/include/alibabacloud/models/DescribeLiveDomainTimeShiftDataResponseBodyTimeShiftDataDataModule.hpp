// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODYTIMESHIFTDATADATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODYTIMESHIFTDATADATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule() = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule(const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule(DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule &&) = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule() = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule& operator=(const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule& operator=(DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->size_ == nullptr
        && return this->timeStamp_ == nullptr && return this->type_ == nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The storage used for time shifting. Unit: bytes.
    std::shared_ptr<string> size_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The type of time shifting. Examples: HLS_D1 and HLS_D7.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
