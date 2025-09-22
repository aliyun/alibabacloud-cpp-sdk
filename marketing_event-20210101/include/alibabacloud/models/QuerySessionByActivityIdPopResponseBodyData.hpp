// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONBYACTIVITYIDPOPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONBYACTIVITYIDPOPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QuerySessionByActivityIdPopResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionByActivityIdPopResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
      DARABONBA_PTR_TO_JSON(EndDateTime, endDateTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameEn, nameEn_);
      DARABONBA_PTR_TO_JSON(StartDateTime, startDateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionByActivityIdPopResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
      DARABONBA_PTR_FROM_JSON(EndDateTime, endDateTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameEn, nameEn_);
      DARABONBA_PTR_FROM_JSON(StartDateTime, startDateTime_);
    };
    QuerySessionByActivityIdPopResponseBodyData() = default ;
    QuerySessionByActivityIdPopResponseBodyData(const QuerySessionByActivityIdPopResponseBodyData &) = default ;
    QuerySessionByActivityIdPopResponseBodyData(QuerySessionByActivityIdPopResponseBodyData &&) = default ;
    QuerySessionByActivityIdPopResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionByActivityIdPopResponseBodyData() = default ;
    QuerySessionByActivityIdPopResponseBodyData& operator=(const QuerySessionByActivityIdPopResponseBodyData &) = default ;
    QuerySessionByActivityIdPopResponseBodyData& operator=(QuerySessionByActivityIdPopResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->descriptionEn_ != nullptr && this->endDateTime_ != nullptr && this->id_ != nullptr && this->location_ != nullptr && this->name_ != nullptr
        && this->nameEn_ != nullptr && this->startDateTime_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QuerySessionByActivityIdPopResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionEn Field Functions 
    bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
    void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
    inline string descriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
    inline QuerySessionByActivityIdPopResponseBodyData& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


    // endDateTime Field Functions 
    bool hasEndDateTime() const { return this->endDateTime_ != nullptr;};
    void deleteEndDateTime() { this->endDateTime_ = nullptr;};
    inline string endDateTime() const { DARABONBA_PTR_GET_DEFAULT(endDateTime_, "") };
    inline QuerySessionByActivityIdPopResponseBodyData& setEndDateTime(string endDateTime) { DARABONBA_PTR_SET_VALUE(endDateTime_, endDateTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QuerySessionByActivityIdPopResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline QuerySessionByActivityIdPopResponseBodyData& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QuerySessionByActivityIdPopResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameEn Field Functions 
    bool hasNameEn() const { return this->nameEn_ != nullptr;};
    void deleteNameEn() { this->nameEn_ = nullptr;};
    inline string nameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
    inline QuerySessionByActivityIdPopResponseBodyData& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


    // startDateTime Field Functions 
    bool hasStartDateTime() const { return this->startDateTime_ != nullptr;};
    void deleteStartDateTime() { this->startDateTime_ = nullptr;};
    inline string startDateTime() const { DARABONBA_PTR_GET_DEFAULT(startDateTime_, "") };
    inline QuerySessionByActivityIdPopResponseBodyData& setStartDateTime(string startDateTime) { DARABONBA_PTR_SET_VALUE(startDateTime_, startDateTime) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> descriptionEn_ = nullptr;
    std::shared_ptr<string> endDateTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameEn_ = nullptr;
    std::shared_ptr<string> startDateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
