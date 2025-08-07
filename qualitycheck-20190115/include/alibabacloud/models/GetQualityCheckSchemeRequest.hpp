// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKSCHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKSCHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetQualityCheckSchemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckSchemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(jsonStr, jsonStr_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckSchemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(jsonStr, jsonStr_);
    };
    GetQualityCheckSchemeRequest() = default ;
    GetQualityCheckSchemeRequest(const GetQualityCheckSchemeRequest &) = default ;
    GetQualityCheckSchemeRequest(GetQualityCheckSchemeRequest &&) = default ;
    GetQualityCheckSchemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckSchemeRequest() = default ;
    GetQualityCheckSchemeRequest& operator=(const GetQualityCheckSchemeRequest &) = default ;
    GetQualityCheckSchemeRequest& operator=(GetQualityCheckSchemeRequest &&) = default ;
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
    inline GetQualityCheckSchemeRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // jsonStr Field Functions 
    bool hasJsonStr() const { return this->jsonStr_ != nullptr;};
    void deleteJsonStr() { this->jsonStr_ = nullptr;};
    inline string jsonStr() const { DARABONBA_PTR_GET_DEFAULT(jsonStr_, "") };
    inline GetQualityCheckSchemeRequest& setJsonStr(string jsonStr) { DARABONBA_PTR_SET_VALUE(jsonStr_, jsonStr) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    std::shared_ptr<string> jsonStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
