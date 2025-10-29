// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFORMATION_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFORMATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class SearchInformation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInformation& obj) { 
      DARABONBA_PTR_TO_JSON(searchTime, searchTime_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInformation& obj) { 
      DARABONBA_PTR_FROM_JSON(searchTime, searchTime_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    SearchInformation() = default ;
    SearchInformation(const SearchInformation &) = default ;
    SearchInformation(SearchInformation &&) = default ;
    SearchInformation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInformation() = default ;
    SearchInformation& operator=(const SearchInformation &) = default ;
    SearchInformation& operator=(SearchInformation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchTime_ == nullptr
        && return this->total_ == nullptr; };
    // searchTime Field Functions 
    bool hasSearchTime() const { return this->searchTime_ != nullptr;};
    void deleteSearchTime() { this->searchTime_ = nullptr;};
    inline int64_t searchTime() const { DARABONBA_PTR_GET_DEFAULT(searchTime_, 0L) };
    inline SearchInformation& setSearchTime(int64_t searchTime) { DARABONBA_PTR_SET_VALUE(searchTime_, searchTime) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchInformation& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> searchTime_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
