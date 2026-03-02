// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCVERSION_HPP_
#define ALIBABACLOUD_MODELS_PBCVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcVersion& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(companyName, companyName_);
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isWatched, isWatched_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewId, reviewId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(stepStatus, stepStatus_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, PbcVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(companyName, companyName_);
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isWatched, isWatched_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewId, reviewId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(stepStatus, stepStatus_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
    };
    PbcVersion() = default ;
    PbcVersion(const PbcVersion &) = default ;
    PbcVersion(PbcVersion &&) = default ;
    PbcVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcVersion() = default ;
    PbcVersion& operator=(const PbcVersion &) = default ;
    PbcVersion& operator=(PbcVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->companyName_ == nullptr && this->developerId_ == nullptr && this->id_ == nullptr && this->isWatched_ == nullptr && this->name_ == nullptr
        && this->pbcId_ == nullptr && this->requestId_ == nullptr && this->reviewId_ == nullptr && this->status_ == nullptr && this->stepStatus_ == nullptr
        && this->version_ == nullptr && this->visibilityLevel_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcVersion& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline PbcVersion& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline int64_t getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, 0L) };
    inline PbcVersion& setDeveloperId(int64_t developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcVersion& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isWatched Field Functions 
    bool hasIsWatched() const { return this->isWatched_ != nullptr;};
    void deleteIsWatched() { this->isWatched_ = nullptr;};
    inline bool getIsWatched() const { DARABONBA_PTR_GET_DEFAULT(isWatched_, false) };
    inline PbcVersion& setIsWatched(bool isWatched) { DARABONBA_PTR_SET_VALUE(isWatched_, isWatched) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PbcVersion& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PbcVersion& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcVersion& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewId Field Functions 
    bool hasReviewId() const { return this->reviewId_ != nullptr;};
    void deleteReviewId() { this->reviewId_ = nullptr;};
    inline int64_t getReviewId() const { DARABONBA_PTR_GET_DEFAULT(reviewId_, 0L) };
    inline PbcVersion& setReviewId(int64_t reviewId) { DARABONBA_PTR_SET_VALUE(reviewId_, reviewId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PbcVersion& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stepStatus Field Functions 
    bool hasStepStatus() const { return this->stepStatus_ != nullptr;};
    void deleteStepStatus() { this->stepStatus_ = nullptr;};
    inline string getStepStatus() const { DARABONBA_PTR_GET_DEFAULT(stepStatus_, "") };
    inline PbcVersion& setStepStatus(string stepStatus) { DARABONBA_PTR_SET_VALUE(stepStatus_, stepStatus) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline PbcVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline string getVisibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, "") };
    inline PbcVersion& setVisibilityLevel(string visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> companyName_ {};
    shared_ptr<int64_t> developerId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> isWatched_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> reviewId_ {};
    shared_ptr<string> status_ {};
    // This parameter is required.
    shared_ptr<string> stepStatus_ {};
    // This parameter is required.
    shared_ptr<string> version_ {};
    // This parameter is required.
    shared_ptr<string> visibilityLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
