// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataSetRecordResponseBodyDataSetRecordStatistic.hpp>
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
    virtual bool empty() const override { return this->dataSetRecordStatistic_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataSetRecordStatistic Field Functions 
    bool hasDataSetRecordStatistic() const { return this->dataSetRecordStatistic_ != nullptr;};
    void deleteDataSetRecordStatistic() { this->dataSetRecordStatistic_ = nullptr;};
    inline const UpdateDataSetRecordResponseBodyDataSetRecordStatistic & dataSetRecordStatistic() const { DARABONBA_PTR_GET_CONST(dataSetRecordStatistic_, UpdateDataSetRecordResponseBodyDataSetRecordStatistic) };
    inline UpdateDataSetRecordResponseBodyDataSetRecordStatistic dataSetRecordStatistic() { DARABONBA_PTR_GET(dataSetRecordStatistic_, UpdateDataSetRecordResponseBodyDataSetRecordStatistic) };
    inline UpdateDataSetRecordResponseBody& setDataSetRecordStatistic(const UpdateDataSetRecordResponseBodyDataSetRecordStatistic & dataSetRecordStatistic) { DARABONBA_PTR_SET_VALUE(dataSetRecordStatistic_, dataSetRecordStatistic) };
    inline UpdateDataSetRecordResponseBody& setDataSetRecordStatistic(UpdateDataSetRecordResponseBodyDataSetRecordStatistic && dataSetRecordStatistic) { DARABONBA_PTR_SET_RVALUE(dataSetRecordStatistic_, dataSetRecordStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDataSetRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateDataSetRecordResponseBodyDataSetRecordStatistic> dataSetRecordStatistic_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
