// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPVULSCANCYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPVULSCANCYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAppVulScanCycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppVulScanCycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppVulScanCycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
    };
    ModifyAppVulScanCycleRequest() = default ;
    ModifyAppVulScanCycleRequest(const ModifyAppVulScanCycleRequest &) = default ;
    ModifyAppVulScanCycleRequest(ModifyAppVulScanCycleRequest &&) = default ;
    ModifyAppVulScanCycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppVulScanCycleRequest() = default ;
    ModifyAppVulScanCycleRequest& operator=(const ModifyAppVulScanCycleRequest &) = default ;
    ModifyAppVulScanCycleRequest& operator=(ModifyAppVulScanCycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycle_ == nullptr; };
    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline ModifyAppVulScanCycleRequest& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


  protected:
    // The scan cycle for application vulnerabilities.
    // 
    // *   1week
    // *   2weeks
    // *   3days
    shared_ptr<string> cycle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
