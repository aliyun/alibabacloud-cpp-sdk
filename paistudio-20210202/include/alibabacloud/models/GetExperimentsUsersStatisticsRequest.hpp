// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTSUSERSSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTSUSERSSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentsUsersStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentsUsersStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentsUsersStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetExperimentsUsersStatisticsRequest() = default ;
    GetExperimentsUsersStatisticsRequest(const GetExperimentsUsersStatisticsRequest &) = default ;
    GetExperimentsUsersStatisticsRequest(GetExperimentsUsersStatisticsRequest &&) = default ;
    GetExperimentsUsersStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentsUsersStatisticsRequest() = default ;
    GetExperimentsUsersStatisticsRequest& operator=(const GetExperimentsUsersStatisticsRequest &) = default ;
    GetExperimentsUsersStatisticsRequest& operator=(GetExperimentsUsersStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetExperimentsUsersStatisticsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetExperimentsUsersStatisticsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
