// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetDataEventSelectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataEventSelectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TrailName, trailName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataEventSelectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
    };
    GetDataEventSelectorRequest() = default ;
    GetDataEventSelectorRequest(const GetDataEventSelectorRequest &) = default ;
    GetDataEventSelectorRequest(GetDataEventSelectorRequest &&) = default ;
    GetDataEventSelectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataEventSelectorRequest() = default ;
    GetDataEventSelectorRequest& operator=(const GetDataEventSelectorRequest &) = default ;
    GetDataEventSelectorRequest& operator=(GetDataEventSelectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trailName_ == nullptr; };
    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string trailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline GetDataEventSelectorRequest& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> trailName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
