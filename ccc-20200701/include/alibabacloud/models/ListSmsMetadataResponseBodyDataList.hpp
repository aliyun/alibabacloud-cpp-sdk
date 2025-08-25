// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMSMETADATARESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMSMETADATARESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSmsMetadataResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmsMetadataResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SmsMetadataId, smsMetadataId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmsMetadataResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SmsMetadataId, smsMetadataId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    ListSmsMetadataResponseBodyDataList() = default ;
    ListSmsMetadataResponseBodyDataList(const ListSmsMetadataResponseBodyDataList &) = default ;
    ListSmsMetadataResponseBodyDataList(ListSmsMetadataResponseBodyDataList &&) = default ;
    ListSmsMetadataResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmsMetadataResponseBodyDataList() = default ;
    ListSmsMetadataResponseBodyDataList& operator=(const ListSmsMetadataResponseBodyDataList &) = default ;
    ListSmsMetadataResponseBodyDataList& operator=(ListSmsMetadataResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->description_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr && this->scenario_ != nullptr && this->signName_ != nullptr
        && this->smsMetadataId_ != nullptr && this->templateCode_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline int64_t aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, 0L) };
    inline ListSmsMetadataResponseBodyDataList& setAliyunUid(int64_t aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSmsMetadataResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSmsMetadataResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSmsMetadataResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ListSmsMetadataResponseBodyDataList& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline ListSmsMetadataResponseBodyDataList& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // smsMetadataId Field Functions 
    bool hasSmsMetadataId() const { return this->smsMetadataId_ != nullptr;};
    void deleteSmsMetadataId() { this->smsMetadataId_ = nullptr;};
    inline string smsMetadataId() const { DARABONBA_PTR_GET_DEFAULT(smsMetadataId_, "") };
    inline ListSmsMetadataResponseBodyDataList& setSmsMetadataId(string smsMetadataId) { DARABONBA_PTR_SET_VALUE(smsMetadataId_, smsMetadataId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline ListSmsMetadataResponseBodyDataList& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    std::shared_ptr<int64_t> aliyunUid_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
    std::shared_ptr<string> signName_ = nullptr;
    std::shared_ptr<string> smsMetadataId_ = nullptr;
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
