// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataSetRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSetRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetRecordStatistic, dataSetRecordStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSetRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetRecordStatistic, dataSetRecordStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateDataSetRecordResponseBody() = default ;
    UpdateDataSetRecordResponseBody(const UpdateDataSetRecordResponseBody &) = default ;
    UpdateDataSetRecordResponseBody(UpdateDataSetRecordResponseBody &&) = default ;
    UpdateDataSetRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSetRecordResponseBody() = default ;
    UpdateDataSetRecordResponseBody& operator=(const UpdateDataSetRecordResponseBody &) = default ;
    UpdateDataSetRecordResponseBody& operator=(UpdateDataSetRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSetRecordStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSetRecordStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
        DARABONBA_PTR_TO_JSON(UpdateDataSetRecordCount, updateDataSetRecordCount_);
      };
      friend void from_json(const Darabonba::Json& j, DataSetRecordStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
        DARABONBA_PTR_FROM_JSON(UpdateDataSetRecordCount, updateDataSetRecordCount_);
      };
      DataSetRecordStatistic() = default ;
      DataSetRecordStatistic(const DataSetRecordStatistic &) = default ;
      DataSetRecordStatistic(DataSetRecordStatistic &&) = default ;
      DataSetRecordStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSetRecordStatistic() = default ;
      DataSetRecordStatistic& operator=(const DataSetRecordStatistic &) = default ;
      DataSetRecordStatistic& operator=(DataSetRecordStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->newDataSetRecordCount_ == nullptr
        && this->updateDataSetRecordCount_ == nullptr; };
      // newDataSetRecordCount Field Functions 
      bool hasNewDataSetRecordCount() const { return this->newDataSetRecordCount_ != nullptr;};
      void deleteNewDataSetRecordCount() { this->newDataSetRecordCount_ = nullptr;};
      inline int32_t getNewDataSetRecordCount() const { DARABONBA_PTR_GET_DEFAULT(newDataSetRecordCount_, 0) };
      inline DataSetRecordStatistic& setNewDataSetRecordCount(int32_t newDataSetRecordCount) { DARABONBA_PTR_SET_VALUE(newDataSetRecordCount_, newDataSetRecordCount) };


      // updateDataSetRecordCount Field Functions 
      bool hasUpdateDataSetRecordCount() const { return this->updateDataSetRecordCount_ != nullptr;};
      void deleteUpdateDataSetRecordCount() { this->updateDataSetRecordCount_ = nullptr;};
      inline int32_t getUpdateDataSetRecordCount() const { DARABONBA_PTR_GET_DEFAULT(updateDataSetRecordCount_, 0) };
      inline DataSetRecordStatistic& setUpdateDataSetRecordCount(int32_t updateDataSetRecordCount) { DARABONBA_PTR_SET_VALUE(updateDataSetRecordCount_, updateDataSetRecordCount) };


    protected:
      shared_ptr<int32_t> newDataSetRecordCount_ {};
      shared_ptr<int32_t> updateDataSetRecordCount_ {};
    };

    virtual bool empty() const override { return this->dataSetRecordStatistic_ == nullptr
        && this->requestId_ == nullptr; };
    // dataSetRecordStatistic Field Functions 
    bool hasDataSetRecordStatistic() const { return this->dataSetRecordStatistic_ != nullptr;};
    void deleteDataSetRecordStatistic() { this->dataSetRecordStatistic_ = nullptr;};
    inline const UpdateDataSetRecordResponseBody::DataSetRecordStatistic & getDataSetRecordStatistic() const { DARABONBA_PTR_GET_CONST(dataSetRecordStatistic_, UpdateDataSetRecordResponseBody::DataSetRecordStatistic) };
    inline UpdateDataSetRecordResponseBody::DataSetRecordStatistic getDataSetRecordStatistic() { DARABONBA_PTR_GET(dataSetRecordStatistic_, UpdateDataSetRecordResponseBody::DataSetRecordStatistic) };
    inline UpdateDataSetRecordResponseBody& setDataSetRecordStatistic(const UpdateDataSetRecordResponseBody::DataSetRecordStatistic & dataSetRecordStatistic) { DARABONBA_PTR_SET_VALUE(dataSetRecordStatistic_, dataSetRecordStatistic) };
    inline UpdateDataSetRecordResponseBody& setDataSetRecordStatistic(UpdateDataSetRecordResponseBody::DataSetRecordStatistic && dataSetRecordStatistic) { DARABONBA_PTR_SET_RVALUE(dataSetRecordStatistic_, dataSetRecordStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDataSetRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateDataSetRecordResponseBody::DataSetRecordStatistic> dataSetRecordStatistic_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
