// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWUYINGSERVERREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_CREATEWUYINGSERVERREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateWuyingServerRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWuyingServerRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DataDiskPerformanceLevel, dataDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWuyingServerRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DataDiskPerformanceLevel, dataDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
    };
    CreateWuyingServerRequestDataDisk() = default ;
    CreateWuyingServerRequestDataDisk(const CreateWuyingServerRequestDataDisk &) = default ;
    CreateWuyingServerRequestDataDisk(CreateWuyingServerRequestDataDisk &&) = default ;
    CreateWuyingServerRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWuyingServerRequestDataDisk() = default ;
    CreateWuyingServerRequestDataDisk& operator=(const CreateWuyingServerRequestDataDisk &) = default ;
    CreateWuyingServerRequestDataDisk& operator=(CreateWuyingServerRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskCategory_ == nullptr
        && return this->dataDiskPerformanceLevel_ == nullptr && return this->dataDiskSize_ == nullptr; };
    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline CreateWuyingServerRequestDataDisk& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskPerformanceLevel Field Functions 
    bool hasDataDiskPerformanceLevel() const { return this->dataDiskPerformanceLevel_ != nullptr;};
    void deleteDataDiskPerformanceLevel() { this->dataDiskPerformanceLevel_ = nullptr;};
    inline string dataDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(dataDiskPerformanceLevel_, "") };
    inline CreateWuyingServerRequestDataDisk& setDataDiskPerformanceLevel(string dataDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(dataDiskPerformanceLevel_, dataDiskPerformanceLevel) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline CreateWuyingServerRequestDataDisk& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


  protected:
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    std::shared_ptr<string> dataDiskPerformanceLevel_ = nullptr;
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
