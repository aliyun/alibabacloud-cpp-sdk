// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFACTORYBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFACTORYBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetAccountFactoryBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountFactoryBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountFactoryBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetAccountFactoryBaselineResponseBody() = default ;
    GetAccountFactoryBaselineResponseBody(const GetAccountFactoryBaselineResponseBody &) = default ;
    GetAccountFactoryBaselineResponseBody(GetAccountFactoryBaselineResponseBody &&) = default ;
    GetAccountFactoryBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountFactoryBaselineResponseBody() = default ;
    GetAccountFactoryBaselineResponseBody& operator=(const GetAccountFactoryBaselineResponseBody &) = default ;
    GetAccountFactoryBaselineResponseBody& operator=(GetAccountFactoryBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaselineItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineItems& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BaselineItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BaselineItems() = default ;
      BaselineItems(const BaselineItems &) = default ;
      BaselineItems(BaselineItems &&) = default ;
      BaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineItems() = default ;
      BaselineItems& operator=(const BaselineItems &) = default ;
      BaselineItems& operator=(BaselineItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline BaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The configuration of the baseline item.
      // 
      // The value is a JSON string.
      shared_ptr<string> config_ {};
      // The name of the baseline item.
      shared_ptr<string> name_ {};
      // The version of the baseline item.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineItems_ == nullptr && this->baselineName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->requestId_ == nullptr
        && this->type_ == nullptr && this->updateTime_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline GetAccountFactoryBaselineResponseBody& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<GetAccountFactoryBaselineResponseBody::BaselineItems> & getBaselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<GetAccountFactoryBaselineResponseBody::BaselineItems>) };
    inline vector<GetAccountFactoryBaselineResponseBody::BaselineItems> getBaselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<GetAccountFactoryBaselineResponseBody::BaselineItems>) };
    inline GetAccountFactoryBaselineResponseBody& setBaselineItems(const vector<GetAccountFactoryBaselineResponseBody::BaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline GetAccountFactoryBaselineResponseBody& setBaselineItems(vector<GetAccountFactoryBaselineResponseBody::BaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline GetAccountFactoryBaselineResponseBody& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAccountFactoryBaselineResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAccountFactoryBaselineResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountFactoryBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAccountFactoryBaselineResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAccountFactoryBaselineResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The baseline ID.
    shared_ptr<string> baselineId_ {};
    // The baseline items.
    shared_ptr<vector<GetAccountFactoryBaselineResponseBody::BaselineItems>> baselineItems_ {};
    // The name of the baseline.
    shared_ptr<string> baselineName_ {};
    // The time when the baseline was created.
    shared_ptr<string> createTime_ {};
    // The description of the baseline.
    shared_ptr<string> description_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The type of the baseline. Valid values:
    // 
    // *   System: default baseline.
    // *   Custom: custom baseline.
    shared_ptr<string> type_ {};
    // The time when the baseline was updated.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
