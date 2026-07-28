// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetAgentTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(JsonStr, jsonStr_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(JsonStr, jsonStr_);
    };
    GetAgentTaskResultRequest() = default ;
    GetAgentTaskResultRequest(const GetAgentTaskResultRequest &) = default ;
    GetAgentTaskResultRequest(GetAgentTaskResultRequest &&) = default ;
    GetAgentTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentTaskResultRequest() = default ;
    GetAgentTaskResultRequest& operator=(const GetAgentTaskResultRequest &) = default ;
    GetAgentTaskResultRequest& operator=(GetAgentTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseMeAgentId_ == nullptr
        && this->jsonStr_ == nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline string getBaseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, "") };
    inline GetAgentTaskResultRequest& setBaseMeAgentId(string baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // jsonStr Field Functions 
    bool hasJsonStr() const { return this->jsonStr_ != nullptr;};
    void deleteJsonStr() { this->jsonStr_ = nullptr;};
    inline string getJsonStr() const { DARABONBA_PTR_GET_DEFAULT(jsonStr_, "") };
    inline GetAgentTaskResultRequest& setJsonStr(string jsonStr) { DARABONBA_PTR_SET_VALUE(jsonStr_, jsonStr) };


  protected:
    // The ID of the business space.
    shared_ptr<string> baseMeAgentId_ {};
    // The complete JSON string. For more information, see the following details.
    shared_ptr<string> jsonStr_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
