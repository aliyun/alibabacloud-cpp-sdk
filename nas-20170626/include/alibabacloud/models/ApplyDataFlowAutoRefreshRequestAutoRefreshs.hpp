// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATAFLOWAUTOREFRESHREQUESTAUTOREFRESHS_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATAFLOWAUTOREFRESHREQUESTAUTOREFRESHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ApplyDataFlowAutoRefreshRequestAutoRefreshs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataFlowAutoRefreshRequestAutoRefreshs& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshPath, refreshPath_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataFlowAutoRefreshRequestAutoRefreshs& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshPath, refreshPath_);
    };
    ApplyDataFlowAutoRefreshRequestAutoRefreshs() = default ;
    ApplyDataFlowAutoRefreshRequestAutoRefreshs(const ApplyDataFlowAutoRefreshRequestAutoRefreshs &) = default ;
    ApplyDataFlowAutoRefreshRequestAutoRefreshs(ApplyDataFlowAutoRefreshRequestAutoRefreshs &&) = default ;
    ApplyDataFlowAutoRefreshRequestAutoRefreshs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataFlowAutoRefreshRequestAutoRefreshs() = default ;
    ApplyDataFlowAutoRefreshRequestAutoRefreshs& operator=(const ApplyDataFlowAutoRefreshRequestAutoRefreshs &) = default ;
    ApplyDataFlowAutoRefreshRequestAutoRefreshs& operator=(ApplyDataFlowAutoRefreshRequestAutoRefreshs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refreshPath_ == nullptr; };
    // refreshPath Field Functions 
    bool hasRefreshPath() const { return this->refreshPath_ != nullptr;};
    void deleteRefreshPath() { this->refreshPath_ = nullptr;};
    inline string refreshPath() const { DARABONBA_PTR_GET_DEFAULT(refreshPath_, "") };
    inline ApplyDataFlowAutoRefreshRequestAutoRefreshs& setRefreshPath(string refreshPath) { DARABONBA_PTR_SET_VALUE(refreshPath_, refreshPath) };


  protected:
    // The automatic update directory. CPFS automatically checks whether the source data only in the directory is updated and imports the updated data.
    // 
    // Limits:
    // 
    // *   The directory must be 2 to 1,024 characters in length.
    // *   The directory must be encoded in UTF-8.
    // *   The directory must start and end with a forward slash (/).
    // 
    // >  The directory must be an existing directory in the CPFS file system and must be in a fileset where the dataflow is enabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> refreshPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
