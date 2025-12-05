// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTGLOBALPARAMETERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTGLOBALPARAMETERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList& obj) { 
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList(const GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList(GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList& operator=(GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramName_ == nullptr
        && return this->paramValue_ == nullptr; };
    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string paramValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


  protected:
    // The name of the parameter.
    std::shared_ptr<string> paramName_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> paramValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
