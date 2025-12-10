// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTSSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTSSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentsStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentsStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentsStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
    };
    GetExperimentsStatisticsRequest() = default ;
    GetExperimentsStatisticsRequest(const GetExperimentsStatisticsRequest &) = default ;
    GetExperimentsStatisticsRequest(GetExperimentsStatisticsRequest &&) = default ;
    GetExperimentsStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentsStatisticsRequest() = default ;
    GetExperimentsStatisticsRequest& operator=(const GetExperimentsStatisticsRequest &) = default ;
    GetExperimentsStatisticsRequest& operator=(GetExperimentsStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->workspaceIds_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetExperimentsStatisticsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline string workspaceIds() const { DARABONBA_PTR_GET_DEFAULT(workspaceIds_, "") };
    inline GetExperimentsStatisticsRequest& setWorkspaceIds(string workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
