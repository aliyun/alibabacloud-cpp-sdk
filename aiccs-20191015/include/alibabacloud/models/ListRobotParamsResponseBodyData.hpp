// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROBOTPARAMSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROBOTPARAMSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListRobotParamsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRobotParamsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsEmpty, isEmpty_);
      DARABONBA_PTR_TO_JSON(ParamCode, paramCode_);
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRobotParamsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsEmpty, isEmpty_);
      DARABONBA_PTR_FROM_JSON(ParamCode, paramCode_);
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
    };
    ListRobotParamsResponseBodyData() = default ;
    ListRobotParamsResponseBodyData(const ListRobotParamsResponseBodyData &) = default ;
    ListRobotParamsResponseBodyData(ListRobotParamsResponseBodyData &&) = default ;
    ListRobotParamsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRobotParamsResponseBodyData() = default ;
    ListRobotParamsResponseBodyData& operator=(const ListRobotParamsResponseBodyData &) = default ;
    ListRobotParamsResponseBodyData& operator=(ListRobotParamsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isEmpty_ != nullptr
        && this->paramCode_ != nullptr && this->paramName_ != nullptr; };
    // isEmpty Field Functions 
    bool hasIsEmpty() const { return this->isEmpty_ != nullptr;};
    void deleteIsEmpty() { this->isEmpty_ = nullptr;};
    inline int32_t isEmpty() const { DARABONBA_PTR_GET_DEFAULT(isEmpty_, 0) };
    inline ListRobotParamsResponseBodyData& setIsEmpty(int32_t isEmpty) { DARABONBA_PTR_SET_VALUE(isEmpty_, isEmpty) };


    // paramCode Field Functions 
    bool hasParamCode() const { return this->paramCode_ != nullptr;};
    void deleteParamCode() { this->paramCode_ = nullptr;};
    inline string paramCode() const { DARABONBA_PTR_GET_DEFAULT(paramCode_, "") };
    inline ListRobotParamsResponseBodyData& setParamCode(string paramCode) { DARABONBA_PTR_SET_VALUE(paramCode_, paramCode) };


    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline ListRobotParamsResponseBodyData& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


  protected:
    std::shared_ptr<int32_t> isEmpty_ = nullptr;
    std::shared_ptr<string> paramCode_ = nullptr;
    std::shared_ptr<string> paramName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
