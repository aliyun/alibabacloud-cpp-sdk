// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetKnowledgeDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(internalKnowledgeId, internalKnowledgeId_);
      DARABONBA_PTR_TO_JSON(knowledgeName, knowledgeName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(internalKnowledgeId, internalKnowledgeId_);
      DARABONBA_PTR_FROM_JSON(knowledgeName, knowledgeName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetKnowledgeDataResponseBodyData() = default ;
    GetKnowledgeDataResponseBodyData(const GetKnowledgeDataResponseBodyData &) = default ;
    GetKnowledgeDataResponseBodyData(GetKnowledgeDataResponseBodyData &&) = default ;
    GetKnowledgeDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeDataResponseBodyData() = default ;
    GetKnowledgeDataResponseBodyData& operator=(const GetKnowledgeDataResponseBodyData &) = default ;
    GetKnowledgeDataResponseBodyData& operator=(GetKnowledgeDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->internalKnowledgeId_ != nullptr && this->knowledgeName_ != nullptr && this->message_ != nullptr && this->status_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetKnowledgeDataResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // internalKnowledgeId Field Functions 
    bool hasInternalKnowledgeId() const { return this->internalKnowledgeId_ != nullptr;};
    void deleteInternalKnowledgeId() { this->internalKnowledgeId_ = nullptr;};
    inline string internalKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(internalKnowledgeId_, "") };
    inline GetKnowledgeDataResponseBodyData& setInternalKnowledgeId(string internalKnowledgeId) { DARABONBA_PTR_SET_VALUE(internalKnowledgeId_, internalKnowledgeId) };


    // knowledgeName Field Functions 
    bool hasKnowledgeName() const { return this->knowledgeName_ != nullptr;};
    void deleteKnowledgeName() { this->knowledgeName_ = nullptr;};
    inline string knowledgeName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeName_, "") };
    inline GetKnowledgeDataResponseBodyData& setKnowledgeName(string knowledgeName) { DARABONBA_PTR_SET_VALUE(knowledgeName_, knowledgeName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKnowledgeDataResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetKnowledgeDataResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> internalKnowledgeId_ = nullptr;
    std::shared_ptr<string> knowledgeName_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
