// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIRECTNOTIFYCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_DIRECTNOTIFYCHANNEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DirectNotifyChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DirectNotifyChannel& obj) { 
      DARABONBA_PTR_TO_JSON(identifiers, identifiers_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DirectNotifyChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(identifiers, identifiers_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DirectNotifyChannel() = default ;
    DirectNotifyChannel(const DirectNotifyChannel &) = default ;
    DirectNotifyChannel(DirectNotifyChannel &&) = default ;
    DirectNotifyChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DirectNotifyChannel() = default ;
    DirectNotifyChannel& operator=(const DirectNotifyChannel &) = default ;
    DirectNotifyChannel& operator=(DirectNotifyChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifiers_ == nullptr
        && this->type_ == nullptr; };
    // identifiers Field Functions 
    bool hasIdentifiers() const { return this->identifiers_ != nullptr;};
    void deleteIdentifiers() { this->identifiers_ = nullptr;};
    inline const vector<string> & getIdentifiers() const { DARABONBA_PTR_GET_CONST(identifiers_, vector<string>) };
    inline vector<string> getIdentifiers() { DARABONBA_PTR_GET(identifiers_, vector<string>) };
    inline DirectNotifyChannel& setIdentifiers(const vector<string> & identifiers) { DARABONBA_PTR_SET_VALUE(identifiers_, identifiers) };
    inline DirectNotifyChannel& setIdentifiers(vector<string> && identifiers) { DARABONBA_PTR_SET_RVALUE(identifiers_, identifiers) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DirectNotifyChannel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 通知对象标识列表
    // 
    // This parameter is required.
    shared_ptr<vector<string>> identifiers_ {};
    // 通知渠道类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
