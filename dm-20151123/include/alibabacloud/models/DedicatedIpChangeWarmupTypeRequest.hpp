// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPCHANGEWARMUPTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPCHANGEWARMUPTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpChangeWarmupTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpChangeWarmupTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(WarmupType, warmupType_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpChangeWarmupTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(WarmupType, warmupType_);
    };
    DedicatedIpChangeWarmupTypeRequest() = default ;
    DedicatedIpChangeWarmupTypeRequest(const DedicatedIpChangeWarmupTypeRequest &) = default ;
    DedicatedIpChangeWarmupTypeRequest(DedicatedIpChangeWarmupTypeRequest &&) = default ;
    DedicatedIpChangeWarmupTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpChangeWarmupTypeRequest() = default ;
    DedicatedIpChangeWarmupTypeRequest& operator=(const DedicatedIpChangeWarmupTypeRequest &) = default ;
    DedicatedIpChangeWarmupTypeRequest& operator=(DedicatedIpChangeWarmupTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->warmupType_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DedicatedIpChangeWarmupTypeRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // warmupType Field Functions 
    bool hasWarmupType() const { return this->warmupType_ != nullptr;};
    void deleteWarmupType() { this->warmupType_ = nullptr;};
    inline string warmupType() const { DARABONBA_PTR_GET_DEFAULT(warmupType_, "") };
    inline DedicatedIpChangeWarmupTypeRequest& setWarmupType(string warmupType) { DARABONBA_PTR_SET_VALUE(warmupType_, warmupType) };


  protected:
    // Dedicated IP ID
    std::shared_ptr<string> id_ = nullptr;
    // Warmup method
    std::shared_ptr<string> warmupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
