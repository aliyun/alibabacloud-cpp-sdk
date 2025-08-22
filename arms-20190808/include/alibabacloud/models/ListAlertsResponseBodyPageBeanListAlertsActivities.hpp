// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEANLISTALERTSACTIVITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEANLISTALERTSACTIVITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertsResponseBodyPageBeanListAlertsActivities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBodyPageBeanListAlertsActivities& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBodyPageBeanListAlertsActivities& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAlertsResponseBodyPageBeanListAlertsActivities() = default ;
    ListAlertsResponseBodyPageBeanListAlertsActivities(const ListAlertsResponseBodyPageBeanListAlertsActivities &) = default ;
    ListAlertsResponseBodyPageBeanListAlertsActivities(ListAlertsResponseBodyPageBeanListAlertsActivities &&) = default ;
    ListAlertsResponseBodyPageBeanListAlertsActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBodyPageBeanListAlertsActivities() = default ;
    ListAlertsResponseBodyPageBeanListAlertsActivities& operator=(const ListAlertsResponseBodyPageBeanListAlertsActivities &) = default ;
    ListAlertsResponseBodyPageBeanListAlertsActivities& operator=(ListAlertsResponseBodyPageBeanListAlertsActivities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->description_ != nullptr && this->handlerName_ != nullptr && this->time_ != nullptr && this->type_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsActivities& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsActivities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // handlerName Field Functions 
    bool hasHandlerName() const { return this->handlerName_ != nullptr;};
    void deleteHandlerName() { this->handlerName_ = nullptr;};
    inline string handlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsActivities& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsActivities& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline ListAlertsResponseBodyPageBeanListAlertsActivities& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The content of the alert notification.
    std::shared_ptr<string> content_ = nullptr;
    // The description of the activity.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the handler.
    std::shared_ptr<string> handlerName_ = nullptr;
    // The operation time of the activity.
    std::shared_ptr<string> time_ = nullptr;
    // The type of the activity. Valid values:
    // 
    // *   1: The alert is claimed.
    // *   2: The alert is disclaimed.
    // *   3: A comment is added for the alert.
    // *   4: The alert is disabled.
    // *   5: An alert notification is sent.
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
