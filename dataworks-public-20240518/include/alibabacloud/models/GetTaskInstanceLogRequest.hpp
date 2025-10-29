// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskInstanceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RunNumber, runNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RunNumber, runNumber_);
    };
    GetTaskInstanceLogRequest() = default ;
    GetTaskInstanceLogRequest(const GetTaskInstanceLogRequest &) = default ;
    GetTaskInstanceLogRequest(GetTaskInstanceLogRequest &&) = default ;
    GetTaskInstanceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceLogRequest() = default ;
    GetTaskInstanceLogRequest& operator=(const GetTaskInstanceLogRequest &) = default ;
    GetTaskInstanceLogRequest& operator=(GetTaskInstanceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->runNumber_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetTaskInstanceLogRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // runNumber Field Functions 
    bool hasRunNumber() const { return this->runNumber_ != nullptr;};
    void deleteRunNumber() { this->runNumber_ = nullptr;};
    inline int32_t runNumber() const { DARABONBA_PTR_GET_DEFAULT(runNumber_, 0) };
    inline GetTaskInstanceLogRequest& setRunNumber(int32_t runNumber) { DARABONBA_PTR_SET_VALUE(runNumber_, runNumber) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The sequence number of an instance run. Minimum value: 1. By default, the latest run is used.
    std::shared_ptr<int32_t> runNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
