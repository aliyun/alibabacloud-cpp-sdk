// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGERESPONSEBODYDATAJOBRESOURCEUSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGERESPONSEBODYDATAJOBRESOURCEUSAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetJobResourceUsageResponseBodyDataJobResourceUsageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResourceUsageResponseBodyDataJobResourceUsageList& obj) { 
      DARABONBA_PTR_TO_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_TO_JSON(memoryUsage, memoryUsage_);
      DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResourceUsageResponseBodyDataJobResourceUsageList& obj) { 
      DARABONBA_PTR_FROM_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_FROM_JSON(memoryUsage, memoryUsage_);
      DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
    };
    GetJobResourceUsageResponseBodyDataJobResourceUsageList() = default ;
    GetJobResourceUsageResponseBodyDataJobResourceUsageList(const GetJobResourceUsageResponseBodyDataJobResourceUsageList &) = default ;
    GetJobResourceUsageResponseBodyDataJobResourceUsageList(GetJobResourceUsageResponseBodyDataJobResourceUsageList &&) = default ;
    GetJobResourceUsageResponseBodyDataJobResourceUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResourceUsageResponseBodyDataJobResourceUsageList() = default ;
    GetJobResourceUsageResponseBodyDataJobResourceUsageList& operator=(const GetJobResourceUsageResponseBodyDataJobResourceUsageList &) = default ;
    GetJobResourceUsageResponseBodyDataJobResourceUsageList& operator=(GetJobResourceUsageResponseBodyDataJobResourceUsageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cuUsage_ == nullptr
        && return this->date_ == nullptr && return this->jobOwner_ == nullptr && return this->memoryUsage_ == nullptr && return this->quotaNickname_ == nullptr; };
    // cuUsage Field Functions 
    bool hasCuUsage() const { return this->cuUsage_ != nullptr;};
    void deleteCuUsage() { this->cuUsage_ = nullptr;};
    inline int64_t cuUsage() const { DARABONBA_PTR_GET_DEFAULT(cuUsage_, 0L) };
    inline GetJobResourceUsageResponseBodyDataJobResourceUsageList& setCuUsage(int64_t cuUsage) { DARABONBA_PTR_SET_VALUE(cuUsage_, cuUsage) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetJobResourceUsageResponseBodyDataJobResourceUsageList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string jobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline GetJobResourceUsageResponseBodyDataJobResourceUsageList& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline int64_t memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
    inline GetJobResourceUsageResponseBodyDataJobResourceUsageList& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline GetJobResourceUsageResponseBodyDataJobResourceUsageList& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


  protected:
    // The total number of used compute units (CUs).
    std::shared_ptr<int64_t> cuUsage_ = nullptr;
    // The start date of the query in the format of yyyy-MM-dd.
    std::shared_ptr<string> date_ = nullptr;
    // The job executor.
    std::shared_ptr<string> jobOwner_ = nullptr;
    // The total memory usage.
    std::shared_ptr<int64_t> memoryUsage_ = nullptr;
    // The quota nickname.
    std::shared_ptr<string> quotaNickname_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
