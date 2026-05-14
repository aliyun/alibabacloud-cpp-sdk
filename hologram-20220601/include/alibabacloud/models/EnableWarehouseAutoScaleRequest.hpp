// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEWAREHOUSEAUTOSCALEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEWAREHOUSEAUTOSCALEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class EnableWarehouseAutoScaleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableWarehouseAutoScaleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxClusterCount, maxClusterCount_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, EnableWarehouseAutoScaleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxClusterCount, maxClusterCount_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    EnableWarehouseAutoScaleRequest() = default ;
    EnableWarehouseAutoScaleRequest(const EnableWarehouseAutoScaleRequest &) = default ;
    EnableWarehouseAutoScaleRequest(EnableWarehouseAutoScaleRequest &&) = default ;
    EnableWarehouseAutoScaleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableWarehouseAutoScaleRequest() = default ;
    EnableWarehouseAutoScaleRequest& operator=(const EnableWarehouseAutoScaleRequest &) = default ;
    EnableWarehouseAutoScaleRequest& operator=(EnableWarehouseAutoScaleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxClusterCount_ == nullptr
        && this->name_ == nullptr; };
    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline string getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, "") };
    inline EnableWarehouseAutoScaleRequest& setMaxClusterCount(string maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EnableWarehouseAutoScaleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> maxClusterCount_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
