// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    EstimatedPriceQueryRequest() = default ;
    EstimatedPriceQueryRequest(const EstimatedPriceQueryRequest &) = default ;
    EstimatedPriceQueryRequest(EstimatedPriceQueryRequest &&) = default ;
    EstimatedPriceQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryRequest() = default ;
    EstimatedPriceQueryRequest& operator=(const EstimatedPriceQueryRequest &) = default ;
    EstimatedPriceQueryRequest& operator=(EstimatedPriceQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->category_ != nullptr && this->depCity_ != nullptr && this->endTime_ != nullptr && this->itineraryId_ != nullptr && this->startTime_ != nullptr
        && this->subCorpId_ != nullptr && this->userId_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline EstimatedPriceQueryRequest& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline EstimatedPriceQueryRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline EstimatedPriceQueryRequest& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline EstimatedPriceQueryRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline EstimatedPriceQueryRequest& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline EstimatedPriceQueryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline EstimatedPriceQueryRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline EstimatedPriceQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
