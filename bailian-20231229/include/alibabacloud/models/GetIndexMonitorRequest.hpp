// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetIndexMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
    };
    GetIndexMonitorRequest() = default ;
    GetIndexMonitorRequest(const GetIndexMonitorRequest &) = default ;
    GetIndexMonitorRequest(GetIndexMonitorRequest &&) = default ;
    GetIndexMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexMonitorRequest() = default ;
    GetIndexMonitorRequest& operator=(const GetIndexMonitorRequest &) = default ;
    GetIndexMonitorRequest& operator=(GetIndexMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTimestamp_ == nullptr
        && this->indexId_ == nullptr && this->startTimestamp_ == nullptr; };
    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline GetIndexMonitorRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline GetIndexMonitorRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline GetIndexMonitorRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> endTimestamp_ {};
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
