// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlotsResponseBodySlots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSlotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Slots, slots_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Slots, slots_);
    };
    DescribeSlotsResponseBody() = default ;
    DescribeSlotsResponseBody(const DescribeSlotsResponseBody &) = default ;
    DescribeSlotsResponseBody(DescribeSlotsResponseBody &&) = default ;
    DescribeSlotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlotsResponseBody() = default ;
    DescribeSlotsResponseBody& operator=(const DescribeSlotsResponseBody &) = default ;
    DescribeSlotsResponseBody& operator=(DescribeSlotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->slots_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slots Field Functions 
    bool hasSlots() const { return this->slots_ != nullptr;};
    void deleteSlots() { this->slots_ = nullptr;};
    inline const vector<DescribeSlotsResponseBodySlots> & slots() const { DARABONBA_PTR_GET_CONST(slots_, vector<DescribeSlotsResponseBodySlots>) };
    inline vector<DescribeSlotsResponseBodySlots> slots() { DARABONBA_PTR_GET(slots_, vector<DescribeSlotsResponseBodySlots>) };
    inline DescribeSlotsResponseBody& setSlots(const vector<DescribeSlotsResponseBodySlots> & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
    inline DescribeSlotsResponseBody& setSlots(vector<DescribeSlotsResponseBodySlots> && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the replication slot.
    std::shared_ptr<vector<DescribeSlotsResponseBodySlots>> slots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
