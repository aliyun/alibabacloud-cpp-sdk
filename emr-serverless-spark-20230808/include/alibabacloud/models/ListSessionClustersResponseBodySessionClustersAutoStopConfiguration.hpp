// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONCLUSTERSRESPONSEBODYSESSIONCLUSTERSAUTOSTOPCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONCLUSTERSRESPONSEBODYSESSIONCLUSTERSAUTOSTOPCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListSessionClustersResponseBodySessionClustersAutoStopConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionClustersResponseBodySessionClustersAutoStopConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionClustersResponseBodySessionClustersAutoStopConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
    };
    ListSessionClustersResponseBodySessionClustersAutoStopConfiguration() = default ;
    ListSessionClustersResponseBodySessionClustersAutoStopConfiguration(const ListSessionClustersResponseBodySessionClustersAutoStopConfiguration &) = default ;
    ListSessionClustersResponseBodySessionClustersAutoStopConfiguration(ListSessionClustersResponseBodySessionClustersAutoStopConfiguration &&) = default ;
    ListSessionClustersResponseBodySessionClustersAutoStopConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionClustersResponseBodySessionClustersAutoStopConfiguration() = default ;
    ListSessionClustersResponseBodySessionClustersAutoStopConfiguration& operator=(const ListSessionClustersResponseBodySessionClustersAutoStopConfiguration &) = default ;
    ListSessionClustersResponseBodySessionClustersAutoStopConfiguration& operator=(ListSessionClustersResponseBodySessionClustersAutoStopConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->idleTimeoutMinutes_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListSessionClustersResponseBodySessionClustersAutoStopConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // idleTimeoutMinutes Field Functions 
    bool hasIdleTimeoutMinutes() const { return this->idleTimeoutMinutes_ != nullptr;};
    void deleteIdleTimeoutMinutes() { this->idleTimeoutMinutes_ = nullptr;};
    inline int32_t idleTimeoutMinutes() const { DARABONBA_PTR_GET_DEFAULT(idleTimeoutMinutes_, 0) };
    inline ListSessionClustersResponseBodySessionClustersAutoStopConfiguration& setIdleTimeoutMinutes(int32_t idleTimeoutMinutes) { DARABONBA_PTR_SET_VALUE(idleTimeoutMinutes_, idleTimeoutMinutes) };


  protected:
    // Indicates whether automatic termination is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The idle timeout period. The session is automatically terminated when the idle timeout period is exceeded.
    std::shared_ptr<int32_t> idleTimeoutMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
