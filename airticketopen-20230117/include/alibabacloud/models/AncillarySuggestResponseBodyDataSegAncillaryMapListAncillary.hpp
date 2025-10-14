// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODYDATASEGANCILLARYMAPLISTANCILLARY_HPP_
#define ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODYDATASEGANCILLARYMAPLISTANCILLARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& obj) { 
      DARABONBA_PTR_TO_JSON(ancillary_id, ancillaryId_);
      DARABONBA_PTR_TO_JSON(ancillary_type, ancillaryType_);
      DARABONBA_PTR_TO_JSON(baggage_ancillary, baggageAncillary_);
    };
    friend void from_json(const Darabonba::Json& j, AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& obj) { 
      DARABONBA_PTR_FROM_JSON(ancillary_id, ancillaryId_);
      DARABONBA_PTR_FROM_JSON(ancillary_type, ancillaryType_);
      DARABONBA_PTR_FROM_JSON(baggage_ancillary, baggageAncillary_);
    };
    AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary() = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary(const AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary &) = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary(AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary &&) = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary() = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& operator=(const AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary &) = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& operator=(AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ancillaryId_ == nullptr
        && return this->ancillaryType_ == nullptr && return this->baggageAncillary_ == nullptr; };
    // ancillaryId Field Functions 
    bool hasAncillaryId() const { return this->ancillaryId_ != nullptr;};
    void deleteAncillaryId() { this->ancillaryId_ = nullptr;};
    inline string ancillaryId() const { DARABONBA_PTR_GET_DEFAULT(ancillaryId_, "") };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& setAncillaryId(string ancillaryId) { DARABONBA_PTR_SET_VALUE(ancillaryId_, ancillaryId) };


    // ancillaryType Field Functions 
    bool hasAncillaryType() const { return this->ancillaryType_ != nullptr;};
    void deleteAncillaryType() { this->ancillaryType_ = nullptr;};
    inline int32_t ancillaryType() const { DARABONBA_PTR_GET_DEFAULT(ancillaryType_, 0) };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& setAncillaryType(int32_t ancillaryType) { DARABONBA_PTR_SET_VALUE(ancillaryType_, ancillaryType) };


    // baggageAncillary Field Functions 
    bool hasBaggageAncillary() const { return this->baggageAncillary_ != nullptr;};
    void deleteBaggageAncillary() { this->baggageAncillary_ = nullptr;};
    inline const Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary & baggageAncillary() const { DARABONBA_PTR_GET_CONST(baggageAncillary_, Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary) };
    inline Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary baggageAncillary() { DARABONBA_PTR_GET(baggageAncillary_, Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary) };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& setBaggageAncillary(const Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary & baggageAncillary) { DARABONBA_PTR_SET_VALUE(baggageAncillary_, baggageAncillary) };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary& setBaggageAncillary(Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary && baggageAncillary) { DARABONBA_PTR_SET_RVALUE(baggageAncillary_, baggageAncillary) };


  protected:
    // Ancillary product ID
    std::shared_ptr<string> ancillaryId_ = nullptr;
    // Ancillary product type. currently supports 4: paid luggage
    std::shared_ptr<int32_t> ancillaryType_ = nullptr;
    // Baggage details
    std::shared_ptr<Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary> baggageAncillary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
