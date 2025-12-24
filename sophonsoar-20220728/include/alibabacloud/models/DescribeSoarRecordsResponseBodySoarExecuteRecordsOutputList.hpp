// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSRESPONSEBODYSOAREXECUTERECORDSOUTPUTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSRESPONSEBODYSOAREXECUTERECORDSOUTPUTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList() = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList(const DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList &) = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList(DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList &&) = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList() = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList& operator=(const DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList &) = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList& operator=(DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionUuid_ == nullptr
        && return this->content_ == nullptr && return this->nodeName_ == nullptr; };
    // actionUuid Field Functions 
    bool hasActionUuid() const { return this->actionUuid_ != nullptr;};
    void deleteActionUuid() { this->actionUuid_ = nullptr;};
    inline string actionUuid() const { DARABONBA_PTR_GET_DEFAULT(actionUuid_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList& setActionUuid(string actionUuid) { DARABONBA_PTR_SET_VALUE(actionUuid_, actionUuid) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> actionUuid_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
