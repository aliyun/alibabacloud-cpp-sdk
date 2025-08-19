// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEEVENTITEM_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEEVENTITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceEventItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class InstanceEventItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceEventItem& obj) { 
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceEventItem& obj) { 
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    InstanceEventItem() = default ;
    InstanceEventItem(const InstanceEventItem &) = default ;
    InstanceEventItem(InstanceEventItem &&) = default ;
    InstanceEventItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceEventItem() = default ;
    InstanceEventItem& operator=(const InstanceEventItem &) = default ;
    InstanceEventItem& operator=(InstanceEventItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->children_ != nullptr
        && this->level_ != nullptr && this->message_ != nullptr && this->time_ != nullptr && this->type_ != nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<InstanceEventItem> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<InstanceEventItem>) };
    inline vector<InstanceEventItem> children() { DARABONBA_PTR_GET(children_, vector<InstanceEventItem>) };
    inline InstanceEventItem& setChildren(const vector<InstanceEventItem> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline InstanceEventItem& setChildren(vector<InstanceEventItem> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline InstanceEventItem& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstanceEventItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline InstanceEventItem& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InstanceEventItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<InstanceEventItem>> children_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
