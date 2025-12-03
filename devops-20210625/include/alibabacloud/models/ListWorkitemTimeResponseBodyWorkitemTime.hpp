// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMTIMERESPONSEBODYWORKITEMTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMTIMERESPONSEBODYWORKITEMTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkitemTimeResponseBodyWorkitemTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkitemTimeResponseBodyWorkitemTime& obj) { 
      DARABONBA_PTR_TO_JSON(actualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(recordUser, recordUser_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkitemTimeResponseBodyWorkitemTime& obj) { 
      DARABONBA_PTR_FROM_JSON(actualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(recordUser, recordUser_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    ListWorkitemTimeResponseBodyWorkitemTime() = default ;
    ListWorkitemTimeResponseBodyWorkitemTime(const ListWorkitemTimeResponseBodyWorkitemTime &) = default ;
    ListWorkitemTimeResponseBodyWorkitemTime(ListWorkitemTimeResponseBodyWorkitemTime &&) = default ;
    ListWorkitemTimeResponseBodyWorkitemTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkitemTimeResponseBodyWorkitemTime() = default ;
    ListWorkitemTimeResponseBodyWorkitemTime& operator=(const ListWorkitemTimeResponseBodyWorkitemTime &) = default ;
    ListWorkitemTimeResponseBodyWorkitemTime& operator=(ListWorkitemTimeResponseBodyWorkitemTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtEnd_ == nullptr && return this->gmtModified_ == nullptr && return this->gmtStart_ == nullptr
        && return this->identifier_ == nullptr && return this->recordUser_ == nullptr && return this->type_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline float actualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0.0) };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setActualTime(float actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline int64_t gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline int64_t gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // recordUser Field Functions 
    bool hasRecordUser() const { return this->recordUser_ != nullptr;};
    void deleteRecordUser() { this->recordUser_ = nullptr;};
    inline string recordUser() const { DARABONBA_PTR_GET_DEFAULT(recordUser_, "") };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setRecordUser(string recordUser) { DARABONBA_PTR_SET_VALUE(recordUser_, recordUser) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline ListWorkitemTimeResponseBodyWorkitemTime& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    std::shared_ptr<float> actualTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtEnd_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> gmtStart_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> recordUser_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
