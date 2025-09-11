// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAFLOWREQUESTAUTOREFRESHS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAFLOWREQUESTAUTOREFRESHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateDataFlowRequestAutoRefreshs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataFlowRequestAutoRefreshs& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshPath, refreshPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataFlowRequestAutoRefreshs& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshPath, refreshPath_);
    };
    CreateDataFlowRequestAutoRefreshs() = default ;
    CreateDataFlowRequestAutoRefreshs(const CreateDataFlowRequestAutoRefreshs &) = default ;
    CreateDataFlowRequestAutoRefreshs(CreateDataFlowRequestAutoRefreshs &&) = default ;
    CreateDataFlowRequestAutoRefreshs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataFlowRequestAutoRefreshs() = default ;
    CreateDataFlowRequestAutoRefreshs& operator=(const CreateDataFlowRequestAutoRefreshs &) = default ;
    CreateDataFlowRequestAutoRefreshs& operator=(CreateDataFlowRequestAutoRefreshs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->refreshPath_ != nullptr; };
    // refreshPath Field Functions 
    bool hasRefreshPath() const { return this->refreshPath_ != nullptr;};
    void deleteRefreshPath() { this->refreshPath_ = nullptr;};
    inline string refreshPath() const { DARABONBA_PTR_GET_DEFAULT(refreshPath_, "") };
    inline CreateDataFlowRequestAutoRefreshs& setRefreshPath(string refreshPath) { DARABONBA_PTR_SET_VALUE(refreshPath_, refreshPath) };


  protected:
    // The automatic update directory. CPFS registers the data update event in the source storage, and automatically checks whether the source data in the directory is updated and imports the updated data.
    // 
    // This parameter is empty by default. Updated data in the source storage is not automatically imported into the CPFS file system. You must import the updated data by running a manual task.
    // 
    // Limits:
    // 
    // *   The directory must be 2 to 1,024 characters in length.
    // *   The directory must be encoded in UTF-8.
    // *   The directory must start and end with a forward slash (/).
    // *   The directory must be an existing directory in the CPFS file system and must be in a fileset where the data flow is enabled.
    std::shared_ptr<string> refreshPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
