// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstanceStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
    };
    ListInstanceStatisticsRequest() = default ;
    ListInstanceStatisticsRequest(const ListInstanceStatisticsRequest &) = default ;
    ListInstanceStatisticsRequest(ListInstanceStatisticsRequest &&) = default ;
    ListInstanceStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceStatisticsRequest() = default ;
    ListInstanceStatisticsRequest& operator=(const ListInstanceStatisticsRequest &) = default ;
    ListInstanceStatisticsRequest& operator=(ListInstanceStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workspaceIds_ != nullptr; };
    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline string workspaceIds() const { DARABONBA_PTR_GET_DEFAULT(workspaceIds_, "") };
    inline ListInstanceStatisticsRequest& setWorkspaceIds(string workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> workspaceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
