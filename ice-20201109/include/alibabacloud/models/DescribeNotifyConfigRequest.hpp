// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeNotifyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotifyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
    };
    DescribeNotifyConfigRequest() = default ;
    DescribeNotifyConfigRequest(const DescribeNotifyConfigRequest &) = default ;
    DescribeNotifyConfigRequest(DescribeNotifyConfigRequest &&) = default ;
    DescribeNotifyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotifyConfigRequest() = default ;
    DescribeNotifyConfigRequest& operator=(const DescribeNotifyConfigRequest &) = default ;
    DescribeNotifyConfigRequest& operator=(DescribeNotifyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAgentId_ != nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline DescribeNotifyConfigRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
