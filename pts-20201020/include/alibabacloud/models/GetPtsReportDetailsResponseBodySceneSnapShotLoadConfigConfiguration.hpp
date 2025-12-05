// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTLOADCONFIGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTLOADCONFIGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AllConcurrencyBegin, allConcurrencyBegin_);
      DARABONBA_PTR_TO_JSON(AllConcurrencyLimit, allConcurrencyLimit_);
      DARABONBA_PTR_TO_JSON(AllRpsBegin, allRpsBegin_);
      DARABONBA_PTR_TO_JSON(AllRpsLimit, allRpsLimit_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AllConcurrencyBegin, allConcurrencyBegin_);
      DARABONBA_PTR_FROM_JSON(AllConcurrencyLimit, allConcurrencyLimit_);
      DARABONBA_PTR_FROM_JSON(AllRpsBegin, allRpsBegin_);
      DARABONBA_PTR_FROM_JSON(AllRpsLimit, allRpsLimit_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration(const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration(GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& operator=(GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allConcurrencyBegin_ == nullptr
        && return this->allConcurrencyLimit_ == nullptr && return this->allRpsBegin_ == nullptr && return this->allRpsLimit_ == nullptr; };
    // allConcurrencyBegin Field Functions 
    bool hasAllConcurrencyBegin() const { return this->allConcurrencyBegin_ != nullptr;};
    void deleteAllConcurrencyBegin() { this->allConcurrencyBegin_ = nullptr;};
    inline int32_t allConcurrencyBegin() const { DARABONBA_PTR_GET_DEFAULT(allConcurrencyBegin_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& setAllConcurrencyBegin(int32_t allConcurrencyBegin) { DARABONBA_PTR_SET_VALUE(allConcurrencyBegin_, allConcurrencyBegin) };


    // allConcurrencyLimit Field Functions 
    bool hasAllConcurrencyLimit() const { return this->allConcurrencyLimit_ != nullptr;};
    void deleteAllConcurrencyLimit() { this->allConcurrencyLimit_ = nullptr;};
    inline int32_t allConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(allConcurrencyLimit_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& setAllConcurrencyLimit(int32_t allConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(allConcurrencyLimit_, allConcurrencyLimit) };


    // allRpsBegin Field Functions 
    bool hasAllRpsBegin() const { return this->allRpsBegin_ != nullptr;};
    void deleteAllRpsBegin() { this->allRpsBegin_ = nullptr;};
    inline int32_t allRpsBegin() const { DARABONBA_PTR_GET_DEFAULT(allRpsBegin_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& setAllRpsBegin(int32_t allRpsBegin) { DARABONBA_PTR_SET_VALUE(allRpsBegin_, allRpsBegin) };


    // allRpsLimit Field Functions 
    bool hasAllRpsLimit() const { return this->allRpsLimit_ != nullptr;};
    void deleteAllRpsLimit() { this->allRpsLimit_ = nullptr;};
    inline int32_t allRpsLimit() const { DARABONBA_PTR_GET_DEFAULT(allRpsLimit_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration& setAllRpsLimit(int32_t allRpsLimit) { DARABONBA_PTR_SET_VALUE(allRpsLimit_, allRpsLimit) };


  protected:
    // The starting number of concurrent virtual users in the scenario.
    std::shared_ptr<int32_t> allConcurrencyBegin_ = nullptr;
    // The maximum number of concurrent virtual users in the scenario.
    std::shared_ptr<int32_t> allConcurrencyLimit_ = nullptr;
    // The starting RPS in the scenario.
    std::shared_ptr<int32_t> allRpsBegin_ = nullptr;
    // The maximum RPS in the scenario.
    std::shared_ptr<int32_t> allRpsLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
