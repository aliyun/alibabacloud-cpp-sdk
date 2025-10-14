// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSRESPONSEBODYAPPSTATUSREGIONS_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSRESPONSEBODYAPPSTATUSREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppStatusResponseBodyAppStatusRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppStatusResponseBodyAppStatusRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppStatusResponseBodyAppStatusRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    GetEdgeContainerAppStatusResponseBodyAppStatusRegions() = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatusRegions(const GetEdgeContainerAppStatusResponseBodyAppStatusRegions &) = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatusRegions(GetEdgeContainerAppStatusResponseBodyAppStatusRegions &&) = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatusRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppStatusResponseBodyAppStatusRegions() = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatusRegions& operator=(const GetEdgeContainerAppStatusResponseBodyAppStatusRegions &) = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatusRegions& operator=(GetEdgeContainerAppStatusResponseBodyAppStatusRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<string> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<string>) };
    inline vector<string> region() { DARABONBA_PTR_GET(region_, vector<string>) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatusRegions& setRegion(const vector<string> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatusRegions& setRegion(vector<string> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<string>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
