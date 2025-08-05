// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTRUNOPTIONSBUSINESSOPTION_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTRUNOPTIONSBUSINESSOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestRunOptionsBusinessOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestRunOptionsBusinessOption& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessMode, businessMode_);
      DARABONBA_PTR_TO_JSON(MaxCapacityUnitCount, maxCapacityUnitCount_);
      DARABONBA_PTR_TO_JSON(MinCapacityUnitCount, minCapacityUnitCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestRunOptionsBusinessOption& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessMode, businessMode_);
      DARABONBA_PTR_FROM_JSON(MaxCapacityUnitCount, maxCapacityUnitCount_);
      DARABONBA_PTR_FROM_JSON(MinCapacityUnitCount, minCapacityUnitCount_);
    };
    CreateEventStreamingRequestRunOptionsBusinessOption() = default ;
    CreateEventStreamingRequestRunOptionsBusinessOption(const CreateEventStreamingRequestRunOptionsBusinessOption &) = default ;
    CreateEventStreamingRequestRunOptionsBusinessOption(CreateEventStreamingRequestRunOptionsBusinessOption &&) = default ;
    CreateEventStreamingRequestRunOptionsBusinessOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestRunOptionsBusinessOption() = default ;
    CreateEventStreamingRequestRunOptionsBusinessOption& operator=(const CreateEventStreamingRequestRunOptionsBusinessOption &) = default ;
    CreateEventStreamingRequestRunOptionsBusinessOption& operator=(CreateEventStreamingRequestRunOptionsBusinessOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessMode_ != nullptr
        && this->maxCapacityUnitCount_ != nullptr && this->minCapacityUnitCount_ != nullptr; };
    // businessMode Field Functions 
    bool hasBusinessMode() const { return this->businessMode_ != nullptr;};
    void deleteBusinessMode() { this->businessMode_ = nullptr;};
    inline string businessMode() const { DARABONBA_PTR_GET_DEFAULT(businessMode_, "") };
    inline CreateEventStreamingRequestRunOptionsBusinessOption& setBusinessMode(string businessMode) { DARABONBA_PTR_SET_VALUE(businessMode_, businessMode) };


    // maxCapacityUnitCount Field Functions 
    bool hasMaxCapacityUnitCount() const { return this->maxCapacityUnitCount_ != nullptr;};
    void deleteMaxCapacityUnitCount() { this->maxCapacityUnitCount_ = nullptr;};
    inline int64_t maxCapacityUnitCount() const { DARABONBA_PTR_GET_DEFAULT(maxCapacityUnitCount_, 0L) };
    inline CreateEventStreamingRequestRunOptionsBusinessOption& setMaxCapacityUnitCount(int64_t maxCapacityUnitCount) { DARABONBA_PTR_SET_VALUE(maxCapacityUnitCount_, maxCapacityUnitCount) };


    // minCapacityUnitCount Field Functions 
    bool hasMinCapacityUnitCount() const { return this->minCapacityUnitCount_ != nullptr;};
    void deleteMinCapacityUnitCount() { this->minCapacityUnitCount_ = nullptr;};
    inline int64_t minCapacityUnitCount() const { DARABONBA_PTR_GET_DEFAULT(minCapacityUnitCount_, 0L) };
    inline CreateEventStreamingRequestRunOptionsBusinessOption& setMinCapacityUnitCount(int64_t minCapacityUnitCount) { DARABONBA_PTR_SET_VALUE(minCapacityUnitCount_, minCapacityUnitCount) };


  protected:
    std::shared_ptr<string> businessMode_ = nullptr;
    std::shared_ptr<int64_t> maxCapacityUnitCount_ = nullptr;
    std::shared_ptr<int64_t> minCapacityUnitCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
