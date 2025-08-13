// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEBATCHPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEBATCHPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSamplebatchPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSamplebatchPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(batchName, batchName_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(initValidFileRow, initValidFileRow_);
      DARABONBA_PTR_TO_JSON(sampleBatchType, sampleBatchType_);
      DARABONBA_PTR_TO_JSON(services, services_);
      DARABONBA_PTR_TO_JSON(updator, updator_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSamplebatchPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(batchName, batchName_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(initValidFileRow, initValidFileRow_);
      DARABONBA_PTR_FROM_JSON(sampleBatchType, sampleBatchType_);
      DARABONBA_PTR_FROM_JSON(services, services_);
      DARABONBA_PTR_FROM_JSON(updator, updator_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    DescribeSamplebatchPageResponseBodyResultObject() = default ;
    DescribeSamplebatchPageResponseBodyResultObject(const DescribeSamplebatchPageResponseBodyResultObject &) = default ;
    DescribeSamplebatchPageResponseBodyResultObject(DescribeSamplebatchPageResponseBodyResultObject &&) = default ;
    DescribeSamplebatchPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSamplebatchPageResponseBodyResultObject() = default ;
    DescribeSamplebatchPageResponseBodyResultObject& operator=(const DescribeSamplebatchPageResponseBodyResultObject &) = default ;
    DescribeSamplebatchPageResponseBodyResultObject& operator=(DescribeSamplebatchPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchName_ != nullptr
        && this->creator_ != nullptr && this->dataType_ != nullptr && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->initValidFileRow_ != nullptr && this->sampleBatchType_ != nullptr && this->services_ != nullptr && this->updator_ != nullptr && this->uuid_ != nullptr; };
    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string batchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSamplebatchPageResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSamplebatchPageResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // initValidFileRow Field Functions 
    bool hasInitValidFileRow() const { return this->initValidFileRow_ != nullptr;};
    void deleteInitValidFileRow() { this->initValidFileRow_ = nullptr;};
    inline int64_t initValidFileRow() const { DARABONBA_PTR_GET_DEFAULT(initValidFileRow_, 0L) };
    inline DescribeSamplebatchPageResponseBodyResultObject& setInitValidFileRow(int64_t initValidFileRow) { DARABONBA_PTR_SET_VALUE(initValidFileRow_, initValidFileRow) };


    // sampleBatchType Field Functions 
    bool hasSampleBatchType() const { return this->sampleBatchType_ != nullptr;};
    void deleteSampleBatchType() { this->sampleBatchType_ = nullptr;};
    inline string sampleBatchType() const { DARABONBA_PTR_GET_DEFAULT(sampleBatchType_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setSampleBatchType(string sampleBatchType) { DARABONBA_PTR_SET_VALUE(sampleBatchType_, sampleBatchType) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline string services() const { DARABONBA_PTR_GET_DEFAULT(services_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setServices(string services) { DARABONBA_PTR_SET_VALUE(services_, services) };


    // updator Field Functions 
    bool hasUpdator() const { return this->updator_ != nullptr;};
    void deleteUpdator() { this->updator_ = nullptr;};
    inline string updator() const { DARABONBA_PTR_GET_DEFAULT(updator_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setUpdator(string updator) { DARABONBA_PTR_SET_VALUE(updator_, updator) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSamplebatchPageResponseBodyResultObject& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Sample batch name
    std::shared_ptr<string> batchName_ = nullptr;
    // Creator.
    std::shared_ptr<string> creator_ = nullptr;
    // Data type
    std::shared_ptr<string> dataType_ = nullptr;
    // Description.
    std::shared_ptr<string> description_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Valid sample content data
    std::shared_ptr<int64_t> initValidFileRow_ = nullptr;
    // Specific type of the sample list
    std::shared_ptr<string> sampleBatchType_ = nullptr;
    // Service ID
    std::shared_ptr<string> services_ = nullptr;
    // Modifier
    std::shared_ptr<string> updator_ = nullptr;
    // Sample batch UUID
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
