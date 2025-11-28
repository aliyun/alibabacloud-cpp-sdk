// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRIVACYRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRIVACYRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllPrivacyRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPrivacyRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPrivacyRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
    };
    ListAllPrivacyRuleResponseBodyData() = default ;
    ListAllPrivacyRuleResponseBodyData(const ListAllPrivacyRuleResponseBodyData &) = default ;
    ListAllPrivacyRuleResponseBodyData(ListAllPrivacyRuleResponseBodyData &&) = default ;
    ListAllPrivacyRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPrivacyRuleResponseBodyData() = default ;
    ListAllPrivacyRuleResponseBodyData& operator=(const ListAllPrivacyRuleResponseBodyData &) = default ;
    ListAllPrivacyRuleResponseBodyData& operator=(ListAllPrivacyRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->privacyRuleId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllPrivacyRuleResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline ListAllPrivacyRuleResponseBodyData& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> privacyRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
