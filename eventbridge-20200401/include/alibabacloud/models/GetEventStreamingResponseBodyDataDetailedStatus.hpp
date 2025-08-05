// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATADETAILEDSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATADETAILEDSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataDetailedStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataDetailedStatus& obj) { 
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(DiffOffset, diffOffset_);
      DARABONBA_ANY_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(TPS, TPS_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataDetailedStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(DiffOffset, diffOffset_);
      DARABONBA_ANY_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(TPS, TPS_);
    };
    GetEventStreamingResponseBodyDataDetailedStatus() = default ;
    GetEventStreamingResponseBodyDataDetailedStatus(const GetEventStreamingResponseBodyDataDetailedStatus &) = default ;
    GetEventStreamingResponseBodyDataDetailedStatus(GetEventStreamingResponseBodyDataDetailedStatus &&) = default ;
    GetEventStreamingResponseBodyDataDetailedStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataDetailedStatus() = default ;
    GetEventStreamingResponseBodyDataDetailedStatus& operator=(const GetEventStreamingResponseBodyDataDetailedStatus &) = default ;
    GetEventStreamingResponseBodyDataDetailedStatus& operator=(GetEventStreamingResponseBodyDataDetailedStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delayTime_ != nullptr
        && this->diffOffset_ != nullptr && this->extensions_ != nullptr && this->TPS_ != nullptr; };
    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int64_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0L) };
    inline GetEventStreamingResponseBodyDataDetailedStatus& setDelayTime(int64_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // diffOffset Field Functions 
    bool hasDiffOffset() const { return this->diffOffset_ != nullptr;};
    void deleteDiffOffset() { this->diffOffset_ = nullptr;};
    inline int64_t diffOffset() const { DARABONBA_PTR_GET_DEFAULT(diffOffset_, 0L) };
    inline GetEventStreamingResponseBodyDataDetailedStatus& setDiffOffset(int64_t diffOffset) { DARABONBA_PTR_SET_VALUE(diffOffset_, diffOffset) };


    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline     const Darabonba::Json & extensions() const { DARABONBA_GET(extensions_) };
    Darabonba::Json & extensions() { DARABONBA_GET(extensions_) };
    inline GetEventStreamingResponseBodyDataDetailedStatus& setExtensions(const Darabonba::Json & extensions) { DARABONBA_SET_VALUE(extensions_, extensions) };
    inline GetEventStreamingResponseBodyDataDetailedStatus& setExtensions(Darabonba::Json & extensions) { DARABONBA_SET_RVALUE(extensions_, extensions) };


    // TPS Field Functions 
    bool hasTPS() const { return this->TPS_ != nullptr;};
    void deleteTPS() { this->TPS_ = nullptr;};
    inline double TPS() const { DARABONBA_PTR_GET_DEFAULT(TPS_, 0.0) };
    inline GetEventStreamingResponseBodyDataDetailedStatus& setTPS(double TPS) { DARABONBA_PTR_SET_VALUE(TPS_, TPS) };


  protected:
    std::shared_ptr<int64_t> delayTime_ = nullptr;
    std::shared_ptr<int64_t> diffOffset_ = nullptr;
    Darabonba::Json extensions_ = nullptr;
    std::shared_ptr<double> TPS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
