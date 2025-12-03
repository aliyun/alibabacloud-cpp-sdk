// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMESTIMATERESPONSEBODYWORKITEMTIMEESTIMATE_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMESTIMATERESPONSEBODYWORKITEMTIMEESTIMATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkitemEstimateResponseBodyWorkitemTimeEstimate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(recordUser, recordUser_);
      DARABONBA_PTR_TO_JSON(spentTime, spentTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(recordUser, recordUser_);
      DARABONBA_PTR_FROM_JSON(spentTime, spentTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    ListWorkitemEstimateResponseBodyWorkitemTimeEstimate() = default ;
    ListWorkitemEstimateResponseBodyWorkitemTimeEstimate(const ListWorkitemEstimateResponseBodyWorkitemTimeEstimate &) = default ;
    ListWorkitemEstimateResponseBodyWorkitemTimeEstimate(ListWorkitemEstimateResponseBodyWorkitemTimeEstimate &&) = default ;
    ListWorkitemEstimateResponseBodyWorkitemTimeEstimate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkitemEstimateResponseBodyWorkitemTimeEstimate() = default ;
    ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& operator=(const ListWorkitemEstimateResponseBodyWorkitemTimeEstimate &) = default ;
    ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& operator=(ListWorkitemEstimateResponseBodyWorkitemTimeEstimate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtEnd_ == nullptr && return this->gmtModified_ == nullptr && return this->gmtStart_ == nullptr && return this->identifier_ == nullptr
        && return this->recordUser_ == nullptr && return this->spentTime_ == nullptr && return this->type_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline int64_t gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline int64_t gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // recordUser Field Functions 
    bool hasRecordUser() const { return this->recordUser_ != nullptr;};
    void deleteRecordUser() { this->recordUser_ = nullptr;};
    inline const Models::ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser & recordUser() const { DARABONBA_PTR_GET_CONST(recordUser_, Models::ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser) };
    inline Models::ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser recordUser() { DARABONBA_PTR_GET(recordUser_, Models::ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser) };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setRecordUser(const Models::ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser & recordUser) { DARABONBA_PTR_SET_VALUE(recordUser_, recordUser) };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setRecordUser(Models::ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser && recordUser) { DARABONBA_PTR_SET_RVALUE(recordUser_, recordUser) };


    // spentTime Field Functions 
    bool hasSpentTime() const { return this->spentTime_ != nullptr;};
    void deleteSpentTime() { this->spentTime_ = nullptr;};
    inline float spentTime() const { DARABONBA_PTR_GET_DEFAULT(spentTime_, 0.0) };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setSpentTime(float spentTime) { DARABONBA_PTR_SET_VALUE(spentTime_, spentTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline ListWorkitemEstimateResponseBodyWorkitemTimeEstimate& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtEnd_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> gmtStart_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<Models::ListWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser> recordUser_ = nullptr;
    std::shared_ptr<float> spentTime_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
