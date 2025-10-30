// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupportModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListSupportModelsRequest() = default ;
    ListSupportModelsRequest(const ListSupportModelsRequest &) = default ;
    ListSupportModelsRequest(ListSupportModelsRequest &&) = default ;
    ListSupportModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportModelsRequest() = default ;
    ListSupportModelsRequest& operator=(const ListSupportModelsRequest &) = default ;
    ListSupportModelsRequest& operator=(ListSupportModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSupportModelsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
