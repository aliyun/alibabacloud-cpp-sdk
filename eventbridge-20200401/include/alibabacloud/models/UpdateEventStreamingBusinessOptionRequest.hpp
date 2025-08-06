// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGBUSINESSOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGBUSINESSOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingBusinessOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingBusinessOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessMode, businessMode_);
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_TO_JSON(MaxCapacityUnitCount, maxCapacityUnitCount_);
      DARABONBA_PTR_TO_JSON(MinCapacityUnitCount, minCapacityUnitCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingBusinessOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessMode, businessMode_);
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_FROM_JSON(MaxCapacityUnitCount, maxCapacityUnitCount_);
      DARABONBA_PTR_FROM_JSON(MinCapacityUnitCount, minCapacityUnitCount_);
    };
    UpdateEventStreamingBusinessOptionRequest() = default ;
    UpdateEventStreamingBusinessOptionRequest(const UpdateEventStreamingBusinessOptionRequest &) = default ;
    UpdateEventStreamingBusinessOptionRequest(UpdateEventStreamingBusinessOptionRequest &&) = default ;
    UpdateEventStreamingBusinessOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingBusinessOptionRequest() = default ;
    UpdateEventStreamingBusinessOptionRequest& operator=(const UpdateEventStreamingBusinessOptionRequest &) = default ;
    UpdateEventStreamingBusinessOptionRequest& operator=(UpdateEventStreamingBusinessOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessMode_ != nullptr
        && this->eventStreamingName_ != nullptr && this->maxCapacityUnitCount_ != nullptr && this->minCapacityUnitCount_ != nullptr; };
    // businessMode Field Functions 
    bool hasBusinessMode() const { return this->businessMode_ != nullptr;};
    void deleteBusinessMode() { this->businessMode_ = nullptr;};
    inline string businessMode() const { DARABONBA_PTR_GET_DEFAULT(businessMode_, "") };
    inline UpdateEventStreamingBusinessOptionRequest& setBusinessMode(string businessMode) { DARABONBA_PTR_SET_VALUE(businessMode_, businessMode) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string eventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline UpdateEventStreamingBusinessOptionRequest& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // maxCapacityUnitCount Field Functions 
    bool hasMaxCapacityUnitCount() const { return this->maxCapacityUnitCount_ != nullptr;};
    void deleteMaxCapacityUnitCount() { this->maxCapacityUnitCount_ = nullptr;};
    inline int64_t maxCapacityUnitCount() const { DARABONBA_PTR_GET_DEFAULT(maxCapacityUnitCount_, 0L) };
    inline UpdateEventStreamingBusinessOptionRequest& setMaxCapacityUnitCount(int64_t maxCapacityUnitCount) { DARABONBA_PTR_SET_VALUE(maxCapacityUnitCount_, maxCapacityUnitCount) };


    // minCapacityUnitCount Field Functions 
    bool hasMinCapacityUnitCount() const { return this->minCapacityUnitCount_ != nullptr;};
    void deleteMinCapacityUnitCount() { this->minCapacityUnitCount_ = nullptr;};
    inline int64_t minCapacityUnitCount() const { DARABONBA_PTR_GET_DEFAULT(minCapacityUnitCount_, 0L) };
    inline UpdateEventStreamingBusinessOptionRequest& setMinCapacityUnitCount(int64_t minCapacityUnitCount) { DARABONBA_PTR_SET_VALUE(minCapacityUnitCount_, minCapacityUnitCount) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> businessMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventStreamingName_ = nullptr;
    std::shared_ptr<int64_t> maxCapacityUnitCount_ = nullptr;
    std::shared_ptr<int64_t> minCapacityUnitCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
