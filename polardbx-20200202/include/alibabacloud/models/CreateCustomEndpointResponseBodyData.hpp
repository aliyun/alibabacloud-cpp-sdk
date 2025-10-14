// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMENDPOINTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMENDPOINTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateCustomEndpointResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomEndpointResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomEndpointResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
    };
    CreateCustomEndpointResponseBodyData() = default ;
    CreateCustomEndpointResponseBodyData(const CreateCustomEndpointResponseBodyData &) = default ;
    CreateCustomEndpointResponseBodyData(CreateCustomEndpointResponseBodyData &&) = default ;
    CreateCustomEndpointResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomEndpointResponseBodyData() = default ;
    CreateCustomEndpointResponseBodyData& operator=(const CreateCustomEndpointResponseBodyData &) = default ;
    CreateCustomEndpointResponseBodyData& operator=(CreateCustomEndpointResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEndpointId_ == nullptr
        && return this->DBInstanceName_ == nullptr; };
    // customEndpointId Field Functions 
    bool hasCustomEndpointId() const { return this->customEndpointId_ != nullptr;};
    void deleteCustomEndpointId() { this->customEndpointId_ = nullptr;};
    inline string customEndpointId() const { DARABONBA_PTR_GET_DEFAULT(customEndpointId_, "") };
    inline CreateCustomEndpointResponseBodyData& setCustomEndpointId(string customEndpointId) { DARABONBA_PTR_SET_VALUE(customEndpointId_, customEndpointId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateCustomEndpointResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


  protected:
    std::shared_ptr<string> customEndpointId_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
