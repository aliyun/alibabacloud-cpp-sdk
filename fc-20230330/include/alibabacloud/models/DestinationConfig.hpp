// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESTINATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESTINATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Destination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DestinationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DestinationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(onFailure, onFailure_);
      DARABONBA_PTR_TO_JSON(onSuccess, onSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, DestinationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(onFailure, onFailure_);
      DARABONBA_PTR_FROM_JSON(onSuccess, onSuccess_);
    };
    DestinationConfig() = default ;
    DestinationConfig(const DestinationConfig &) = default ;
    DestinationConfig(DestinationConfig &&) = default ;
    DestinationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DestinationConfig() = default ;
    DestinationConfig& operator=(const DestinationConfig &) = default ;
    DestinationConfig& operator=(DestinationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onFailure_ != nullptr
        && this->onSuccess_ != nullptr; };
    // onFailure Field Functions 
    bool hasOnFailure() const { return this->onFailure_ != nullptr;};
    void deleteOnFailure() { this->onFailure_ = nullptr;};
    inline const Destination & onFailure() const { DARABONBA_PTR_GET_CONST(onFailure_, Destination) };
    inline Destination onFailure() { DARABONBA_PTR_GET(onFailure_, Destination) };
    inline DestinationConfig& setOnFailure(const Destination & onFailure) { DARABONBA_PTR_SET_VALUE(onFailure_, onFailure) };
    inline DestinationConfig& setOnFailure(Destination && onFailure) { DARABONBA_PTR_SET_RVALUE(onFailure_, onFailure) };


    // onSuccess Field Functions 
    bool hasOnSuccess() const { return this->onSuccess_ != nullptr;};
    void deleteOnSuccess() { this->onSuccess_ = nullptr;};
    inline const Destination & onSuccess() const { DARABONBA_PTR_GET_CONST(onSuccess_, Destination) };
    inline Destination onSuccess() { DARABONBA_PTR_GET(onSuccess_, Destination) };
    inline DestinationConfig& setOnSuccess(const Destination & onSuccess) { DARABONBA_PTR_SET_VALUE(onSuccess_, onSuccess) };
    inline DestinationConfig& setOnSuccess(Destination && onSuccess) { DARABONBA_PTR_SET_RVALUE(onSuccess_, onSuccess) };


  protected:
    std::shared_ptr<Destination> onFailure_ = nullptr;
    std::shared_ptr<Destination> onSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
