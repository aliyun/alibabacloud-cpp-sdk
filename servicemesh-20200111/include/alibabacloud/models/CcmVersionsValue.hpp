// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CCMVERSIONSVALUE_HPP_
#define ALIBABACLOUD_MODELS_CCMVERSIONSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CCMVersionsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CCMVersionsValue& obj) { 
      DARABONBA_PTR_TO_JSON(QueryState, queryState_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(SLBGracefulDrainSupported, SLBGracefulDrainSupported_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(SLBGracefulDrainSupport, SLBGracefulDrainSupport_);
    };
    friend void from_json(const Darabonba::Json& j, CCMVersionsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryState, queryState_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(SLBGracefulDrainSupported, SLBGracefulDrainSupported_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(SLBGracefulDrainSupport, SLBGracefulDrainSupport_);
    };
    CCMVersionsValue() = default ;
    CCMVersionsValue(const CCMVersionsValue &) = default ;
    CCMVersionsValue(CCMVersionsValue &&) = default ;
    CCMVersionsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CCMVersionsValue() = default ;
    CCMVersionsValue& operator=(const CCMVersionsValue &) = default ;
    CCMVersionsValue& operator=(CCMVersionsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryState_ == nullptr
        && return this->version_ == nullptr && return this->SLBGracefulDrainSupported_ == nullptr && return this->clusterId_ == nullptr && return this->message_ == nullptr && return this->SLBGracefulDrainSupport_ == nullptr; };
    // queryState Field Functions 
    bool hasQueryState() const { return this->queryState_ != nullptr;};
    void deleteQueryState() { this->queryState_ = nullptr;};
    inline string queryState() const { DARABONBA_PTR_GET_DEFAULT(queryState_, "") };
    inline CCMVersionsValue& setQueryState(string queryState) { DARABONBA_PTR_SET_VALUE(queryState_, queryState) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CCMVersionsValue& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // SLBGracefulDrainSupported Field Functions 
    bool hasSLBGracefulDrainSupported() const { return this->SLBGracefulDrainSupported_ != nullptr;};
    void deleteSLBGracefulDrainSupported() { this->SLBGracefulDrainSupported_ = nullptr;};
    inline bool SLBGracefulDrainSupported() const { DARABONBA_PTR_GET_DEFAULT(SLBGracefulDrainSupported_, false) };
    inline CCMVersionsValue& setSLBGracefulDrainSupported(bool SLBGracefulDrainSupported) { DARABONBA_PTR_SET_VALUE(SLBGracefulDrainSupported_, SLBGracefulDrainSupported) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CCMVersionsValue& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CCMVersionsValue& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // SLBGracefulDrainSupport Field Functions 
    bool hasSLBGracefulDrainSupport() const { return this->SLBGracefulDrainSupport_ != nullptr;};
    void deleteSLBGracefulDrainSupport() { this->SLBGracefulDrainSupport_ = nullptr;};
    inline bool SLBGracefulDrainSupport() const { DARABONBA_PTR_GET_DEFAULT(SLBGracefulDrainSupport_, false) };
    inline CCMVersionsValue& setSLBGracefulDrainSupport(bool SLBGracefulDrainSupport) { DARABONBA_PTR_SET_VALUE(SLBGracefulDrainSupport_, SLBGracefulDrainSupport) };


  protected:
    // The status of the query. Valid values:
    // 
    // *   `time_out`: The query times out.
    // *   `failed`: The query fails.
    // *   `Empty string`: The query is successful.
    std::shared_ptr<string> queryState_ = nullptr;
    // The CCM version.
    std::shared_ptr<string> version_ = nullptr;
    // Indicates whether Classic Load Balancer (CLB) graceful shutdown is supported.
    std::shared_ptr<bool> SLBGracefulDrainSupported_ = nullptr;
    // The ID of the cluster instance on the data plane.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The additional information that is returned when the query fails. This parameter is empty if the query is successful.
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> SLBGracefulDrainSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
