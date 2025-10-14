// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETRECORDRESPONSEBODYDATASETRECORDSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETRECORDRESPONSEBODYDATASETRECORDSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataSetRecordResponseBodyDataSetRecordStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSetRecordResponseBodyDataSetRecordStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
      DARABONBA_PTR_TO_JSON(UpdateDataSetRecordCount, updateDataSetRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSetRecordResponseBodyDataSetRecordStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
      DARABONBA_PTR_FROM_JSON(UpdateDataSetRecordCount, updateDataSetRecordCount_);
    };
    UpdateDataSetRecordResponseBodyDataSetRecordStatistic() = default ;
    UpdateDataSetRecordResponseBodyDataSetRecordStatistic(const UpdateDataSetRecordResponseBodyDataSetRecordStatistic &) = default ;
    UpdateDataSetRecordResponseBodyDataSetRecordStatistic(UpdateDataSetRecordResponseBodyDataSetRecordStatistic &&) = default ;
    UpdateDataSetRecordResponseBodyDataSetRecordStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSetRecordResponseBodyDataSetRecordStatistic() = default ;
    UpdateDataSetRecordResponseBodyDataSetRecordStatistic& operator=(const UpdateDataSetRecordResponseBodyDataSetRecordStatistic &) = default ;
    UpdateDataSetRecordResponseBodyDataSetRecordStatistic& operator=(UpdateDataSetRecordResponseBodyDataSetRecordStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newDataSetRecordCount_ == nullptr
        && return this->updateDataSetRecordCount_ == nullptr; };
    // newDataSetRecordCount Field Functions 
    bool hasNewDataSetRecordCount() const { return this->newDataSetRecordCount_ != nullptr;};
    void deleteNewDataSetRecordCount() { this->newDataSetRecordCount_ = nullptr;};
    inline int32_t newDataSetRecordCount() const { DARABONBA_PTR_GET_DEFAULT(newDataSetRecordCount_, 0) };
    inline UpdateDataSetRecordResponseBodyDataSetRecordStatistic& setNewDataSetRecordCount(int32_t newDataSetRecordCount) { DARABONBA_PTR_SET_VALUE(newDataSetRecordCount_, newDataSetRecordCount) };


    // updateDataSetRecordCount Field Functions 
    bool hasUpdateDataSetRecordCount() const { return this->updateDataSetRecordCount_ != nullptr;};
    void deleteUpdateDataSetRecordCount() { this->updateDataSetRecordCount_ = nullptr;};
    inline int32_t updateDataSetRecordCount() const { DARABONBA_PTR_GET_DEFAULT(updateDataSetRecordCount_, 0) };
    inline UpdateDataSetRecordResponseBodyDataSetRecordStatistic& setUpdateDataSetRecordCount(int32_t updateDataSetRecordCount) { DARABONBA_PTR_SET_VALUE(updateDataSetRecordCount_, updateDataSetRecordCount) };


  protected:
    std::shared_ptr<int32_t> newDataSetRecordCount_ = nullptr;
    std::shared_ptr<int32_t> updateDataSetRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
