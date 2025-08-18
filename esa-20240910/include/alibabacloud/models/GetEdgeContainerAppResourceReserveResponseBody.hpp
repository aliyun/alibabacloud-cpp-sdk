// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCERESERVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCERESERVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEdgeContainerAppResourceReserveResponseBodyReserveSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppResourceReserveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResourceReserveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Forever, forever_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReserveSet, reserveSet_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResourceReserveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Forever, forever_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReserveSet, reserveSet_);
    };
    GetEdgeContainerAppResourceReserveResponseBody() = default ;
    GetEdgeContainerAppResourceReserveResponseBody(const GetEdgeContainerAppResourceReserveResponseBody &) = default ;
    GetEdgeContainerAppResourceReserveResponseBody(GetEdgeContainerAppResourceReserveResponseBody &&) = default ;
    GetEdgeContainerAppResourceReserveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResourceReserveResponseBody() = default ;
    GetEdgeContainerAppResourceReserveResponseBody& operator=(const GetEdgeContainerAppResourceReserveResponseBody &) = default ;
    GetEdgeContainerAppResourceReserveResponseBody& operator=(GetEdgeContainerAppResourceReserveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->durationTime_ != nullptr
        && this->enable_ != nullptr && this->forever_ != nullptr && this->requestId_ != nullptr && this->reserveSet_ != nullptr; };
    // durationTime Field Functions 
    bool hasDurationTime() const { return this->durationTime_ != nullptr;};
    void deleteDurationTime() { this->durationTime_ = nullptr;};
    inline string durationTime() const { DARABONBA_PTR_GET_DEFAULT(durationTime_, "") };
    inline GetEdgeContainerAppResourceReserveResponseBody& setDurationTime(string durationTime) { DARABONBA_PTR_SET_VALUE(durationTime_, durationTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetEdgeContainerAppResourceReserveResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // forever Field Functions 
    bool hasForever() const { return this->forever_ != nullptr;};
    void deleteForever() { this->forever_ = nullptr;};
    inline bool forever() const { DARABONBA_PTR_GET_DEFAULT(forever_, false) };
    inline GetEdgeContainerAppResourceReserveResponseBody& setForever(bool forever) { DARABONBA_PTR_SET_VALUE(forever_, forever) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppResourceReserveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserveSet Field Functions 
    bool hasReserveSet() const { return this->reserveSet_ != nullptr;};
    void deleteReserveSet() { this->reserveSet_ = nullptr;};
    inline const vector<GetEdgeContainerAppResourceReserveResponseBodyReserveSet> & reserveSet() const { DARABONBA_PTR_GET_CONST(reserveSet_, vector<GetEdgeContainerAppResourceReserveResponseBodyReserveSet>) };
    inline vector<GetEdgeContainerAppResourceReserveResponseBodyReserveSet> reserveSet() { DARABONBA_PTR_GET(reserveSet_, vector<GetEdgeContainerAppResourceReserveResponseBodyReserveSet>) };
    inline GetEdgeContainerAppResourceReserveResponseBody& setReserveSet(const vector<GetEdgeContainerAppResourceReserveResponseBodyReserveSet> & reserveSet) { DARABONBA_PTR_SET_VALUE(reserveSet_, reserveSet) };
    inline GetEdgeContainerAppResourceReserveResponseBody& setReserveSet(vector<GetEdgeContainerAppResourceReserveResponseBodyReserveSet> && reserveSet) { DARABONBA_PTR_SET_RVALUE(reserveSet_, reserveSet) };


  protected:
    std::shared_ptr<string> durationTime_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<bool> forever_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetEdgeContainerAppResourceReserveResponseBodyReserveSet>> reserveSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
