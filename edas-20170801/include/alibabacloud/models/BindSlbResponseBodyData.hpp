// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDSLBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BINDSLBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class BindSlbResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindSlbResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExtSlbId, extSlbId_);
      DARABONBA_PTR_TO_JSON(ExtSlbIp, extSlbIp_);
      DARABONBA_PTR_TO_JSON(ExtSlbName, extSlbName_);
      DARABONBA_PTR_TO_JSON(ExtVServerGroupId, extVServerGroupId_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(SlbName, slbName_);
      DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, BindSlbResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtSlbId, extSlbId_);
      DARABONBA_PTR_FROM_JSON(ExtSlbIp, extSlbIp_);
      DARABONBA_PTR_FROM_JSON(ExtSlbName, extSlbName_);
      DARABONBA_PTR_FROM_JSON(ExtVServerGroupId, extVServerGroupId_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
      DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    BindSlbResponseBodyData() = default ;
    BindSlbResponseBodyData(const BindSlbResponseBodyData &) = default ;
    BindSlbResponseBodyData(BindSlbResponseBodyData &&) = default ;
    BindSlbResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindSlbResponseBodyData() = default ;
    BindSlbResponseBodyData& operator=(const BindSlbResponseBodyData &) = default ;
    BindSlbResponseBodyData& operator=(BindSlbResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extSlbId_ == nullptr
        && return this->extSlbIp_ == nullptr && return this->extSlbName_ == nullptr && return this->extVServerGroupId_ == nullptr && return this->slbId_ == nullptr && return this->slbIp_ == nullptr
        && return this->slbName_ == nullptr && return this->slbPort_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // extSlbId Field Functions 
    bool hasExtSlbId() const { return this->extSlbId_ != nullptr;};
    void deleteExtSlbId() { this->extSlbId_ = nullptr;};
    inline string extSlbId() const { DARABONBA_PTR_GET_DEFAULT(extSlbId_, "") };
    inline BindSlbResponseBodyData& setExtSlbId(string extSlbId) { DARABONBA_PTR_SET_VALUE(extSlbId_, extSlbId) };


    // extSlbIp Field Functions 
    bool hasExtSlbIp() const { return this->extSlbIp_ != nullptr;};
    void deleteExtSlbIp() { this->extSlbIp_ = nullptr;};
    inline string extSlbIp() const { DARABONBA_PTR_GET_DEFAULT(extSlbIp_, "") };
    inline BindSlbResponseBodyData& setExtSlbIp(string extSlbIp) { DARABONBA_PTR_SET_VALUE(extSlbIp_, extSlbIp) };


    // extSlbName Field Functions 
    bool hasExtSlbName() const { return this->extSlbName_ != nullptr;};
    void deleteExtSlbName() { this->extSlbName_ = nullptr;};
    inline string extSlbName() const { DARABONBA_PTR_GET_DEFAULT(extSlbName_, "") };
    inline BindSlbResponseBodyData& setExtSlbName(string extSlbName) { DARABONBA_PTR_SET_VALUE(extSlbName_, extSlbName) };


    // extVServerGroupId Field Functions 
    bool hasExtVServerGroupId() const { return this->extVServerGroupId_ != nullptr;};
    void deleteExtVServerGroupId() { this->extVServerGroupId_ = nullptr;};
    inline string extVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(extVServerGroupId_, "") };
    inline BindSlbResponseBodyData& setExtVServerGroupId(string extVServerGroupId) { DARABONBA_PTR_SET_VALUE(extVServerGroupId_, extVServerGroupId) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline BindSlbResponseBodyData& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string slbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline BindSlbResponseBodyData& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // slbName Field Functions 
    bool hasSlbName() const { return this->slbName_ != nullptr;};
    void deleteSlbName() { this->slbName_ = nullptr;};
    inline string slbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
    inline BindSlbResponseBodyData& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


    // slbPort Field Functions 
    bool hasSlbPort() const { return this->slbPort_ != nullptr;};
    void deleteSlbPort() { this->slbPort_ = nullptr;};
    inline int32_t slbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, 0) };
    inline BindSlbResponseBodyData& setSlbPort(int32_t slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline BindSlbResponseBodyData& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The ID of the Internet-facing SLB instance.
    std::shared_ptr<string> extSlbId_ = nullptr;
    // The IP address of the Internet-facing SLB instance.
    std::shared_ptr<string> extSlbIp_ = nullptr;
    // The name of the Internet-facing SLB instance.
    std::shared_ptr<string> extSlbName_ = nullptr;
    // The ID of the vServer group for the Internet-facing SLB instance.
    std::shared_ptr<string> extVServerGroupId_ = nullptr;
    // The ID of the internal-facing SLB instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The IP address of the internal-facing SLB instance.
    std::shared_ptr<string> slbIp_ = nullptr;
    // The name of the internal-facing SLB instance.
    std::shared_ptr<string> slbName_ = nullptr;
    // The listener port for the SLB instance.
    std::shared_ptr<int32_t> slbPort_ = nullptr;
    // The ID of the vServer group for the internal-facing SLB instance.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
