// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetRecordStatistic, dataSetRecordStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetRecordStatistic, dataSetRecordStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataSetResponseBody() = default ;
    CreateDataSetResponseBody(const CreateDataSetResponseBody &) = default ;
    CreateDataSetResponseBody(CreateDataSetResponseBody &&) = default ;
    CreateDataSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSetResponseBody() = default ;
    CreateDataSetResponseBody& operator=(const CreateDataSetResponseBody &) = default ;
    CreateDataSetResponseBody& operator=(CreateDataSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSetRecordStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSetRecordStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_TO_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
      };
      friend void from_json(const Darabonba::Json& j, DataSetRecordStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_FROM_JSON(NewDataSetRecordCount, newDataSetRecordCount_);
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
      virtual bool empty() const override { return this->dataSetId_ == nullptr
        && this->newDataSetRecordCount_ == nullptr; };
      // dataSetId Field Functions 
      bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
      void deleteDataSetId() { this->dataSetId_ = nullptr;};
      inline string getDataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
      inline DataSetRecordStatistic& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


      // newDataSetRecordCount Field Functions 
      bool hasNewDataSetRecordCount() const { return this->newDataSetRecordCount_ != nullptr;};
      void deleteNewDataSetRecordCount() { this->newDataSetRecordCount_ = nullptr;};
      inline int32_t getNewDataSetRecordCount() const { DARABONBA_PTR_GET_DEFAULT(newDataSetRecordCount_, 0) };
      inline DataSetRecordStatistic& setNewDataSetRecordCount(int32_t newDataSetRecordCount) { DARABONBA_PTR_SET_VALUE(newDataSetRecordCount_, newDataSetRecordCount) };


    protected:
      shared_ptr<string> dataSetId_ {};
      shared_ptr<int32_t> newDataSetRecordCount_ {};
    };

    virtual bool empty() const override { return this->dataSetRecordStatistic_ == nullptr
        && this->requestId_ == nullptr; };
    // dataSetRecordStatistic Field Functions 
    bool hasDataSetRecordStatistic() const { return this->dataSetRecordStatistic_ != nullptr;};
    void deleteDataSetRecordStatistic() { this->dataSetRecordStatistic_ = nullptr;};
    inline const CreateDataSetResponseBody::DataSetRecordStatistic & getDataSetRecordStatistic() const { DARABONBA_PTR_GET_CONST(dataSetRecordStatistic_, CreateDataSetResponseBody::DataSetRecordStatistic) };
    inline CreateDataSetResponseBody::DataSetRecordStatistic getDataSetRecordStatistic() { DARABONBA_PTR_GET(dataSetRecordStatistic_, CreateDataSetResponseBody::DataSetRecordStatistic) };
    inline CreateDataSetResponseBody& setDataSetRecordStatistic(const CreateDataSetResponseBody::DataSetRecordStatistic & dataSetRecordStatistic) { DARABONBA_PTR_SET_VALUE(dataSetRecordStatistic_, dataSetRecordStatistic) };
    inline CreateDataSetResponseBody& setDataSetRecordStatistic(CreateDataSetResponseBody::DataSetRecordStatistic && dataSetRecordStatistic) { DARABONBA_PTR_SET_RVALUE(dataSetRecordStatistic_, dataSetRecordStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateDataSetResponseBody::DataSetRecordStatistic> dataSetRecordStatistic_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
