// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDIALOGHUBNLUINFO_HPP_
#define ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDIALOGHUBNLUINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NluResponseBodyMessagesDialogHubNluInfoGlobalDictList.hpp>
#include <alibabacloud/models/NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluResponseBodyMessagesDialogHubNluInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluResponseBodyMessagesDialogHubNluInfo& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalDictList, globalDictList_);
      DARABONBA_PTR_TO_JSON(GlobalSensitiveWordList, globalSensitiveWordList_);
    };
    friend void from_json(const Darabonba::Json& j, NluResponseBodyMessagesDialogHubNluInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalDictList, globalDictList_);
      DARABONBA_PTR_FROM_JSON(GlobalSensitiveWordList, globalSensitiveWordList_);
    };
    NluResponseBodyMessagesDialogHubNluInfo() = default ;
    NluResponseBodyMessagesDialogHubNluInfo(const NluResponseBodyMessagesDialogHubNluInfo &) = default ;
    NluResponseBodyMessagesDialogHubNluInfo(NluResponseBodyMessagesDialogHubNluInfo &&) = default ;
    NluResponseBodyMessagesDialogHubNluInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluResponseBodyMessagesDialogHubNluInfo() = default ;
    NluResponseBodyMessagesDialogHubNluInfo& operator=(const NluResponseBodyMessagesDialogHubNluInfo &) = default ;
    NluResponseBodyMessagesDialogHubNluInfo& operator=(NluResponseBodyMessagesDialogHubNluInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalDictList_ == nullptr
        && return this->globalSensitiveWordList_ == nullptr; };
    // globalDictList Field Functions 
    bool hasGlobalDictList() const { return this->globalDictList_ != nullptr;};
    void deleteGlobalDictList() { this->globalDictList_ = nullptr;};
    inline const vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalDictList> & globalDictList() const { DARABONBA_PTR_GET_CONST(globalDictList_, vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalDictList>) };
    inline vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalDictList> globalDictList() { DARABONBA_PTR_GET(globalDictList_, vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalDictList>) };
    inline NluResponseBodyMessagesDialogHubNluInfo& setGlobalDictList(const vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalDictList> & globalDictList) { DARABONBA_PTR_SET_VALUE(globalDictList_, globalDictList) };
    inline NluResponseBodyMessagesDialogHubNluInfo& setGlobalDictList(vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalDictList> && globalDictList) { DARABONBA_PTR_SET_RVALUE(globalDictList_, globalDictList) };


    // globalSensitiveWordList Field Functions 
    bool hasGlobalSensitiveWordList() const { return this->globalSensitiveWordList_ != nullptr;};
    void deleteGlobalSensitiveWordList() { this->globalSensitiveWordList_ = nullptr;};
    inline const vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList> & globalSensitiveWordList() const { DARABONBA_PTR_GET_CONST(globalSensitiveWordList_, vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList>) };
    inline vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList> globalSensitiveWordList() { DARABONBA_PTR_GET(globalSensitiveWordList_, vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList>) };
    inline NluResponseBodyMessagesDialogHubNluInfo& setGlobalSensitiveWordList(const vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList> & globalSensitiveWordList) { DARABONBA_PTR_SET_VALUE(globalSensitiveWordList_, globalSensitiveWordList) };
    inline NluResponseBodyMessagesDialogHubNluInfo& setGlobalSensitiveWordList(vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList> && globalSensitiveWordList) { DARABONBA_PTR_SET_RVALUE(globalSensitiveWordList_, globalSensitiveWordList) };


  protected:
    std::shared_ptr<vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalDictList>> globalDictList_ = nullptr;
    std::shared_ptr<vector<Models::NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList>> globalSensitiveWordList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
