// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTARTDEVICESRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTARTDEVICESRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchStartDevicesResponseBodyResultsStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchStartDevicesResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStartDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStartDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
    };
    BatchStartDevicesResponseBodyResults() = default ;
    BatchStartDevicesResponseBodyResults(const BatchStartDevicesResponseBodyResults &) = default ;
    BatchStartDevicesResponseBodyResults(BatchStartDevicesResponseBodyResults &&) = default ;
    BatchStartDevicesResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStartDevicesResponseBodyResults() = default ;
    BatchStartDevicesResponseBodyResults& operator=(const BatchStartDevicesResponseBodyResults &) = default ;
    BatchStartDevicesResponseBodyResults& operator=(BatchStartDevicesResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->streams_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BatchStartDevicesResponseBodyResults& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const vector<Models::BatchStartDevicesResponseBodyResultsStreams> & streams() const { DARABONBA_PTR_GET_CONST(streams_, vector<Models::BatchStartDevicesResponseBodyResultsStreams>) };
    inline vector<Models::BatchStartDevicesResponseBodyResultsStreams> streams() { DARABONBA_PTR_GET(streams_, vector<Models::BatchStartDevicesResponseBodyResultsStreams>) };
    inline BatchStartDevicesResponseBodyResults& setStreams(const vector<Models::BatchStartDevicesResponseBodyResultsStreams> & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline BatchStartDevicesResponseBodyResults& setStreams(vector<Models::BatchStartDevicesResponseBodyResultsStreams> && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<Models::BatchStartDevicesResponseBodyResultsStreams>> streams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
