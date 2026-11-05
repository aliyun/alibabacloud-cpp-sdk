// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class GetSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
    };
    GetSkillRequest() = default ;
    GetSkillRequest(const GetSkillRequest &) = default ;
    GetSkillRequest(GetSkillRequest &&) = default ;
    GetSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillRequest() = default ;
    GetSkillRequest& operator=(const GetSkillRequest &) = default ;
    GetSkillRequest& operator=(GetSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->network_ == nullptr && this->skillVersion_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSkillRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline GetSkillRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline int64_t getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, 0L) };
    inline GetSkillRequest& setSkillVersion(int64_t skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


  protected:
    // The name of the skill.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The network type of the download URL. Valid values: public and internal. If omitted, no download URL is generated.
    shared_ptr<string> network_ {};
    // Specifies the published history version number to query. If omitted, the current main record of the skill is returned.
    shared_ptr<int64_t> skillVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
