// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUESTENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUESTENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateApplicationRequestEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequestEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequestEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
    };
    CreateApplicationRequestEndpoints() = default ;
    CreateApplicationRequestEndpoints(const CreateApplicationRequestEndpoints &) = default ;
    CreateApplicationRequestEndpoints(CreateApplicationRequestEndpoints &&) = default ;
    CreateApplicationRequestEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequestEndpoints() = default ;
    CreateApplicationRequestEndpoints& operator=(const CreateApplicationRequestEndpoints &) = default ;
    CreateApplicationRequestEndpoints& operator=(CreateApplicationRequestEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->endpointType_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationRequestEndpoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateApplicationRequestEndpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endpointType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
