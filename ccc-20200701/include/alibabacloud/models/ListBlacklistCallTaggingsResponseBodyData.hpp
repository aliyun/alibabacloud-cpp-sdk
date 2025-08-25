// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBLACKLISTCALLTAGGINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBLACKLISTCALLTAGGINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListBlacklistCallTaggingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBlacklistCallTaggingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Blacklisted, blacklisted_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, ListBlacklistCallTaggingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Blacklisted, blacklisted_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    ListBlacklistCallTaggingsResponseBodyData() = default ;
    ListBlacklistCallTaggingsResponseBodyData(const ListBlacklistCallTaggingsResponseBodyData &) = default ;
    ListBlacklistCallTaggingsResponseBodyData(ListBlacklistCallTaggingsResponseBodyData &&) = default ;
    ListBlacklistCallTaggingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBlacklistCallTaggingsResponseBodyData() = default ;
    ListBlacklistCallTaggingsResponseBodyData& operator=(const ListBlacklistCallTaggingsResponseBodyData &) = default ;
    ListBlacklistCallTaggingsResponseBodyData& operator=(ListBlacklistCallTaggingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blacklisted_ != nullptr
        && this->jobId_ != nullptr && this->number_ != nullptr; };
    // blacklisted Field Functions 
    bool hasBlacklisted() const { return this->blacklisted_ != nullptr;};
    void deleteBlacklisted() { this->blacklisted_ = nullptr;};
    inline bool blacklisted() const { DARABONBA_PTR_GET_DEFAULT(blacklisted_, false) };
    inline ListBlacklistCallTaggingsResponseBodyData& setBlacklisted(bool blacklisted) { DARABONBA_PTR_SET_VALUE(blacklisted_, blacklisted) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListBlacklistCallTaggingsResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListBlacklistCallTaggingsResponseBodyData& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    std::shared_ptr<bool> blacklisted_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
