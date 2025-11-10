// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODYDATALISTSOURCEPROGRESSPROGRESSDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODYDATALISTSOURCEPROGRESSPROGRESSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData& obj) { 
      DARABONBA_PTR_TO_JSON(consumeTimestamp, consumeTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumeTimestamp, consumeTimestamp_);
    };
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData() = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData(const ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData &) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData(ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData &&) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData() = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData& operator=(const ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData &) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData& operator=(ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumeTimestamp_ == nullptr; };
    // consumeTimestamp Field Functions 
    bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
    void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
    inline int64_t consumeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(consumeTimestamp_, 0L) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData& setConsumeTimestamp(int64_t consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };


  protected:
    // Latest consumption time
    std::shared_ptr<int64_t> consumeTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
