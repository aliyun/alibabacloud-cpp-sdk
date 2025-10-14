// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODYRESPONSECALENDARS_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODYRESPONSECALENDARS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListCalendarsResponseBodyResponseCalendars : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsResponseBodyResponseCalendars& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ETag, ETag_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Privilege, privilege_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsResponseBodyResponseCalendars& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ETag, ETag_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCalendarsResponseBodyResponseCalendars() = default ;
    ListCalendarsResponseBodyResponseCalendars(const ListCalendarsResponseBodyResponseCalendars &) = default ;
    ListCalendarsResponseBodyResponseCalendars(ListCalendarsResponseBodyResponseCalendars &&) = default ;
    ListCalendarsResponseBodyResponseCalendars(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsResponseBodyResponseCalendars() = default ;
    ListCalendarsResponseBodyResponseCalendars& operator=(const ListCalendarsResponseBodyResponseCalendars &) = default ;
    ListCalendarsResponseBodyResponseCalendars& operator=(ListCalendarsResponseBodyResponseCalendars &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->ETag_ == nullptr && return this->id_ == nullptr && return this->privilege_ == nullptr && return this->summary_ == nullptr && return this->timeZone_ == nullptr
        && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCalendarsResponseBodyResponseCalendars& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ETag Field Functions 
    bool hasETag() const { return this->ETag_ != nullptr;};
    void deleteETag() { this->ETag_ = nullptr;};
    inline string ETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
    inline ListCalendarsResponseBodyResponseCalendars& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListCalendarsResponseBodyResponseCalendars& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // privilege Field Functions 
    bool hasPrivilege() const { return this->privilege_ != nullptr;};
    void deletePrivilege() { this->privilege_ = nullptr;};
    inline string privilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
    inline ListCalendarsResponseBodyResponseCalendars& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListCalendarsResponseBodyResponseCalendars& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ListCalendarsResponseBodyResponseCalendars& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCalendarsResponseBodyResponseCalendars& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ETag_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> privilege_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
