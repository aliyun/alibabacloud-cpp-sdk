// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETRESPONSEBODYDATASETRECORDSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETRESPONSEBODYDATASETRECORDSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataSetResponseBodyDataSetRecordStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSetResponseBodyDataSetRecordStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSetResponseBodyDataSetRecordStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
    };
    CreateDataSetResponseBodyDataSetRecordStatistic() = default ;
    CreateDataSetResponseBodyDataSetRecordStatistic(const CreateDataSetResponseBodyDataSetRecordStatistic &) = default ;
    CreateDataSetResponseBodyDataSetRecordStatistic(CreateDataSetResponseBodyDataSetRecordStatistic &&) = default ;
    CreateDataSetResponseBodyDataSetRecordStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSetResponseBodyDataSetRecordStatistic() = default ;
    CreateDataSetResponseBodyDataSetRecordStatistic& operator=(const CreateDataSetResponseBodyDataSetRecordStatistic &) = default ;
    CreateDataSetResponseBodyDataSetRecordStatistic& operator=(CreateDataSetResponseBodyDataSetRecordStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSetId_ == nullptr
        && return this->newDataSetRecordCount_ == nullptr; };
    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline string dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
    inline CreateDataSetResponseBodyDataSetRecordStatistic& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // newDataSetRecordCount Field Functions 
    bool hasNewDataSetRecordCount() const { return this->newDataSetRecordCount_ != nullptr;};
    void deleteNewDataSetRecordCount() { this->newDataSetRecordCount_ = nullptr;};
    inline int32_t newDataSetRecordCount() const { DARABONBA_PTR_GET_DEFAULT(newDataSetRecordCount_, 0) };
    inline CreateDataSetResponseBodyDataSetRecordStatistic& setNewDataSetRecordCount(int32_t newDataSetRecordCount) { DARABONBA_PTR_SET_VALUE(newDataSetRecordCount_, newDataSetRecordCount) };


  protected:
    std::shared_ptr<string> dataSetId_ = nullptr;
    std::shared_ptr<int32_t> newDataSetRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
