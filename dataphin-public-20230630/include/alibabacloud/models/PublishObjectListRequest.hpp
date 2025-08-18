// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublishObjectListRequestPublishCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishObjectListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishObjectListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PublishCommand, publishCommand_);
    };
    friend void from_json(const Darabonba::Json& j, PublishObjectListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PublishCommand, publishCommand_);
    };
    PublishObjectListRequest() = default ;
    PublishObjectListRequest(const PublishObjectListRequest &) = default ;
    PublishObjectListRequest(PublishObjectListRequest &&) = default ;
    PublishObjectListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishObjectListRequest() = default ;
    PublishObjectListRequest& operator=(const PublishObjectListRequest &) = default ;
    PublishObjectListRequest& operator=(PublishObjectListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->publishCommand_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PublishObjectListRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // publishCommand Field Functions 
    bool hasPublishCommand() const { return this->publishCommand_ != nullptr;};
    void deletePublishCommand() { this->publishCommand_ = nullptr;};
    inline const PublishObjectListRequestPublishCommand & publishCommand() const { DARABONBA_PTR_GET_CONST(publishCommand_, PublishObjectListRequestPublishCommand) };
    inline PublishObjectListRequestPublishCommand publishCommand() { DARABONBA_PTR_GET(publishCommand_, PublishObjectListRequestPublishCommand) };
    inline PublishObjectListRequest& setPublishCommand(const PublishObjectListRequestPublishCommand & publishCommand) { DARABONBA_PTR_SET_VALUE(publishCommand_, publishCommand) };
    inline PublishObjectListRequest& setPublishCommand(PublishObjectListRequestPublishCommand && publishCommand) { DARABONBA_PTR_SET_RVALUE(publishCommand_, publishCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PublishObjectListRequestPublishCommand> publishCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
