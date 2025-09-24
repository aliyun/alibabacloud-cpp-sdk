// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDefaultWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    GetDefaultWorkspaceRequest() = default ;
    GetDefaultWorkspaceRequest(const GetDefaultWorkspaceRequest &) = default ;
    GetDefaultWorkspaceRequest(GetDefaultWorkspaceRequest &&) = default ;
    GetDefaultWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultWorkspaceRequest() = default ;
    GetDefaultWorkspaceRequest& operator=(const GetDefaultWorkspaceRequest &) = default ;
    GetDefaultWorkspaceRequest& operator=(GetDefaultWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->verbose_ != nullptr; };
    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline GetDefaultWorkspaceRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    // Specifies whether to show the details of the default workspace. The details include the conditions of the workspace in different phases. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> verbose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
