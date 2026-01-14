// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDDOSTOACCELERATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDDOSTOACCELERATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class AttachDdosToAcceleratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDdosToAcceleratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(DdosConfigList, ddosConfigList_);
      DARABONBA_PTR_TO_JSON(DdosId, ddosId_);
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDdosToAcceleratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(DdosConfigList, ddosConfigList_);
      DARABONBA_PTR_FROM_JSON(DdosId, ddosId_);
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachDdosToAcceleratorRequest() = default ;
    AttachDdosToAcceleratorRequest(const AttachDdosToAcceleratorRequest &) = default ;
    AttachDdosToAcceleratorRequest(AttachDdosToAcceleratorRequest &&) = default ;
    AttachDdosToAcceleratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDdosToAcceleratorRequest() = default ;
    AttachDdosToAcceleratorRequest& operator=(const AttachDdosToAcceleratorRequest &) = default ;
    AttachDdosToAcceleratorRequest& operator=(AttachDdosToAcceleratorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DdosConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DdosConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(DdosId, ddosId_);
        DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, DdosConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(DdosId, ddosId_);
        DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      };
      DdosConfigList() = default ;
      DdosConfigList(const DdosConfigList &) = default ;
      DdosConfigList(DdosConfigList &&) = default ;
      DdosConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DdosConfigList() = default ;
      DdosConfigList& operator=(const DdosConfigList &) = default ;
      DdosConfigList& operator=(DdosConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ddosId_ == nullptr
        && this->ddosRegionId_ == nullptr; };
      // ddosId Field Functions 
      bool hasDdosId() const { return this->ddosId_ != nullptr;};
      void deleteDdosId() { this->ddosId_ = nullptr;};
      inline string getDdosId() const { DARABONBA_PTR_GET_DEFAULT(ddosId_, "") };
      inline DdosConfigList& setDdosId(string ddosId) { DARABONBA_PTR_SET_VALUE(ddosId_, ddosId) };


      // ddosRegionId Field Functions 
      bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
      void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
      inline string getDdosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
      inline DdosConfigList& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    protected:
      shared_ptr<string> ddosId_ {};
      shared_ptr<string> ddosRegionId_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->ddosConfigList_ == nullptr && this->ddosId_ == nullptr && this->ddosRegionId_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline AttachDdosToAcceleratorRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // ddosConfigList Field Functions 
    bool hasDdosConfigList() const { return this->ddosConfigList_ != nullptr;};
    void deleteDdosConfigList() { this->ddosConfigList_ = nullptr;};
    inline const vector<AttachDdosToAcceleratorRequest::DdosConfigList> & getDdosConfigList() const { DARABONBA_PTR_GET_CONST(ddosConfigList_, vector<AttachDdosToAcceleratorRequest::DdosConfigList>) };
    inline vector<AttachDdosToAcceleratorRequest::DdosConfigList> getDdosConfigList() { DARABONBA_PTR_GET(ddosConfigList_, vector<AttachDdosToAcceleratorRequest::DdosConfigList>) };
    inline AttachDdosToAcceleratorRequest& setDdosConfigList(const vector<AttachDdosToAcceleratorRequest::DdosConfigList> & ddosConfigList) { DARABONBA_PTR_SET_VALUE(ddosConfigList_, ddosConfigList) };
    inline AttachDdosToAcceleratorRequest& setDdosConfigList(vector<AttachDdosToAcceleratorRequest::DdosConfigList> && ddosConfigList) { DARABONBA_PTR_SET_RVALUE(ddosConfigList_, ddosConfigList) };


    // ddosId Field Functions 
    bool hasDdosId() const { return this->ddosId_ != nullptr;};
    void deleteDdosId() { this->ddosId_ = nullptr;};
    inline string getDdosId() const { DARABONBA_PTR_GET_DEFAULT(ddosId_, "") };
    inline AttachDdosToAcceleratorRequest& setDdosId(string ddosId) { DARABONBA_PTR_SET_VALUE(ddosId_, ddosId) };


    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string getDdosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline AttachDdosToAcceleratorRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AttachDdosToAcceleratorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachDdosToAcceleratorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance with which the Anti-DDoS Pro/Premium instance is associated.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    shared_ptr<vector<AttachDdosToAcceleratorRequest::DdosConfigList>> ddosConfigList_ {};
    // The ID of the Anti-DDoS Pro/Premium instance to be associated with the GA instance.
    shared_ptr<string> ddosId_ {};
    // The region where the Anti-DDoS Pro/Premium instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: regions in the Chinese mainland
    // *   **ap-southeast-1**: regions outside the Chinese mainland
    shared_ptr<string> ddosRegionId_ {};
    shared_ptr<bool> dryRun_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
