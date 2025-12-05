// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTLOADCONFIGAPILOADCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTLOADCONFIGAPILOADCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(RpsBegin, rpsBegin_);
      DARABONBA_PTR_TO_JSON(RpsLimit, rpsLimit_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(RpsBegin, rpsBegin_);
      DARABONBA_PTR_FROM_JSON(RpsLimit, rpsLimit_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList(const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList(GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList& operator=(GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rpsBegin_ == nullptr
        && return this->rpsLimit_ == nullptr; };
    // rpsBegin Field Functions 
    bool hasRpsBegin() const { return this->rpsBegin_ != nullptr;};
    void deleteRpsBegin() { this->rpsBegin_ = nullptr;};
    inline int32_t rpsBegin() const { DARABONBA_PTR_GET_DEFAULT(rpsBegin_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList& setRpsBegin(int32_t rpsBegin) { DARABONBA_PTR_SET_VALUE(rpsBegin_, rpsBegin) };


    // rpsLimit Field Functions 
    bool hasRpsLimit() const { return this->rpsLimit_ != nullptr;};
    void deleteRpsLimit() { this->rpsLimit_ = nullptr;};
    inline int32_t rpsLimit() const { DARABONBA_PTR_GET_DEFAULT(rpsLimit_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList& setRpsLimit(int32_t rpsLimit) { DARABONBA_PTR_SET_VALUE(rpsLimit_, rpsLimit) };


  protected:
    // The starting requests per second (RPS).
    std::shared_ptr<int32_t> rpsBegin_ = nullptr;
    // The maximum RPS.
    std::shared_ptr<int32_t> rpsLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
