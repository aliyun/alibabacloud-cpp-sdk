// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTMAINBODYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTMAINBODYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectMainBodyResponseBodyDataLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectMainBodyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectMainBodyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
    };
    friend void from_json(const Darabonba::Json& j, DetectMainBodyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
    };
    DetectMainBodyResponseBodyData() = default ;
    DetectMainBodyResponseBodyData(const DetectMainBodyResponseBodyData &) = default ;
    DetectMainBodyResponseBodyData(DetectMainBodyResponseBodyData &&) = default ;
    DetectMainBodyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectMainBodyResponseBodyData() = default ;
    DetectMainBodyResponseBodyData& operator=(const DetectMainBodyResponseBodyData &) = default ;
    DetectMainBodyResponseBodyData& operator=(DetectMainBodyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->location_ != nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::DetectMainBodyResponseBodyDataLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::DetectMainBodyResponseBodyDataLocation) };
    inline Models::DetectMainBodyResponseBodyDataLocation location() { DARABONBA_PTR_GET(location_, Models::DetectMainBodyResponseBodyDataLocation) };
    inline DetectMainBodyResponseBodyData& setLocation(const Models::DetectMainBodyResponseBodyDataLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline DetectMainBodyResponseBodyData& setLocation(Models::DetectMainBodyResponseBodyDataLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


  protected:
    std::shared_ptr<Models::DetectMainBodyResponseBodyDataLocation> location_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
