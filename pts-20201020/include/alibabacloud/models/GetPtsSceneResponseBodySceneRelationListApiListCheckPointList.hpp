// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENERELATIONLISTAPILISTCHECKPOINTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENERELATIONLISTAPILISTCHECKPOINTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneRelationListApiListCheckPointList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckPoint, checkPoint_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckPoint, checkPoint_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    GetPtsSceneResponseBodySceneRelationListApiListCheckPointList() = default ;
    GetPtsSceneResponseBodySceneRelationListApiListCheckPointList(const GetPtsSceneResponseBodySceneRelationListApiListCheckPointList &) = default ;
    GetPtsSceneResponseBodySceneRelationListApiListCheckPointList(GetPtsSceneResponseBodySceneRelationListApiListCheckPointList &&) = default ;
    GetPtsSceneResponseBodySceneRelationListApiListCheckPointList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneRelationListApiListCheckPointList() = default ;
    GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& operator=(const GetPtsSceneResponseBodySceneRelationListApiListCheckPointList &) = default ;
    GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& operator=(GetPtsSceneResponseBodySceneRelationListApiListCheckPointList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkPoint_ == nullptr
        && return this->checkType_ == nullptr && return this->expectValue_ == nullptr && return this->operator_ == nullptr; };
    // checkPoint Field Functions 
    bool hasCheckPoint() const { return this->checkPoint_ != nullptr;};
    void deleteCheckPoint() { this->checkPoint_ = nullptr;};
    inline string checkPoint() const { DARABONBA_PTR_GET_DEFAULT(checkPoint_, "") };
    inline GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& setCheckPoint(string checkPoint) { DARABONBA_PTR_SET_VALUE(checkPoint_, checkPoint) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // expectValue Field Functions 
    bool hasExpectValue() const { return this->expectValue_ != nullptr;};
    void deleteExpectValue() { this->expectValue_ = nullptr;};
    inline string expectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
    inline GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetPtsSceneResponseBodySceneRelationListApiListCheckPointList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    // The checked parameter.
    std::shared_ptr<string> checkPoint_ = nullptr;
    // The check type.
    std::shared_ptr<string> checkType_ = nullptr;
    // The expected value.
    std::shared_ptr<string> expectValue_ = nullptr;
    // The check operator.
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
