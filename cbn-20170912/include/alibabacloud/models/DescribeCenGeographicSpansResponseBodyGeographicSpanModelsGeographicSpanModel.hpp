// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANSRESPONSEBODYGEOGRAPHICSPANMODELSGEOGRAPHICSPANMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANSRESPONSEBODYGEOGRAPHICSPANMODELSGEOGRAPHICSPANMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel& obj) { 
      DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_TO_JSON(LocalGeoRegionId, localGeoRegionId_);
      DARABONBA_PTR_TO_JSON(OppositeGeoRegionId, oppositeGeoRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel& obj) { 
      DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_FROM_JSON(LocalGeoRegionId, localGeoRegionId_);
      DARABONBA_PTR_FROM_JSON(OppositeGeoRegionId, oppositeGeoRegionId_);
    };
    DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel() = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel(const DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel &) = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel(DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel &&) = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel() = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel& operator=(const DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel &) = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel& operator=(DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->geographicSpanId_ != nullptr
        && this->localGeoRegionId_ != nullptr && this->oppositeGeoRegionId_ != nullptr; };
    // geographicSpanId Field Functions 
    bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
    void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
    inline string geographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
    inline DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


    // localGeoRegionId Field Functions 
    bool hasLocalGeoRegionId() const { return this->localGeoRegionId_ != nullptr;};
    void deleteLocalGeoRegionId() { this->localGeoRegionId_ = nullptr;};
    inline string localGeoRegionId() const { DARABONBA_PTR_GET_DEFAULT(localGeoRegionId_, "") };
    inline DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel& setLocalGeoRegionId(string localGeoRegionId) { DARABONBA_PTR_SET_VALUE(localGeoRegionId_, localGeoRegionId) };


    // oppositeGeoRegionId Field Functions 
    bool hasOppositeGeoRegionId() const { return this->oppositeGeoRegionId_ != nullptr;};
    void deleteOppositeGeoRegionId() { this->oppositeGeoRegionId_ = nullptr;};
    inline string oppositeGeoRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeGeoRegionId_, "") };
    inline DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel& setOppositeGeoRegionId(string oppositeGeoRegionId) { DARABONBA_PTR_SET_VALUE(oppositeGeoRegionId_, oppositeGeoRegionId) };


  protected:
    // The ID of the pair of connected areas.
    std::shared_ptr<string> geographicSpanId_ = nullptr;
    // The ID of the local area.
    std::shared_ptr<string> localGeoRegionId_ = nullptr;
    // The ID of the peer area.
    std::shared_ptr<string> oppositeGeoRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
