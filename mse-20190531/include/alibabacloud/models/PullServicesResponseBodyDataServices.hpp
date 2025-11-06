// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLSERVICESRESPONSEBODYDATASERVICES_HPP_
#define ALIBABACLOUD_MODELS_PULLSERVICESRESPONSEBODYDATASERVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class PullServicesResponseBodyDataServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullServicesResponseBodyDataServices& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SaeAppId, saeAppId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceIdList, sourceIdList_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PullServicesResponseBodyDataServices& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SaeAppId, saeAppId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceIdList, sourceIdList_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    PullServicesResponseBodyDataServices() = default ;
    PullServicesResponseBodyDataServices(const PullServicesResponseBodyDataServices &) = default ;
    PullServicesResponseBodyDataServices(PullServicesResponseBodyDataServices &&) = default ;
    PullServicesResponseBodyDataServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullServicesResponseBodyDataServices() = default ;
    PullServicesResponseBodyDataServices& operator=(const PullServicesResponseBodyDataServices &) = default ;
    PullServicesResponseBodyDataServices& operator=(PullServicesResponseBodyDataServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->saeAppId_ == nullptr && return this->sourceId_ == nullptr && return this->sourceIdList_ == nullptr
        && return this->sourceType_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline PullServicesResponseBodyDataServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PullServicesResponseBodyDataServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PullServicesResponseBodyDataServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // saeAppId Field Functions 
    bool hasSaeAppId() const { return this->saeAppId_ != nullptr;};
    void deleteSaeAppId() { this->saeAppId_ = nullptr;};
    inline string saeAppId() const { DARABONBA_PTR_GET_DEFAULT(saeAppId_, "") };
    inline PullServicesResponseBodyDataServices& setSaeAppId(string saeAppId) { DARABONBA_PTR_SET_VALUE(saeAppId_, saeAppId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline PullServicesResponseBodyDataServices& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceIdList Field Functions 
    bool hasSourceIdList() const { return this->sourceIdList_ != nullptr;};
    void deleteSourceIdList() { this->sourceIdList_ = nullptr;};
    inline const vector<int64_t> & sourceIdList() const { DARABONBA_PTR_GET_CONST(sourceIdList_, vector<int64_t>) };
    inline vector<int64_t> sourceIdList() { DARABONBA_PTR_GET(sourceIdList_, vector<int64_t>) };
    inline PullServicesResponseBodyDataServices& setSourceIdList(const vector<int64_t> & sourceIdList) { DARABONBA_PTR_SET_VALUE(sourceIdList_, sourceIdList) };
    inline PullServicesResponseBodyDataServices& setSourceIdList(vector<int64_t> && sourceIdList) { DARABONBA_PTR_SET_RVALUE(sourceIdList_, sourceIdList) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline PullServicesResponseBodyDataServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The name of the group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> saeAppId_ = nullptr;
    // The ID of the service source.
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<vector<int64_t>> sourceIdList_ = nullptr;
    // The type of the service source.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
