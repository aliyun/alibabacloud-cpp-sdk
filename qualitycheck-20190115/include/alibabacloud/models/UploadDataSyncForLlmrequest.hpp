// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(JsonStr, jsonStr_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(JsonStr, jsonStr_);
    };
    UploadDataSyncForLLMRequest() = default ;
    UploadDataSyncForLLMRequest(const UploadDataSyncForLLMRequest &) = default ;
    UploadDataSyncForLLMRequest(UploadDataSyncForLLMRequest &&) = default ;
    UploadDataSyncForLLMRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMRequest() = default ;
    UploadDataSyncForLLMRequest& operator=(const UploadDataSyncForLLMRequest &) = default ;
    UploadDataSyncForLLMRequest& operator=(UploadDataSyncForLLMRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseMeAgentId_ != nullptr
        && this->jsonStr_ != nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline UploadDataSyncForLLMRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // jsonStr Field Functions 
    bool hasJsonStr() const { return this->jsonStr_ != nullptr;};
    void deleteJsonStr() { this->jsonStr_ = nullptr;};
    inline string jsonStr() const { DARABONBA_PTR_GET_DEFAULT(jsonStr_, "") };
    inline UploadDataSyncForLLMRequest& setJsonStr(string jsonStr) { DARABONBA_PTR_SET_VALUE(jsonStr_, jsonStr) };


  protected:
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jsonStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
