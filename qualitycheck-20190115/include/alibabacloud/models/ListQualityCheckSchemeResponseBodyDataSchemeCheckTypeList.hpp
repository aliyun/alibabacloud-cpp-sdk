// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATASCHEMECHECKTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATASCHEMECHECKTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList() = default ;
    ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList(const ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList &) = default ;
    ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList(ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList &&) = default ;
    ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList() = default ;
    ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& operator=(const ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList &) = default ;
    ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& operator=(ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkName_ == nullptr
        && return this->checkType_ == nullptr && return this->enable_ == nullptr && return this->score_ == nullptr && return this->targetType_ == nullptr; };
    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string checkName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<string> checkName_ = nullptr;
    std::shared_ptr<int32_t> checkType_ = nullptr;
    std::shared_ptr<int32_t> enable_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<int32_t> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
