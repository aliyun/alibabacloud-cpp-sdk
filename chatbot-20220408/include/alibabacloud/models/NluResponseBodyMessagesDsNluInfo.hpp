// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDSNLUINFO_HPP_
#define ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDSNLUINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NluResponseBodyMessagesDsNluInfoEntityList.hpp>
#include <alibabacloud/models/NluResponseBodyMessagesDsNluInfoIntentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluResponseBodyMessagesDsNluInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluResponseBodyMessagesDsNluInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EntityList, entityList_);
      DARABONBA_PTR_TO_JSON(IntentList, intentList_);
    };
    friend void from_json(const Darabonba::Json& j, NluResponseBodyMessagesDsNluInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
      DARABONBA_PTR_FROM_JSON(IntentList, intentList_);
    };
    NluResponseBodyMessagesDsNluInfo() = default ;
    NluResponseBodyMessagesDsNluInfo(const NluResponseBodyMessagesDsNluInfo &) = default ;
    NluResponseBodyMessagesDsNluInfo(NluResponseBodyMessagesDsNluInfo &&) = default ;
    NluResponseBodyMessagesDsNluInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluResponseBodyMessagesDsNluInfo() = default ;
    NluResponseBodyMessagesDsNluInfo& operator=(const NluResponseBodyMessagesDsNluInfo &) = default ;
    NluResponseBodyMessagesDsNluInfo& operator=(NluResponseBodyMessagesDsNluInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityList_ == nullptr
        && return this->intentList_ == nullptr; };
    // entityList Field Functions 
    bool hasEntityList() const { return this->entityList_ != nullptr;};
    void deleteEntityList() { this->entityList_ = nullptr;};
    inline const vector<Models::NluResponseBodyMessagesDsNluInfoEntityList> & entityList() const { DARABONBA_PTR_GET_CONST(entityList_, vector<Models::NluResponseBodyMessagesDsNluInfoEntityList>) };
    inline vector<Models::NluResponseBodyMessagesDsNluInfoEntityList> entityList() { DARABONBA_PTR_GET(entityList_, vector<Models::NluResponseBodyMessagesDsNluInfoEntityList>) };
    inline NluResponseBodyMessagesDsNluInfo& setEntityList(const vector<Models::NluResponseBodyMessagesDsNluInfoEntityList> & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
    inline NluResponseBodyMessagesDsNluInfo& setEntityList(vector<Models::NluResponseBodyMessagesDsNluInfoEntityList> && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


    // intentList Field Functions 
    bool hasIntentList() const { return this->intentList_ != nullptr;};
    void deleteIntentList() { this->intentList_ = nullptr;};
    inline const vector<Models::NluResponseBodyMessagesDsNluInfoIntentList> & intentList() const { DARABONBA_PTR_GET_CONST(intentList_, vector<Models::NluResponseBodyMessagesDsNluInfoIntentList>) };
    inline vector<Models::NluResponseBodyMessagesDsNluInfoIntentList> intentList() { DARABONBA_PTR_GET(intentList_, vector<Models::NluResponseBodyMessagesDsNluInfoIntentList>) };
    inline NluResponseBodyMessagesDsNluInfo& setIntentList(const vector<Models::NluResponseBodyMessagesDsNluInfoIntentList> & intentList) { DARABONBA_PTR_SET_VALUE(intentList_, intentList) };
    inline NluResponseBodyMessagesDsNluInfo& setIntentList(vector<Models::NluResponseBodyMessagesDsNluInfoIntentList> && intentList) { DARABONBA_PTR_SET_RVALUE(intentList_, intentList) };


  protected:
    std::shared_ptr<vector<Models::NluResponseBodyMessagesDsNluInfoEntityList>> entityList_ = nullptr;
    std::shared_ptr<vector<Models::NluResponseBodyMessagesDsNluInfoIntentList>> intentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
