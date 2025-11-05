// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPAIRDRILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTPAIRDRILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class StartPairDrillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPairDrillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DrillId, drillId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartPairDrillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DrillId, drillId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartPairDrillResponseBody() = default ;
    StartPairDrillResponseBody(const StartPairDrillResponseBody &) = default ;
    StartPairDrillResponseBody(StartPairDrillResponseBody &&) = default ;
    StartPairDrillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPairDrillResponseBody() = default ;
    StartPairDrillResponseBody& operator=(const StartPairDrillResponseBody &) = default ;
    StartPairDrillResponseBody& operator=(StartPairDrillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drillId_ == nullptr
        && return this->requestId_ == nullptr; };
    // drillId Field Functions 
    bool hasDrillId() const { return this->drillId_ != nullptr;};
    void deleteDrillId() { this->drillId_ = nullptr;};
    inline string drillId() const { DARABONBA_PTR_GET_DEFAULT(drillId_, "") };
    inline StartPairDrillResponseBody& setDrillId(string drillId) { DARABONBA_PTR_SET_VALUE(drillId_, drillId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartPairDrillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The drill ID.
    std::shared_ptr<string> drillId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
