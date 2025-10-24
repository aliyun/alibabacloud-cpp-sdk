// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODYDATASTORAGEPROJECTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODYDATASTORAGEPROJECTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(longTermStorage, longTermStorage_);
      DARABONBA_PTR_TO_JSON(longTermStorageUnit, longTermStorageUnit_);
      DARABONBA_PTR_TO_JSON(lowFreqStorage, lowFreqStorage_);
      DARABONBA_PTR_TO_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(rate, rate_);
      DARABONBA_PTR_TO_JSON(recycleBinStorage, recycleBinStorage_);
      DARABONBA_PTR_TO_JSON(recycleBinStorageUnit, recycleBinStorageUnit_);
      DARABONBA_PTR_TO_JSON(standardStorage, standardStorage_);
      DARABONBA_PTR_TO_JSON(standardStorageUnit, standardStorageUnit_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(totalStorage, totalStorage_);
      DARABONBA_PTR_TO_JSON(totalStorageUnit, totalStorageUnit_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(longTermStorage, longTermStorage_);
      DARABONBA_PTR_FROM_JSON(longTermStorageUnit, longTermStorageUnit_);
      DARABONBA_PTR_FROM_JSON(lowFreqStorage, lowFreqStorage_);
      DARABONBA_PTR_FROM_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(rate, rate_);
      DARABONBA_PTR_FROM_JSON(recycleBinStorage, recycleBinStorage_);
      DARABONBA_PTR_FROM_JSON(recycleBinStorageUnit, recycleBinStorageUnit_);
      DARABONBA_PTR_FROM_JSON(standardStorage, standardStorage_);
      DARABONBA_PTR_FROM_JSON(standardStorageUnit, standardStorageUnit_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(totalStorage, totalStorage_);
      DARABONBA_PTR_FROM_JSON(totalStorageUnit, totalStorageUnit_);
    };
    ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList() = default ;
    ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList(const ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList &) = default ;
    ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList(ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList &&) = default ;
    ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList() = default ;
    ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& operator=(const ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList &) = default ;
    ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& operator=(ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->longTermStorage_ == nullptr && return this->longTermStorageUnit_ == nullptr && return this->lowFreqStorage_ == nullptr && return this->lowFreqStorageUnit_ == nullptr && return this->projectName_ == nullptr
        && return this->rate_ == nullptr && return this->recycleBinStorage_ == nullptr && return this->recycleBinStorageUnit_ == nullptr && return this->standardStorage_ == nullptr && return this->standardStorageUnit_ == nullptr
        && return this->timestamp_ == nullptr && return this->totalStorage_ == nullptr && return this->totalStorageUnit_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // longTermStorage Field Functions 
    bool hasLongTermStorage() const { return this->longTermStorage_ != nullptr;};
    void deleteLongTermStorage() { this->longTermStorage_ = nullptr;};
    inline double longTermStorage() const { DARABONBA_PTR_GET_DEFAULT(longTermStorage_, 0.0) };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setLongTermStorage(double longTermStorage) { DARABONBA_PTR_SET_VALUE(longTermStorage_, longTermStorage) };


    // longTermStorageUnit Field Functions 
    bool hasLongTermStorageUnit() const { return this->longTermStorageUnit_ != nullptr;};
    void deleteLongTermStorageUnit() { this->longTermStorageUnit_ = nullptr;};
    inline string longTermStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(longTermStorageUnit_, "") };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setLongTermStorageUnit(string longTermStorageUnit) { DARABONBA_PTR_SET_VALUE(longTermStorageUnit_, longTermStorageUnit) };


    // lowFreqStorage Field Functions 
    bool hasLowFreqStorage() const { return this->lowFreqStorage_ != nullptr;};
    void deleteLowFreqStorage() { this->lowFreqStorage_ = nullptr;};
    inline double lowFreqStorage() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorage_, 0.0) };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setLowFreqStorage(double lowFreqStorage) { DARABONBA_PTR_SET_VALUE(lowFreqStorage_, lowFreqStorage) };


    // lowFreqStorageUnit Field Functions 
    bool hasLowFreqStorageUnit() const { return this->lowFreqStorageUnit_ != nullptr;};
    void deleteLowFreqStorageUnit() { this->lowFreqStorageUnit_ = nullptr;};
    inline string lowFreqStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorageUnit_, "") };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setLowFreqStorageUnit(string lowFreqStorageUnit) { DARABONBA_PTR_SET_VALUE(lowFreqStorageUnit_, lowFreqStorageUnit) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // recycleBinStorage Field Functions 
    bool hasRecycleBinStorage() const { return this->recycleBinStorage_ != nullptr;};
    void deleteRecycleBinStorage() { this->recycleBinStorage_ = nullptr;};
    inline double recycleBinStorage() const { DARABONBA_PTR_GET_DEFAULT(recycleBinStorage_, 0.0) };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setRecycleBinStorage(double recycleBinStorage) { DARABONBA_PTR_SET_VALUE(recycleBinStorage_, recycleBinStorage) };


    // recycleBinStorageUnit Field Functions 
    bool hasRecycleBinStorageUnit() const { return this->recycleBinStorageUnit_ != nullptr;};
    void deleteRecycleBinStorageUnit() { this->recycleBinStorageUnit_ = nullptr;};
    inline string recycleBinStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(recycleBinStorageUnit_, "") };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setRecycleBinStorageUnit(string recycleBinStorageUnit) { DARABONBA_PTR_SET_VALUE(recycleBinStorageUnit_, recycleBinStorageUnit) };


    // standardStorage Field Functions 
    bool hasStandardStorage() const { return this->standardStorage_ != nullptr;};
    void deleteStandardStorage() { this->standardStorage_ = nullptr;};
    inline double standardStorage() const { DARABONBA_PTR_GET_DEFAULT(standardStorage_, 0.0) };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setStandardStorage(double standardStorage) { DARABONBA_PTR_SET_VALUE(standardStorage_, standardStorage) };


    // standardStorageUnit Field Functions 
    bool hasStandardStorageUnit() const { return this->standardStorageUnit_ != nullptr;};
    void deleteStandardStorageUnit() { this->standardStorageUnit_ = nullptr;};
    inline string standardStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(standardStorageUnit_, "") };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setStandardStorageUnit(string standardStorageUnit) { DARABONBA_PTR_SET_VALUE(standardStorageUnit_, standardStorageUnit) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalStorage Field Functions 
    bool hasTotalStorage() const { return this->totalStorage_ != nullptr;};
    void deleteTotalStorage() { this->totalStorage_ = nullptr;};
    inline double totalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalStorage_, 0.0) };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setTotalStorage(double totalStorage) { DARABONBA_PTR_SET_VALUE(totalStorage_, totalStorage) };


    // totalStorageUnit Field Functions 
    bool hasTotalStorageUnit() const { return this->totalStorageUnit_ != nullptr;};
    void deleteTotalStorageUnit() { this->totalStorageUnit_ = nullptr;};
    inline string totalStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(totalStorageUnit_, "") };
    inline ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList& setTotalStorageUnit(string totalStorageUnit) { DARABONBA_PTR_SET_VALUE(totalStorageUnit_, totalStorageUnit) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<double> longTermStorage_ = nullptr;
    std::shared_ptr<string> longTermStorageUnit_ = nullptr;
    std::shared_ptr<double> lowFreqStorage_ = nullptr;
    std::shared_ptr<string> lowFreqStorageUnit_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<double> rate_ = nullptr;
    std::shared_ptr<double> recycleBinStorage_ = nullptr;
    std::shared_ptr<string> recycleBinStorageUnit_ = nullptr;
    std::shared_ptr<double> standardStorage_ = nullptr;
    std::shared_ptr<string> standardStorageUnit_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<double> totalStorage_ = nullptr;
    std::shared_ptr<string> totalStorageUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
