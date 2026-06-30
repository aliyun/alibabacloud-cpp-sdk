// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ExecuteAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(JsonStr, jsonStr_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(JsonStr, jsonStr_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    ExecuteAgentRequest() = default ;
    ExecuteAgentRequest(const ExecuteAgentRequest &) = default ;
    ExecuteAgentRequest(ExecuteAgentRequest &&) = default ;
    ExecuteAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAgentRequest() = default ;
    ExecuteAgentRequest& operator=(const ExecuteAgentRequest &) = default ;
    ExecuteAgentRequest& operator=(ExecuteAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseMeAgentId_ == nullptr
        && this->jsonStr_ == nullptr && this->stream_ == nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t getBaseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline ExecuteAgentRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // jsonStr Field Functions 
    bool hasJsonStr() const { return this->jsonStr_ != nullptr;};
    void deleteJsonStr() { this->jsonStr_ = nullptr;};
    inline string getJsonStr() const { DARABONBA_PTR_GET_DEFAULT(jsonStr_, "") };
    inline ExecuteAgentRequest& setJsonStr(string jsonStr) { DARABONBA_PTR_SET_VALUE(jsonStr_, jsonStr) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline ExecuteAgentRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // The ID of the business workspace.
    shared_ptr<int64_t> baseMeAgentId_ {};
    // The complete JSON string. For more information, see the following detailed description.
    shared_ptr<string> jsonStr_ {};
    // Specifies whether to enable Server-Sent Events (SSE) responses. Set to true to enable SSE responses. Default value: false.
    shared_ptr<bool> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
