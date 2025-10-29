// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDSEARCHINFORMATION_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDSEARCHINFORMATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedSearchInformation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedSearchInformation& obj) { 
      DARABONBA_PTR_TO_JSON(searchTime, searchTime_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedSearchInformation& obj) { 
      DARABONBA_PTR_FROM_JSON(searchTime, searchTime_);
    };
    UnifiedSearchInformation() = default ;
    UnifiedSearchInformation(const UnifiedSearchInformation &) = default ;
    UnifiedSearchInformation(UnifiedSearchInformation &&) = default ;
    UnifiedSearchInformation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedSearchInformation() = default ;
    UnifiedSearchInformation& operator=(const UnifiedSearchInformation &) = default ;
    UnifiedSearchInformation& operator=(UnifiedSearchInformation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchTime_ == nullptr; };
    // searchTime Field Functions 
    bool hasSearchTime() const { return this->searchTime_ != nullptr;};
    void deleteSearchTime() { this->searchTime_ = nullptr;};
    inline int64_t searchTime() const { DARABONBA_PTR_GET_DEFAULT(searchTime_, 0L) };
    inline UnifiedSearchInformation& setSearchTime(int64_t searchTime) { DARABONBA_PTR_SET_VALUE(searchTime_, searchTime) };


  protected:
    std::shared_ptr<int64_t> searchTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
