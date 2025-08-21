// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTOPDEVICESRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTOPDEVICESRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchStopDevicesResponseBodyResultsStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchStopDevicesResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStopDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStopDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
    };
    BatchStopDevicesResponseBodyResults() = default ;
    BatchStopDevicesResponseBodyResults(const BatchStopDevicesResponseBodyResults &) = default ;
    BatchStopDevicesResponseBodyResults(BatchStopDevicesResponseBodyResults &&) = default ;
    BatchStopDevicesResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStopDevicesResponseBodyResults() = default ;
    BatchStopDevicesResponseBodyResults& operator=(const BatchStopDevicesResponseBodyResults &) = default ;
    BatchStopDevicesResponseBodyResults& operator=(BatchStopDevicesResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->streams_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BatchStopDevicesResponseBodyResults& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const vector<Models::BatchStopDevicesResponseBodyResultsStreams> & streams() const { DARABONBA_PTR_GET_CONST(streams_, vector<Models::BatchStopDevicesResponseBodyResultsStreams>) };
    inline vector<Models::BatchStopDevicesResponseBodyResultsStreams> streams() { DARABONBA_PTR_GET(streams_, vector<Models::BatchStopDevicesResponseBodyResultsStreams>) };
    inline BatchStopDevicesResponseBodyResults& setStreams(const vector<Models::BatchStopDevicesResponseBodyResultsStreams> & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline BatchStopDevicesResponseBodyResults& setStreams(vector<Models::BatchStopDevicesResponseBodyResultsStreams> && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<Models::BatchStopDevicesResponseBodyResultsStreams>> streams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
