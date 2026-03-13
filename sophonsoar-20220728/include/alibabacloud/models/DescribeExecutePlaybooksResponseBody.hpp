// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeExecutePlaybooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookMetrics, playbookMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookMetrics, playbookMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExecutePlaybooksResponseBody() = default ;
    DescribeExecutePlaybooksResponseBody(const DescribeExecutePlaybooksResponseBody &) = default ;
    DescribeExecutePlaybooksResponseBody(DescribeExecutePlaybooksResponseBody &&) = default ;
    DescribeExecutePlaybooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutePlaybooksResponseBody() = default ;
    DescribeExecutePlaybooksResponseBody& operator=(const DescribeExecutePlaybooksResponseBody &) = default ;
    DescribeExecutePlaybooksResponseBody& operator=(DescribeExecutePlaybooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlaybookMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlaybookMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(ParamConfig, paramConfig_);
        DARABONBA_PTR_TO_JSON(ParamType, paramType_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, PlaybookMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(ParamConfig, paramConfig_);
        DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      PlaybookMetrics() = default ;
      PlaybookMetrics(const PlaybookMetrics &) = default ;
      PlaybookMetrics(PlaybookMetrics &&) = default ;
      PlaybookMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlaybookMetrics() = default ;
      PlaybookMetrics& operator=(const PlaybookMetrics &) = default ;
      PlaybookMetrics& operator=(PlaybookMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->paramConfig_ == nullptr && this->paramType_ == nullptr && this->uuid_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PlaybookMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline PlaybookMetrics& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // paramConfig Field Functions 
      bool hasParamConfig() const { return this->paramConfig_ != nullptr;};
      void deleteParamConfig() { this->paramConfig_ = nullptr;};
      inline string getParamConfig() const { DARABONBA_PTR_GET_DEFAULT(paramConfig_, "") };
      inline PlaybookMetrics& setParamConfig(string paramConfig) { DARABONBA_PTR_SET_VALUE(paramConfig_, paramConfig) };


      // paramType Field Functions 
      bool hasParamType() const { return this->paramType_ != nullptr;};
      void deleteParamType() { this->paramType_ = nullptr;};
      inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
      inline PlaybookMetrics& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline PlaybookMetrics& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The playbook description.
      shared_ptr<string> description_ {};
      // The playbook name.
      shared_ptr<string> displayName_ {};
      // The configuration of the input parameter. The value is a JSON array.
      // 
      // >  For more information, see [DescribePlaybookInputOutput](~~DescribePlaybookInputOutput~~).
      shared_ptr<string> paramConfig_ {};
      // The input parameter type of the playbook.
      // 
      // *   **template-ip**
      // *   **template-file**
      // *   **template-process**
      // *   **custom**
      shared_ptr<string> paramType_ {};
      // The playbook UUID.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->playbookMetrics_ == nullptr
        && this->requestId_ == nullptr; };
    // playbookMetrics Field Functions 
    bool hasPlaybookMetrics() const { return this->playbookMetrics_ != nullptr;};
    void deletePlaybookMetrics() { this->playbookMetrics_ = nullptr;};
    inline const vector<DescribeExecutePlaybooksResponseBody::PlaybookMetrics> & getPlaybookMetrics() const { DARABONBA_PTR_GET_CONST(playbookMetrics_, vector<DescribeExecutePlaybooksResponseBody::PlaybookMetrics>) };
    inline vector<DescribeExecutePlaybooksResponseBody::PlaybookMetrics> getPlaybookMetrics() { DARABONBA_PTR_GET(playbookMetrics_, vector<DescribeExecutePlaybooksResponseBody::PlaybookMetrics>) };
    inline DescribeExecutePlaybooksResponseBody& setPlaybookMetrics(const vector<DescribeExecutePlaybooksResponseBody::PlaybookMetrics> & playbookMetrics) { DARABONBA_PTR_SET_VALUE(playbookMetrics_, playbookMetrics) };
    inline DescribeExecutePlaybooksResponseBody& setPlaybookMetrics(vector<DescribeExecutePlaybooksResponseBody::PlaybookMetrics> && playbookMetrics) { DARABONBA_PTR_SET_RVALUE(playbookMetrics_, playbookMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExecutePlaybooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The playbook.
    shared_ptr<vector<DescribeExecutePlaybooksResponseBody::PlaybookMetrics>> playbookMetrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
