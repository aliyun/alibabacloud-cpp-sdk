// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNAGENTVERSIONITEM_HPP_
#define ALIBABACLOUD_MODELS_FUNAGENTVERSIONITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class FunagentVersionItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunagentVersionItem& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(publishContent, publishContent_);
      DARABONBA_PTR_TO_JSON(publishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, FunagentVersionItem& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(publishContent, publishContent_);
      DARABONBA_PTR_FROM_JSON(publishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    FunagentVersionItem() = default ;
    FunagentVersionItem(const FunagentVersionItem &) = default ;
    FunagentVersionItem(FunagentVersionItem &&) = default ;
    FunagentVersionItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunagentVersionItem() = default ;
    FunagentVersionItem& operator=(const FunagentVersionItem &) = default ;
    FunagentVersionItem& operator=(FunagentVersionItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->publishContent_ == nullptr && this->publishTime_ == nullptr && this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline FunagentVersionItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // publishContent Field Functions 
    bool hasPublishContent() const { return this->publishContent_ != nullptr;};
    void deletePublishContent() { this->publishContent_ = nullptr;};
    inline const vector<string> & getPublishContent() const { DARABONBA_PTR_GET_CONST(publishContent_, vector<string>) };
    inline vector<string> getPublishContent() { DARABONBA_PTR_GET(publishContent_, vector<string>) };
    inline FunagentVersionItem& setPublishContent(const vector<string> & publishContent) { DARABONBA_PTR_SET_VALUE(publishContent_, publishContent) };
    inline FunagentVersionItem& setPublishContent(vector<string> && publishContent) { DARABONBA_PTR_SET_RVALUE(publishContent_, publishContent) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline FunagentVersionItem& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline FunagentVersionItem& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> description_ {};
    // 多条更新说明
    shared_ptr<vector<string>> publishContent_ {};
    // 日期或 ISO 8601 字符串
    shared_ptr<string> publishTime_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
